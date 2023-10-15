#include "AntlrAstGenerator.h"
#include "ANTLRv4Lexer.h"
#include <cctype>
#include <stdio.h>
#include <unistd.h>
#include <cstdarg>

using namespace antlr4;

AntlrAstGenerator::NodeCtx* AntlrAstGenerator::NodeCtx::ctx = nullptr;
AntlrAstGenerator::NodeNameMap AntlrAstGenerator::NodeCtx::nodes;
AntlrAstGenerator::NodeDataMap AntlrAstGenerator::NodeCtx::node_data;
uint32_t AntlrAstGenerator::NodeCtx::num_nodes = 0;

class NoIndent {
public:
    NoIndent(int32_t& indent, int32_t set_indent = 0)
        : current(indent)
        , ref(indent)
    {
        indent = set_indent;
    }
    ~NoIndent()
    {
        ref = current;
    }
private:
    int32_t  current;
    int32_t& ref;
};

#define NO_INDENT NoIndent _indent(this->indent); (void)_indent
#define FORCE_INDENT(VALUE) NoIndent _indent(this->indent, VALUE); (void)_indent
#define CHECK_COLLECT \
NodeDataRef info = NodeCtx::getData(ctx);\
if(info->hasType())\
    return true;\
visitChildren(ctx);

#define UNUSED(NAME) \
std::any AntlrAstGenerator::visit ## NAME(ANTLRv4Parser::NAME##Context *ctx)\
{\
    (void)ctx;\
    return true;\
}

#define UNSUPPORTED(NAME, ERR) \
std::any AntlrAstGenerator::visit ## NAME(ANTLRv4Parser::NAME##Context *ctx)\
{\
    (void)ctx;\
    fprintf(stderr, ERR);\
    exit(1);\
    return true;\
}

#define PROPAGATE_TYPE(NAME) \
{\
NodeDataRef node_info = NodeCtx::getData(ctx->NAME()); \
if(!info->propagate(node_info)) \
    return false;\
;\
}

#define BEGIN_PASS_VISIT  uint32_t __pass_mask = 0
#define END_PASS_VISIT if(passes.hasUnhandled(__pass_mask)) \
                    return visitChildren(ctx); \
                 return true;
#define HANDLE_PASS(NAME) \
    __pass_mask |= static_cast<uint32_t>(VisitPass::NAME); \
    for(int __i = 0; hasPass(VisitPass::NAME) && __i < 1; __i++)

#define VISIT_CHILDREN \
    __pass_mask |= static_cast<uint32_t>(VisitPass::_FORCE_VISIT);

UNUSED(GrammarDecl)
UNUSED(GrammarType)
UNUSED(OptionsSpec)
UNUSED(Option)
UNUSED(OptionValue)
UNUSED(DelegateGrammar)
UNUSED(TokensSpec)
UNUSED(ChannelsSpec)
UNUSED(IdList)
UNUSED(Action_)
UNUSED(ActionScopeName)
UNUSED(ActionBlock)
UNUSED(ArgActionBlock)
UNUSED(ExceptionHandler)
UNUSED(FinallyClause)
UNUSED(RulePrequel)
UNUSED(RuleReturns)
UNUSED(ThrowsSpec)
UNUSED(LocalsSpec)
UNUSED(RuleAction)
UNUSED(RuleModifiers)
UNUSED(RuleModifier)
UNUSED(ElementOptions)
UNUSED(ElementOption)
UNUSED(ExceptionGroup)
UNUSED(PrequelConstruct)
UNUSED(ModeSpec)
UNUSED(Identifier)  // identifiers are references to either parser or lexer rules, they do not store information in the target grammar
UNUSED(EbnfSuffix)   // directly used in parent

UNSUPPORTED(DelegateGrammars, "imports are not supported\n")

static int utf8_first_char_len(const char *s, int len)
{
    int i;
    if(len <= 1) return len;
    for(i = 1; i < len; i++)
    {
        if((s[i] & 0xc0) != 0x80)
        {
            break;
        }
    }
    return i;
}

static int utf8_char_to_ucs4(const char *s, int len)
{
    switch(len)
    {
        case 0: return 0;
        case 1: return *s;
        default:
        {
            int mask = (1 << (8 - len)) - 1;                // first utf8 code point data mask e.g len = 2 => 00111111 for 110XXXXX
            int value = *s & mask;
            for (++s, --len; len != 0; s++, len--)
            {
                value <<= 6;
                value += (*s & 0x3F);
            }
            return value;
        }
    }
}

class DebugPrinter
{
    static void print_debug(const char* s)
    {
        fprintf(stderr, "%s", s);
    }

    static void print_debug(const char* s, int32_t len)
    {
        fwrite(s, len, 1, stderr);
    }

    static void print_debug(const std::string& s)
    {
        print_debug(s.data(), s.size());
    }

    static void print_text_debug(ParserRuleContext* ctx)
    {
        Token* start = ctx->start;
        Token* stop = ctx->stop;
        std::string s = start->getInputStream()->getText(misc::Interval(start->getStartIndex(), stop->getStopIndex()));
        print_debug(s);
    }
public:
    int32_t numindent = 4;
    int32_t indent = 0;
    ANTLRv4Parser* parser = nullptr;

