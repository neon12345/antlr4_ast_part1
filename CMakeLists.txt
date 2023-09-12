cmake_minimum_required(VERSION 3.14)

project(antlr_pretty LANGUAGES C CXX)

add_custom_target(antlr4 ALL)
add_custom_command(TARGET antlr4 PRE_BUILD COMMAND
            "${CMAKE_CURRENT_SOURCE_DIR}/build_antlr4.sh"
                        "${CMAKE_CURRENT_BINARY_DIR}/antlr4_cmake"
                        "${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/src"
                        "${CMAKE_CURRENT_BINARY_DIR}/antlr4"
                        "${CMAKE_C_COMPILER}"
                        "${CMAKE_CXX_COMPILER}"
                        )

set_property(
        TARGET antlr4
        APPEND
        PROPERTY ADDITIONAL_CLEAN_FILES
                "${CMAKE_CURRENT_BINARY_DIR}/antlr4_cmake"
                "${CMAKE_CURRENT_BINARY_DIR}/antlr4"
)

add_custom_target(dist_files SOURCES
                build_antlr4.sh
                README.md
                LICENSE.txt
)

add_executable(antlr_pretty
                antlr4-runtime/src/runtime/src/ANTLRErrorListener.cpp
                antlr4-runtime/src/runtime/src/ConsoleErrorListener.cpp
                antlr4-runtime/src/runtime/src/ListTokenSource.cpp
                antlr4-runtime/src/runtime/src/Token.cpp
                antlr4-runtime/src/runtime/src/ANTLRErrorStrategy.cpp
                antlr4-runtime/src/runtime/src/DefaultErrorStrategy.cpp
                antlr4-runtime/src/runtime/src/NoViableAltException.cpp
                antlr4-runtime/src/runtime/src/TokenSource.cpp
                antlr4-runtime/src/runtime/src/ANTLRFileStream.cpp
                antlr4-runtime/src/runtime/src/DiagnosticErrorListener.cpp
                antlr4-runtime/src/runtime/src/Parser.cpp
                antlr4-runtime/src/runtime/src/TokenStream.cpp
                antlr4-runtime/src/runtime/src/ANTLRInputStream.cpp
                antlr4-runtime/src/runtime/src/Exceptions.cpp
                antlr4-runtime/src/runtime/src/ParserInterpreter.cpp
                antlr4-runtime/src/runtime/src/TokenStreamRewriter.cpp
                antlr4-runtime/src/runtime/src/BailErrorStrategy.cpp
                antlr4-runtime/src/runtime/src/FailedPredicateException.cpp
                antlr4-runtime/src/runtime/src/ParserRuleContext.cpp
                antlr4-runtime/src/runtime/src/UnbufferedCharStream.cpp
                antlr4-runtime/src/runtime/src/BaseErrorListener.cpp
                antlr4-runtime/src/runtime/src/InputMismatchException.cpp
                antlr4-runtime/src/runtime/src/ProxyErrorListener.cpp
                antlr4-runtime/src/runtime/src/UnbufferedTokenStream.cpp
                antlr4-runtime/src/runtime/src/BufferedTokenStream.cpp
                antlr4-runtime/src/runtime/src/InterpreterRuleContext.cpp
                antlr4-runtime/src/runtime/src/RecognitionException.cpp
                antlr4-runtime/src/runtime/src/Vocabulary.cpp
                antlr4-runtime/src/runtime/src/CharStream.cpp
                antlr4-runtime/src/runtime/src/IntStream.cpp
                antlr4-runtime/src/runtime/src/Recognizer.cpp
                antlr4-runtime/src/runtime/src/WritableToken.cpp
                antlr4-runtime/src/runtime/src/CommonToken.cpp
                antlr4-runtime/src/runtime/src/Lexer.cpp
                antlr4-runtime/src/runtime/src/RuleContext.cpp
                antlr4-runtime/src/runtime/src/CommonTokenFactory.cpp
                antlr4-runtime/src/runtime/src/LexerInterpreter.cpp
                antlr4-runtime/src/runtime/src/RuleContextWithAltNum.cpp
                antlr4-runtime/src/runtime/src/CommonTokenStream.cpp
                antlr4-runtime/src/runtime/src/LexerNoViableAltException.cpp
                antlr4-runtime/src/runtime/src/RuntimeMetaData.cpp
                antlr4-runtime/src/runtime/src/atn/ActionTransition.cpp
                antlr4-runtime/src/runtime/src/atn/LexerAction.cpp
                antlr4-runtime/src/runtime/src/atn/ParserATNSimulator.cpp
                antlr4-runtime/src/runtime/src/atn/AmbiguityInfo.cpp
                antlr4-runtime/src/runtime/src/atn/LexerActionExecutor.cpp
                antlr4-runtime/src/runtime/src/atn/PrecedencePredicateTransition.cpp
                antlr4-runtime/src/runtime/src/atn/ArrayPredictionContext.cpp
                antlr4-runtime/src/runtime/src/atn/LexerATNConfig.cpp
                antlr4-runtime/src/runtime/src/atn/PredicateEvalInfo.cpp
                antlr4-runtime/src/runtime/src/atn/ATNConfig.cpp
                antlr4-runtime/src/runtime/src/atn/LexerATNSimulator.cpp
                antlr4-runtime/src/runtime/src/atn/PredicateTransition.cpp
                antlr4-runtime/src/runtime/src/atn/ATNConfigSet.cpp
                antlr4-runtime/src/runtime/src/atn/LexerChannelAction.cpp
                antlr4-runtime/src/runtime/src/atn/PredictionContextCache.cpp
                antlr4-runtime/src/runtime/src/atn/ATN.cpp
                antlr4-runtime/src/runtime/src/atn/LexerCustomAction.cpp
                antlr4-runtime/src/runtime/src/atn/PredictionContext.cpp
                antlr4-runtime/src/runtime/src/atn/ATNDeserializationOptions.cpp
                antlr4-runtime/src/runtime/src/atn/LexerIndexedCustomAction.cpp
                antlr4-runtime/src/runtime/src/atn/PredictionContextMergeCache.cpp
                antlr4-runtime/src/runtime/src/atn/ATNDeserializer.cpp
                antlr4-runtime/src/runtime/src/atn/LexerModeAction.cpp
                antlr4-runtime/src/runtime/src/atn/PredictionMode.cpp
                antlr4-runtime/src/runtime/src/atn/ATNSimulator.cpp
                antlr4-runtime/src/runtime/src/atn/LexerMoreAction.cpp
                antlr4-runtime/src/runtime/src/atn/ProfilingATNSimulator.cpp
                antlr4-runtime/src/runtime/src/atn/ATNState.cpp
                antlr4-runtime/src/runtime/src/atn/LexerPopModeAction.cpp
                antlr4-runtime/src/runtime/src/atn/RangeTransition.cpp
                antlr4-runtime/src/runtime/src/atn/ATNStateType.cpp
                antlr4-runtime/src/runtime/src/atn/LexerPushModeAction.cpp
                antlr4-runtime/src/runtime/src/atn/RuleTransition.cpp
                antlr4-runtime/src/runtime/src/atn/AtomTransition.cpp
                antlr4-runtime/src/runtime/src/atn/LexerSkipAction.cpp
                antlr4-runtime/src/runtime/src/atn/SemanticContext.cpp
                antlr4-runtime/src/runtime/src/atn/ContextSensitivityInfo.cpp
                antlr4-runtime/src/runtime/src/atn/LexerTypeAction.cpp
                antlr4-runtime/src/runtime/src/atn/SetTransition.cpp
                antlr4-runtime/src/runtime/src/atn/DecisionEventInfo.cpp
                antlr4-runtime/src/runtime/src/atn/LL1Analyzer.cpp
                antlr4-runtime/src/runtime/src/atn/SingletonPredictionContext.cpp
                antlr4-runtime/src/runtime/src/atn/DecisionInfo.cpp
                antlr4-runtime/src/runtime/src/atn/LookaheadEventInfo.cpp
                antlr4-runtime/src/runtime/src/atn/StarLoopbackState.cpp
                antlr4-runtime/src/runtime/src/atn/DecisionState.cpp
                antlr4-runtime/src/runtime/src/atn/NotSetTransition.cpp
                antlr4-runtime/src/runtime/src/atn/Transition.cpp
                antlr4-runtime/src/runtime/src/atn/EpsilonTransition.cpp
                antlr4-runtime/src/runtime/src/atn/OrderedATNConfigSet.cpp
                antlr4-runtime/src/runtime/src/atn/TransitionType.cpp
                antlr4-runtime/src/runtime/src/atn/ErrorInfo.cpp
                antlr4-runtime/src/runtime/src/atn/ParseInfo.cpp
                antlr4-runtime/src/runtime/src/atn/WildcardTransition.cpp
                antlr4-runtime/src/runtime/src/dfa/DFA.cpp
                antlr4-runtime/src/runtime/src/dfa/DFASerializer.cpp
                antlr4-runtime/src/runtime/src/dfa/DFAState.cpp
                antlr4-runtime/src/runtime/src/dfa/LexerDFASerializer.cpp
                antlr4-runtime/src/runtime/src/internal/Synchronization.cpp
                antlr4-runtime/src/runtime/src/misc/InterpreterDataReader.cpp
                antlr4-runtime/src/runtime/src/misc/IntervalSet.cpp
                antlr4-runtime/src/runtime/src/misc/Predicate.cpp
                antlr4-runtime/src/runtime/src/misc/Interval.cpp
                antlr4-runtime/src/runtime/src/misc/MurmurHash.cpp
                antlr4-runtime/src/runtime/src/support/Any.cpp
                antlr4-runtime/src/runtime/src/support/CPPUtils.cpp
                antlr4-runtime/src/runtime/src/support/Utf8.cpp
                antlr4-runtime/src/runtime/src/support/Arrays.cpp
                antlr4-runtime/src/runtime/src/support/StringUtils.cpp
                antlr4-runtime/src/runtime/src/tree/ErrorNodeImpl.cpp
                antlr4-runtime/src/runtime/src/tree/ParseTreeListener.cpp
                antlr4-runtime/src/runtime/src/tree/TerminalNodeImpl.cpp
                antlr4-runtime/src/runtime/src/tree/IterativeParseTreeWalker.cpp
                antlr4-runtime/src/runtime/src/tree/ParseTreeVisitor.cpp
                antlr4-runtime/src/runtime/src/tree/Trees.cpp
                antlr4-runtime/src/runtime/src/tree/ParseTree.cpp
                antlr4-runtime/src/runtime/src/tree/ParseTreeWalker.cpp
                antlr4-runtime/src/runtime/src/tree/pattern/Chunk.cpp
                antlr4-runtime/src/runtime/src/tree/pattern/ParseTreePatternMatcher.cpp
                antlr4-runtime/src/runtime/src/tree/pattern/TextChunk.cpp
                antlr4-runtime/src/runtime/src/tree/pattern/ParseTreeMatch.cpp
                antlr4-runtime/src/runtime/src/tree/pattern/RuleTagToken.cpp
                antlr4-runtime/src/runtime/src/tree/pattern/TokenTagToken.cpp
                antlr4-runtime/src/runtime/src/tree/pattern/ParseTreePattern.cpp
                antlr4-runtime/src/runtime/src/tree/pattern/TagChunk.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPath.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathRuleAnywhereElement.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathWildcardAnywhereElement.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathElement.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathRuleElement.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathWildcardElement.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathLexer.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathTokenAnywhereElement.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathLexerErrorListener.cpp
                antlr4-runtime/src/runtime/src/tree/xpath/XPathTokenElement.cpp
                main/src/AntlrAstGenerator.cpp main/src/AntlrAstGenerator.h
                main/src/libs/ANTLRv4Lexer.cpp main/src/libs/ANTLRv4Lexer.h
                main/src/libs/ANTLRv4Parser.cpp main/src/libs/ANTLRv4Parser.h
                main/src/libs/ANTLRv4ParserBaseListener.cpp main/src/libs/ANTLRv4ParserBaseListener.h
                main/src/libs/ANTLRv4ParserBaseVisitor.cpp main/src/libs/ANTLRv4ParserBaseVisitor.h
                main/src/libs/ANTLRv4ParserListener.cpp main/src/libs/ANTLRv4ParserListener.h
                main/src/libs/ANTLRv4ParserVisitor.cpp main/src/libs/ANTLRv4ParserVisitor.h
                main/src/libs/LexerAdaptor.cpp main/src/libs/LexerAdaptor.h
                main/src/main.cpp
)

add_dependencies(antlr_pretty antlr4)

target_compile_features(antlr_pretty PRIVATE cxx_std_17)

target_include_directories(antlr_pretty PRIVATE
    antlr4-runtime/src/runtime/src
    main/src
    main/src/libs
)

install(TARGETS antlr_pretty
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)


