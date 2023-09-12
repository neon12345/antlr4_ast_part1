#ifndef ANTLR_AST_GENERATOR_H
#define ANTLR_AST_GENERATOR_H

#include "ANTLRv4ParserBaseVisitor.h"
#include <vector>
#include <map>
#include <stdint.h>
#include <stdio.h>

class ANTLRv4Lexer;
class LexerRuleFinder : public ANTLRv4ParserBaseVisitor
{
public:
    static bool getMap(std::unordered_map<std::string, std::string>& map, antlr4::ParserRuleContext* parser_root, antlr4::ParserRuleContext* lexer_root)
    {
        LexerRuleFinder finder(map);
        finder.visit(parser_root);
        finder.visit(lexer_root);

        return true;
    }
private:
    LexerRuleFinder(std::unordered_map<std::string, std::string>& map)
        : map(map)
        , is_dynamic(false)
    {

    }

    std::any visitLexerRuleSpec(ANTLRv4Parser::LexerRuleSpecContext* ctx) override
    {
        using namespace antlr4;

        is_dynamic = false;
        visitChildren(ctx);

        if(!is_dynamic)
        {
            Token* start = ctx->lexerRuleBlock()->start;
            Token* stop = ctx->lexerRuleBlock()->stop;
            std::string key = ctx->TOKEN_REF()->getText();
            std::string value = start->getInputStream()->getText(misc::Interval(start->getStartIndex(), stop->getStopIndex()));

            map.insert(std::make_pair(key, value));
        }

        return true;
    }

    std::any visitLexerAtom(ANTLRv4Parser::LexerAtomContext *ctx) override
    {
        if(ctx->LEXER_CHAR_SET())
        {
            is_dynamic = true;
            return true;
        }
        return visitChildren(ctx);
    }

    std::any visitLexerAltList(ANTLRv4Parser::LexerAltListContext *ctx) override
    {
        if(ctx->lexerAlt().size() != 1)
        {
            is_dynamic = true;
            return true;
        }
        return visitChildren(ctx);
    }

    std::any visitEbnfSuffix(ANTLRv4Parser::EbnfSuffixContext *ctx) override
    {
        (void)ctx;
        is_dynamic = true;
        return true;
    }

    std::any visitNotSet(ANTLRv4Parser::NotSetContext *ctx) override
    {
        (void)ctx;
        is_dynamic = true;
        return true;
    }

    std::any visitCharacterRange(ANTLRv4Parser::CharacterRangeContext *ctx) override
    {
        (void)ctx;
        is_dynamic = true;
        return true;
    }

    std::any visitTerminal(ANTLRv4Parser::TerminalContext *ctx) override
    {
        if(ctx->TOKEN_REF())
            is_dynamic = true;
        return true;
    }

    std::unordered_map<std::string, std::string>& map;
    bool                                          is_dynamic;
};


class AntlrAstGenerator : public ANTLRv4ParserBaseVisitor
{

    class NodeCtx;
    class NodeData;
    typedef std::unique_ptr<NodeData>& NodeDataRef;
    typedef std::map<std::string, NodeData*> NodeNameMap;
    typedef std::map<antlr4::ParserRuleContext*, std::unique_ptr<NodeData>> NodeDataMap;

    enum class FieldType : int32_t
    {
        Unknown         = 0,
        String          = 1,
        RuleRef         = 2,
        Flag            = 3,
    };

    class FieldID
    {
    public:
        NodeData* owner = nullptr;
        int32_t   idx   = -1;
    };

    class Field
    {
    public:
        void print();
        bool isType(FieldType ty) { return type == ty; }
        void setType(FieldType ty) { type = ty; }
        void copy_from(Field& other);
        std::vector<NodeData*> rule_refs;                   // the rule nodes referenced by this type field
        std::vector<FieldID> field_origin;                  // a reference to the origin node(s) of the field
        FieldType type          = FieldType::Unknown;
        bool is_collection      = false;
        bool is_nullable        = false;
        bool is_not             = false;
        bool ungreedy           = false;
    };

    class TypeInfo
    {
    public:
        void print();
        void clear();
        void add_needed(NodeDataRef child);
        void add_all(NodeDataRef child);
        Field* findCompatible(Field& field);
        int32_t paths   = 0;
        std::vector<Field> fields;
    };

    class NodeData
    {
        friend class TypeInfo;
        friend class NodeCtx;
    public:
        bool hasType() { return types.paths != 0; }
        void addCount(int32_t step = 1) { ref_count += step; }

        bool need_rule() { return !has_alternative; }
        void setRule() { is_rule = true; }

        bool propagate(NodeDataRef child);
        bool propagate(NodeData* child);
        void propagate(TypeInfo& child_types);
        void addPath_RuleRef(NodeData* target);
        void addPath_RuleRefFiled(NodeData *target, Field& field);
        void addPath_String();
        void addPath();
        void addFlag();
        void set_alternative() { has_alternative = true; }
        bool canSkip();
        void setSkip() { skip_rule = true; }

        TypeInfo& getTypes() { return types; }