    void inc_indent() { indent += numindent; }
    void dec_indent() { indent -= numindent; }

    void blockBegin()
    {
        inc_indent();
        newln();
    }

    void blockEnd()
    {
        dec_indent();
        newln();
    }

    void newln(bool only_indent = false)
    {
        if(!only_indent)
            print_debug("\n");
        for(int32_t i = 0; i < indent; i++)
            print_debug(" ");
    }

    void print(const std::string& s)
    {
        print_debug(s);
    }

    void print(const char* s)
    {
        print_debug(s);
    }

    void fprint(const char* format, ...)
    {
        va_list args;
        va_start(args, format);
        vfprintf(stderr, format, args);
        va_end (args);
    }

    void print(ParserRuleContext* ctx)
    {
        print_text_debug(ctx);
    }

    void printNodeClass(size_t idx)
    {
        print(parser->getRuleNames()[idx]);
    }
};

static DebugPrinter debug;

void AntlrAstGenerator::NodeData::find_fields(StateMap* state)
{
    uint32_t field_idx = 0;
    uint32_t origin_idx;
    for(const Field& field : types.fields)
    {
        origin_idx = 0;
        for(const FieldID& id : field.field_origin)
        {
            std::vector<uint32_t> states = state->getState(id.origin->ctx);
            for(uint32_t st : states)
            {
                FieldInfo info;
                info.field_idx = field_idx;
                info.origin_idx = origin_idx;
                info.owner = this;
                info.state = st != -1 ? st : 0xFFFFFFFE;
                if(id.target)
                {
                    if(!id.target->with_alternative())
                    {
                        id.target->fields.push_back(info);
                    }
                    else
                    {
                        for(auto & child : id.target->getClassChilden())
                        {
                            child->fields.push_back(info);
                        }
                    }
                }
            }

            origin_idx += 1;
        }
        field_idx += 1;
    }
}

std::string AntlrAstGenerator::NodeData::getClassName()
{
    std::string name = getName();
    if(utf8_first_char_len(name.data(), name.size()) == 1)
    {
        name.data()[0] = std::toupper(name.data()[0]);
    }
    return name;
}
void AntlrAstGenerator::NodeData::find_field_names()
{
    char tmp[64];
    uint32_t num_str = 0;
    uint32_t idx = 0;
    std::set<std::string> used_names;
    field_names.resize(types.fields.size(), "");
    for(const Field& field : types.fields)
    {
        switch(field.type)
        {
        case FieldType::Flag:
            break;
        case FieldType::RuleRef:
            if(field.field_origin.size() == 1)
            {
                NodeData* node = field.field_origin[0].target;
                std::string name = node->getName();
                if(field.is_collection)
                {
                    name += "s";
                }
                while(used_names.find(name) != used_names.end())
                    name += "1";

                used_names.insert(name);
                name += "_";
                field_names[idx] = name;
            }
            else
            {
                sprintf(tmp, "val%i", num_str);
                field_names[idx] = std::string(tmp);
                num_str += 1;
            }
            break;
        case FieldType::String:
            if(field.field_origin.size() == 1)
            {
                NodeData* owner = field.field_origin[0].origin;
                std::string name = owner->getRaw();
                while(used_names.find(name) != used_names.end())
                    name += "1";

                used_names.insert(name);
                name += "_";
                field_names[idx] = name;
            }
            else
            {
                sprintf(tmp, "str%i", num_str);
                field_names[idx] = std::string(tmp);
                num_str += 1;
            }
            break;
        default:
            break;
        }
        idx += 1;
    }
}

void AntlrAstGenerator::NodeData::try_merge()
{
    TypeInfo collections;
    TypeInfo refs;
    for(auto& field : types.fields)
    {
        if(field.isType(FieldType::RuleRef))
        {
            if(field.is_collection)
            {
                collections.fields.push_back(field);
            }
        }
    }

    if(collections.fields.size() != 0)
    {
        for(auto& field : types.fields)
        {
            if(field.isType(FieldType::RuleRef))
            {
                if(field.is_collection)
                    continue;
                if(!field.is_nullable)
                {
                    for(auto& col_field : collections.fields)
                    {
                        // TODO check for type match
                        col_field.copy_from(field);
                        break;
                    }
                    continue;
                }
            }

            refs.fields.push_back(field);
        }
        refs.fields.insert(std::end(refs.fields), std::begin(collections.fields), std::end(collections.fields));
        types.fields.swap(refs.fields);
    }

}

bool AntlrAstGenerator::NodeData::propagate(AntlrAstGenerator::NodeDataRef child)
{
    return propagate(child.get());
}

bool AntlrAstGenerator::NodeData::propagate(AntlrAstGenerator::NodeData* child)
{
    if(!child->hasType())
        return false;

    propagate(child->types);
    child->types.clear();
    return true;
}

void AntlrAstGenerator::NodeData::propagate(TypeInfo& child_types)
{
    auto& target_fields = types.fields;
    auto& child_fields = child_types.fields;

    if(child_types.paths > 1)
    {
        addFlag();
    }

    target_fields.insert(std::end(target_fields), std::begin(child_fields), std::end(child_fields));

    types.paths = 1;

    if(is_rule && !skip_rule)
        debug_print();
}

