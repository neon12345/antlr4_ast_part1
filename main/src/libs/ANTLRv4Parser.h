
// Generated from ANTLRv4Parser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  ANTLRv4Parser : public antlr4::Parser {
public:
  enum {
    TOKEN_REF = 1, RULE_REF = 2, LEXER_CHAR_SET = 3, DOC_COMMENT = 4, BLOCK_COMMENT = 5, 
    LINE_COMMENT = 6, INT = 7, STRING_LITERAL = 8, UNTERMINATED_STRING_LITERAL = 9, 
    BEGIN_ARGUMENT = 10, BEGIN_ACTION = 11, OPTIONS = 12, TOKENS = 13, CHANNELS = 14, 
    IMPORT = 15, FRAGMENT = 16, LEXER = 17, PARSER = 18, GRAMMAR = 19, PROTECTED = 20, 
    PUBLIC = 21, PRIVATE = 22, RETURNS = 23, LOCALS = 24, THROWS = 25, CATCH = 26, 
    FINALLY = 27, MODE = 28, COLON = 29, COLONCOLON = 30, COMMA = 31, SEMI = 32, 
    LPAREN = 33, RPAREN = 34, LBRACE = 35, RBRACE = 36, RARROW = 37, LT = 38, 
    GT = 39, ASSIGN = 40, QUESTION = 41, STAR = 42, PLUS_ASSIGN = 43, PLUS = 44, 
    OR = 45, DOLLAR = 46, RANGE = 47, DOT = 48, AT = 49, POUND = 50, NOT = 51, 
    ID = 52, WS = 53, ERRCHAR = 54, END_ARGUMENT = 55, UNTERMINATED_ARGUMENT = 56, 
    ARGUMENT_CONTENT = 57, END_ACTION = 58, UNTERMINATED_ACTION = 59, ACTION_CONTENT = 60, 
    UNTERMINATED_CHAR_SET = 61
  };

  enum {
    RuleGrammarSpec = 0, RuleGrammarDecl = 1, RuleGrammarType = 2, RulePrequelConstruct = 3, 
    RuleOptionsSpec = 4, RuleOption = 5, RuleOptionValue = 6, RuleDelegateGrammars = 7, 
    RuleDelegateGrammar = 8, RuleTokensSpec = 9, RuleChannelsSpec = 10, 
    RuleIdList = 11, RuleAction_ = 12, RuleActionScopeName = 13, RuleActionBlock = 14, 
    RuleArgActionBlock = 15, RuleModeSpec = 16, RuleRules = 17, RuleRuleSpec = 18, 
    RuleParserRuleSpec = 19, RuleExceptionGroup = 20, RuleExceptionHandler = 21, 
    RuleFinallyClause = 22, RuleRulePrequel = 23, RuleRuleReturns = 24, 
    RuleThrowsSpec = 25, RuleLocalsSpec = 26, RuleRuleAction = 27, RuleRuleModifiers = 28, 
    RuleRuleModifier = 29, RuleRuleBlock = 30, RuleRuleAltList = 31, RuleLabeledAlt = 32, 
    RuleLexerRuleSpec = 33, RuleLexerRuleBlock = 34, RuleLexerAltList = 35, 
    RuleLexerAlt = 36, RuleLexerElements = 37, RuleLexerElement = 38, RuleLexerBlock = 39, 
    RuleLexerCommands = 40, RuleLexerCommand = 41, RuleLexerCommandName = 42, 
    RuleLexerCommandExpr = 43, RuleAltList = 44, RuleAlternative = 45, RuleElement = 46, 
    RuleLabeledElement = 47, RuleEbnf = 48, RuleBlockSuffix = 49, RuleEbnfSuffix = 50, 
    RuleLexerAtom = 51, RuleAtom = 52, RuleNotSet = 53, RuleBlockSet = 54, 
    RuleSetElement = 55, RuleBlock = 56, RuleRuleref = 57, RuleCharacterRange = 58, 
    RuleTerminal = 59, RuleElementOptions = 60, RuleElementOption = 61, 
    RuleIdentifier = 62
  };

  explicit ANTLRv4Parser(antlr4::TokenStream *input);

  ANTLRv4Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ANTLRv4Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class GrammarSpecContext;
  class GrammarDeclContext;
  class GrammarTypeContext;
  class PrequelConstructContext;
  class OptionsSpecContext;
  class OptionContext;
  class OptionValueContext;
  class DelegateGrammarsContext;
  class DelegateGrammarContext;
  class TokensSpecContext;
  class ChannelsSpecContext;
  class IdListContext;
  class Action_Context;
  class ActionScopeNameContext;
  class ActionBlockContext;
  class ArgActionBlockContext;
  class ModeSpecContext;
  class RulesContext;
  class RuleSpecContext;
  class ParserRuleSpecContext;
  class ExceptionGroupContext;
  class ExceptionHandlerContext;
  class FinallyClauseContext;
  class RulePrequelContext;
  class RuleReturnsContext;
  class ThrowsSpecContext;
  class LocalsSpecContext;
  class RuleActionContext;
  class RuleModifiersContext;
  class RuleModifierContext;
  class RuleBlockContext;
  class RuleAltListContext;
  class LabeledAltContext;
  class LexerRuleSpecContext;
  class LexerRuleBlockContext;
  class LexerAltListContext;
  class LexerAltContext;
  class LexerElementsContext;
  class LexerElementContext;
  class LexerBlockContext;
  class LexerCommandsContext;
  class LexerCommandContext;
  class LexerCommandNameContext;
  class LexerCommandExprContext;
  class AltListContext;
  class AlternativeContext;
  class ElementContext;
  class LabeledElementContext;
  class EbnfContext;
  class BlockSuffixContext;
  class EbnfSuffixContext;
  class LexerAtomContext;
  class AtomContext;
  class NotSetContext;
  class BlockSetContext;
  class SetElementContext;
  class BlockContext;
  class RulerefContext;
  class CharacterRangeContext;
  class TerminalContext;
  class ElementOptionsContext;
  class ElementOptionContext;
  class IdentifierContext; 

  class  GrammarSpecContext : public antlr4::ParserRuleContext {
  public:
    GrammarSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GrammarDeclContext *grammarDecl();
    RulesContext *rules();
    antlr4::tree::TerminalNode *EOF();
    std::vector<PrequelConstructContext *> prequelConstruct();
    PrequelConstructContext* prequelConstruct(size_t i);
    std::vector<ModeSpecContext *> modeSpec();
    ModeSpecContext* modeSpec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrammarSpecContext* grammarSpec();

  class  GrammarDeclContext : public antlr4::ParserRuleContext {
  public:
    GrammarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GrammarTypeContext *grammarType();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrammarDeclContext* grammarDecl();

  class  GrammarTypeContext : public antlr4::ParserRuleContext {
  public:
    GrammarTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEXER();
    antlr4::tree::TerminalNode *GRAMMAR();
    antlr4::tree::TerminalNode *PARSER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrammarTypeContext* grammarType();

  class  PrequelConstructContext : public antlr4::ParserRuleContext {
  public:
    PrequelConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionsSpecContext *optionsSpec();
    DelegateGrammarsContext *delegateGrammars();
    TokensSpecContext *tokensSpec();
    ChannelsSpecContext *channelsSpec();
    Action_Context *action_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrequelConstructContext* prequelConstruct();

  class  OptionsSpecContext : public antlr4::ParserRuleContext {
  public:
    OptionsSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionsSpecContext* optionsSpec();

  class  OptionContext : public antlr4::ParserRuleContext {
  public:
    OptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN();
    OptionValueContext *optionValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionContext* option();

  class  OptionValueContext : public antlr4::ParserRuleContext {
  public:
    OptionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();
    ActionBlockContext *actionBlock();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueContext* optionValue();

  class  DelegateGrammarsContext : public antlr4::ParserRuleContext {
  public:
    DelegateGrammarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    std::vector<DelegateGrammarContext *> delegateGrammar();
    DelegateGrammarContext* delegateGrammar(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DelegateGrammarsContext* delegateGrammars();

  class  DelegateGrammarContext : public antlr4::ParserRuleContext {
  public:
    DelegateGrammarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DelegateGrammarContext* delegateGrammar();

  class  TokensSpecContext : public antlr4::ParserRuleContext {
  public:
    TokensSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKENS();
    antlr4::tree::TerminalNode *RBRACE();
    IdListContext *idList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokensSpecContext* tokensSpec();

  class  ChannelsSpecContext : public antlr4::ParserRuleContext {
  public:
    ChannelsSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANNELS();
    antlr4::tree::TerminalNode *RBRACE();
    IdListContext *idList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChannelsSpecContext* channelsSpec();

  class  IdListContext : public antlr4::ParserRuleContext {
  public:
    IdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdListContext* idList();

  class  Action_Context : public antlr4::ParserRuleContext {
  public:
    Action_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    IdentifierContext *identifier();
    ActionBlockContext *actionBlock();
    ActionScopeNameContext *actionScopeName();
    antlr4::tree::TerminalNode *COLONCOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_Context* action_();

  class  ActionScopeNameContext : public antlr4::ParserRuleContext {
  public:
    ActionScopeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LEXER();
    antlr4::tree::TerminalNode *PARSER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionScopeNameContext* actionScopeName();

  class  ActionBlockContext : public antlr4::ParserRuleContext {
  public:
    ActionBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_ACTION();
    antlr4::tree::TerminalNode *END_ACTION();
    std::vector<antlr4::tree::TerminalNode *> ACTION_CONTENT();
    antlr4::tree::TerminalNode* ACTION_CONTENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionBlockContext* actionBlock();

  class  ArgActionBlockContext : public antlr4::ParserRuleContext {
  public:
    ArgActionBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_ARGUMENT();
    antlr4::tree::TerminalNode *END_ARGUMENT();
    std::vector<antlr4::tree::TerminalNode *> ARGUMENT_CONTENT();
    antlr4::tree::TerminalNode* ARGUMENT_CONTENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgActionBlockContext* argActionBlock();

  class  ModeSpecContext : public antlr4::ParserRuleContext {
  public:
    ModeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<LexerRuleSpecContext *> lexerRuleSpec();
    LexerRuleSpecContext* lexerRuleSpec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModeSpecContext* modeSpec();

  class  RulesContext : public antlr4::ParserRuleContext {
  public:
    RulesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RuleSpecContext *> ruleSpec();
    RuleSpecContext* ruleSpec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RulesContext* rules();

  class  RuleSpecContext : public antlr4::ParserRuleContext {
  public:
    RuleSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParserRuleSpecContext *parserRuleSpec();
    LexerRuleSpecContext *lexerRuleSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleSpecContext* ruleSpec();

  class  ParserRuleSpecContext : public antlr4::ParserRuleContext {
  public:
    ParserRuleSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RULE_REF();
    antlr4::tree::TerminalNode *COLON();
    RuleBlockContext *ruleBlock();
    antlr4::tree::TerminalNode *SEMI();
    ExceptionGroupContext *exceptionGroup();
    RuleModifiersContext *ruleModifiers();
    ArgActionBlockContext *argActionBlock();
    RuleReturnsContext *ruleReturns();
    ThrowsSpecContext *throwsSpec();
    LocalsSpecContext *localsSpec();
    std::vector<RulePrequelContext *> rulePrequel();
    RulePrequelContext* rulePrequel(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParserRuleSpecContext* parserRuleSpec();

  class  ExceptionGroupContext : public antlr4::ParserRuleContext {
  public:
    ExceptionGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExceptionHandlerContext *> exceptionHandler();
    ExceptionHandlerContext* exceptionHandler(size_t i);
    FinallyClauseContext *finallyClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionGroupContext* exceptionGroup();

  class  ExceptionHandlerContext : public antlr4::ParserRuleContext {
  public:
    ExceptionHandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    ArgActionBlockContext *argActionBlock();
    ActionBlockContext *actionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionHandlerContext* exceptionHandler();

  class  FinallyClauseContext : public antlr4::ParserRuleContext {
  public:
    FinallyClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINALLY();
    ActionBlockContext *actionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FinallyClauseContext* finallyClause();

  class  RulePrequelContext : public antlr4::ParserRuleContext {
  public:
    RulePrequelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionsSpecContext *optionsSpec();
    RuleActionContext *ruleAction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RulePrequelContext* rulePrequel();

  class  RuleReturnsContext : public antlr4::ParserRuleContext {
  public:
    RuleReturnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    ArgActionBlockContext *argActionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleReturnsContext* ruleReturns();

  class  ThrowsSpecContext : public antlr4::ParserRuleContext {
  public:
    ThrowsSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROWS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowsSpecContext* throwsSpec();

  class  LocalsSpecContext : public antlr4::ParserRuleContext {
  public:
    LocalsSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCALS();
    ArgActionBlockContext *argActionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalsSpecContext* localsSpec();

  class  RuleActionContext : public antlr4::ParserRuleContext {
  public:
    RuleActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    IdentifierContext *identifier();
    ActionBlockContext *actionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleActionContext* ruleAction();

  class  RuleModifiersContext : public antlr4::ParserRuleContext {
  public:
    RuleModifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RuleModifierContext *> ruleModifier();
    RuleModifierContext* ruleModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleModifiersContext* ruleModifiers();

  class  RuleModifierContext : public antlr4::ParserRuleContext {
  public:
    RuleModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *FRAGMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleModifierContext* ruleModifier();

  class  RuleBlockContext : public antlr4::ParserRuleContext {
  public:
    RuleBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RuleAltListContext *ruleAltList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleBlockContext* ruleBlock();

  class  RuleAltListContext : public antlr4::ParserRuleContext {
  public:
    RuleAltListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LabeledAltContext *> labeledAlt();
    LabeledAltContext* labeledAlt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleAltListContext* ruleAltList();

  class  LabeledAltContext : public antlr4::ParserRuleContext {
  public:
    LabeledAltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlternativeContext *alternative();
    antlr4::tree::TerminalNode *POUND();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledAltContext* labeledAlt();

  class  LexerRuleSpecContext : public antlr4::ParserRuleContext {
  public:
    LexerRuleSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_REF();
    antlr4::tree::TerminalNode *COLON();
    LexerRuleBlockContext *lexerRuleBlock();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *FRAGMENT();
    OptionsSpecContext *optionsSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerRuleSpecContext* lexerRuleSpec();

  class  LexerRuleBlockContext : public antlr4::ParserRuleContext {
  public:
    LexerRuleBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LexerAltListContext *lexerAltList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerRuleBlockContext* lexerRuleBlock();

  class  LexerAltListContext : public antlr4::ParserRuleContext {
  public:
    LexerAltListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LexerAltContext *> lexerAlt();
    LexerAltContext* lexerAlt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerAltListContext* lexerAltList();

  class  LexerAltContext : public antlr4::ParserRuleContext {
  public:
    LexerAltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LexerElementsContext *lexerElements();
    LexerCommandsContext *lexerCommands();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerAltContext* lexerAlt();

  class  LexerElementsContext : public antlr4::ParserRuleContext {
  public:
    LexerElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LexerElementContext *> lexerElement();
    LexerElementContext* lexerElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerElementsContext* lexerElements();

  class  LexerElementContext : public antlr4::ParserRuleContext {
  public:
    LexerElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LexerAtomContext *lexerAtom();
    EbnfSuffixContext *ebnfSuffix();
    LexerBlockContext *lexerBlock();
    ActionBlockContext *actionBlock();
    antlr4::tree::TerminalNode *QUESTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerElementContext* lexerElement();

  class  LexerBlockContext : public antlr4::ParserRuleContext {
  public:
    LexerBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    LexerAltListContext *lexerAltList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerBlockContext* lexerBlock();

  class  LexerCommandsContext : public antlr4::ParserRuleContext {
  public:
    LexerCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RARROW();
    std::vector<LexerCommandContext *> lexerCommand();
    LexerCommandContext* lexerCommand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerCommandsContext* lexerCommands();

  class  LexerCommandContext : public antlr4::ParserRuleContext {
  public:
    LexerCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LexerCommandNameContext *lexerCommandName();
    antlr4::tree::TerminalNode *LPAREN();
    LexerCommandExprContext *lexerCommandExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerCommandContext* lexerCommand();

  class  LexerCommandNameContext : public antlr4::ParserRuleContext {
  public:
    LexerCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *MODE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerCommandNameContext* lexerCommandName();

  class  LexerCommandExprContext : public antlr4::ParserRuleContext {
  public:
    LexerCommandExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerCommandExprContext* lexerCommandExpr();

  class  AltListContext : public antlr4::ParserRuleContext {
  public:
    AltListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlternativeContext *> alternative();
    AlternativeContext* alternative(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AltListContext* altList();

  class  AlternativeContext : public antlr4::ParserRuleContext {
  public:
    AlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementOptionsContext *elementOptions();
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlternativeContext* alternative();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledElementContext *labeledElement();
    EbnfSuffixContext *ebnfSuffix();
    AtomContext *atom();
    EbnfContext *ebnf();
    ActionBlockContext *actionBlock();
    antlr4::tree::TerminalNode *QUESTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementContext* element();

  class  LabeledElementContext : public antlr4::ParserRuleContext {
  public:
    LabeledElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *PLUS_ASSIGN();
    AtomContext *atom();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledElementContext* labeledElement();

  class  EbnfContext : public antlr4::ParserRuleContext {
  public:
    EbnfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    BlockSuffixContext *blockSuffix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EbnfContext* ebnf();

  class  BlockSuffixContext : public antlr4::ParserRuleContext {
  public:
    BlockSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EbnfSuffixContext *ebnfSuffix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockSuffixContext* blockSuffix();

  class  EbnfSuffixContext : public antlr4::ParserRuleContext {
  public:
    EbnfSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> QUESTION();
    antlr4::tree::TerminalNode* QUESTION(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EbnfSuffixContext* ebnfSuffix();

  class  LexerAtomContext : public antlr4::ParserRuleContext {
  public:
    LexerAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharacterRangeContext *characterRange();
    TerminalContext *terminal();
    NotSetContext *notSet();
    antlr4::tree::TerminalNode *LEXER_CHAR_SET();
    antlr4::tree::TerminalNode *DOT();
    ElementOptionsContext *elementOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LexerAtomContext* lexerAtom();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TerminalContext *terminal();
    RulerefContext *ruleref();
    NotSetContext *notSet();
    antlr4::tree::TerminalNode *DOT();
    ElementOptionsContext *elementOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  NotSetContext : public antlr4::ParserRuleContext {
  public:
    NotSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    SetElementContext *setElement();
    BlockSetContext *blockSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotSetContext* notSet();

  class  BlockSetContext : public antlr4::ParserRuleContext {
  public:
    BlockSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<SetElementContext *> setElement();
    SetElementContext* setElement(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockSetContext* blockSet();

  class  SetElementContext : public antlr4::ParserRuleContext {
  public:
    SetElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_REF();
    ElementOptionsContext *elementOptions();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    CharacterRangeContext *characterRange();
    antlr4::tree::TerminalNode *LEXER_CHAR_SET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetElementContext* setElement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    AltListContext *altList();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    OptionsSpecContext *optionsSpec();
    std::vector<RuleActionContext *> ruleAction();
    RuleActionContext* ruleAction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  RulerefContext : public antlr4::ParserRuleContext {
  public:
    RulerefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RULE_REF();
    ArgActionBlockContext *argActionBlock();
    ElementOptionsContext *elementOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RulerefContext* ruleref();

  class  CharacterRangeContext : public antlr4::ParserRuleContext {
  public:
    CharacterRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *RANGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterRangeContext* characterRange();

  class  TerminalContext : public antlr4::ParserRuleContext {
  public:
    TerminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_REF();
    ElementOptionsContext *elementOptions();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminalContext* terminal();

  class  ElementOptionsContext : public antlr4::ParserRuleContext {
  public:
    ElementOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    std::vector<ElementOptionContext *> elementOption();
    ElementOptionContext* elementOption(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementOptionsContext* elementOptions();

  class  ElementOptionContext : public antlr4::ParserRuleContext {
  public:
    ElementOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementOptionContext* elementOption();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RULE_REF();
    antlr4::tree::TerminalNode *TOKEN_REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