        void print();
    private:
        std::string name;
        TypeInfo types;
        antlr4::ParserRuleContext* ctx = nullptr;
        int32_t ref_count = 0;
        int32_t num_fields = 0;
        bool is_op = false;
        bool is_rule = false;
        bool has_alternative = false;
        bool skip_rule = false;
    };

    enum class VisitPassIndex : int32_t
    {
        COLLECT_RULES           = 0,
        COLLECT_TYPES           = 1,
        COUNT_REFS              = 2,
        CREATE_NODES            = 3,
        CREATE_SWITCH           = 4
    };

    enum class VisitPass : uint32_t
    {
#define add(NAME) NAME = 1U << static_cast<int32_t>(VisitPassIndex::NAME)
        add(COLLECT_RULES),
        add(COLLECT_TYPES),
        add(COUNT_REFS),
        add(CREATE_NODES),
        add(CREATE_SWITCH),
#undef add
        _FORCE_VISIT = 1U << 31
    };

    class VisitPassSet
    {
    public:
        VisitPassSet(uint32_t items = static_cast<uint32_t>(VisitPass::_FORCE_VISIT)) : items(items) {}
        void reset() { items = static_cast<uint32_t>(VisitPass::_FORCE_VISIT); }
        void addPass(VisitPass pass) { items |= static_cast<uint32_t>(pass); }
        bool hasPass(VisitPass pass) { return items & static_cast<uint32_t>(pass); }
        bool hasUnhandled(VisitPassSet other) { return (items & ~other.items) != static_cast<uint32_t>(VisitPass::_FORCE_VISIT); }
    private:
        uint32_t items;
    };

    class NodeCtx
    {
    public:
        NodeCtx(NodeDataRef node)
            : node(node.get())
            , parent(ctx)
        {
            ctx = this;
        }

        ~NodeCtx()
        {
            ctx = parent;
        }

        static NodeCtx* getCurrent()
        {
            return ctx;
        }

        static NodeData* getData(std::string& name)
        {
            auto IT = nodes.find(name);
            if(IT != nodes.end())
            {
                return IT->second;
            }
            return nullptr;
        }

        static void addLink(std::string& name, NodeDataRef data)
        {
            data->name = name;
            nodes[name] = data.get();
        }

        static NodeDataRef getData(antlr4::ParserRuleContext* ctx)
        {
            auto IT = node_data.find(ctx);
            if(IT != node_data.end())
            {
                return IT->second;
            }
            else
            {
                std::unique_ptr<NodeData> info(new NodeData());
                info->ctx = ctx;
                return node_data[ctx] = std::move(info);
            }
        }

        NodeData* getParentData()
        {
            return parent->node;
        }
    private:
        NodeData*       node;
        NodeCtx*        parent;
        static NodeCtx* ctx;
        static NodeNameMap nodes;
        static NodeDataMap node_data;
    };

public:
    AntlrAstGenerator(ANTLRv4Parser* parser, antlr4::ParserRuleContext* parser_root, antlr4::ParserRuleContext* lexer_root, int32_t numindent = 4);
    virtual ~AntlrAstGenerator();

    virtual std::any visitGrammarSpec(ANTLRv4Parser::GrammarSpecContext *ctx) override;

    virtual std::any visitGrammarDecl(ANTLRv4Parser::GrammarDeclContext *ctx) override;

    virtual std::any visitGrammarType(ANTLRv4Parser::GrammarTypeContext *ctx) override;

    virtual std::any visitPrequelConstruct(ANTLRv4Parser::PrequelConstructContext *ctx) override;

    virtual std::any visitOptionsSpec(ANTLRv4Parser::OptionsSpecContext *ctx) override;

    virtual std::any visitOption(ANTLRv4Parser::OptionContext *ctx) override;

    virtual std::any visitOptionValue(ANTLRv4Parser::OptionValueContext *ctx) override;

    virtual std::any visitDelegateGrammars(ANTLRv4Parser::DelegateGrammarsContext *ctx) override;

    virtual std::any visitDelegateGrammar(ANTLRv4Parser::DelegateGrammarContext *ctx) override;

    virtual std::any visitTokensSpec(ANTLRv4Parser::TokensSpecContext *ctx) override;

    virtual std::any visitChannelsSpec(ANTLRv4Parser::ChannelsSpecContext *ctx) override;

    virtual std::any visitIdList(ANTLRv4Parser::IdListContext *ctx) override;

    virtual std::any visitAction_(ANTLRv4Parser::Action_Context *ctx) override;

    virtual std::any visitActionScopeName(ANTLRv4Parser::ActionScopeNameContext *ctx) override;

    virtual std::any visitActionBlock(ANTLRv4Parser::ActionBlockContext *ctx) override;

    virtual std::any visitArgActionBlock(ANTLRv4Parser::ArgActionBlockContext *ctx) override;

    virtual std::any visitModeSpec(ANTLRv4Parser::ModeSpecContext *ctx) override;

    virtual std::any visitRules(ANTLRv4Parser::RulesContext *ctx) override;

    virtual std::any visitRuleSpec(ANTLRv4Parser::RuleSpecContext *ctx) override;