void AntlrAstGenerator::TypeInfo::clear()
{
    fields.clear();
    paths = -1;
}

AntlrAstGenerator::Field* AntlrAstGenerator::TypeInfo::findCompatible(Field& find)
{
    // combine flags if there is no data e.g. (FLAGA | FLAGB) | FLAGC
    if(find.isType(FieldType::Flag) &&
       fields.size() == 1 &&
       fields[0].isType(FieldType::Flag))
        return &fields[0];
    if(!find.isType(FieldType::Flag)) //  never merge flags
    {
        for(auto& target_field : fields)
        {



            if(target_field.type == find.type &&        // the FieldTypes match
               (!find.is_collection || target_field.is_collection) &&   // if the target is no collection then find must not be a collection
               target_field.is_not == find.is_not &&
               target_field.is_nullable == find.is_nullable)
            {
                return &target_field;
            }
        }
    }

    return nullptr;
}

bool AntlrAstGenerator::TypeInfo::add_needed(AntlrAstGenerator::NodeDataRef child)
{
    TypeInfo& child_types = child->types;
    // * if the child contains a single RuleRef then make the parent a superclass
    //   (with refcount == 1)
    NodeData* node_info = child->single_ruleRef();
    if(node_info)
        return false;

    TypeInfo combined;  // need merge AND fields later
    for(auto& field : child_types.fields)
    {
        Field* existing = findCompatible(field);
        if(existing)
        {
            existing->copy_from(field);
        }
        else
        {
            combined.fields.push_back(field);
        }
    }
    fields.insert(std::end(fields), std::begin(combined.fields), std::end(combined.fields));
    return true;
}

void AntlrAstGenerator::TypeInfo::add_all(AntlrAstGenerator::NodeDataRef child)
{
    auto& target_fields = fields;
    auto& child_fields = child->types.fields;
    // * if the child contains a single RuleRef then add the fields to the RuleRef
    //   and propagate the RuleRef
    // * if the child has multiple RuleRef/data and one RuleRef has refcount == 1
    //   then move the other data and RuleRefs into this Rule
    // * if there is a collection of RuleRefs then merge all mandatory RuleRefs of the same kind into the collection
    NodeData* node_info = child->single_ruleRef();
    if(node_info != nullptr)
    {
        for(auto& field : child_fields)
        {
            if(!field.isType(FieldType::RuleRef))
            {
                node_info->types.fields.push_back(field);
            }
            else
            {
                target_fields.push_back(field);
            }
        }
    }
    else
    {
        target_fields.insert(std::end(target_fields), std::begin(child_fields), std::end(child_fields));
    }
}

AntlrAstGenerator::NodeData* AntlrAstGenerator::NodeData::single_ruleRef()
{
    NodeData* node_info = nullptr;
    for(auto& field : types.fields)
    {
        if(field.isType(FieldType::RuleRef))
        {
            if(node_info != nullptr || field.field_origin.size() != 0 || field.is_collection || field.is_nullable)
            {
                node_info = nullptr;
                break;
            }
            node_info = field.field_origin[0].target;
        }
    }
    return node_info;
}

void AntlrAstGenerator::NodeData::addFlag()
{
    FieldID id;
    id.origin = this;
    id.target = nullptr;
    Field field;
    field.type = FieldType::Flag;
    field.field_origin.push_back(id);
    types.fields.push_back(field);
}

void AntlrAstGenerator::NodeData::addPath_RuleRef(NodeData *target)
{
    //debug.fprint("add rule: %s\n", target->getName().c_str());
    FieldID id;
    id.origin = this;
    id.target = target;
    Field field;
    field.type = FieldType::RuleRef;
    field.field_origin.push_back(id);
    types.fields.push_back(field);
    addPath();
}

void AntlrAstGenerator::NodeData::addPath_RuleRef(NodeData *target, TypeInfo& types)
{
    //debug.fprint("add rule: %s\n", target->getName().c_str());
    FieldID id;
    id.origin = this;
    id.target = target;
    Field field;
    field.type = FieldType::RuleRef;
    field.field_origin.push_back(id);
    types.fields.push_back(field);
}

void AntlrAstGenerator::NodeData::addPath_String(NodeData *target)
{
    //debug.fprint("add string: %s\n", target->getName().c_str());
    FieldID id;
    id.origin = this;
    id.target = target;
    Field field;
    field.type = FieldType::String;
    field.field_origin.push_back(id);
    types.fields.push_back(field);
    addPath();
}

void AntlrAstGenerator::NodeData::addPath()
{
    types.paths += 1;
}

bool AntlrAstGenerator::NodeData::canSkip()
{
    if(types.paths == 0)
        return false;
    uint32_t num = types.fields.size();
    return num == 0 || (types.fields.size() == 1 && types.fields[0].isType(FieldType::Flag));
}

void AntlrAstGenerator::Field::debug_print()
{
    debug.print("Field:");
    debug.blockBegin();
    if(is_collection)
    {
        debug.print("is_collection");
        debug.newln();
    }
    if(is_nullable)
    {
        debug.print("is_nullable");
        debug.newln();
    }
    if(is_not)
    {
        debug.print("is_not");
        debug.newln();
    }
    debug.print("type:");
    switch(type)
    {
    case FieldType::Unknown:
        debug.print("Unknown");
        break;
    case FieldType::RuleRef:
        debug.print("RuleRef");
        break;
    case FieldType::Flag:
        debug.print("Flag");
        break;
    case FieldType::String:
        debug.print("String");
        break;
    }
    //this->field_origin;
    debug.blockEnd();
}

