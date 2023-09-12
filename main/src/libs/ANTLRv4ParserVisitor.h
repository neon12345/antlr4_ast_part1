
// Generated from ANTLRv4Parser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "ANTLRv4Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ANTLRv4Parser.
 */
class  ANTLRv4ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ANTLRv4Parser.
   */
    virtual std::any visitGrammarSpec(ANTLRv4Parser::GrammarSpecContext *context) = 0;

    virtual std::any visitGrammarDecl(ANTLRv4Parser::GrammarDeclContext *context) = 0;

    virtual std::any visitGrammarType(ANTLRv4Parser::GrammarTypeContext *context) = 0;

    virtual std::any visitPrequelConstruct(ANTLRv4Parser::PrequelConstructContext *context) = 0;

    virtual std::any visitOptionsSpec(ANTLRv4Parser::OptionsSpecContext *context) = 0;

    virtual std::any visitOption(ANTLRv4Parser::OptionContext *context) = 0;

    virtual std::any visitOptionValue(ANTLRv4Parser::OptionValueContext *context) = 0;

    virtual std::any visitDelegateGrammars(ANTLRv4Parser::DelegateGrammarsContext *context) = 0;

    virtual std::any visitDelegateGrammar(ANTLRv4Parser::DelegateGrammarContext *context) = 0;

    virtual std::any visitTokensSpec(ANTLRv4Parser::TokensSpecContext *context) = 0;

    virtual std::any visitChannelsSpec(ANTLRv4Parser::ChannelsSpecContext *context) = 0;

    virtual std::any visitIdList(ANTLRv4Parser::IdListContext *context) = 0;

    virtual std::any visitAction_(ANTLRv4Parser::Action_Context *context) = 0;

    virtual std::any visitActionScopeName(ANTLRv4Parser::ActionScopeNameContext *context) = 0;

    virtual std::any visitActionBlock(ANTLRv4Parser::ActionBlockContext *context) = 0;

    virtual std::any visitArgActionBlock(ANTLRv4Parser::ArgActionBlockContext *context) = 0;

    virtual std::any visitModeSpec(ANTLRv4Parser::ModeSpecContext *context) = 0;

    virtual std::any visitRules(ANTLRv4Parser::RulesContext *context) = 0;

    virtual std::any visitRuleSpec(ANTLRv4Parser::RuleSpecContext *context) = 0;

    virtual std::any visitParserRuleSpec(ANTLRv4Parser::ParserRuleSpecContext *context) = 0;

    virtual std::any visitExceptionGroup(ANTLRv4Parser::ExceptionGroupContext *context) = 0;

    virtual std::any visitExceptionHandler(ANTLRv4Parser::ExceptionHandlerContext *context) = 0;

    virtual std::any visitFinallyClause(ANTLRv4Parser::FinallyClauseContext *context) = 0;

    virtual std::any visitRulePrequel(ANTLRv4Parser::RulePrequelContext *context) = 0;

    virtual std::any visitRuleReturns(ANTLRv4Parser::RuleReturnsContext *context) = 0;

    virtual std::any visitThrowsSpec(ANTLRv4Parser::ThrowsSpecContext *context) = 0;

    virtual std::any visitLocalsSpec(ANTLRv4Parser::LocalsSpecContext *context) = 0;

    virtual std::any visitRuleAction(ANTLRv4Parser::RuleActionContext *context) = 0;

    virtual std::any visitRuleModifiers(ANTLRv4Parser::RuleModifiersContext *context) = 0;

    virtual std::any visitRuleModifier(ANTLRv4Parser::RuleModifierContext *context) = 0;

    virtual std::any visitRuleBlock(ANTLRv4Parser::RuleBlockContext *context) = 0;

    virtual std::any visitRuleAltList(ANTLRv4Parser::RuleAltListContext *context) = 0;

    virtual std::any visitLabeledAlt(ANTLRv4Parser::LabeledAltContext *context) = 0;

    virtual std::any visitLexerRuleSpec(ANTLRv4Parser::LexerRuleSpecContext *context) = 0;

    virtual std::any visitLexerRuleBlock(ANTLRv4Parser::LexerRuleBlockContext *context) = 0;

    virtual std::any visitLexerAltList(ANTLRv4Parser::LexerAltListContext *context) = 0;

    virtual std::any visitLexerAlt(ANTLRv4Parser::LexerAltContext *context) = 0;

    virtual std::any visitLexerElements(ANTLRv4Parser::LexerElementsContext *context) = 0;

    virtual std::any visitLexerElement(ANTLRv4Parser::LexerElementContext *context) = 0;

    virtual std::any visitLexerBlock(ANTLRv4Parser::LexerBlockContext *context) = 0;

    virtual std::any visitLexerCommands(ANTLRv4Parser::LexerCommandsContext *context) = 0;

    virtual std::any visitLexerCommand(ANTLRv4Parser::LexerCommandContext *context) = 0;

    virtual std::any visitLexerCommandName(ANTLRv4Parser::LexerCommandNameContext *context) = 0;

    virtual std::any visitLexerCommandExpr(ANTLRv4Parser::LexerCommandExprContext *context) = 0;

    virtual std::any visitAltList(ANTLRv4Parser::AltListContext *context) = 0;

    virtual std::any visitAlternative(ANTLRv4Parser::AlternativeContext *context) = 0;

    virtual std::any visitElement(ANTLRv4Parser::ElementContext *context) = 0;

    virtual std::any visitLabeledElement(ANTLRv4Parser::LabeledElementContext *context) = 0;

    virtual std::any visitEbnf(ANTLRv4Parser::EbnfContext *context) = 0;

    virtual std::any visitBlockSuffix(ANTLRv4Parser::BlockSuffixContext *context) = 0;

    virtual std::any visitEbnfSuffix(ANTLRv4Parser::EbnfSuffixContext *context) = 0;

    virtual std::any visitLexerAtom(ANTLRv4Parser::LexerAtomContext *context) = 0;

    virtual std::any visitAtom(ANTLRv4Parser::AtomContext *context) = 0;

    virtual std::any visitNotSet(ANTLRv4Parser::NotSetContext *context) = 0;

    virtual std::any visitBlockSet(ANTLRv4Parser::BlockSetContext *context) = 0;

    virtual std::any visitSetElement(ANTLRv4Parser::SetElementContext *context) = 0;

    virtual std::any visitBlock(ANTLRv4Parser::BlockContext *context) = 0;

    virtual std::any visitRuleref(ANTLRv4Parser::RulerefContext *context) = 0;

    virtual std::any visitCharacterRange(ANTLRv4Parser::CharacterRangeContext *context) = 0;

    virtual std::any visitTerminal(ANTLRv4Parser::TerminalContext *context) = 0;

    virtual std::any visitElementOptions(ANTLRv4Parser::ElementOptionsContext *context) = 0;

    virtual std::any visitElementOption(ANTLRv4Parser::ElementOptionContext *context) = 0;

    virtual std::any visitIdentifier(ANTLRv4Parser::IdentifierContext *context) = 0;


};