    virtual std::any visitParserRuleSpec(ANTLRv4Parser::ParserRuleSpecContext *ctx) override;

    virtual std::any visitExceptionGroup(ANTLRv4Parser::ExceptionGroupContext *ctx) override;

    virtual std::any visitExceptionHandler(ANTLRv4Parser::ExceptionHandlerContext *ctx) override;

    virtual std::any visitFinallyClause(ANTLRv4Parser::FinallyClauseContext *ctx) override;

    virtual std::any visitRulePrequel(ANTLRv4Parser::RulePrequelContext *ctx) override;

    virtual std::any visitRuleReturns(ANTLRv4Parser::RuleReturnsContext *ctx) override;

    virtual std::any visitThrowsSpec(ANTLRv4Parser::ThrowsSpecContext *ctx) override;

    virtual std::any visitLocalsSpec(ANTLRv4Parser::LocalsSpecContext *ctx) override;

    virtual std::any visitRuleAction(ANTLRv4Parser::RuleActionContext *ctx) override;

    virtual std::any visitRuleModifiers(ANTLRv4Parser::RuleModifiersContext *ctx) override;

    virtual std::any visitRuleModifier(ANTLRv4Parser::RuleModifierContext *ctx) override;

    virtual std::any visitRuleBlock(ANTLRv4Parser::RuleBlockContext *ctx) override;

    virtual std::any visitRuleAltList(ANTLRv4Parser::RuleAltListContext *ctx) override;

    virtual std::any visitLabeledAlt(ANTLRv4Parser::LabeledAltContext *ctx) override;

    virtual std::any visitAltList(ANTLRv4Parser::AltListContext *ctx) override;

    virtual std::any visitAlternative(ANTLRv4Parser::AlternativeContext *ctx) override;

    virtual std::any visitElement(ANTLRv4Parser::ElementContext *ctx) override;

    virtual std::any visitLabeledElement(ANTLRv4Parser::LabeledElementContext *ctx) override;

    virtual std::any visitEbnf(ANTLRv4Parser::EbnfContext *ctx) override;

    virtual std::any visitBlockSuffix(ANTLRv4Parser::BlockSuffixContext *ctx) override;

    virtual std::any visitEbnfSuffix(ANTLRv4Parser::EbnfSuffixContext *ctx) override;

    virtual std::any visitAtom(ANTLRv4Parser::AtomContext *ctx) override;

    virtual std::any visitNotSet(ANTLRv4Parser::NotSetContext *ctx) override;

    virtual std::any visitBlockSet(ANTLRv4Parser::BlockSetContext *ctx) override;

    virtual std::any visitSetElement(ANTLRv4Parser::SetElementContext *ctx) override;

    virtual std::any visitBlock(ANTLRv4Parser::BlockContext *ctx) override;

    virtual std::any visitRuleref(ANTLRv4Parser::RulerefContext *ctx) override;

    virtual std::any visitCharacterRange(ANTLRv4Parser::CharacterRangeContext *ctx) override;

    virtual std::any visitTerminal(ANTLRv4Parser::TerminalContext *ctx) override;

    virtual std::any visitElementOptions(ANTLRv4Parser::ElementOptionsContext *ctx) override;

    virtual std::any visitElementOption(ANTLRv4Parser::ElementOptionContext *ctx) override;

    virtual std::any visitIdentifier(ANTLRv4Parser::IdentifierContext *ctx) override;

    bool openHeader(const char* file);
    bool openSource(const char* file);

private:
    void AddEbnfSuffix(NodeDataRef node, ANTLRv4Parser::EbnfSuffixContext *ctx);
    bool isLiteral(antlr4::tree::TerminalNode* node);
    bool hasPass(VisitPass pass) { return passes.hasPass(pass); }
    std::string toString(antlr4::ParserRuleContext *ctx);
    void addRuleNode(std::string& name, NodeDataRef node);
    void printRuleNode(std::string& name, NodeDataRef node);
    std::any handleNode(std::string &name, antlr4::ParserRuleContext *ctx, int32_t ref = 0);
    void inc_indent() { indent += numindent; }
    void dev_indent() { indent -= numindent; }
    void print_token(antlr4::Token* token);
    void print_text(antlr4::ParserRuleContext* ctx);
    void print(const char* str);
    void print(std::string &str);
    void print(const char* str, int32_t len);
    void print(antlr4::tree::TerminalNode*);
    void newln(bool only_indent = false);
    void space(bool only_when_not_first = false);
    void blockBegin(bool paren = true);
    void blockEnd(bool paren = true);
    void setSource();
    void setHeader();
    const int32_t numindent;
    bool          first_in_line;
    int32_t       indent;
    int32_t       indent_source;
    int32_t       indent_header;
    VisitPassSet  passes;
    FILE*         out;
    FILE*         source;
    FILE*         header;
    ANTLRv4Lexer *lexer;
    ANTLRv4Parser *parser;
    std::unordered_map<std::string, std::string> map;
};

#endif // ANTLR_AST_GENERATOR_H