void AntlrAstGenerator::Field::copy_from(Field &other)
{
    field_origin.insert(std::end(field_origin), std::begin(other.field_origin), std::end(other.field_origin));
}

void AntlrAstGenerator::TypeInfo::debug_print()
{
    debug.print("TypeInfo:");
    debug.blockBegin();
    debug.fprint("paths: %i", paths);
    debug.newln();
    uint32_t num_flags = 0;
    for(auto& field :  fields)
    {
        if(field.isType(FieldType::Flag))
            num_flags += 1;

        field.debug_print();
    }
    if(num_flags == 0)
    {
        debug.print("noflags");
        debug.newln();
    }
    debug.blockEnd();
}


void AntlrAstGenerator::NodeData::debug_print()
{
    debug.print("NodeData:");
    debug.blockBegin();
    if(ctx)
    {
        debug.print("kind: ");
        debug.printNodeClass(ctx->getRuleIndex());
        debug.newln();
    }
    debug.fprint("ref_count: %i", ref_count);
    debug.newln();
    if(is_op)
    {
        debug.print("is_op");
        debug.newln();
    }
    else
    if(is_rule)
    {
        debug.print("rule: ");
        debug.print(name);
        debug.newln();
    }
    if(has_alternative)
    {
        debug.print("has_alternative");
        debug.newln();
    }
    if(skip_rule)
    {
        debug.print("skip_rule");
        debug.newln();
    }
    types.debug_print();
    if(ctx)
    {
        debug.print("raw: ");
        debug.print(ctx);
        debug.newln();
    }
    debug.blockEnd();
}

bool StateMap::parse(std::string file)
{
    std::ifstream infile(file);

    std::string line;
    int state;
    int interval_a;
    int interval_b;

    while(std::getline(infile, line))
    {
        std::sscanf(line.c_str(), "%d,%d,%d", &state, &interval_a, &interval_b);
        if(interval_a != -1)
        {
            uint64_t key = (static_cast<uint64_t>(interval_a) << 32) | static_cast<uint64_t>(interval_b);
            if(map.find(key) == map.end())
                map[key] = std::vector<uint32_t>();
            map[key].push_back(state);
        }
    }
    return true;
}

std::vector<uint32_t>& StateMap::getState(ParserRuleContext *ctx)
{
    static std::vector<uint32_t> empty;
    int interval_a = ctx->start->getStartIndex();
    int interval_b = ctx->stop->getStopIndex();

    auto IT = map.find((static_cast<uint64_t>(interval_a) << 32) | static_cast<uint64_t>(interval_b));

    if(IT != map.end())
    {
        return IT->second;
    }
    if(ctx->parent)
        return getState(static_cast<ParserRuleContext*>(ctx->parent));
    return empty;
}

AntlrAstGenerator::AntlrAstGenerator(ANTLRv4Parser* parser, antlr4::ParserRuleContext* parser_root, antlr4::ParserRuleContext *lexer_root, StateMap* state, int32_t numindent)
    : numindent(numindent)
    , first_in_line(true)
    , indent(0)
    , indent_source(0)
    , indent_header(0)
    , passes()
    , out(nullptr)
    , source(nullptr)
    , header(nullptr)
    , state(state)

{
    LexerRuleFinder::getMap(map, parser_root, lexer_root);
    debug.parser = parser;
}

AntlrAstGenerator::~AntlrAstGenerator()
{
    fclose(source);
    fclose(header);
}


bool AntlrAstGenerator::openHeader(const char* file)
{
    header = fopen(file, "w+");
    return header != nullptr;
}

bool AntlrAstGenerator::openSource(const char* file)
{
    source = fopen(file, "w+");
    setSource();
    return source != nullptr;
}

void AntlrAstGenerator::fprint(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    vfprintf(out, format, args);
    va_end (args);
}

void AntlrAstGenerator::print(const char* str)
{
    fprintf(out, "%s", str);
    first_in_line = false;
}

void AntlrAstGenerator::print(const std::string& str)
{
    print(str.data(), str.size());
}

void AntlrAstGenerator::print(const char* str, int32_t len)
{
    fwrite(str, len, 1, out);
    first_in_line = false;
}

void AntlrAstGenerator::print_token(Token* token)
{
    std::string s = token->getText();
    print(s);
}

void AntlrAstGenerator::print_text(ParserRuleContext* ctx)
{
    Token* start = ctx->start;
    Token* stop = ctx->stop;
    std::string s = start->getInputStream()->getText(misc::Interval(start->getStartIndex(), stop->getStopIndex()));
    print(s);
}

std::string AntlrAstGenerator::toString(antlr4::ParserRuleContext* ctx)
{
    Token* start = ctx->start;
    Token* stop = ctx->stop;
    return start->getInputStream()->getText(misc::Interval(start->getStartIndex(), stop->getStopIndex()));
}

bool AntlrAstGenerator::isLiteral(antlr4::tree::TerminalNode* node)
{
    return map.find(node->getText()) != map.end();
}

