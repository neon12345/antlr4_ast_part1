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

class NoIndent {
public:
    NoIndent(int32_t& indent)
        : current(indent)
        , ref(indent)
    {
        indent = 0;
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
UNUSED(Identifier)  // identifiers are references to either parser or lexer rules, the do not store information in the target grammar
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
    void dev_indent() { indent -= numindent; }

    void blockBegin()
    {
        inc_indent();
        newln();
    }

    void blockEnd()
    {
        dev_indent();
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
        print();
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
               (target_field.is_collection != find.is_collection || find.is_collection == false) &&      // cannot merge two collections => only one or none can be collection
               target_field.is_not == find.is_not &&
               target_field.is_nullable == find.is_nullable)
            {
                return &target_field;
            }
        }
    }

    return nullptr;
}

void AntlrAstGenerator::TypeInfo::add_needed(AntlrAstGenerator::NodeDataRef child)
{
    TypeInfo& child_types = child->types;
    for(auto& field : child_types.fields)
    {
        Field* existing = findCompatible(field);
        if(existing)
        {
            existing->copy_from(field);
        }
        else
        {
            fields.push_back(field);
        }
    }
}

void AntlrAstGenerator::TypeInfo::add_all(AntlrAstGenerator::NodeDataRef child)
{
    auto& target_fields = fields;
    auto& child_fields = child->types.fields;
    target_fields.insert(std::end(target_fields), std::begin(child_fields), std::end(child_fields));
}

void AntlrAstGenerator::NodeData::addFlag()
{
    FieldID id;
    id.owner = this;
    id.idx = num_fields;
    num_fields += 1;
    Field field;
    field.type = FieldType::Flag;
    field.field_origin.push_back(id);
    types.fields.push_back(field);
}

void AntlrAstGenerator::NodeData::addPath_RuleRef(NodeData *target)
{
    FieldID id;
    id.owner = this;
    id.idx = num_fields;
    num_fields += 1;
    Field field;
    field.type = FieldType::RuleRef;
    field.field_origin.push_back(id);
    field.rule_refs.push_back(target);
    types.fields.push_back(field);
    addPath();
}

void AntlrAstGenerator::NodeData::addPath_RuleRefFiled(NodeData *target, Field& field)
{
    FieldID id;
    id.owner = this;
    id.idx = num_fields;
    num_fields += 1;
    field.type = FieldType::RuleRef;
    field.field_origin.push_back(id);
    field.rule_refs.push_back(target);
    types.fields.push_back(field);
    addPath();
}

void AntlrAstGenerator::NodeData::addPath_String()
{
    FieldID id;
    id.owner = this;
    id.idx = num_fields;
    num_fields += 1;
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
    return ref_count == 1;
}

void AntlrAstGenerator::Field::print()
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
    this->rule_refs;
    this->field_origin;
    debug.blockEnd();
}

void AntlrAstGenerator::Field::copy_from(Field &other)
{
    rule_refs.insert(std::end(rule_refs), std::begin(other.rule_refs), std::end(other.rule_refs));
    field_origin.insert(std::end(field_origin), std::begin(other.field_origin), std::end(other.field_origin));
}

void AntlrAstGenerator::TypeInfo::print()
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

        field.print();
    }
    if(num_flags == 0)
    {
        debug.print("noflags");
        debug.newln();
    }
    debug.blockEnd();
}


void AntlrAstGenerator::NodeData::print()
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
    types.print();
    if(ctx)
    {
        debug.print("raw: ");
        debug.print(ctx);
        debug.newln();
    }
    debug.blockEnd();
}

AntlrAstGenerator::AntlrAstGenerator(ANTLRv4Parser* parser, antlr4::ParserRuleContext* parser_root, antlr4::ParserRuleContext *lexer_root, int32_t numindent)
    : numindent(numindent)
    , first_in_line(true)
    , indent(0)
    , indent_source(0)
    , indent_header(0)
    , passes()
    , out(nullptr)
    , source(nullptr)
    , header(nullptr)

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

void AntlrAstGenerator::print(const char* str)
{
    fprintf(out, "%s", str);
    first_in_line = false;
}

void AntlrAstGenerator::print(std::string& str)
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
    dev_indent();
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
    passes.addPass(VisitPass::CREATE_NODES);
    visitChildren(ctx);

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

void AntlrAstGenerator::printRuleNode(std::string& name, NodeDataRef node)
{
    if(node->need_rule())
    {
        if(utf8_first_char_len(name.data(), name.size()) == 1)
        {
            name.data()[0] = std::toupper(name.data()[0]);
        }

        newln();
        print("std::any AstBuilder::visit");
        print(name);
        print("(Swift5Parser::");
        print(name);
        print("Context * ctx)");
        blockBegin();
        print("pushNode(ctx);");
        newln();
        print("visitChildren(ctx);");
        newln();
        print("return true;");
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
        info->propagate(node_info);
    }

    HANDLE_PASS(CREATE_NODES)
    {
        printRuleNode(name, node);
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
        CHECK_COLLECT;

        TypeInfo combined;
        for(auto & lbl : ctx->labeledAlt())
        {
            NodeDataRef node_info = NodeCtx::getData(lbl);
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

std::any AntlrAstGenerator::visitLabeledAlt(ANTLRv4Parser::LabeledAltContext *ctx)
{
    BEGIN_PASS_VISIT;

    NodeDataRef node_info = NodeCtx::getData(ctx);
    std::string name;
    if(ctx->identifier())
        name = toString(ctx->identifier());

    if(ctx->identifier())
    {
        HANDLE_PASS(COLLECT_RULES)
        {
            NodeCtx nctx(node_info);
            addRuleNode(name, node_info);
            nctx.getParentData()->set_alternative();
            VISIT_CHILDREN;
        }

        HANDLE_PASS(COUNT_REFS)
        {
            NodeCtx nctx(node_info);
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

    HANDLE_PASS(CREATE_NODES)
    {
        printRuleNode(name, node_info);
    }

    END_PASS_VISIT;
}

std::any AntlrAstGenerator::visitAltList(ANTLRv4Parser::AltListContext *ctx)
{
    BEGIN_PASS_VISIT;

    HANDLE_PASS(COLLECT_TYPES)
    {
        // can have multiple items including symbols
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
        info->addPath_String();
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
                info->addPath();
            else
                info->addPath_String();
        }
        else
        {
            if(ctx->STRING_LITERAL())
                info->addPath();
        }
    }

    return true;
}