void AntlrAstGenerator::print(tree::TerminalNode* token)
{
    std::string s = token->getText();
    print(s);
}

void AntlrAstGenerator::blockBegin(bool paren)
{
    if(paren)
        print(" {");
    inc_indent();
    newln();
}

void AntlrAstGenerator::blockEnd(bool paren)
{
    dec_indent();
    newln();
    if(paren)
        print("}");
}


void AntlrAstGenerator::setSource()
{
    if(out == source)
        indent_source = indent;
    else
    if(out == header)
        indent_header = indent;
    indent = indent_source;
    out = source;
}

void AntlrAstGenerator::setHeader()
{
    if(out == source)
        indent_source = indent;
    else
    if(out == header)
        indent_header = indent;
    indent = indent_header;
    out = header;
}

void AntlrAstGenerator::newln(bool only_indent)
{
    if(!only_indent)
        print("\n");
    for(int32_t i = 0; i < indent; i++)
        space();
    first_in_line = true;
}

void AntlrAstGenerator::space(bool only_when_not_first)
{
    if(!only_when_not_first || !first_in_line)
        print(" ");
}

std::any AntlrAstGenerator::visitGrammarSpec(ANTLRv4Parser::GrammarSpecContext *ctx)
{
    bool first_node = true;
    // run tree passes
    passes.addPass(VisitPass::COLLECT_RULES);
    visitChildren(ctx);
    passes.reset();
    passes.addPass(VisitPass::COUNT_REFS);
    visitChildren(ctx);
    passes.reset();
    passes.addPass(VisitPass::COLLECT_TYPES);
    while(!NodeCtx::getData(ctx->rules())->hasType())
        visitChildren(ctx);
    passes.reset();

    // begin print
    setHeader();
    print("#include \"AstBuilderBase.h\"");
    newln();
    print("class AstBuilder : public AstBuilderBase {");
    inc_indent();
    {
        NO_INDENT;
        newln();
        print("public:");
    }
    newln();
    print("AstBuilder();");
    newln();
    print("virtual ~AstBuilder();");
    newln();

    // print rule class type enum
    print("enum class NodeType  : int32_t");
    blockBegin();
    for(auto& IT : NodeCtx::getNodes())
    {
        NodeDataRef& node = IT.second;
        if(node->isRule() && !node->with_alternative())
        {
            print(node->getClassName());
            fprint(" = %u,", node->getID());
            newln();
        }
    }
    blockEnd();
    print(";");
    newln();

    print("class Node {");
    inc_indent();
    {
        FORCE_INDENT(numindent);
        newln();
        print("public:");
    }
    newln();
    print("Node(NodeType type) : type(type) {}");
    newln();

    // print method
    print("void print()");
    blockBegin();
    print("switch(type)");
    blockBegin();
    for(auto& IT : NodeCtx::getNodes())
    {
        NodeDataRef& node = IT.second;
        if(node->isRule() && !node->with_alternative())
        {
            print("case NodeType::");
            print(node->getClassName());
            print(":");
            inc_indent();
            newln();
            print("static_cast<");
            print(node->getClassName());
            print("*>(this)->print();");
            newln();
            print("break;");
            dec_indent();
            newln();
        }
    }
    blockEnd();
    blockEnd();
    newln();

    print("NodeType type;");
    blockEnd();
    print(";");
    newln();
    setSource();

    print("#include \"AstBuilder.h\"");
    newln();
    print("#include \"antlr4-runtime.h\"");
    newln();
    print("using namespace antlr4;");
    newln();
    print("AstBuilder::AstBuilder() {}");
    newln();
    print("AstBuilder::~AstBuilder() {}");
    newln();

    setHeader();

    // finish fields
    for(auto& IT : NodeCtx::getNodes())
    {
        NodeDataRef& node = IT.second;
        if(node->isRule())
        {
            node->find_field_names();
            node->find_fields(state);
        }
    }

    // print rule classes
    for(auto& IT : NodeCtx::getNodes())
    {
        NodeDataRef& node = IT.second;
        if(node->isRule())
        {
            printRuleNode(node->getName(), node, first_node);
            first_node = false;
        }
    }

    setHeader();

    {
        NO_INDENT;
        newln();
        print("private:");
    }
    newln();
    blockEnd();
    print(";");
    return true;
}

void AntlrAstGenerator::addRuleNode(std::string& name, NodeDataRef node)
{
    node->setRule();
    NodeCtx::addLink(name, node);
}

void AntlrAstGenerator::printRuleName(NodeData* node)
{
    if(node->isRule())
    {
        print(node->getName());
        //print(parser->getRuleNames()[node->getRuleIndex()]);
    }
    else
    {
    }
}

void AntlrAstGenerator::printField_Stores(NodeDataRef node)
{
    auto& fields = node->getFields();
    std::sort(fields.begin(), fields.end(), [](const FieldInfo& lhs, const FieldInfo& rhs)
    {
       return lhs.state < rhs.state;
    });
    auto IT = fields.begin();
    auto END = fields.end();

    while(IT != END)
    {
        const FieldInfo& info = *IT;
        const Field& field = info.owner->getTypes().fields[info.field_idx];
        const FieldID& fieldID = field.field_origin[info.origin_idx];
        if(field.type == FieldType::String)
        {
            newln();
            print("if(!isEmpty(ctx->");
            print(fieldID.origin->getRaw());
            print("()))");
            blockBegin();
            print("assign_text(");
            print("node->");
            print(info.owner->get_field_name(info.field_idx));
            if(field.is_collection)
            {
                print(", ctx->");
                print(fieldID.origin->getRaw());
                print("());");
            }
            else
            {
                print(", ctx->");
                print(fieldID.origin->getRaw());
                print("());");
            }
            blockEnd();
        }
        IT++;
    }

    IT = fields.begin();
    END = fields.end();

    newln();
    print("switch(getState(ctx))");
    blockBegin();
    while(IT != END)
    {
        uint32_t state = IT->state;
        fprint("case %u:", state);
        inc_indent();
        do
        {
            const FieldInfo& info = *IT;
            const Field& field = info.owner->getTypes().fields[info.field_idx];
            if(field.type != FieldType::String)
            {
                newln();
                switch(field.type)
                {
                case FieldType::RuleRef:
                    break;
                default:
                    break;
                }
                std::string owner_name = info.owner->getClassName();
                fprint("reinterpret_cast<%s*>(topNode())->", owner_name.c_str());
                print(info.owner->get_field_name(info.field_idx));
                switch(field.type)
                {
                case FieldType::RuleRef:
                    if(field.is_collection)
                    {
                        print(".push_back(std::move(node));");
                    }
                    else
                    {
                        print(" = std::move(node);");
                    }
                    break;
                default:
                    break;
                }
            }

            //print(field.owner->types.fields[field.field_idx]);

            IT++;
        }
        while(IT != END && IT->state == state);
        newln();
        print("break;");
        dec_indent();
        newln();
    }
    print("default:");
    inc_indent();
    newln();
    print("break;");
    dec_indent();
    blockEnd();
}

void AntlrAstGenerator::print_PrintFn(NodeDataRef node)
{
    newln();
    print("void print()");
    blockBegin();
    uint32_t idx = 0;
    bool first = true;
    for(const Field& field : node->getTypes().fields)
    {
        switch(field.type)
        {
        case FieldType::Flag:
            break;
        case FieldType::RuleRef:
            if(!first)
            {
                newln();
            }
            else
            {
                first = false;
            }
            if(field.is_collection)
            {
                print("for(auto& item : ");
                print(node->get_field_name(idx));
                print(")");
                blockBegin();
                print("item->print();");
                blockEnd();
            }
            else
            {
                print("if(");
                print(node->get_field_name(idx));
                print(" != nullptr)");
                blockBegin();
                print(node->get_field_name(idx));
                print("->print();");
                blockEnd();
            }
            break;
        case FieldType::String:
            if(!first)
            {
                newln();
            }
            else
            {
                first = false;
            }
            if(field.is_collection)
            {
                print("for(std::string& str : ");
                print(node->get_field_name(idx));
                print(")");
                blockBegin();
                print("if(str != \"\") std::cout << str << std::endl;");
                blockEnd();
            }
            else
            {
                print("if(");
                print(node->get_field_name(idx));
                print(" != \"\") std::cout << ");
                print(node->get_field_name(idx));
                print(" << std::endl;");
            }
            break;
        default:
            break;
        }
        idx += 1;
    }
    blockEnd();
}

void AntlrAstGenerator::printField_Decls(NodeDataRef node)
{
    uint32_t idx = 0;
    for(const Field& field : node->getTypes().fields)
    {
        switch(field.type)
        {
        case FieldType::Flag:
            break;
        case FieldType::RuleRef:
            newln();
            if(field.is_collection)
            {
                print("std::vector<std::unique_ptr<Node>> ");
            }
            else
            {
                print("std::unique_ptr<Node> ");
            }
            if(field.field_origin.size() == 1)
            {
                print(node->get_field_name(idx));
                print(";");
            }
            else
            {
                uint32_t num = 0;
                print(node->get_field_name(idx));
                print(";");
                fprint(" // ");

                for(auto & origin : field.field_origin)
                {
                    if(num != 0)
                    {
                        fprint(", ");
                    }
                    printRuleName(origin.target);

                    num += 1;
                }
            }
            break;
        case FieldType::String:
            newln();
            if(field.is_collection)
            {
                print("std::vector<std::string> ");
            }
            else
            {
                print("std::string ");
            }
            if(field.field_origin.size() == 1)
            {
                print(node->get_field_name(idx));
                print(";");
            }
            else
            {
                uint32_t num = 0;
                print(node->get_field_name(idx));
                print(";");
                fprint(" // ");

                for(auto & origin : field.field_origin)
                {
                    if(num != 0)
                    {
                        fprint(", ");
                    }
                    printRuleName(origin.target);

                    num += 1;
                }
            }
            break;
        default:
            break;
        }
        idx += 1;
    }
}

void AntlrAstGenerator::printRuleNode(std::string& name, NodeDataRef node, bool root)
{
    if(node->need_rule())
    {
        if(utf8_first_char_len(name.data(), name.size()) == 1)
        {
            name.data()[0] = std::toupper(name.data()[0]);
        }

        if(node->no_skip())
        {
            setHeader();
            newln();
            print("class ");
            print(name);
            print(" : public Node");
            inc_indent();
            {
                FORCE_INDENT(numindent);
                newln();
                print("{");
                newln();
                print("public:");
            }
            newln();
            print(name);
            print("() : Node(NodeType::");
            print(name);
            print(") {}");
            print_PrintFn(node);
            printField_Decls(node);
            {
                FORCE_INDENT(numindent);
                newln();
                print("private:");
            }
            blockEnd();
            print(";");
            newln();
            setSource();
        }

        newln();
        print("std::any AstBuilder::visit");
        print(name);
        print("(Swift5Parser::");
        print(name);
        print("Context * ctx)");
        blockBegin();
        print("std::unique_ptr<");
        print(name);
        print("> node(new ");
        print(name);
        print("());");
        newln();
        print("pushNode(node.get());");
        newln();
        print("visitChildren(ctx);");
        newln();
        print("popNode();");
        printField_Stores(node);
        newln();
        if(!root)
        {
            print("return true;");
        }
        else
        {
            print(name);
            print("* ret = node.get();");
            newln();
            print("node.release();");
            newln();
            print("return ret;");
        }
        blockEnd();
        newln();
        setHeader();
        newln();
        print("virtual std::any visit");
        print(name);
        print("(Swift5Parser::");
        print(name);
        print("Context * ctx) override;");
        newln();
        setSource();
    }
}

std::any AntlrAstGenerator::visitRules(ANTLRv4Parser::RulesContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;

        for(auto & rule : ctx->ruleSpec())
        {
            NodeDataRef node_info = NodeCtx::getData(rule);
            if(!node_info->hasType())
                return false;
        }

        info->addPath();
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitRuleSpec(ANTLRv4Parser::RuleSpecContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;

        NodeDataRef node_info = NodeCtx::getData(ctx->parserRuleSpec());
        if(!node_info->hasType())
            return false;

        info->addPath();
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitParserRuleSpec(ANTLRv4Parser::ParserRuleSpecContext *ctx)
{
    std::string name = ctx->RULE_REF()->getText();
    NodeDataRef node = NodeCtx::getData(ctx);
    NodeCtx nctx(node);

    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_RULES)
    {
        addRuleNode(name, node);
        VISIT_CHILDREN;
    }

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;
        NodeDataRef node_info = NodeCtx::getData(ctx->ruleBlock());
        if(!node_info->hasType())
            return false;

        node_info->try_merge();
        info->propagate(node_info);

    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitRuleBlock(ANTLRv4Parser::RuleBlockContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;

        PROPAGATE_TYPE(ruleAltList);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitRuleAltList(ANTLRv4Parser::RuleAltListContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        // RuleAltList connects elements with OR => possibly multiple elements depending on types
        // possibly with label
        CHECK_COLLECT;

        TypeInfo combined;
        for(auto & lbl : ctx->labeledAlt())
        {
            NodeDataRef node_info = NodeCtx::getData(lbl);
            if(!node_info->hasType())
                return false;
            if(!node_info->isRule())
            {
                if(combined.add_needed(node_info))
                    // add a path for each alternative
                    combined.paths += 1;
            }
            else
            {
                NodeCtx nctx(node_info);
                nctx.getParentData()->getClassChilden().push_back(node_info.get());
                //node_info->addPath_RuleRef(node_info.get(), combined);
            }
        }
        info->propagate(combined);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitLabeledAlt(ANTLRv4Parser::LabeledAltContext *ctx)
{
    BEGIN_PASS_VISIT;

    NodeDataRef node_info = NodeCtx::getData(ctx);
    std::string name;
    if(ctx->identifier())
        name = toString(ctx->identifier());

    if(ctx->identifier())
    {
        NodeCtx nctx(node_info);
        HANDLE_PASS(COLLECT_RULES)
        {
            addRuleNode(name, node_info);
            nctx.getParentData()->set_alternative();
            VISIT_CHILDREN;
        }

        HANDLE_PASS(COUNT_REFS)
        {
            node_info->addCount();
            VISIT_CHILDREN;
        }
    }

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;
        // if identifier is not null, this behaves like an "inline" ruleref
        if(ctx->alternative())
            PROPAGATE_TYPE(alternative);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitAltList(ANTLRv4Parser::AltListContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        // AltList connects elements with OR => possibly multiple elements depending on types
        CHECK_COLLECT;

        TypeInfo combined;
        for(auto & alt : ctx->alternative())
        {
            NodeDataRef node_info = NodeCtx::getData(alt);
            if(!node_info->hasType())
                return false;
            combined.add_needed(node_info);
            // add a path for each alternative
            combined.paths += 1;
        }
        info->propagate(combined);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitAlternative(ANTLRv4Parser::AlternativeContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        // an alternative can have multiple elements
        CHECK_COLLECT;

        TypeInfo combined;
        for(auto & el : ctx->element())
        {
            NodeDataRef node_info = NodeCtx::getData(el);
            if(!node_info->hasType())
                return false;
            // propagate as is, since we need all at the same time
            combined.add_all(node_info);
        }
        // add a single path
        combined.paths = 1;

        info->propagate(combined);
    }

    END_PASS_VISIT;
}


void AntlrAstGenerator::AddEbnfSuffix(NodeDataRef node, ANTLRv4Parser::EbnfSuffixContext *ctx)
{
    // is_nullable         ? : one or none
    // is_collection       * : zero or many , + : at least one

    for(auto& field : node->getTypes().fields)
    {
        int32_t num_question = ctx->QUESTION().size();
        if(ctx->STAR())
        {
            field.is_nullable = true;
            field.is_collection = true;
        }

        if(ctx->PLUS())
        {
            field.is_collection = true;
        }

        if(num_question != 0)
        {
            field.is_nullable = true;
        }

        if(num_question > 1)
        {
            field.ungreedy = true;
        }
    }
}


std::any AntlrAstGenerator::visitElement(ANTLRv4Parser::ElementContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;

        if(ctx->labeledElement())
        {
            PROPAGATE_TYPE(labeledElement);
            if(ctx->ebnfSuffix())
                AddEbnfSuffix(info, ctx->ebnfSuffix());
        }
        else
        if(ctx->atom())
        {
            PROPAGATE_TYPE(atom);
            if(ctx->ebnfSuffix())
                AddEbnfSuffix(info, ctx->ebnfSuffix());
        }
        else
        if(ctx->ebnf())
        {
            PROPAGATE_TYPE(ebnf);
        }
        else
        {
            info->addPath();
        }
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitLabeledElement(ANTLRv4Parser::LabeledElementContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;
        if(ctx->atom())
        {
            PROPAGATE_TYPE(atom);
        }
        else
        if(ctx->block())
        {
            PROPAGATE_TYPE(block);
        }
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitEbnf(ANTLRv4Parser::EbnfContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;
        PROPAGATE_TYPE(block);
        if(ctx->blockSuffix())
            AddEbnfSuffix(info, ctx->blockSuffix()->ebnfSuffix());
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitBlockSuffix(ANTLRv4Parser::BlockSuffixContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;

        info->addPath();
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitAtom(ANTLRv4Parser::AtomContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        // single item
        CHECK_COLLECT;

        if(ctx->terminal())
            PROPAGATE_TYPE(terminal);

        if(ctx->ruleref())
            PROPAGATE_TYPE(ruleref);

        if(ctx->notSet())
            PROPAGATE_TYPE(notSet);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitNotSet(ANTLRv4Parser::NotSetContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        // negation of a simgle item from setElement or blockSet
        CHECK_COLLECT;

        if(ctx->setElement())
            PROPAGATE_TYPE(setElement);

        if(ctx->blockSet())
            PROPAGATE_TYPE(blockSet);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitBlockSet(ANTLRv4Parser::BlockSetContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        // single item based on element alternatives
        CHECK_COLLECT;
        //TypeMask types;
        for(auto & el : ctx->setElement())
        {
            NodeDataRef node_info = NodeCtx::getData(el);
            if(!node_info->hasType())
                return false;
            //node_info->getType(types);
        }
        // TODO fixme
        info->addPath();
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitSetElement(ANTLRv4Parser::SetElementContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;
        //if(ctx->TOKEN_REF())
        //    info->setType(PropagateType::STATIC_STRING);
        //if(ctx->STRING_LITERAL())
        //    info->setType(PropagateType::DYN_STRING);
        //if(ctx->characterRange())
        //    info->setType(PropagateType::DYN_STRING);
        //if(ctx->LEXER_CHAR_SET())
        //    info->setType(PropagateType::DYN_STRING);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitBlock(ANTLRv4Parser::BlockContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;

        if(ctx->altList())
            PROPAGATE_TYPE(altList);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitRuleref(ANTLRv4Parser::RulerefContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;
        std::string name = ctx->RULE_REF()->getText();
        NodeData* node = NodeCtx::getData(name);

        info->addPath_RuleRef(node);
        /*
        if(!node->canSkip())
        {
            info->addPath_RuleRef(node);
        }
        else
        {
            // skip node if possible
            node->setSkip();
            info->propagate(node);
        }
        */
    }

    HANDLE_PASS(COUNT_REFS)
    {
        std::string name = ctx->RULE_REF()->getText();
        NodeData* node = NodeCtx::getData(name);
        node->addCount();
    }

    return true;
}

std::any AntlrAstGenerator::visitCharacterRange(ANTLRv4Parser::CharacterRangeContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;
        NodeCtx nctx(info);
        info->addPath_String(nctx.getParentData());
        //debug.fprint("char range STR\n");
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitTerminal(ANTLRv4Parser::TerminalContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        CHECK_COLLECT;
        // Terminals are either literal strings or references to lexer rules.
        // The lexer rule can match either static or dynamic strings.
        if(ctx->TOKEN_REF())
        {
            if(isLiteral(ctx->TOKEN_REF()))
            {
                info->addPath();
            }
            else
            {
                NodeCtx nctx(info);
                //debug.fprint("string terminal STR %s for %s\n", ctx->getText().c_str(), nctx.getParentData()->getRaw().c_str());
                /* dynamic strings from lexer rules are added here => no need to go through  */
                info->addPath_String(nctx.getParentData());  // TODO get the parent rule as target
            }
        }
        else
        {
            if(ctx->STRING_LITERAL())
                info->addPath();
        }
    }

    return true;
}
