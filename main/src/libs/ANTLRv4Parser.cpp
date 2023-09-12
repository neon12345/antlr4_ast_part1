
// Generated from ANTLRv4Parser.g4 by ANTLR 4.13.0


#include "ANTLRv4ParserListener.h"
#include "ANTLRv4ParserVisitor.h"

#include "ANTLRv4Parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ANTLRv4ParserStaticData final {
  ANTLRv4ParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ANTLRv4ParserStaticData(const ANTLRv4ParserStaticData&) = delete;
  ANTLRv4ParserStaticData(ANTLRv4ParserStaticData&&) = delete;
  ANTLRv4ParserStaticData& operator=(const ANTLRv4ParserStaticData&) = delete;
  ANTLRv4ParserStaticData& operator=(ANTLRv4ParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag antlrv4parserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ANTLRv4ParserStaticData *antlrv4parserParserStaticData = nullptr;

void antlrv4parserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (antlrv4parserParserStaticData != nullptr) {
    return;
  }
#else
  assert(antlrv4parserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ANTLRv4ParserStaticData>(
    std::vector<std::string>{
      "grammarSpec", "grammarDecl", "grammarType", "prequelConstruct", "optionsSpec", 
      "option", "optionValue", "delegateGrammars", "delegateGrammar", "tokensSpec", 
      "channelsSpec", "idList", "action_", "actionScopeName", "actionBlock", 
      "argActionBlock", "modeSpec", "rules", "ruleSpec", "parserRuleSpec", 
      "exceptionGroup", "exceptionHandler", "finallyClause", "rulePrequel", 
      "ruleReturns", "throwsSpec", "localsSpec", "ruleAction", "ruleModifiers", 
      "ruleModifier", "ruleBlock", "ruleAltList", "labeledAlt", "lexerRuleSpec", 
      "lexerRuleBlock", "lexerAltList", "lexerAlt", "lexerElements", "lexerElement", 
      "lexerBlock", "lexerCommands", "lexerCommand", "lexerCommandName", 
      "lexerCommandExpr", "altList", "alternative", "element", "labeledElement", 
      "ebnf", "blockSuffix", "ebnfSuffix", "lexerAtom", "atom", "notSet", 
      "blockSet", "setElement", "block", "ruleref", "characterRange", "terminal", 
      "elementOptions", "elementOption", "identifier"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'import'", 
      "'fragment'", "'lexer'", "'parser'", "'grammar'", "'protected'", "'public'", 
      "'private'", "'returns'", "'locals'", "'throws'", "'catch'", "'finally'", 
      "'mode'"
    },
    std::vector<std::string>{
      "", "TOKEN_REF", "RULE_REF", "LEXER_CHAR_SET", "DOC_COMMENT", "BLOCK_COMMENT", 
      "LINE_COMMENT", "INT", "STRING_LITERAL", "UNTERMINATED_STRING_LITERAL", 
      "BEGIN_ARGUMENT", "BEGIN_ACTION", "OPTIONS", "TOKENS", "CHANNELS", 
      "IMPORT", "FRAGMENT", "LEXER", "PARSER", "GRAMMAR", "PROTECTED", "PUBLIC", 
      "PRIVATE", "RETURNS", "LOCALS", "THROWS", "CATCH", "FINALLY", "MODE", 
      "COLON", "COLONCOLON", "COMMA", "SEMI", "LPAREN", "RPAREN", "LBRACE", 
      "RBRACE", "RARROW", "LT", "GT", "ASSIGN", "QUESTION", "STAR", "PLUS_ASSIGN", 
      "PLUS", "OR", "DOLLAR", "RANGE", "DOT", "AT", "POUND", "NOT", "ID", 
      "WS", "ERRCHAR", "END_ARGUMENT", "UNTERMINATED_ARGUMENT", "ARGUMENT_CONTENT", 
      "END_ACTION", "UNTERMINATED_ACTION", "ACTION_CONTENT", "UNTERMINATED_CHAR_SET"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,61,617,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,1,0,1,
  	0,5,0,129,8,0,10,0,12,0,132,9,0,1,0,1,0,5,0,136,8,0,10,0,12,0,139,9,0,
  	1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,3,2,152,8,2,1,3,1,3,1,3,1,
  	3,1,3,3,3,159,8,3,1,4,1,4,1,4,1,4,5,4,165,8,4,10,4,12,4,168,9,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,5,6,179,8,6,10,6,12,6,182,9,6,1,6,1,6,1,
  	6,3,6,187,8,6,1,7,1,7,1,7,1,7,5,7,193,8,7,10,7,12,7,196,9,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,8,3,8,205,8,8,1,9,1,9,3,9,209,8,9,1,9,1,9,1,10,1,10,3,
  	10,215,8,10,1,10,1,10,1,11,1,11,1,11,5,11,222,8,11,10,11,12,11,225,9,
  	11,1,11,3,11,228,8,11,1,12,1,12,1,12,1,12,3,12,234,8,12,1,12,1,12,1,12,
  	1,13,1,13,1,13,3,13,242,8,13,1,14,1,14,5,14,246,8,14,10,14,12,14,249,
  	9,14,1,14,1,14,1,15,1,15,5,15,255,8,15,10,15,12,15,258,9,15,1,15,1,15,
  	1,16,1,16,1,16,1,16,5,16,266,8,16,10,16,12,16,269,9,16,1,17,5,17,272,
  	8,17,10,17,12,17,275,9,17,1,18,1,18,3,18,279,8,18,1,19,3,19,282,8,19,
  	1,19,1,19,3,19,286,8,19,1,19,3,19,289,8,19,1,19,3,19,292,8,19,1,19,3,
  	19,295,8,19,1,19,5,19,298,8,19,10,19,12,19,301,9,19,1,19,1,19,1,19,1,
  	19,1,19,1,20,5,20,309,8,20,10,20,12,20,312,9,20,1,20,3,20,315,8,20,1,
  	21,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,3,23,326,8,23,1,24,1,24,1,
  	24,1,25,1,25,1,25,1,25,5,25,335,8,25,10,25,12,25,338,9,25,1,26,1,26,1,
  	26,1,27,1,27,1,27,1,27,1,28,4,28,348,8,28,11,28,12,28,349,1,29,1,29,1,
  	30,1,30,1,31,1,31,1,31,5,31,359,8,31,10,31,12,31,362,9,31,1,32,1,32,1,
  	32,3,32,367,8,32,1,33,3,33,370,8,33,1,33,1,33,3,33,374,8,33,1,33,1,33,
  	1,33,1,33,1,34,1,34,1,35,1,35,1,35,5,35,385,8,35,10,35,12,35,388,9,35,
  	1,36,1,36,3,36,392,8,36,1,36,3,36,395,8,36,1,37,4,37,398,8,37,11,37,12,
  	37,399,1,37,3,37,403,8,37,1,38,1,38,3,38,407,8,38,1,38,1,38,3,38,411,
  	8,38,1,38,1,38,3,38,415,8,38,3,38,417,8,38,1,39,1,39,1,39,1,39,1,40,1,
  	40,1,40,1,40,5,40,427,8,40,10,40,12,40,430,9,40,1,41,1,41,1,41,1,41,1,
  	41,1,41,3,41,438,8,41,1,42,1,42,3,42,442,8,42,1,43,1,43,3,43,446,8,43,
  	1,44,1,44,1,44,5,44,451,8,44,10,44,12,44,454,9,44,1,45,3,45,457,8,45,
  	1,45,4,45,460,8,45,11,45,12,45,461,1,45,3,45,465,8,45,1,46,1,46,1,46,
  	3,46,470,8,46,1,46,1,46,1,46,3,46,475,8,46,1,46,1,46,1,46,3,46,480,8,
  	46,3,46,482,8,46,1,47,1,47,1,47,1,47,3,47,488,8,47,1,48,1,48,3,48,492,
  	8,48,1,49,1,49,1,50,1,50,3,50,498,8,50,1,50,1,50,3,50,502,8,50,1,50,1,
  	50,3,50,506,8,50,3,50,508,8,50,1,51,1,51,1,51,1,51,1,51,1,51,3,51,516,
  	8,51,3,51,518,8,51,1,52,1,52,1,52,1,52,1,52,3,52,525,8,52,3,52,527,8,
  	52,1,53,1,53,1,53,1,53,3,53,533,8,53,1,54,1,54,1,54,1,54,5,54,539,8,54,
  	10,54,12,54,542,9,54,1,54,1,54,1,55,1,55,3,55,548,8,55,1,55,1,55,3,55,
  	552,8,55,1,55,1,55,3,55,556,8,55,1,56,1,56,3,56,560,8,56,1,56,5,56,563,
  	8,56,10,56,12,56,566,9,56,1,56,3,56,569,8,56,1,56,1,56,1,56,1,57,1,57,
  	3,57,576,8,57,1,57,3,57,579,8,57,1,58,1,58,1,58,1,58,1,59,1,59,3,59,587,
  	8,59,1,59,1,59,3,59,591,8,59,3,59,593,8,59,1,60,1,60,1,60,1,60,5,60,599,
  	8,60,10,60,12,60,602,9,60,1,60,1,60,1,61,1,61,1,61,1,61,1,61,3,61,611,
  	8,61,3,61,613,8,61,1,62,1,62,1,62,0,0,63,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,
  	68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,
  	112,114,116,118,120,122,124,0,3,2,0,16,16,20,22,2,0,40,40,43,43,1,0,1,
  	2,653,0,126,1,0,0,0,2,142,1,0,0,0,4,151,1,0,0,0,6,158,1,0,0,0,8,160,1,
  	0,0,0,10,171,1,0,0,0,12,186,1,0,0,0,14,188,1,0,0,0,16,204,1,0,0,0,18,
  	206,1,0,0,0,20,212,1,0,0,0,22,218,1,0,0,0,24,229,1,0,0,0,26,241,1,0,0,
  	0,28,243,1,0,0,0,30,252,1,0,0,0,32,261,1,0,0,0,34,273,1,0,0,0,36,278,
  	1,0,0,0,38,281,1,0,0,0,40,310,1,0,0,0,42,316,1,0,0,0,44,320,1,0,0,0,46,
  	325,1,0,0,0,48,327,1,0,0,0,50,330,1,0,0,0,52,339,1,0,0,0,54,342,1,0,0,
  	0,56,347,1,0,0,0,58,351,1,0,0,0,60,353,1,0,0,0,62,355,1,0,0,0,64,363,
  	1,0,0,0,66,369,1,0,0,0,68,379,1,0,0,0,70,381,1,0,0,0,72,394,1,0,0,0,74,
  	402,1,0,0,0,76,416,1,0,0,0,78,418,1,0,0,0,80,422,1,0,0,0,82,437,1,0,0,
  	0,84,441,1,0,0,0,86,445,1,0,0,0,88,447,1,0,0,0,90,464,1,0,0,0,92,481,
  	1,0,0,0,94,483,1,0,0,0,96,489,1,0,0,0,98,493,1,0,0,0,100,507,1,0,0,0,
  	102,517,1,0,0,0,104,526,1,0,0,0,106,532,1,0,0,0,108,534,1,0,0,0,110,555,
  	1,0,0,0,112,557,1,0,0,0,114,573,1,0,0,0,116,580,1,0,0,0,118,592,1,0,0,
  	0,120,594,1,0,0,0,122,612,1,0,0,0,124,614,1,0,0,0,126,130,3,2,1,0,127,
  	129,3,6,3,0,128,127,1,0,0,0,129,132,1,0,0,0,130,128,1,0,0,0,130,131,1,
  	0,0,0,131,133,1,0,0,0,132,130,1,0,0,0,133,137,3,34,17,0,134,136,3,32,
  	16,0,135,134,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,
  	138,140,1,0,0,0,139,137,1,0,0,0,140,141,5,0,0,1,141,1,1,0,0,0,142,143,
  	3,4,2,0,143,144,3,124,62,0,144,145,5,32,0,0,145,3,1,0,0,0,146,147,5,17,
  	0,0,147,152,5,19,0,0,148,149,5,18,0,0,149,152,5,19,0,0,150,152,5,19,0,
  	0,151,146,1,0,0,0,151,148,1,0,0,0,151,150,1,0,0,0,152,5,1,0,0,0,153,159,
  	3,8,4,0,154,159,3,14,7,0,155,159,3,18,9,0,156,159,3,20,10,0,157,159,3,
  	24,12,0,158,153,1,0,0,0,158,154,1,0,0,0,158,155,1,0,0,0,158,156,1,0,0,
  	0,158,157,1,0,0,0,159,7,1,0,0,0,160,166,5,12,0,0,161,162,3,10,5,0,162,
  	163,5,32,0,0,163,165,1,0,0,0,164,161,1,0,0,0,165,168,1,0,0,0,166,164,
  	1,0,0,0,166,167,1,0,0,0,167,169,1,0,0,0,168,166,1,0,0,0,169,170,5,36,
  	0,0,170,9,1,0,0,0,171,172,3,124,62,0,172,173,5,40,0,0,173,174,3,12,6,
  	0,174,11,1,0,0,0,175,180,3,124,62,0,176,177,5,48,0,0,177,179,3,124,62,
  	0,178,176,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,
  	187,1,0,0,0,182,180,1,0,0,0,183,187,5,8,0,0,184,187,3,28,14,0,185,187,
  	5,7,0,0,186,175,1,0,0,0,186,183,1,0,0,0,186,184,1,0,0,0,186,185,1,0,0,
  	0,187,13,1,0,0,0,188,189,5,15,0,0,189,194,3,16,8,0,190,191,5,31,0,0,191,
  	193,3,16,8,0,192,190,1,0,0,0,193,196,1,0,0,0,194,192,1,0,0,0,194,195,
  	1,0,0,0,195,197,1,0,0,0,196,194,1,0,0,0,197,198,5,32,0,0,198,15,1,0,0,
  	0,199,200,3,124,62,0,200,201,5,40,0,0,201,202,3,124,62,0,202,205,1,0,
  	0,0,203,205,3,124,62,0,204,199,1,0,0,0,204,203,1,0,0,0,205,17,1,0,0,0,
  	206,208,5,13,0,0,207,209,3,22,11,0,208,207,1,0,0,0,208,209,1,0,0,0,209,
  	210,1,0,0,0,210,211,5,36,0,0,211,19,1,0,0,0,212,214,5,14,0,0,213,215,
  	3,22,11,0,214,213,1,0,0,0,214,215,1,0,0,0,215,216,1,0,0,0,216,217,5,36,
  	0,0,217,21,1,0,0,0,218,223,3,124,62,0,219,220,5,31,0,0,220,222,3,124,
  	62,0,221,219,1,0,0,0,222,225,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,
  	224,227,1,0,0,0,225,223,1,0,0,0,226,228,5,31,0,0,227,226,1,0,0,0,227,
  	228,1,0,0,0,228,23,1,0,0,0,229,233,5,49,0,0,230,231,3,26,13,0,231,232,
  	5,30,0,0,232,234,1,0,0,0,233,230,1,0,0,0,233,234,1,0,0,0,234,235,1,0,
  	0,0,235,236,3,124,62,0,236,237,3,28,14,0,237,25,1,0,0,0,238,242,3,124,
  	62,0,239,242,5,17,0,0,240,242,5,18,0,0,241,238,1,0,0,0,241,239,1,0,0,
  	0,241,240,1,0,0,0,242,27,1,0,0,0,243,247,5,11,0,0,244,246,5,60,0,0,245,
  	244,1,0,0,0,246,249,1,0,0,0,247,245,1,0,0,0,247,248,1,0,0,0,248,250,1,
  	0,0,0,249,247,1,0,0,0,250,251,5,58,0,0,251,29,1,0,0,0,252,256,5,10,0,
  	0,253,255,5,57,0,0,254,253,1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,
  	257,1,0,0,0,257,259,1,0,0,0,258,256,1,0,0,0,259,260,5,55,0,0,260,31,1,
  	0,0,0,261,262,5,28,0,0,262,263,3,124,62,0,263,267,5,32,0,0,264,266,3,
  	66,33,0,265,264,1,0,0,0,266,269,1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,
  	0,268,33,1,0,0,0,269,267,1,0,0,0,270,272,3,36,18,0,271,270,1,0,0,0,272,
  	275,1,0,0,0,273,271,1,0,0,0,273,274,1,0,0,0,274,35,1,0,0,0,275,273,1,
  	0,0,0,276,279,3,38,19,0,277,279,3,66,33,0,278,276,1,0,0,0,278,277,1,0,
  	0,0,279,37,1,0,0,0,280,282,3,56,28,0,281,280,1,0,0,0,281,282,1,0,0,0,
  	282,283,1,0,0,0,283,285,5,2,0,0,284,286,3,30,15,0,285,284,1,0,0,0,285,
  	286,1,0,0,0,286,288,1,0,0,0,287,289,3,48,24,0,288,287,1,0,0,0,288,289,
  	1,0,0,0,289,291,1,0,0,0,290,292,3,50,25,0,291,290,1,0,0,0,291,292,1,0,
  	0,0,292,294,1,0,0,0,293,295,3,52,26,0,294,293,1,0,0,0,294,295,1,0,0,0,
  	295,299,1,0,0,0,296,298,3,46,23,0,297,296,1,0,0,0,298,301,1,0,0,0,299,
  	297,1,0,0,0,299,300,1,0,0,0,300,302,1,0,0,0,301,299,1,0,0,0,302,303,5,
  	29,0,0,303,304,3,60,30,0,304,305,5,32,0,0,305,306,3,40,20,0,306,39,1,
  	0,0,0,307,309,3,42,21,0,308,307,1,0,0,0,309,312,1,0,0,0,310,308,1,0,0,
  	0,310,311,1,0,0,0,311,314,1,0,0,0,312,310,1,0,0,0,313,315,3,44,22,0,314,
  	313,1,0,0,0,314,315,1,0,0,0,315,41,1,0,0,0,316,317,5,26,0,0,317,318,3,
  	30,15,0,318,319,3,28,14,0,319,43,1,0,0,0,320,321,5,27,0,0,321,322,3,28,
  	14,0,322,45,1,0,0,0,323,326,3,8,4,0,324,326,3,54,27,0,325,323,1,0,0,0,
  	325,324,1,0,0,0,326,47,1,0,0,0,327,328,5,23,0,0,328,329,3,30,15,0,329,
  	49,1,0,0,0,330,331,5,25,0,0,331,336,3,124,62,0,332,333,5,31,0,0,333,335,
  	3,124,62,0,334,332,1,0,0,0,335,338,1,0,0,0,336,334,1,0,0,0,336,337,1,
  	0,0,0,337,51,1,0,0,0,338,336,1,0,0,0,339,340,5,24,0,0,340,341,3,30,15,
  	0,341,53,1,0,0,0,342,343,5,49,0,0,343,344,3,124,62,0,344,345,3,28,14,
  	0,345,55,1,0,0,0,346,348,3,58,29,0,347,346,1,0,0,0,348,349,1,0,0,0,349,
  	347,1,0,0,0,349,350,1,0,0,0,350,57,1,0,0,0,351,352,7,0,0,0,352,59,1,0,
  	0,0,353,354,3,62,31,0,354,61,1,0,0,0,355,360,3,64,32,0,356,357,5,45,0,
  	0,357,359,3,64,32,0,358,356,1,0,0,0,359,362,1,0,0,0,360,358,1,0,0,0,360,
  	361,1,0,0,0,361,63,1,0,0,0,362,360,1,0,0,0,363,366,3,90,45,0,364,365,
  	5,50,0,0,365,367,3,124,62,0,366,364,1,0,0,0,366,367,1,0,0,0,367,65,1,
  	0,0,0,368,370,5,16,0,0,369,368,1,0,0,0,369,370,1,0,0,0,370,371,1,0,0,
  	0,371,373,5,1,0,0,372,374,3,8,4,0,373,372,1,0,0,0,373,374,1,0,0,0,374,
  	375,1,0,0,0,375,376,5,29,0,0,376,377,3,68,34,0,377,378,5,32,0,0,378,67,
  	1,0,0,0,379,380,3,70,35,0,380,69,1,0,0,0,381,386,3,72,36,0,382,383,5,
  	45,0,0,383,385,3,72,36,0,384,382,1,0,0,0,385,388,1,0,0,0,386,384,1,0,
  	0,0,386,387,1,0,0,0,387,71,1,0,0,0,388,386,1,0,0,0,389,391,3,74,37,0,
  	390,392,3,80,40,0,391,390,1,0,0,0,391,392,1,0,0,0,392,395,1,0,0,0,393,
  	395,1,0,0,0,394,389,1,0,0,0,394,393,1,0,0,0,395,73,1,0,0,0,396,398,3,
  	76,38,0,397,396,1,0,0,0,398,399,1,0,0,0,399,397,1,0,0,0,399,400,1,0,0,
  	0,400,403,1,0,0,0,401,403,1,0,0,0,402,397,1,0,0,0,402,401,1,0,0,0,403,
  	75,1,0,0,0,404,406,3,102,51,0,405,407,3,100,50,0,406,405,1,0,0,0,406,
  	407,1,0,0,0,407,417,1,0,0,0,408,410,3,78,39,0,409,411,3,100,50,0,410,
  	409,1,0,0,0,410,411,1,0,0,0,411,417,1,0,0,0,412,414,3,28,14,0,413,415,
  	5,41,0,0,414,413,1,0,0,0,414,415,1,0,0,0,415,417,1,0,0,0,416,404,1,0,
  	0,0,416,408,1,0,0,0,416,412,1,0,0,0,417,77,1,0,0,0,418,419,5,33,0,0,419,
  	420,3,70,35,0,420,421,5,34,0,0,421,79,1,0,0,0,422,423,5,37,0,0,423,428,
  	3,82,41,0,424,425,5,31,0,0,425,427,3,82,41,0,426,424,1,0,0,0,427,430,
  	1,0,0,0,428,426,1,0,0,0,428,429,1,0,0,0,429,81,1,0,0,0,430,428,1,0,0,
  	0,431,432,3,84,42,0,432,433,5,33,0,0,433,434,3,86,43,0,434,435,5,34,0,
  	0,435,438,1,0,0,0,436,438,3,84,42,0,437,431,1,0,0,0,437,436,1,0,0,0,438,
  	83,1,0,0,0,439,442,3,124,62,0,440,442,5,28,0,0,441,439,1,0,0,0,441,440,
  	1,0,0,0,442,85,1,0,0,0,443,446,3,124,62,0,444,446,5,7,0,0,445,443,1,0,
  	0,0,445,444,1,0,0,0,446,87,1,0,0,0,447,452,3,90,45,0,448,449,5,45,0,0,
  	449,451,3,90,45,0,450,448,1,0,0,0,451,454,1,0,0,0,452,450,1,0,0,0,452,
  	453,1,0,0,0,453,89,1,0,0,0,454,452,1,0,0,0,455,457,3,120,60,0,456,455,
  	1,0,0,0,456,457,1,0,0,0,457,459,1,0,0,0,458,460,3,92,46,0,459,458,1,0,
  	0,0,460,461,1,0,0,0,461,459,1,0,0,0,461,462,1,0,0,0,462,465,1,0,0,0,463,
  	465,1,0,0,0,464,456,1,0,0,0,464,463,1,0,0,0,465,91,1,0,0,0,466,469,3,
  	94,47,0,467,470,3,100,50,0,468,470,1,0,0,0,469,467,1,0,0,0,469,468,1,
  	0,0,0,470,482,1,0,0,0,471,474,3,104,52,0,472,475,3,100,50,0,473,475,1,
  	0,0,0,474,472,1,0,0,0,474,473,1,0,0,0,475,482,1,0,0,0,476,482,3,96,48,
  	0,477,479,3,28,14,0,478,480,5,41,0,0,479,478,1,0,0,0,479,480,1,0,0,0,
  	480,482,1,0,0,0,481,466,1,0,0,0,481,471,1,0,0,0,481,476,1,0,0,0,481,477,
  	1,0,0,0,482,93,1,0,0,0,483,484,3,124,62,0,484,487,7,1,0,0,485,488,3,104,
  	52,0,486,488,3,112,56,0,487,485,1,0,0,0,487,486,1,0,0,0,488,95,1,0,0,
  	0,489,491,3,112,56,0,490,492,3,98,49,0,491,490,1,0,0,0,491,492,1,0,0,
  	0,492,97,1,0,0,0,493,494,3,100,50,0,494,99,1,0,0,0,495,497,5,41,0,0,496,
  	498,5,41,0,0,497,496,1,0,0,0,497,498,1,0,0,0,498,508,1,0,0,0,499,501,
  	5,42,0,0,500,502,5,41,0,0,501,500,1,0,0,0,501,502,1,0,0,0,502,508,1,0,
  	0,0,503,505,5,44,0,0,504,506,5,41,0,0,505,504,1,0,0,0,505,506,1,0,0,0,
  	506,508,1,0,0,0,507,495,1,0,0,0,507,499,1,0,0,0,507,503,1,0,0,0,508,101,
  	1,0,0,0,509,518,3,116,58,0,510,518,3,118,59,0,511,518,3,106,53,0,512,
  	518,5,3,0,0,513,515,5,48,0,0,514,516,3,120,60,0,515,514,1,0,0,0,515,516,
  	1,0,0,0,516,518,1,0,0,0,517,509,1,0,0,0,517,510,1,0,0,0,517,511,1,0,0,
  	0,517,512,1,0,0,0,517,513,1,0,0,0,518,103,1,0,0,0,519,527,3,118,59,0,
  	520,527,3,114,57,0,521,527,3,106,53,0,522,524,5,48,0,0,523,525,3,120,
  	60,0,524,523,1,0,0,0,524,525,1,0,0,0,525,527,1,0,0,0,526,519,1,0,0,0,
  	526,520,1,0,0,0,526,521,1,0,0,0,526,522,1,0,0,0,527,105,1,0,0,0,528,529,
  	5,51,0,0,529,533,3,110,55,0,530,531,5,51,0,0,531,533,3,108,54,0,532,528,
  	1,0,0,0,532,530,1,0,0,0,533,107,1,0,0,0,534,535,5,33,0,0,535,540,3,110,
  	55,0,536,537,5,45,0,0,537,539,3,110,55,0,538,536,1,0,0,0,539,542,1,0,
  	0,0,540,538,1,0,0,0,540,541,1,0,0,0,541,543,1,0,0,0,542,540,1,0,0,0,543,
  	544,5,34,0,0,544,109,1,0,0,0,545,547,5,1,0,0,546,548,3,120,60,0,547,546,
  	1,0,0,0,547,548,1,0,0,0,548,556,1,0,0,0,549,551,5,8,0,0,550,552,3,120,
  	60,0,551,550,1,0,0,0,551,552,1,0,0,0,552,556,1,0,0,0,553,556,3,116,58,
  	0,554,556,5,3,0,0,555,545,1,0,0,0,555,549,1,0,0,0,555,553,1,0,0,0,555,
  	554,1,0,0,0,556,111,1,0,0,0,557,568,5,33,0,0,558,560,3,8,4,0,559,558,
  	1,0,0,0,559,560,1,0,0,0,560,564,1,0,0,0,561,563,3,54,27,0,562,561,1,0,
  	0,0,563,566,1,0,0,0,564,562,1,0,0,0,564,565,1,0,0,0,565,567,1,0,0,0,566,
  	564,1,0,0,0,567,569,5,29,0,0,568,559,1,0,0,0,568,569,1,0,0,0,569,570,
  	1,0,0,0,570,571,3,88,44,0,571,572,5,34,0,0,572,113,1,0,0,0,573,575,5,
  	2,0,0,574,576,3,30,15,0,575,574,1,0,0,0,575,576,1,0,0,0,576,578,1,0,0,
  	0,577,579,3,120,60,0,578,577,1,0,0,0,578,579,1,0,0,0,579,115,1,0,0,0,
  	580,581,5,8,0,0,581,582,5,47,0,0,582,583,5,8,0,0,583,117,1,0,0,0,584,
  	586,5,1,0,0,585,587,3,120,60,0,586,585,1,0,0,0,586,587,1,0,0,0,587,593,
  	1,0,0,0,588,590,5,8,0,0,589,591,3,120,60,0,590,589,1,0,0,0,590,591,1,
  	0,0,0,591,593,1,0,0,0,592,584,1,0,0,0,592,588,1,0,0,0,593,119,1,0,0,0,
  	594,595,5,38,0,0,595,600,3,122,61,0,596,597,5,31,0,0,597,599,3,122,61,
  	0,598,596,1,0,0,0,599,602,1,0,0,0,600,598,1,0,0,0,600,601,1,0,0,0,601,
  	603,1,0,0,0,602,600,1,0,0,0,603,604,5,39,0,0,604,121,1,0,0,0,605,613,
  	3,124,62,0,606,607,3,124,62,0,607,610,5,40,0,0,608,611,3,124,62,0,609,
  	611,5,8,0,0,610,608,1,0,0,0,610,609,1,0,0,0,611,613,1,0,0,0,612,605,1,
  	0,0,0,612,606,1,0,0,0,613,123,1,0,0,0,614,615,7,2,0,0,615,125,1,0,0,0,
  	82,130,137,151,158,166,180,186,194,204,208,214,223,227,233,241,247,256,
  	267,273,278,281,285,288,291,294,299,310,314,325,336,349,360,366,369,373,
  	386,391,394,399,402,406,410,414,416,428,437,441,445,452,456,461,464,469,
  	474,479,481,487,491,497,501,505,507,515,517,524,526,532,540,547,551,555,
  	559,564,568,575,578,586,590,592,600,610,612
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  antlrv4parserParserStaticData = staticData.release();
}

}

ANTLRv4Parser::ANTLRv4Parser(TokenStream *input) : ANTLRv4Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ANTLRv4Parser::ANTLRv4Parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ANTLRv4Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *antlrv4parserParserStaticData->atn, antlrv4parserParserStaticData->decisionToDFA, antlrv4parserParserStaticData->sharedContextCache, options);
}

ANTLRv4Parser::~ANTLRv4Parser() {
  delete _interpreter;
}

const atn::ATN& ANTLRv4Parser::getATN() const {
  return *antlrv4parserParserStaticData->atn;
}

std::string ANTLRv4Parser::getGrammarFileName() const {
  return "ANTLRv4Parser.g4";
}

const std::vector<std::string>& ANTLRv4Parser::getRuleNames() const {
  return antlrv4parserParserStaticData->ruleNames;
}

const dfa::Vocabulary& ANTLRv4Parser::getVocabulary() const {
  return antlrv4parserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ANTLRv4Parser::getSerializedATN() const {
  return antlrv4parserParserStaticData->serializedATN;
}


//----------------- GrammarSpecContext ------------------------------------------------------------------

ANTLRv4Parser::GrammarSpecContext::GrammarSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::GrammarDeclContext* ANTLRv4Parser::GrammarSpecContext::grammarDecl() {
  return getRuleContext<ANTLRv4Parser::GrammarDeclContext>(0);
}

ANTLRv4Parser::RulesContext* ANTLRv4Parser::GrammarSpecContext::rules() {
  return getRuleContext<ANTLRv4Parser::RulesContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::GrammarSpecContext::EOF() {
  return getToken(ANTLRv4Parser::EOF, 0);
}

std::vector<ANTLRv4Parser::PrequelConstructContext *> ANTLRv4Parser::GrammarSpecContext::prequelConstruct() {
  return getRuleContexts<ANTLRv4Parser::PrequelConstructContext>();
}

ANTLRv4Parser::PrequelConstructContext* ANTLRv4Parser::GrammarSpecContext::prequelConstruct(size_t i) {
  return getRuleContext<ANTLRv4Parser::PrequelConstructContext>(i);
}

std::vector<ANTLRv4Parser::ModeSpecContext *> ANTLRv4Parser::GrammarSpecContext::modeSpec() {
  return getRuleContexts<ANTLRv4Parser::ModeSpecContext>();
}

ANTLRv4Parser::ModeSpecContext* ANTLRv4Parser::GrammarSpecContext::modeSpec(size_t i) {
  return getRuleContext<ANTLRv4Parser::ModeSpecContext>(i);
}


size_t ANTLRv4Parser::GrammarSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleGrammarSpec;
}

void ANTLRv4Parser::GrammarSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrammarSpec(this);
}

void ANTLRv4Parser::GrammarSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrammarSpec(this);
}


std::any ANTLRv4Parser::GrammarSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitGrammarSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::GrammarSpecContext* ANTLRv4Parser::grammarSpec() {
  GrammarSpecContext *_localctx = _tracker.createInstance<GrammarSpecContext>(_ctx, getState());
  enterRule(_localctx, 0, ANTLRv4Parser::RuleGrammarSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    grammarDecl();
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 562949953482752) != 0)) {
      setState(127);
      prequelConstruct();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(133);
    rules();
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::MODE) {
      setState(134);
      modeSpec();
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(140);
    match(ANTLRv4Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GrammarDeclContext ------------------------------------------------------------------

ANTLRv4Parser::GrammarDeclContext::GrammarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::GrammarTypeContext* ANTLRv4Parser::GrammarDeclContext::grammarType() {
  return getRuleContext<ANTLRv4Parser::GrammarTypeContext>(0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::GrammarDeclContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::GrammarDeclContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}


size_t ANTLRv4Parser::GrammarDeclContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleGrammarDecl;
}

void ANTLRv4Parser::GrammarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrammarDecl(this);
}

void ANTLRv4Parser::GrammarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrammarDecl(this);
}


std::any ANTLRv4Parser::GrammarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitGrammarDecl(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::GrammarDeclContext* ANTLRv4Parser::grammarDecl() {
  GrammarDeclContext *_localctx = _tracker.createInstance<GrammarDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, ANTLRv4Parser::RuleGrammarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    grammarType();
    setState(143);
    identifier();
    setState(144);
    match(ANTLRv4Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GrammarTypeContext ------------------------------------------------------------------

ANTLRv4Parser::GrammarTypeContext::GrammarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::GrammarTypeContext::LEXER() {
  return getToken(ANTLRv4Parser::LEXER, 0);
}

tree::TerminalNode* ANTLRv4Parser::GrammarTypeContext::GRAMMAR() {
  return getToken(ANTLRv4Parser::GRAMMAR, 0);
}

tree::TerminalNode* ANTLRv4Parser::GrammarTypeContext::PARSER() {
  return getToken(ANTLRv4Parser::PARSER, 0);
}


size_t ANTLRv4Parser::GrammarTypeContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleGrammarType;
}

void ANTLRv4Parser::GrammarTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrammarType(this);
}

void ANTLRv4Parser::GrammarTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrammarType(this);
}


std::any ANTLRv4Parser::GrammarTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitGrammarType(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::GrammarTypeContext* ANTLRv4Parser::grammarType() {
  GrammarTypeContext *_localctx = _tracker.createInstance<GrammarTypeContext>(_ctx, getState());
  enterRule(_localctx, 4, ANTLRv4Parser::RuleGrammarType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::LEXER: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        match(ANTLRv4Parser::LEXER);
        setState(147);
        match(ANTLRv4Parser::GRAMMAR);
        break;
      }

      case ANTLRv4Parser::PARSER: {
        enterOuterAlt(_localctx, 2);
        setState(148);
        match(ANTLRv4Parser::PARSER);
        setState(149);
        match(ANTLRv4Parser::GRAMMAR);
        break;
      }

      case ANTLRv4Parser::GRAMMAR: {
        enterOuterAlt(_localctx, 3);
        setState(150);
        match(ANTLRv4Parser::GRAMMAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrequelConstructContext ------------------------------------------------------------------

ANTLRv4Parser::PrequelConstructContext::PrequelConstructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::PrequelConstructContext::optionsSpec() {
  return getRuleContext<ANTLRv4Parser::OptionsSpecContext>(0);
}

ANTLRv4Parser::DelegateGrammarsContext* ANTLRv4Parser::PrequelConstructContext::delegateGrammars() {
  return getRuleContext<ANTLRv4Parser::DelegateGrammarsContext>(0);
}

ANTLRv4Parser::TokensSpecContext* ANTLRv4Parser::PrequelConstructContext::tokensSpec() {
  return getRuleContext<ANTLRv4Parser::TokensSpecContext>(0);
}

ANTLRv4Parser::ChannelsSpecContext* ANTLRv4Parser::PrequelConstructContext::channelsSpec() {
  return getRuleContext<ANTLRv4Parser::ChannelsSpecContext>(0);
}

ANTLRv4Parser::Action_Context* ANTLRv4Parser::PrequelConstructContext::action_() {
  return getRuleContext<ANTLRv4Parser::Action_Context>(0);
}


size_t ANTLRv4Parser::PrequelConstructContext::getRuleIndex() const {
  return ANTLRv4Parser::RulePrequelConstruct;
}

void ANTLRv4Parser::PrequelConstructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrequelConstruct(this);
}

void ANTLRv4Parser::PrequelConstructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrequelConstruct(this);
}


std::any ANTLRv4Parser::PrequelConstructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitPrequelConstruct(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::PrequelConstructContext* ANTLRv4Parser::prequelConstruct() {
  PrequelConstructContext *_localctx = _tracker.createInstance<PrequelConstructContext>(_ctx, getState());
  enterRule(_localctx, 6, ANTLRv4Parser::RulePrequelConstruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::OPTIONS: {
        enterOuterAlt(_localctx, 1);
        setState(153);
        optionsSpec();
        break;
      }

      case ANTLRv4Parser::IMPORT: {
        enterOuterAlt(_localctx, 2);
        setState(154);
        delegateGrammars();
        break;
      }

      case ANTLRv4Parser::TOKENS: {
        enterOuterAlt(_localctx, 3);
        setState(155);
        tokensSpec();
        break;
      }

      case ANTLRv4Parser::CHANNELS: {
        enterOuterAlt(_localctx, 4);
        setState(156);
        channelsSpec();
        break;
      }

      case ANTLRv4Parser::AT: {
        enterOuterAlt(_localctx, 5);
        setState(157);
        action_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionsSpecContext ------------------------------------------------------------------

ANTLRv4Parser::OptionsSpecContext::OptionsSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::OptionsSpecContext::OPTIONS() {
  return getToken(ANTLRv4Parser::OPTIONS, 0);
}

tree::TerminalNode* ANTLRv4Parser::OptionsSpecContext::RBRACE() {
  return getToken(ANTLRv4Parser::RBRACE, 0);
}

std::vector<ANTLRv4Parser::OptionContext *> ANTLRv4Parser::OptionsSpecContext::option() {
  return getRuleContexts<ANTLRv4Parser::OptionContext>();
}

ANTLRv4Parser::OptionContext* ANTLRv4Parser::OptionsSpecContext::option(size_t i) {
  return getRuleContext<ANTLRv4Parser::OptionContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::OptionsSpecContext::SEMI() {
  return getTokens(ANTLRv4Parser::SEMI);
}

tree::TerminalNode* ANTLRv4Parser::OptionsSpecContext::SEMI(size_t i) {
  return getToken(ANTLRv4Parser::SEMI, i);
}


size_t ANTLRv4Parser::OptionsSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleOptionsSpec;
}

void ANTLRv4Parser::OptionsSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionsSpec(this);
}

void ANTLRv4Parser::OptionsSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionsSpec(this);
}


std::any ANTLRv4Parser::OptionsSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitOptionsSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::optionsSpec() {
  OptionsSpecContext *_localctx = _tracker.createInstance<OptionsSpecContext>(_ctx, getState());
  enterRule(_localctx, 8, ANTLRv4Parser::RuleOptionsSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(ANTLRv4Parser::OPTIONS);
    setState(166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::RULE_REF) {
      setState(161);
      option();
      setState(162);
      match(ANTLRv4Parser::SEMI);
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(169);
    match(ANTLRv4Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionContext ------------------------------------------------------------------

ANTLRv4Parser::OptionContext::OptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::OptionContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::OptionContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}

ANTLRv4Parser::OptionValueContext* ANTLRv4Parser::OptionContext::optionValue() {
  return getRuleContext<ANTLRv4Parser::OptionValueContext>(0);
}


size_t ANTLRv4Parser::OptionContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleOption;
}

void ANTLRv4Parser::OptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOption(this);
}

void ANTLRv4Parser::OptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOption(this);
}


std::any ANTLRv4Parser::OptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitOption(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::OptionContext* ANTLRv4Parser::option() {
  OptionContext *_localctx = _tracker.createInstance<OptionContext>(_ctx, getState());
  enterRule(_localctx, 10, ANTLRv4Parser::RuleOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    identifier();
    setState(172);
    match(ANTLRv4Parser::ASSIGN);
    setState(173);
    optionValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionValueContext ------------------------------------------------------------------

ANTLRv4Parser::OptionValueContext::OptionValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::OptionValueContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::OptionValueContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::OptionValueContext::DOT() {
  return getTokens(ANTLRv4Parser::DOT);
}

tree::TerminalNode* ANTLRv4Parser::OptionValueContext::DOT(size_t i) {
  return getToken(ANTLRv4Parser::DOT, i);
}

tree::TerminalNode* ANTLRv4Parser::OptionValueContext::STRING_LITERAL() {
  return getToken(ANTLRv4Parser::STRING_LITERAL, 0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::OptionValueContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::OptionValueContext::INT() {
  return getToken(ANTLRv4Parser::INT, 0);
}


size_t ANTLRv4Parser::OptionValueContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleOptionValue;
}

void ANTLRv4Parser::OptionValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionValue(this);
}

void ANTLRv4Parser::OptionValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionValue(this);
}


std::any ANTLRv4Parser::OptionValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitOptionValue(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::OptionValueContext* ANTLRv4Parser::optionValue() {
  OptionValueContext *_localctx = _tracker.createInstance<OptionValueContext>(_ctx, getState());
  enterRule(_localctx, 12, ANTLRv4Parser::RuleOptionValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 1);
        setState(175);
        identifier();
        setState(180);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ANTLRv4Parser::DOT) {
          setState(176);
          match(ANTLRv4Parser::DOT);
          setState(177);
          identifier();
          setState(182);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ANTLRv4Parser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(183);
        match(ANTLRv4Parser::STRING_LITERAL);
        break;
      }

      case ANTLRv4Parser::BEGIN_ACTION: {
        enterOuterAlt(_localctx, 3);
        setState(184);
        actionBlock();
        break;
      }

      case ANTLRv4Parser::INT: {
        enterOuterAlt(_localctx, 4);
        setState(185);
        match(ANTLRv4Parser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DelegateGrammarsContext ------------------------------------------------------------------

ANTLRv4Parser::DelegateGrammarsContext::DelegateGrammarsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::DelegateGrammarsContext::IMPORT() {
  return getToken(ANTLRv4Parser::IMPORT, 0);
}

std::vector<ANTLRv4Parser::DelegateGrammarContext *> ANTLRv4Parser::DelegateGrammarsContext::delegateGrammar() {
  return getRuleContexts<ANTLRv4Parser::DelegateGrammarContext>();
}

ANTLRv4Parser::DelegateGrammarContext* ANTLRv4Parser::DelegateGrammarsContext::delegateGrammar(size_t i) {
  return getRuleContext<ANTLRv4Parser::DelegateGrammarContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::DelegateGrammarsContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::DelegateGrammarsContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::DelegateGrammarsContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::DelegateGrammarsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleDelegateGrammars;
}

void ANTLRv4Parser::DelegateGrammarsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelegateGrammars(this);
}

void ANTLRv4Parser::DelegateGrammarsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelegateGrammars(this);
}


std::any ANTLRv4Parser::DelegateGrammarsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitDelegateGrammars(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::DelegateGrammarsContext* ANTLRv4Parser::delegateGrammars() {
  DelegateGrammarsContext *_localctx = _tracker.createInstance<DelegateGrammarsContext>(_ctx, getState());
  enterRule(_localctx, 14, ANTLRv4Parser::RuleDelegateGrammars);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(ANTLRv4Parser::IMPORT);
    setState(189);
    delegateGrammar();
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::COMMA) {
      setState(190);
      match(ANTLRv4Parser::COMMA);
      setState(191);
      delegateGrammar();
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(197);
    match(ANTLRv4Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DelegateGrammarContext ------------------------------------------------------------------

ANTLRv4Parser::DelegateGrammarContext::DelegateGrammarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::DelegateGrammarContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::DelegateGrammarContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::DelegateGrammarContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}


size_t ANTLRv4Parser::DelegateGrammarContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleDelegateGrammar;
}

void ANTLRv4Parser::DelegateGrammarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelegateGrammar(this);
}

void ANTLRv4Parser::DelegateGrammarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelegateGrammar(this);
}


std::any ANTLRv4Parser::DelegateGrammarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitDelegateGrammar(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::DelegateGrammarContext* ANTLRv4Parser::delegateGrammar() {
  DelegateGrammarContext *_localctx = _tracker.createInstance<DelegateGrammarContext>(_ctx, getState());
  enterRule(_localctx, 16, ANTLRv4Parser::RuleDelegateGrammar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(204);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(199);
      identifier();
      setState(200);
      match(ANTLRv4Parser::ASSIGN);
      setState(201);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(203);
      identifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TokensSpecContext ------------------------------------------------------------------

ANTLRv4Parser::TokensSpecContext::TokensSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::TokensSpecContext::TOKENS() {
  return getToken(ANTLRv4Parser::TOKENS, 0);
}

tree::TerminalNode* ANTLRv4Parser::TokensSpecContext::RBRACE() {
  return getToken(ANTLRv4Parser::RBRACE, 0);
}

ANTLRv4Parser::IdListContext* ANTLRv4Parser::TokensSpecContext::idList() {
  return getRuleContext<ANTLRv4Parser::IdListContext>(0);
}


size_t ANTLRv4Parser::TokensSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleTokensSpec;
}

void ANTLRv4Parser::TokensSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTokensSpec(this);
}

void ANTLRv4Parser::TokensSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTokensSpec(this);
}


std::any ANTLRv4Parser::TokensSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitTokensSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::TokensSpecContext* ANTLRv4Parser::tokensSpec() {
  TokensSpecContext *_localctx = _tracker.createInstance<TokensSpecContext>(_ctx, getState());
  enterRule(_localctx, 18, ANTLRv4Parser::RuleTokensSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(ANTLRv4Parser::TOKENS);
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::RULE_REF) {
      setState(207);
      idList();
    }
    setState(210);
    match(ANTLRv4Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChannelsSpecContext ------------------------------------------------------------------

ANTLRv4Parser::ChannelsSpecContext::ChannelsSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ChannelsSpecContext::CHANNELS() {
  return getToken(ANTLRv4Parser::CHANNELS, 0);
}

tree::TerminalNode* ANTLRv4Parser::ChannelsSpecContext::RBRACE() {
  return getToken(ANTLRv4Parser::RBRACE, 0);
}

ANTLRv4Parser::IdListContext* ANTLRv4Parser::ChannelsSpecContext::idList() {
  return getRuleContext<ANTLRv4Parser::IdListContext>(0);
}


size_t ANTLRv4Parser::ChannelsSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleChannelsSpec;
}

void ANTLRv4Parser::ChannelsSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChannelsSpec(this);
}

void ANTLRv4Parser::ChannelsSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChannelsSpec(this);
}


std::any ANTLRv4Parser::ChannelsSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitChannelsSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ChannelsSpecContext* ANTLRv4Parser::channelsSpec() {
  ChannelsSpecContext *_localctx = _tracker.createInstance<ChannelsSpecContext>(_ctx, getState());
  enterRule(_localctx, 20, ANTLRv4Parser::RuleChannelsSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(ANTLRv4Parser::CHANNELS);
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::RULE_REF) {
      setState(213);
      idList();
    }
    setState(216);
    match(ANTLRv4Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdListContext ------------------------------------------------------------------

ANTLRv4Parser::IdListContext::IdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::IdListContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::IdListContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::IdListContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::IdListContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::IdListContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleIdList;
}

void ANTLRv4Parser::IdListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdList(this);
}

void ANTLRv4Parser::IdListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdList(this);
}


std::any ANTLRv4Parser::IdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitIdList(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::IdListContext* ANTLRv4Parser::idList() {
  IdListContext *_localctx = _tracker.createInstance<IdListContext>(_ctx, getState());
  enterRule(_localctx, 22, ANTLRv4Parser::RuleIdList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(218);
    identifier();
    setState(223);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(219);
        match(ANTLRv4Parser::COMMA);
        setState(220);
        identifier(); 
      }
      setState(225);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::COMMA) {
      setState(226);
      match(ANTLRv4Parser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Action_Context ------------------------------------------------------------------

ANTLRv4Parser::Action_Context::Action_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::Action_Context::AT() {
  return getToken(ANTLRv4Parser::AT, 0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::Action_Context::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::Action_Context::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}

ANTLRv4Parser::ActionScopeNameContext* ANTLRv4Parser::Action_Context::actionScopeName() {
  return getRuleContext<ANTLRv4Parser::ActionScopeNameContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::Action_Context::COLONCOLON() {
  return getToken(ANTLRv4Parser::COLONCOLON, 0);
}


size_t ANTLRv4Parser::Action_Context::getRuleIndex() const {
  return ANTLRv4Parser::RuleAction_;
}

void ANTLRv4Parser::Action_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAction_(this);
}

void ANTLRv4Parser::Action_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAction_(this);
}


std::any ANTLRv4Parser::Action_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitAction_(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::Action_Context* ANTLRv4Parser::action_() {
  Action_Context *_localctx = _tracker.createInstance<Action_Context>(_ctx, getState());
  enterRule(_localctx, 24, ANTLRv4Parser::RuleAction_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(ANTLRv4Parser::AT);
    setState(233);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(230);
      actionScopeName();
      setState(231);
      match(ANTLRv4Parser::COLONCOLON);
      break;
    }

    default:
      break;
    }
    setState(235);
    identifier();
    setState(236);
    actionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionScopeNameContext ------------------------------------------------------------------

ANTLRv4Parser::ActionScopeNameContext::ActionScopeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::ActionScopeNameContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::ActionScopeNameContext::LEXER() {
  return getToken(ANTLRv4Parser::LEXER, 0);
}

tree::TerminalNode* ANTLRv4Parser::ActionScopeNameContext::PARSER() {
  return getToken(ANTLRv4Parser::PARSER, 0);
}


size_t ANTLRv4Parser::ActionScopeNameContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleActionScopeName;
}

void ANTLRv4Parser::ActionScopeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionScopeName(this);
}

void ANTLRv4Parser::ActionScopeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionScopeName(this);
}


std::any ANTLRv4Parser::ActionScopeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitActionScopeName(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ActionScopeNameContext* ANTLRv4Parser::actionScopeName() {
  ActionScopeNameContext *_localctx = _tracker.createInstance<ActionScopeNameContext>(_ctx, getState());
  enterRule(_localctx, 26, ANTLRv4Parser::RuleActionScopeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(241);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 1);
        setState(238);
        identifier();
        break;
      }

      case ANTLRv4Parser::LEXER: {
        enterOuterAlt(_localctx, 2);
        setState(239);
        match(ANTLRv4Parser::LEXER);
        break;
      }

      case ANTLRv4Parser::PARSER: {
        enterOuterAlt(_localctx, 3);
        setState(240);
        match(ANTLRv4Parser::PARSER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionBlockContext ------------------------------------------------------------------

ANTLRv4Parser::ActionBlockContext::ActionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ActionBlockContext::BEGIN_ACTION() {
  return getToken(ANTLRv4Parser::BEGIN_ACTION, 0);
}

tree::TerminalNode* ANTLRv4Parser::ActionBlockContext::END_ACTION() {
  return getToken(ANTLRv4Parser::END_ACTION, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::ActionBlockContext::ACTION_CONTENT() {
  return getTokens(ANTLRv4Parser::ACTION_CONTENT);
}

tree::TerminalNode* ANTLRv4Parser::ActionBlockContext::ACTION_CONTENT(size_t i) {
  return getToken(ANTLRv4Parser::ACTION_CONTENT, i);
}


size_t ANTLRv4Parser::ActionBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleActionBlock;
}

void ANTLRv4Parser::ActionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionBlock(this);
}

void ANTLRv4Parser::ActionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionBlock(this);
}


std::any ANTLRv4Parser::ActionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitActionBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::actionBlock() {
  ActionBlockContext *_localctx = _tracker.createInstance<ActionBlockContext>(_ctx, getState());
  enterRule(_localctx, 28, ANTLRv4Parser::RuleActionBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(ANTLRv4Parser::BEGIN_ACTION);
    setState(247);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::ACTION_CONTENT) {
      setState(244);
      match(ANTLRv4Parser::ACTION_CONTENT);
      setState(249);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(250);
    match(ANTLRv4Parser::END_ACTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgActionBlockContext ------------------------------------------------------------------

ANTLRv4Parser::ArgActionBlockContext::ArgActionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ArgActionBlockContext::BEGIN_ARGUMENT() {
  return getToken(ANTLRv4Parser::BEGIN_ARGUMENT, 0);
}

tree::TerminalNode* ANTLRv4Parser::ArgActionBlockContext::END_ARGUMENT() {
  return getToken(ANTLRv4Parser::END_ARGUMENT, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::ArgActionBlockContext::ARGUMENT_CONTENT() {
  return getTokens(ANTLRv4Parser::ARGUMENT_CONTENT);
}

tree::TerminalNode* ANTLRv4Parser::ArgActionBlockContext::ARGUMENT_CONTENT(size_t i) {
  return getToken(ANTLRv4Parser::ARGUMENT_CONTENT, i);
}


size_t ANTLRv4Parser::ArgActionBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleArgActionBlock;
}

void ANTLRv4Parser::ArgActionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgActionBlock(this);
}

void ANTLRv4Parser::ArgActionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgActionBlock(this);
}


std::any ANTLRv4Parser::ArgActionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitArgActionBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::argActionBlock() {
  ArgActionBlockContext *_localctx = _tracker.createInstance<ArgActionBlockContext>(_ctx, getState());
  enterRule(_localctx, 30, ANTLRv4Parser::RuleArgActionBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(ANTLRv4Parser::BEGIN_ARGUMENT);
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::ARGUMENT_CONTENT) {
      setState(253);
      match(ANTLRv4Parser::ARGUMENT_CONTENT);
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(259);
    match(ANTLRv4Parser::END_ARGUMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModeSpecContext ------------------------------------------------------------------

ANTLRv4Parser::ModeSpecContext::ModeSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ModeSpecContext::MODE() {
  return getToken(ANTLRv4Parser::MODE, 0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::ModeSpecContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::ModeSpecContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}

std::vector<ANTLRv4Parser::LexerRuleSpecContext *> ANTLRv4Parser::ModeSpecContext::lexerRuleSpec() {
  return getRuleContexts<ANTLRv4Parser::LexerRuleSpecContext>();
}

ANTLRv4Parser::LexerRuleSpecContext* ANTLRv4Parser::ModeSpecContext::lexerRuleSpec(size_t i) {
  return getRuleContext<ANTLRv4Parser::LexerRuleSpecContext>(i);
}


size_t ANTLRv4Parser::ModeSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleModeSpec;
}

void ANTLRv4Parser::ModeSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModeSpec(this);
}

void ANTLRv4Parser::ModeSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModeSpec(this);
}


std::any ANTLRv4Parser::ModeSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitModeSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ModeSpecContext* ANTLRv4Parser::modeSpec() {
  ModeSpecContext *_localctx = _tracker.createInstance<ModeSpecContext>(_ctx, getState());
  enterRule(_localctx, 32, ANTLRv4Parser::RuleModeSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(ANTLRv4Parser::MODE);
    setState(262);
    identifier();
    setState(263);
    match(ANTLRv4Parser::SEMI);
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::FRAGMENT) {
      setState(264);
      lexerRuleSpec();
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulesContext ------------------------------------------------------------------

ANTLRv4Parser::RulesContext::RulesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::RuleSpecContext *> ANTLRv4Parser::RulesContext::ruleSpec() {
  return getRuleContexts<ANTLRv4Parser::RuleSpecContext>();
}

ANTLRv4Parser::RuleSpecContext* ANTLRv4Parser::RulesContext::ruleSpec(size_t i) {
  return getRuleContext<ANTLRv4Parser::RuleSpecContext>(i);
}


size_t ANTLRv4Parser::RulesContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRules;
}

void ANTLRv4Parser::RulesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRules(this);
}

void ANTLRv4Parser::RulesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRules(this);
}


std::any ANTLRv4Parser::RulesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRules(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RulesContext* ANTLRv4Parser::rules() {
  RulesContext *_localctx = _tracker.createInstance<RulesContext>(_ctx, getState());
  enterRule(_localctx, 34, ANTLRv4Parser::RuleRules);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7405574) != 0)) {
      setState(270);
      ruleSpec();
      setState(275);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleSpecContext ------------------------------------------------------------------

ANTLRv4Parser::RuleSpecContext::RuleSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::ParserRuleSpecContext* ANTLRv4Parser::RuleSpecContext::parserRuleSpec() {
  return getRuleContext<ANTLRv4Parser::ParserRuleSpecContext>(0);
}

ANTLRv4Parser::LexerRuleSpecContext* ANTLRv4Parser::RuleSpecContext::lexerRuleSpec() {
  return getRuleContext<ANTLRv4Parser::LexerRuleSpecContext>(0);
}


size_t ANTLRv4Parser::RuleSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleSpec;
}

void ANTLRv4Parser::RuleSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleSpec(this);
}

void ANTLRv4Parser::RuleSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleSpec(this);
}


std::any ANTLRv4Parser::RuleSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleSpecContext* ANTLRv4Parser::ruleSpec() {
  RuleSpecContext *_localctx = _tracker.createInstance<RuleSpecContext>(_ctx, getState());
  enterRule(_localctx, 36, ANTLRv4Parser::RuleRuleSpec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(276);
      parserRuleSpec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(277);
      lexerRuleSpec();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParserRuleSpecContext ------------------------------------------------------------------

ANTLRv4Parser::ParserRuleSpecContext::ParserRuleSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ParserRuleSpecContext::RULE_REF() {
  return getToken(ANTLRv4Parser::RULE_REF, 0);
}

tree::TerminalNode* ANTLRv4Parser::ParserRuleSpecContext::COLON() {
  return getToken(ANTLRv4Parser::COLON, 0);
}

ANTLRv4Parser::RuleBlockContext* ANTLRv4Parser::ParserRuleSpecContext::ruleBlock() {
  return getRuleContext<ANTLRv4Parser::RuleBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::ParserRuleSpecContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}

ANTLRv4Parser::ExceptionGroupContext* ANTLRv4Parser::ParserRuleSpecContext::exceptionGroup() {
  return getRuleContext<ANTLRv4Parser::ExceptionGroupContext>(0);
}

ANTLRv4Parser::RuleModifiersContext* ANTLRv4Parser::ParserRuleSpecContext::ruleModifiers() {
  return getRuleContext<ANTLRv4Parser::RuleModifiersContext>(0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::ParserRuleSpecContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}

ANTLRv4Parser::RuleReturnsContext* ANTLRv4Parser::ParserRuleSpecContext::ruleReturns() {
  return getRuleContext<ANTLRv4Parser::RuleReturnsContext>(0);
}

ANTLRv4Parser::ThrowsSpecContext* ANTLRv4Parser::ParserRuleSpecContext::throwsSpec() {
  return getRuleContext<ANTLRv4Parser::ThrowsSpecContext>(0);
}

ANTLRv4Parser::LocalsSpecContext* ANTLRv4Parser::ParserRuleSpecContext::localsSpec() {
  return getRuleContext<ANTLRv4Parser::LocalsSpecContext>(0);
}

std::vector<ANTLRv4Parser::RulePrequelContext *> ANTLRv4Parser::ParserRuleSpecContext::rulePrequel() {
  return getRuleContexts<ANTLRv4Parser::RulePrequelContext>();
}

ANTLRv4Parser::RulePrequelContext* ANTLRv4Parser::ParserRuleSpecContext::rulePrequel(size_t i) {
  return getRuleContext<ANTLRv4Parser::RulePrequelContext>(i);
}


size_t ANTLRv4Parser::ParserRuleSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleParserRuleSpec;
}

void ANTLRv4Parser::ParserRuleSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParserRuleSpec(this);
}

void ANTLRv4Parser::ParserRuleSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParserRuleSpec(this);
}


std::any ANTLRv4Parser::ParserRuleSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitParserRuleSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ParserRuleSpecContext* ANTLRv4Parser::parserRuleSpec() {
  ParserRuleSpecContext *_localctx = _tracker.createInstance<ParserRuleSpecContext>(_ctx, getState());
  enterRule(_localctx, 38, ANTLRv4Parser::RuleParserRuleSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7405568) != 0)) {
      setState(280);
      ruleModifiers();
    }
    setState(283);
    match(ANTLRv4Parser::RULE_REF);
    setState(285);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::BEGIN_ARGUMENT) {
      setState(284);
      argActionBlock();
    }
    setState(288);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::RETURNS) {
      setState(287);
      ruleReturns();
    }
    setState(291);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::THROWS) {
      setState(290);
      throwsSpec();
    }
    setState(294);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::LOCALS) {
      setState(293);
      localsSpec();
    }
    setState(299);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OPTIONS

    || _la == ANTLRv4Parser::AT) {
      setState(296);
      rulePrequel();
      setState(301);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(302);
    match(ANTLRv4Parser::COLON);
    setState(303);
    ruleBlock();
    setState(304);
    match(ANTLRv4Parser::SEMI);
    setState(305);
    exceptionGroup();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionGroupContext ------------------------------------------------------------------

ANTLRv4Parser::ExceptionGroupContext::ExceptionGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::ExceptionHandlerContext *> ANTLRv4Parser::ExceptionGroupContext::exceptionHandler() {
  return getRuleContexts<ANTLRv4Parser::ExceptionHandlerContext>();
}

ANTLRv4Parser::ExceptionHandlerContext* ANTLRv4Parser::ExceptionGroupContext::exceptionHandler(size_t i) {
  return getRuleContext<ANTLRv4Parser::ExceptionHandlerContext>(i);
}

ANTLRv4Parser::FinallyClauseContext* ANTLRv4Parser::ExceptionGroupContext::finallyClause() {
  return getRuleContext<ANTLRv4Parser::FinallyClauseContext>(0);
}


size_t ANTLRv4Parser::ExceptionGroupContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleExceptionGroup;
}

void ANTLRv4Parser::ExceptionGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionGroup(this);
}

void ANTLRv4Parser::ExceptionGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionGroup(this);
}


std::any ANTLRv4Parser::ExceptionGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitExceptionGroup(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ExceptionGroupContext* ANTLRv4Parser::exceptionGroup() {
  ExceptionGroupContext *_localctx = _tracker.createInstance<ExceptionGroupContext>(_ctx, getState());
  enterRule(_localctx, 40, ANTLRv4Parser::RuleExceptionGroup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::CATCH) {
      setState(307);
      exceptionHandler();
      setState(312);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::FINALLY) {
      setState(313);
      finallyClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionHandlerContext ------------------------------------------------------------------

ANTLRv4Parser::ExceptionHandlerContext::ExceptionHandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ExceptionHandlerContext::CATCH() {
  return getToken(ANTLRv4Parser::CATCH, 0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::ExceptionHandlerContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::ExceptionHandlerContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}


size_t ANTLRv4Parser::ExceptionHandlerContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleExceptionHandler;
}

void ANTLRv4Parser::ExceptionHandlerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionHandler(this);
}

void ANTLRv4Parser::ExceptionHandlerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionHandler(this);
}


std::any ANTLRv4Parser::ExceptionHandlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitExceptionHandler(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ExceptionHandlerContext* ANTLRv4Parser::exceptionHandler() {
  ExceptionHandlerContext *_localctx = _tracker.createInstance<ExceptionHandlerContext>(_ctx, getState());
  enterRule(_localctx, 42, ANTLRv4Parser::RuleExceptionHandler);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(ANTLRv4Parser::CATCH);
    setState(317);
    argActionBlock();
    setState(318);
    actionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinallyClauseContext ------------------------------------------------------------------

ANTLRv4Parser::FinallyClauseContext::FinallyClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::FinallyClauseContext::FINALLY() {
  return getToken(ANTLRv4Parser::FINALLY, 0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::FinallyClauseContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}


size_t ANTLRv4Parser::FinallyClauseContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleFinallyClause;
}

void ANTLRv4Parser::FinallyClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinallyClause(this);
}

void ANTLRv4Parser::FinallyClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinallyClause(this);
}


std::any ANTLRv4Parser::FinallyClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitFinallyClause(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::FinallyClauseContext* ANTLRv4Parser::finallyClause() {
  FinallyClauseContext *_localctx = _tracker.createInstance<FinallyClauseContext>(_ctx, getState());
  enterRule(_localctx, 44, ANTLRv4Parser::RuleFinallyClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    match(ANTLRv4Parser::FINALLY);
    setState(321);
    actionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulePrequelContext ------------------------------------------------------------------

ANTLRv4Parser::RulePrequelContext::RulePrequelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::RulePrequelContext::optionsSpec() {
  return getRuleContext<ANTLRv4Parser::OptionsSpecContext>(0);
}

ANTLRv4Parser::RuleActionContext* ANTLRv4Parser::RulePrequelContext::ruleAction() {
  return getRuleContext<ANTLRv4Parser::RuleActionContext>(0);
}


size_t ANTLRv4Parser::RulePrequelContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRulePrequel;
}

void ANTLRv4Parser::RulePrequelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRulePrequel(this);
}

void ANTLRv4Parser::RulePrequelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRulePrequel(this);
}


std::any ANTLRv4Parser::RulePrequelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRulePrequel(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RulePrequelContext* ANTLRv4Parser::rulePrequel() {
  RulePrequelContext *_localctx = _tracker.createInstance<RulePrequelContext>(_ctx, getState());
  enterRule(_localctx, 46, ANTLRv4Parser::RuleRulePrequel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::OPTIONS: {
        enterOuterAlt(_localctx, 1);
        setState(323);
        optionsSpec();
        break;
      }

      case ANTLRv4Parser::AT: {
        enterOuterAlt(_localctx, 2);
        setState(324);
        ruleAction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleReturnsContext ------------------------------------------------------------------

ANTLRv4Parser::RuleReturnsContext::RuleReturnsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::RuleReturnsContext::RETURNS() {
  return getToken(ANTLRv4Parser::RETURNS, 0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::RuleReturnsContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}


size_t ANTLRv4Parser::RuleReturnsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleReturns;
}

void ANTLRv4Parser::RuleReturnsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleReturns(this);
}

void ANTLRv4Parser::RuleReturnsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleReturns(this);
}


std::any ANTLRv4Parser::RuleReturnsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleReturns(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleReturnsContext* ANTLRv4Parser::ruleReturns() {
  RuleReturnsContext *_localctx = _tracker.createInstance<RuleReturnsContext>(_ctx, getState());
  enterRule(_localctx, 48, ANTLRv4Parser::RuleRuleReturns);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(ANTLRv4Parser::RETURNS);
    setState(328);
    argActionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowsSpecContext ------------------------------------------------------------------

ANTLRv4Parser::ThrowsSpecContext::ThrowsSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ThrowsSpecContext::THROWS() {
  return getToken(ANTLRv4Parser::THROWS, 0);
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::ThrowsSpecContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::ThrowsSpecContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::ThrowsSpecContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::ThrowsSpecContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::ThrowsSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleThrowsSpec;
}

void ANTLRv4Parser::ThrowsSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowsSpec(this);
}

void ANTLRv4Parser::ThrowsSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowsSpec(this);
}


std::any ANTLRv4Parser::ThrowsSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitThrowsSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ThrowsSpecContext* ANTLRv4Parser::throwsSpec() {
  ThrowsSpecContext *_localctx = _tracker.createInstance<ThrowsSpecContext>(_ctx, getState());
  enterRule(_localctx, 50, ANTLRv4Parser::RuleThrowsSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(ANTLRv4Parser::THROWS);
    setState(331);
    identifier();
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::COMMA) {
      setState(332);
      match(ANTLRv4Parser::COMMA);
      setState(333);
      identifier();
      setState(338);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalsSpecContext ------------------------------------------------------------------

ANTLRv4Parser::LocalsSpecContext::LocalsSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::LocalsSpecContext::LOCALS() {
  return getToken(ANTLRv4Parser::LOCALS, 0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::LocalsSpecContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}


size_t ANTLRv4Parser::LocalsSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLocalsSpec;
}

void ANTLRv4Parser::LocalsSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalsSpec(this);
}

void ANTLRv4Parser::LocalsSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalsSpec(this);
}


std::any ANTLRv4Parser::LocalsSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLocalsSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LocalsSpecContext* ANTLRv4Parser::localsSpec() {
  LocalsSpecContext *_localctx = _tracker.createInstance<LocalsSpecContext>(_ctx, getState());
  enterRule(_localctx, 52, ANTLRv4Parser::RuleLocalsSpec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(ANTLRv4Parser::LOCALS);
    setState(340);
    argActionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleActionContext ------------------------------------------------------------------

ANTLRv4Parser::RuleActionContext::RuleActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::RuleActionContext::AT() {
  return getToken(ANTLRv4Parser::AT, 0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::RuleActionContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::RuleActionContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}


size_t ANTLRv4Parser::RuleActionContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleAction;
}

void ANTLRv4Parser::RuleActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleAction(this);
}

void ANTLRv4Parser::RuleActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleAction(this);
}


std::any ANTLRv4Parser::RuleActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleAction(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleActionContext* ANTLRv4Parser::ruleAction() {
  RuleActionContext *_localctx = _tracker.createInstance<RuleActionContext>(_ctx, getState());
  enterRule(_localctx, 54, ANTLRv4Parser::RuleRuleAction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(ANTLRv4Parser::AT);
    setState(343);
    identifier();
    setState(344);
    actionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleModifiersContext ------------------------------------------------------------------

ANTLRv4Parser::RuleModifiersContext::RuleModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::RuleModifierContext *> ANTLRv4Parser::RuleModifiersContext::ruleModifier() {
  return getRuleContexts<ANTLRv4Parser::RuleModifierContext>();
}

ANTLRv4Parser::RuleModifierContext* ANTLRv4Parser::RuleModifiersContext::ruleModifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::RuleModifierContext>(i);
}


size_t ANTLRv4Parser::RuleModifiersContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleModifiers;
}

void ANTLRv4Parser::RuleModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleModifiers(this);
}

void ANTLRv4Parser::RuleModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleModifiers(this);
}


std::any ANTLRv4Parser::RuleModifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleModifiers(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleModifiersContext* ANTLRv4Parser::ruleModifiers() {
  RuleModifiersContext *_localctx = _tracker.createInstance<RuleModifiersContext>(_ctx, getState());
  enterRule(_localctx, 56, ANTLRv4Parser::RuleRuleModifiers);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(346);
      ruleModifier();
      setState(349); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7405568) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleModifierContext ------------------------------------------------------------------

ANTLRv4Parser::RuleModifierContext::RuleModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::RuleModifierContext::PUBLIC() {
  return getToken(ANTLRv4Parser::PUBLIC, 0);
}

tree::TerminalNode* ANTLRv4Parser::RuleModifierContext::PRIVATE() {
  return getToken(ANTLRv4Parser::PRIVATE, 0);
}

tree::TerminalNode* ANTLRv4Parser::RuleModifierContext::PROTECTED() {
  return getToken(ANTLRv4Parser::PROTECTED, 0);
}

tree::TerminalNode* ANTLRv4Parser::RuleModifierContext::FRAGMENT() {
  return getToken(ANTLRv4Parser::FRAGMENT, 0);
}


size_t ANTLRv4Parser::RuleModifierContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleModifier;
}

void ANTLRv4Parser::RuleModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleModifier(this);
}

void ANTLRv4Parser::RuleModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleModifier(this);
}


std::any ANTLRv4Parser::RuleModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleModifier(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleModifierContext* ANTLRv4Parser::ruleModifier() {
  RuleModifierContext *_localctx = _tracker.createInstance<RuleModifierContext>(_ctx, getState());
  enterRule(_localctx, 58, ANTLRv4Parser::RuleRuleModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7405568) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleBlockContext ------------------------------------------------------------------

ANTLRv4Parser::RuleBlockContext::RuleBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::RuleAltListContext* ANTLRv4Parser::RuleBlockContext::ruleAltList() {
  return getRuleContext<ANTLRv4Parser::RuleAltListContext>(0);
}


size_t ANTLRv4Parser::RuleBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleBlock;
}

void ANTLRv4Parser::RuleBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleBlock(this);
}

void ANTLRv4Parser::RuleBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleBlock(this);
}


std::any ANTLRv4Parser::RuleBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleBlockContext* ANTLRv4Parser::ruleBlock() {
  RuleBlockContext *_localctx = _tracker.createInstance<RuleBlockContext>(_ctx, getState());
  enterRule(_localctx, 60, ANTLRv4Parser::RuleRuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    ruleAltList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleAltListContext ------------------------------------------------------------------

ANTLRv4Parser::RuleAltListContext::RuleAltListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::LabeledAltContext *> ANTLRv4Parser::RuleAltListContext::labeledAlt() {
  return getRuleContexts<ANTLRv4Parser::LabeledAltContext>();
}

ANTLRv4Parser::LabeledAltContext* ANTLRv4Parser::RuleAltListContext::labeledAlt(size_t i) {
  return getRuleContext<ANTLRv4Parser::LabeledAltContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::RuleAltListContext::OR() {
  return getTokens(ANTLRv4Parser::OR);
}

tree::TerminalNode* ANTLRv4Parser::RuleAltListContext::OR(size_t i) {
  return getToken(ANTLRv4Parser::OR, i);
}


size_t ANTLRv4Parser::RuleAltListContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleAltList;
}

void ANTLRv4Parser::RuleAltListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleAltList(this);
}

void ANTLRv4Parser::RuleAltListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleAltList(this);
}


std::any ANTLRv4Parser::RuleAltListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleAltList(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RuleAltListContext* ANTLRv4Parser::ruleAltList() {
  RuleAltListContext *_localctx = _tracker.createInstance<RuleAltListContext>(_ctx, getState());
  enterRule(_localctx, 62, ANTLRv4Parser::RuleRuleAltList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(355);
    labeledAlt();
    setState(360);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OR) {
      setState(356);
      match(ANTLRv4Parser::OR);
      setState(357);
      labeledAlt();
      setState(362);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledAltContext ------------------------------------------------------------------

ANTLRv4Parser::LabeledAltContext::LabeledAltContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::AlternativeContext* ANTLRv4Parser::LabeledAltContext::alternative() {
  return getRuleContext<ANTLRv4Parser::AlternativeContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LabeledAltContext::POUND() {
  return getToken(ANTLRv4Parser::POUND, 0);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LabeledAltContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}


size_t ANTLRv4Parser::LabeledAltContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLabeledAlt;
}

void ANTLRv4Parser::LabeledAltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledAlt(this);
}

void ANTLRv4Parser::LabeledAltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledAlt(this);
}


std::any ANTLRv4Parser::LabeledAltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLabeledAlt(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LabeledAltContext* ANTLRv4Parser::labeledAlt() {
  LabeledAltContext *_localctx = _tracker.createInstance<LabeledAltContext>(_ctx, getState());
  enterRule(_localctx, 64, ANTLRv4Parser::RuleLabeledAlt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    alternative();
    setState(366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::POUND) {
      setState(364);
      match(ANTLRv4Parser::POUND);
      setState(365);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerRuleSpecContext ------------------------------------------------------------------

ANTLRv4Parser::LexerRuleSpecContext::LexerRuleSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::LexerRuleSpecContext::TOKEN_REF() {
  return getToken(ANTLRv4Parser::TOKEN_REF, 0);
}

tree::TerminalNode* ANTLRv4Parser::LexerRuleSpecContext::COLON() {
  return getToken(ANTLRv4Parser::COLON, 0);
}

ANTLRv4Parser::LexerRuleBlockContext* ANTLRv4Parser::LexerRuleSpecContext::lexerRuleBlock() {
  return getRuleContext<ANTLRv4Parser::LexerRuleBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerRuleSpecContext::SEMI() {
  return getToken(ANTLRv4Parser::SEMI, 0);
}

tree::TerminalNode* ANTLRv4Parser::LexerRuleSpecContext::FRAGMENT() {
  return getToken(ANTLRv4Parser::FRAGMENT, 0);
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::LexerRuleSpecContext::optionsSpec() {
  return getRuleContext<ANTLRv4Parser::OptionsSpecContext>(0);
}


size_t ANTLRv4Parser::LexerRuleSpecContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerRuleSpec;
}

void ANTLRv4Parser::LexerRuleSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerRuleSpec(this);
}

void ANTLRv4Parser::LexerRuleSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerRuleSpec(this);
}


std::any ANTLRv4Parser::LexerRuleSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerRuleSpec(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerRuleSpecContext* ANTLRv4Parser::lexerRuleSpec() {
  LexerRuleSpecContext *_localctx = _tracker.createInstance<LexerRuleSpecContext>(_ctx, getState());
  enterRule(_localctx, 66, ANTLRv4Parser::RuleLexerRuleSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::FRAGMENT) {
      setState(368);
      match(ANTLRv4Parser::FRAGMENT);
    }
    setState(371);
    match(ANTLRv4Parser::TOKEN_REF);
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::OPTIONS) {
      setState(372);
      optionsSpec();
    }
    setState(375);
    match(ANTLRv4Parser::COLON);
    setState(376);
    lexerRuleBlock();
    setState(377);
    match(ANTLRv4Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerRuleBlockContext ------------------------------------------------------------------

ANTLRv4Parser::LexerRuleBlockContext::LexerRuleBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LexerAltListContext* ANTLRv4Parser::LexerRuleBlockContext::lexerAltList() {
  return getRuleContext<ANTLRv4Parser::LexerAltListContext>(0);
}


size_t ANTLRv4Parser::LexerRuleBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerRuleBlock;
}

void ANTLRv4Parser::LexerRuleBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerRuleBlock(this);
}

void ANTLRv4Parser::LexerRuleBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerRuleBlock(this);
}


std::any ANTLRv4Parser::LexerRuleBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerRuleBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerRuleBlockContext* ANTLRv4Parser::lexerRuleBlock() {
  LexerRuleBlockContext *_localctx = _tracker.createInstance<LexerRuleBlockContext>(_ctx, getState());
  enterRule(_localctx, 68, ANTLRv4Parser::RuleLexerRuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    lexerAltList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerAltListContext ------------------------------------------------------------------

ANTLRv4Parser::LexerAltListContext::LexerAltListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::LexerAltContext *> ANTLRv4Parser::LexerAltListContext::lexerAlt() {
  return getRuleContexts<ANTLRv4Parser::LexerAltContext>();
}

ANTLRv4Parser::LexerAltContext* ANTLRv4Parser::LexerAltListContext::lexerAlt(size_t i) {
  return getRuleContext<ANTLRv4Parser::LexerAltContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::LexerAltListContext::OR() {
  return getTokens(ANTLRv4Parser::OR);
}

tree::TerminalNode* ANTLRv4Parser::LexerAltListContext::OR(size_t i) {
  return getToken(ANTLRv4Parser::OR, i);
}


size_t ANTLRv4Parser::LexerAltListContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerAltList;
}

void ANTLRv4Parser::LexerAltListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerAltList(this);
}

void ANTLRv4Parser::LexerAltListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerAltList(this);
}


std::any ANTLRv4Parser::LexerAltListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerAltList(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerAltListContext* ANTLRv4Parser::lexerAltList() {
  LexerAltListContext *_localctx = _tracker.createInstance<LexerAltListContext>(_ctx, getState());
  enterRule(_localctx, 70, ANTLRv4Parser::RuleLexerAltList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    lexerAlt();
    setState(386);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OR) {
      setState(382);
      match(ANTLRv4Parser::OR);
      setState(383);
      lexerAlt();
      setState(388);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerAltContext ------------------------------------------------------------------

ANTLRv4Parser::LexerAltContext::LexerAltContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LexerElementsContext* ANTLRv4Parser::LexerAltContext::lexerElements() {
  return getRuleContext<ANTLRv4Parser::LexerElementsContext>(0);
}

ANTLRv4Parser::LexerCommandsContext* ANTLRv4Parser::LexerAltContext::lexerCommands() {
  return getRuleContext<ANTLRv4Parser::LexerCommandsContext>(0);
}


size_t ANTLRv4Parser::LexerAltContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerAlt;
}

void ANTLRv4Parser::LexerAltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerAlt(this);
}

void ANTLRv4Parser::LexerAltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerAlt(this);
}


std::any ANTLRv4Parser::LexerAltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerAlt(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerAltContext* ANTLRv4Parser::lexerAlt() {
  LexerAltContext *_localctx = _tracker.createInstance<LexerAltContext>(_ctx, getState());
  enterRule(_localctx, 72, ANTLRv4Parser::RuleLexerAlt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(394);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(389);
      lexerElements();
      setState(391);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::RARROW) {
        setState(390);
        lexerCommands();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerElementsContext ------------------------------------------------------------------

ANTLRv4Parser::LexerElementsContext::LexerElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::LexerElementContext *> ANTLRv4Parser::LexerElementsContext::lexerElement() {
  return getRuleContexts<ANTLRv4Parser::LexerElementContext>();
}

ANTLRv4Parser::LexerElementContext* ANTLRv4Parser::LexerElementsContext::lexerElement(size_t i) {
  return getRuleContext<ANTLRv4Parser::LexerElementContext>(i);
}


size_t ANTLRv4Parser::LexerElementsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerElements;
}

void ANTLRv4Parser::LexerElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerElements(this);
}

void ANTLRv4Parser::LexerElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerElements(this);
}


std::any ANTLRv4Parser::LexerElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerElements(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerElementsContext* ANTLRv4Parser::lexerElements() {
  LexerElementsContext *_localctx = _tracker.createInstance<LexerElementsContext>(_ctx, getState());
  enterRule(_localctx, 74, ANTLRv4Parser::RuleLexerElements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(402);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::LEXER_CHAR_SET:
      case ANTLRv4Parser::STRING_LITERAL:
      case ANTLRv4Parser::BEGIN_ACTION:
      case ANTLRv4Parser::LPAREN:
      case ANTLRv4Parser::DOT:
      case ANTLRv4Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(397); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(396);
          lexerElement();
          setState(399); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 2533283380332810) != 0));
        break;
      }

      case ANTLRv4Parser::SEMI:
      case ANTLRv4Parser::RPAREN:
      case ANTLRv4Parser::RARROW:
      case ANTLRv4Parser::OR: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerElementContext ------------------------------------------------------------------

ANTLRv4Parser::LexerElementContext::LexerElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LexerAtomContext* ANTLRv4Parser::LexerElementContext::lexerAtom() {
  return getRuleContext<ANTLRv4Parser::LexerAtomContext>(0);
}

ANTLRv4Parser::EbnfSuffixContext* ANTLRv4Parser::LexerElementContext::ebnfSuffix() {
  return getRuleContext<ANTLRv4Parser::EbnfSuffixContext>(0);
}

ANTLRv4Parser::LexerBlockContext* ANTLRv4Parser::LexerElementContext::lexerBlock() {
  return getRuleContext<ANTLRv4Parser::LexerBlockContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::LexerElementContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerElementContext::QUESTION() {
  return getToken(ANTLRv4Parser::QUESTION, 0);
}


size_t ANTLRv4Parser::LexerElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerElement;
}

void ANTLRv4Parser::LexerElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerElement(this);
}

void ANTLRv4Parser::LexerElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerElement(this);
}


std::any ANTLRv4Parser::LexerElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerElementContext* ANTLRv4Parser::lexerElement() {
  LexerElementContext *_localctx = _tracker.createInstance<LexerElementContext>(_ctx, getState());
  enterRule(_localctx, 76, ANTLRv4Parser::RuleLexerElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(416);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::LEXER_CHAR_SET:
      case ANTLRv4Parser::STRING_LITERAL:
      case ANTLRv4Parser::DOT:
      case ANTLRv4Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(404);
        lexerAtom();
        setState(406);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 24189255811072) != 0)) {
          setState(405);
          ebnfSuffix();
        }
        break;
      }

      case ANTLRv4Parser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(408);
        lexerBlock();
        setState(410);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 24189255811072) != 0)) {
          setState(409);
          ebnfSuffix();
        }
        break;
      }

      case ANTLRv4Parser::BEGIN_ACTION: {
        enterOuterAlt(_localctx, 3);
        setState(412);
        actionBlock();
        setState(414);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::QUESTION) {
          setState(413);
          match(ANTLRv4Parser::QUESTION);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerBlockContext ------------------------------------------------------------------

ANTLRv4Parser::LexerBlockContext::LexerBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::LexerBlockContext::LPAREN() {
  return getToken(ANTLRv4Parser::LPAREN, 0);
}

ANTLRv4Parser::LexerAltListContext* ANTLRv4Parser::LexerBlockContext::lexerAltList() {
  return getRuleContext<ANTLRv4Parser::LexerAltListContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerBlockContext::RPAREN() {
  return getToken(ANTLRv4Parser::RPAREN, 0);
}


size_t ANTLRv4Parser::LexerBlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerBlock;
}

void ANTLRv4Parser::LexerBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerBlock(this);
}

void ANTLRv4Parser::LexerBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerBlock(this);
}


std::any ANTLRv4Parser::LexerBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerBlockContext* ANTLRv4Parser::lexerBlock() {
  LexerBlockContext *_localctx = _tracker.createInstance<LexerBlockContext>(_ctx, getState());
  enterRule(_localctx, 78, ANTLRv4Parser::RuleLexerBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    match(ANTLRv4Parser::LPAREN);
    setState(419);
    lexerAltList();
    setState(420);
    match(ANTLRv4Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerCommandsContext ------------------------------------------------------------------

ANTLRv4Parser::LexerCommandsContext::LexerCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandsContext::RARROW() {
  return getToken(ANTLRv4Parser::RARROW, 0);
}

std::vector<ANTLRv4Parser::LexerCommandContext *> ANTLRv4Parser::LexerCommandsContext::lexerCommand() {
  return getRuleContexts<ANTLRv4Parser::LexerCommandContext>();
}

ANTLRv4Parser::LexerCommandContext* ANTLRv4Parser::LexerCommandsContext::lexerCommand(size_t i) {
  return getRuleContext<ANTLRv4Parser::LexerCommandContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::LexerCommandsContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandsContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::LexerCommandsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerCommands;
}

void ANTLRv4Parser::LexerCommandsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerCommands(this);
}

void ANTLRv4Parser::LexerCommandsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerCommands(this);
}


std::any ANTLRv4Parser::LexerCommandsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerCommands(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerCommandsContext* ANTLRv4Parser::lexerCommands() {
  LexerCommandsContext *_localctx = _tracker.createInstance<LexerCommandsContext>(_ctx, getState());
  enterRule(_localctx, 80, ANTLRv4Parser::RuleLexerCommands);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    match(ANTLRv4Parser::RARROW);
    setState(423);
    lexerCommand();
    setState(428);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::COMMA) {
      setState(424);
      match(ANTLRv4Parser::COMMA);
      setState(425);
      lexerCommand();
      setState(430);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerCommandContext ------------------------------------------------------------------

ANTLRv4Parser::LexerCommandContext::LexerCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LexerCommandNameContext* ANTLRv4Parser::LexerCommandContext::lexerCommandName() {
  return getRuleContext<ANTLRv4Parser::LexerCommandNameContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandContext::LPAREN() {
  return getToken(ANTLRv4Parser::LPAREN, 0);
}

ANTLRv4Parser::LexerCommandExprContext* ANTLRv4Parser::LexerCommandContext::lexerCommandExpr() {
  return getRuleContext<ANTLRv4Parser::LexerCommandExprContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandContext::RPAREN() {
  return getToken(ANTLRv4Parser::RPAREN, 0);
}


size_t ANTLRv4Parser::LexerCommandContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerCommand;
}

void ANTLRv4Parser::LexerCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerCommand(this);
}

void ANTLRv4Parser::LexerCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerCommand(this);
}


std::any ANTLRv4Parser::LexerCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerCommand(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerCommandContext* ANTLRv4Parser::lexerCommand() {
  LexerCommandContext *_localctx = _tracker.createInstance<LexerCommandContext>(_ctx, getState());
  enterRule(_localctx, 82, ANTLRv4Parser::RuleLexerCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(431);
      lexerCommandName();
      setState(432);
      match(ANTLRv4Parser::LPAREN);
      setState(433);
      lexerCommandExpr();
      setState(434);
      match(ANTLRv4Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(436);
      lexerCommandName();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerCommandNameContext ------------------------------------------------------------------

ANTLRv4Parser::LexerCommandNameContext::LexerCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LexerCommandNameContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandNameContext::MODE() {
  return getToken(ANTLRv4Parser::MODE, 0);
}


size_t ANTLRv4Parser::LexerCommandNameContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerCommandName;
}

void ANTLRv4Parser::LexerCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerCommandName(this);
}

void ANTLRv4Parser::LexerCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerCommandName(this);
}


std::any ANTLRv4Parser::LexerCommandNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerCommandName(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerCommandNameContext* ANTLRv4Parser::lexerCommandName() {
  LexerCommandNameContext *_localctx = _tracker.createInstance<LexerCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 84, ANTLRv4Parser::RuleLexerCommandName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(441);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 1);
        setState(439);
        identifier();
        break;
      }

      case ANTLRv4Parser::MODE: {
        enterOuterAlt(_localctx, 2);
        setState(440);
        match(ANTLRv4Parser::MODE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerCommandExprContext ------------------------------------------------------------------

ANTLRv4Parser::LexerCommandExprContext::LexerCommandExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LexerCommandExprContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerCommandExprContext::INT() {
  return getToken(ANTLRv4Parser::INT, 0);
}


size_t ANTLRv4Parser::LexerCommandExprContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerCommandExpr;
}

void ANTLRv4Parser::LexerCommandExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerCommandExpr(this);
}

void ANTLRv4Parser::LexerCommandExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerCommandExpr(this);
}


std::any ANTLRv4Parser::LexerCommandExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerCommandExpr(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerCommandExprContext* ANTLRv4Parser::lexerCommandExpr() {
  LexerCommandExprContext *_localctx = _tracker.createInstance<LexerCommandExprContext>(_ctx, getState());
  enterRule(_localctx, 86, ANTLRv4Parser::RuleLexerCommandExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 1);
        setState(443);
        identifier();
        break;
      }

      case ANTLRv4Parser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(444);
        match(ANTLRv4Parser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AltListContext ------------------------------------------------------------------

ANTLRv4Parser::AltListContext::AltListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::AlternativeContext *> ANTLRv4Parser::AltListContext::alternative() {
  return getRuleContexts<ANTLRv4Parser::AlternativeContext>();
}

ANTLRv4Parser::AlternativeContext* ANTLRv4Parser::AltListContext::alternative(size_t i) {
  return getRuleContext<ANTLRv4Parser::AlternativeContext>(i);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::AltListContext::OR() {
  return getTokens(ANTLRv4Parser::OR);
}

tree::TerminalNode* ANTLRv4Parser::AltListContext::OR(size_t i) {
  return getToken(ANTLRv4Parser::OR, i);
}


size_t ANTLRv4Parser::AltListContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleAltList;
}

void ANTLRv4Parser::AltListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAltList(this);
}

void ANTLRv4Parser::AltListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAltList(this);
}


std::any ANTLRv4Parser::AltListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitAltList(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::AltListContext* ANTLRv4Parser::altList() {
  AltListContext *_localctx = _tracker.createInstance<AltListContext>(_ctx, getState());
  enterRule(_localctx, 88, ANTLRv4Parser::RuleAltList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    alternative();
    setState(452);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OR) {
      setState(448);
      match(ANTLRv4Parser::OR);
      setState(449);
      alternative();
      setState(454);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlternativeContext ------------------------------------------------------------------

ANTLRv4Parser::AlternativeContext::AlternativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::AlternativeContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}

std::vector<ANTLRv4Parser::ElementContext *> ANTLRv4Parser::AlternativeContext::element() {
  return getRuleContexts<ANTLRv4Parser::ElementContext>();
}

ANTLRv4Parser::ElementContext* ANTLRv4Parser::AlternativeContext::element(size_t i) {
  return getRuleContext<ANTLRv4Parser::ElementContext>(i);
}


size_t ANTLRv4Parser::AlternativeContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleAlternative;
}

void ANTLRv4Parser::AlternativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlternative(this);
}

void ANTLRv4Parser::AlternativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlternative(this);
}


std::any ANTLRv4Parser::AlternativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitAlternative(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::AlternativeContext* ANTLRv4Parser::alternative() {
  AlternativeContext *_localctx = _tracker.createInstance<AlternativeContext>(_ctx, getState());
  enterRule(_localctx, 90, ANTLRv4Parser::RuleAlternative);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(464);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF:
      case ANTLRv4Parser::STRING_LITERAL:
      case ANTLRv4Parser::BEGIN_ACTION:
      case ANTLRv4Parser::LPAREN:
      case ANTLRv4Parser::LT:
      case ANTLRv4Parser::DOT:
      case ANTLRv4Parser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(456);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::LT) {
          setState(455);
          elementOptions();
        }
        setState(459); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(458);
          element();
          setState(461); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 2533283380332806) != 0));
        break;
      }

      case ANTLRv4Parser::SEMI:
      case ANTLRv4Parser::RPAREN:
      case ANTLRv4Parser::OR:
      case ANTLRv4Parser::POUND: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

ANTLRv4Parser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::LabeledElementContext* ANTLRv4Parser::ElementContext::labeledElement() {
  return getRuleContext<ANTLRv4Parser::LabeledElementContext>(0);
}

ANTLRv4Parser::EbnfSuffixContext* ANTLRv4Parser::ElementContext::ebnfSuffix() {
  return getRuleContext<ANTLRv4Parser::EbnfSuffixContext>(0);
}

ANTLRv4Parser::AtomContext* ANTLRv4Parser::ElementContext::atom() {
  return getRuleContext<ANTLRv4Parser::AtomContext>(0);
}

ANTLRv4Parser::EbnfContext* ANTLRv4Parser::ElementContext::ebnf() {
  return getRuleContext<ANTLRv4Parser::EbnfContext>(0);
}

ANTLRv4Parser::ActionBlockContext* ANTLRv4Parser::ElementContext::actionBlock() {
  return getRuleContext<ANTLRv4Parser::ActionBlockContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::ElementContext::QUESTION() {
  return getToken(ANTLRv4Parser::QUESTION, 0);
}


size_t ANTLRv4Parser::ElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleElement;
}

void ANTLRv4Parser::ElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement(this);
}

void ANTLRv4Parser::ElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement(this);
}


std::any ANTLRv4Parser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ElementContext* ANTLRv4Parser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 92, ANTLRv4Parser::RuleElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(481);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(466);
      labeledElement();
      setState(469);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ANTLRv4Parser::QUESTION:
        case ANTLRv4Parser::STAR:
        case ANTLRv4Parser::PLUS: {
          setState(467);
          ebnfSuffix();
          break;
        }

        case ANTLRv4Parser::TOKEN_REF:
        case ANTLRv4Parser::RULE_REF:
        case ANTLRv4Parser::STRING_LITERAL:
        case ANTLRv4Parser::BEGIN_ACTION:
        case ANTLRv4Parser::SEMI:
        case ANTLRv4Parser::LPAREN:
        case ANTLRv4Parser::RPAREN:
        case ANTLRv4Parser::OR:
        case ANTLRv4Parser::DOT:
        case ANTLRv4Parser::POUND:
        case ANTLRv4Parser::NOT: {
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(471);
      atom();
      setState(474);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ANTLRv4Parser::QUESTION:
        case ANTLRv4Parser::STAR:
        case ANTLRv4Parser::PLUS: {
          setState(472);
          ebnfSuffix();
          break;
        }

        case ANTLRv4Parser::TOKEN_REF:
        case ANTLRv4Parser::RULE_REF:
        case ANTLRv4Parser::STRING_LITERAL:
        case ANTLRv4Parser::BEGIN_ACTION:
        case ANTLRv4Parser::SEMI:
        case ANTLRv4Parser::LPAREN:
        case ANTLRv4Parser::RPAREN:
        case ANTLRv4Parser::OR:
        case ANTLRv4Parser::DOT:
        case ANTLRv4Parser::POUND:
        case ANTLRv4Parser::NOT: {
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(476);
      ebnf();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(477);
      actionBlock();
      setState(479);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::QUESTION) {
        setState(478);
        match(ANTLRv4Parser::QUESTION);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledElementContext ------------------------------------------------------------------

ANTLRv4Parser::LabeledElementContext::LabeledElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::LabeledElementContext::identifier() {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LabeledElementContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}

tree::TerminalNode* ANTLRv4Parser::LabeledElementContext::PLUS_ASSIGN() {
  return getToken(ANTLRv4Parser::PLUS_ASSIGN, 0);
}

ANTLRv4Parser::AtomContext* ANTLRv4Parser::LabeledElementContext::atom() {
  return getRuleContext<ANTLRv4Parser::AtomContext>(0);
}

ANTLRv4Parser::BlockContext* ANTLRv4Parser::LabeledElementContext::block() {
  return getRuleContext<ANTLRv4Parser::BlockContext>(0);
}


size_t ANTLRv4Parser::LabeledElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLabeledElement;
}

void ANTLRv4Parser::LabeledElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledElement(this);
}

void ANTLRv4Parser::LabeledElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledElement(this);
}


std::any ANTLRv4Parser::LabeledElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLabeledElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LabeledElementContext* ANTLRv4Parser::labeledElement() {
  LabeledElementContext *_localctx = _tracker.createInstance<LabeledElementContext>(_ctx, getState());
  enterRule(_localctx, 94, ANTLRv4Parser::RuleLabeledElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    identifier();
    setState(484);
    _la = _input->LA(1);
    if (!(_la == ANTLRv4Parser::ASSIGN

    || _la == ANTLRv4Parser::PLUS_ASSIGN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(487);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::RULE_REF:
      case ANTLRv4Parser::STRING_LITERAL:
      case ANTLRv4Parser::DOT:
      case ANTLRv4Parser::NOT: {
        setState(485);
        atom();
        break;
      }

      case ANTLRv4Parser::LPAREN: {
        setState(486);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EbnfContext ------------------------------------------------------------------

ANTLRv4Parser::EbnfContext::EbnfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::BlockContext* ANTLRv4Parser::EbnfContext::block() {
  return getRuleContext<ANTLRv4Parser::BlockContext>(0);
}

ANTLRv4Parser::BlockSuffixContext* ANTLRv4Parser::EbnfContext::blockSuffix() {
  return getRuleContext<ANTLRv4Parser::BlockSuffixContext>(0);
}


size_t ANTLRv4Parser::EbnfContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleEbnf;
}

void ANTLRv4Parser::EbnfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEbnf(this);
}

void ANTLRv4Parser::EbnfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEbnf(this);
}


std::any ANTLRv4Parser::EbnfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitEbnf(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::EbnfContext* ANTLRv4Parser::ebnf() {
  EbnfContext *_localctx = _tracker.createInstance<EbnfContext>(_ctx, getState());
  enterRule(_localctx, 96, ANTLRv4Parser::RuleEbnf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    block();
    setState(491);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 24189255811072) != 0)) {
      setState(490);
      blockSuffix();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockSuffixContext ------------------------------------------------------------------

ANTLRv4Parser::BlockSuffixContext::BlockSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::EbnfSuffixContext* ANTLRv4Parser::BlockSuffixContext::ebnfSuffix() {
  return getRuleContext<ANTLRv4Parser::EbnfSuffixContext>(0);
}


size_t ANTLRv4Parser::BlockSuffixContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleBlockSuffix;
}

void ANTLRv4Parser::BlockSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockSuffix(this);
}

void ANTLRv4Parser::BlockSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockSuffix(this);
}


std::any ANTLRv4Parser::BlockSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitBlockSuffix(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::BlockSuffixContext* ANTLRv4Parser::blockSuffix() {
  BlockSuffixContext *_localctx = _tracker.createInstance<BlockSuffixContext>(_ctx, getState());
  enterRule(_localctx, 98, ANTLRv4Parser::RuleBlockSuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    ebnfSuffix();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EbnfSuffixContext ------------------------------------------------------------------

ANTLRv4Parser::EbnfSuffixContext::EbnfSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::EbnfSuffixContext::QUESTION() {
  return getTokens(ANTLRv4Parser::QUESTION);
}

tree::TerminalNode* ANTLRv4Parser::EbnfSuffixContext::QUESTION(size_t i) {
  return getToken(ANTLRv4Parser::QUESTION, i);
}

tree::TerminalNode* ANTLRv4Parser::EbnfSuffixContext::STAR() {
  return getToken(ANTLRv4Parser::STAR, 0);
}

tree::TerminalNode* ANTLRv4Parser::EbnfSuffixContext::PLUS() {
  return getToken(ANTLRv4Parser::PLUS, 0);
}


size_t ANTLRv4Parser::EbnfSuffixContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleEbnfSuffix;
}

void ANTLRv4Parser::EbnfSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEbnfSuffix(this);
}

void ANTLRv4Parser::EbnfSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEbnfSuffix(this);
}


std::any ANTLRv4Parser::EbnfSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitEbnfSuffix(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::EbnfSuffixContext* ANTLRv4Parser::ebnfSuffix() {
  EbnfSuffixContext *_localctx = _tracker.createInstance<EbnfSuffixContext>(_ctx, getState());
  enterRule(_localctx, 100, ANTLRv4Parser::RuleEbnfSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(507);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::QUESTION: {
        enterOuterAlt(_localctx, 1);
        setState(495);
        match(ANTLRv4Parser::QUESTION);
        setState(497);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::QUESTION) {
          setState(496);
          match(ANTLRv4Parser::QUESTION);
        }
        break;
      }

      case ANTLRv4Parser::STAR: {
        enterOuterAlt(_localctx, 2);
        setState(499);
        match(ANTLRv4Parser::STAR);
        setState(501);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::QUESTION) {
          setState(500);
          match(ANTLRv4Parser::QUESTION);
        }
        break;
      }

      case ANTLRv4Parser::PLUS: {
        enterOuterAlt(_localctx, 3);
        setState(503);
        match(ANTLRv4Parser::PLUS);
        setState(505);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::QUESTION) {
          setState(504);
          match(ANTLRv4Parser::QUESTION);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LexerAtomContext ------------------------------------------------------------------

ANTLRv4Parser::LexerAtomContext::LexerAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::CharacterRangeContext* ANTLRv4Parser::LexerAtomContext::characterRange() {
  return getRuleContext<ANTLRv4Parser::CharacterRangeContext>(0);
}

ANTLRv4Parser::TerminalContext* ANTLRv4Parser::LexerAtomContext::terminal() {
  return getRuleContext<ANTLRv4Parser::TerminalContext>(0);
}

ANTLRv4Parser::NotSetContext* ANTLRv4Parser::LexerAtomContext::notSet() {
  return getRuleContext<ANTLRv4Parser::NotSetContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::LexerAtomContext::LEXER_CHAR_SET() {
  return getToken(ANTLRv4Parser::LEXER_CHAR_SET, 0);
}

tree::TerminalNode* ANTLRv4Parser::LexerAtomContext::DOT() {
  return getToken(ANTLRv4Parser::DOT, 0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::LexerAtomContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}


size_t ANTLRv4Parser::LexerAtomContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleLexerAtom;
}

void ANTLRv4Parser::LexerAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexerAtom(this);
}

void ANTLRv4Parser::LexerAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexerAtom(this);
}


std::any ANTLRv4Parser::LexerAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitLexerAtom(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::LexerAtomContext* ANTLRv4Parser::lexerAtom() {
  LexerAtomContext *_localctx = _tracker.createInstance<LexerAtomContext>(_ctx, getState());
  enterRule(_localctx, 102, ANTLRv4Parser::RuleLexerAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(517);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(509);
      characterRange();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(510);
      terminal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(511);
      notSet();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(512);
      match(ANTLRv4Parser::LEXER_CHAR_SET);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(513);
      match(ANTLRv4Parser::DOT);
      setState(515);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::LT) {
        setState(514);
        elementOptions();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

ANTLRv4Parser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ANTLRv4Parser::TerminalContext* ANTLRv4Parser::AtomContext::terminal() {
  return getRuleContext<ANTLRv4Parser::TerminalContext>(0);
}

ANTLRv4Parser::RulerefContext* ANTLRv4Parser::AtomContext::ruleref() {
  return getRuleContext<ANTLRv4Parser::RulerefContext>(0);
}

ANTLRv4Parser::NotSetContext* ANTLRv4Parser::AtomContext::notSet() {
  return getRuleContext<ANTLRv4Parser::NotSetContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::AtomContext::DOT() {
  return getToken(ANTLRv4Parser::DOT, 0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::AtomContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}


size_t ANTLRv4Parser::AtomContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleAtom;
}

void ANTLRv4Parser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void ANTLRv4Parser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}


std::any ANTLRv4Parser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::AtomContext* ANTLRv4Parser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 104, ANTLRv4Parser::RuleAtom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(526);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF:
      case ANTLRv4Parser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(519);
        terminal();
        break;
      }

      case ANTLRv4Parser::RULE_REF: {
        enterOuterAlt(_localctx, 2);
        setState(520);
        ruleref();
        break;
      }

      case ANTLRv4Parser::NOT: {
        enterOuterAlt(_localctx, 3);
        setState(521);
        notSet();
        break;
      }

      case ANTLRv4Parser::DOT: {
        enterOuterAlt(_localctx, 4);
        setState(522);
        match(ANTLRv4Parser::DOT);
        setState(524);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::LT) {
          setState(523);
          elementOptions();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotSetContext ------------------------------------------------------------------

ANTLRv4Parser::NotSetContext::NotSetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::NotSetContext::NOT() {
  return getToken(ANTLRv4Parser::NOT, 0);
}

ANTLRv4Parser::SetElementContext* ANTLRv4Parser::NotSetContext::setElement() {
  return getRuleContext<ANTLRv4Parser::SetElementContext>(0);
}

ANTLRv4Parser::BlockSetContext* ANTLRv4Parser::NotSetContext::blockSet() {
  return getRuleContext<ANTLRv4Parser::BlockSetContext>(0);
}


size_t ANTLRv4Parser::NotSetContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleNotSet;
}

void ANTLRv4Parser::NotSetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotSet(this);
}

void ANTLRv4Parser::NotSetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotSet(this);
}


std::any ANTLRv4Parser::NotSetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitNotSet(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::NotSetContext* ANTLRv4Parser::notSet() {
  NotSetContext *_localctx = _tracker.createInstance<NotSetContext>(_ctx, getState());
  enterRule(_localctx, 106, ANTLRv4Parser::RuleNotSet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(532);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(528);
      match(ANTLRv4Parser::NOT);
      setState(529);
      setElement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(530);
      match(ANTLRv4Parser::NOT);
      setState(531);
      blockSet();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockSetContext ------------------------------------------------------------------

ANTLRv4Parser::BlockSetContext::BlockSetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::BlockSetContext::LPAREN() {
  return getToken(ANTLRv4Parser::LPAREN, 0);
}

std::vector<ANTLRv4Parser::SetElementContext *> ANTLRv4Parser::BlockSetContext::setElement() {
  return getRuleContexts<ANTLRv4Parser::SetElementContext>();
}

ANTLRv4Parser::SetElementContext* ANTLRv4Parser::BlockSetContext::setElement(size_t i) {
  return getRuleContext<ANTLRv4Parser::SetElementContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::BlockSetContext::RPAREN() {
  return getToken(ANTLRv4Parser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::BlockSetContext::OR() {
  return getTokens(ANTLRv4Parser::OR);
}

tree::TerminalNode* ANTLRv4Parser::BlockSetContext::OR(size_t i) {
  return getToken(ANTLRv4Parser::OR, i);
}


size_t ANTLRv4Parser::BlockSetContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleBlockSet;
}

void ANTLRv4Parser::BlockSetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockSet(this);
}

void ANTLRv4Parser::BlockSetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockSet(this);
}


std::any ANTLRv4Parser::BlockSetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitBlockSet(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::BlockSetContext* ANTLRv4Parser::blockSet() {
  BlockSetContext *_localctx = _tracker.createInstance<BlockSetContext>(_ctx, getState());
  enterRule(_localctx, 108, ANTLRv4Parser::RuleBlockSet);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    match(ANTLRv4Parser::LPAREN);
    setState(535);
    setElement();
    setState(540);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::OR) {
      setState(536);
      match(ANTLRv4Parser::OR);
      setState(537);
      setElement();
      setState(542);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(543);
    match(ANTLRv4Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetElementContext ------------------------------------------------------------------

ANTLRv4Parser::SetElementContext::SetElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::SetElementContext::TOKEN_REF() {
  return getToken(ANTLRv4Parser::TOKEN_REF, 0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::SetElementContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::SetElementContext::STRING_LITERAL() {
  return getToken(ANTLRv4Parser::STRING_LITERAL, 0);
}

ANTLRv4Parser::CharacterRangeContext* ANTLRv4Parser::SetElementContext::characterRange() {
  return getRuleContext<ANTLRv4Parser::CharacterRangeContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::SetElementContext::LEXER_CHAR_SET() {
  return getToken(ANTLRv4Parser::LEXER_CHAR_SET, 0);
}


size_t ANTLRv4Parser::SetElementContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleSetElement;
}

void ANTLRv4Parser::SetElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetElement(this);
}

void ANTLRv4Parser::SetElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetElement(this);
}


std::any ANTLRv4Parser::SetElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitSetElement(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::SetElementContext* ANTLRv4Parser::setElement() {
  SetElementContext *_localctx = _tracker.createInstance<SetElementContext>(_ctx, getState());
  enterRule(_localctx, 110, ANTLRv4Parser::RuleSetElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(555);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(545);
      match(ANTLRv4Parser::TOKEN_REF);
      setState(547);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::LT) {
        setState(546);
        elementOptions();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(549);
      match(ANTLRv4Parser::STRING_LITERAL);
      setState(551);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::LT) {
        setState(550);
        elementOptions();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(553);
      characterRange();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(554);
      match(ANTLRv4Parser::LEXER_CHAR_SET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ANTLRv4Parser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::BlockContext::LPAREN() {
  return getToken(ANTLRv4Parser::LPAREN, 0);
}

ANTLRv4Parser::AltListContext* ANTLRv4Parser::BlockContext::altList() {
  return getRuleContext<ANTLRv4Parser::AltListContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::BlockContext::RPAREN() {
  return getToken(ANTLRv4Parser::RPAREN, 0);
}

tree::TerminalNode* ANTLRv4Parser::BlockContext::COLON() {
  return getToken(ANTLRv4Parser::COLON, 0);
}

ANTLRv4Parser::OptionsSpecContext* ANTLRv4Parser::BlockContext::optionsSpec() {
  return getRuleContext<ANTLRv4Parser::OptionsSpecContext>(0);
}

std::vector<ANTLRv4Parser::RuleActionContext *> ANTLRv4Parser::BlockContext::ruleAction() {
  return getRuleContexts<ANTLRv4Parser::RuleActionContext>();
}

ANTLRv4Parser::RuleActionContext* ANTLRv4Parser::BlockContext::ruleAction(size_t i) {
  return getRuleContext<ANTLRv4Parser::RuleActionContext>(i);
}


size_t ANTLRv4Parser::BlockContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleBlock;
}

void ANTLRv4Parser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ANTLRv4Parser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any ANTLRv4Parser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::BlockContext* ANTLRv4Parser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 112, ANTLRv4Parser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(ANTLRv4Parser::LPAREN);
    setState(568);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 562950490296320) != 0)) {
      setState(559);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ANTLRv4Parser::OPTIONS) {
        setState(558);
        optionsSpec();
      }
      setState(564);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ANTLRv4Parser::AT) {
        setState(561);
        ruleAction();
        setState(566);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(567);
      match(ANTLRv4Parser::COLON);
    }
    setState(570);
    altList();
    setState(571);
    match(ANTLRv4Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RulerefContext ------------------------------------------------------------------

ANTLRv4Parser::RulerefContext::RulerefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::RulerefContext::RULE_REF() {
  return getToken(ANTLRv4Parser::RULE_REF, 0);
}

ANTLRv4Parser::ArgActionBlockContext* ANTLRv4Parser::RulerefContext::argActionBlock() {
  return getRuleContext<ANTLRv4Parser::ArgActionBlockContext>(0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::RulerefContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}


size_t ANTLRv4Parser::RulerefContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleRuleref;
}

void ANTLRv4Parser::RulerefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleref(this);
}

void ANTLRv4Parser::RulerefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleref(this);
}


std::any ANTLRv4Parser::RulerefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitRuleref(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::RulerefContext* ANTLRv4Parser::ruleref() {
  RulerefContext *_localctx = _tracker.createInstance<RulerefContext>(_ctx, getState());
  enterRule(_localctx, 114, ANTLRv4Parser::RuleRuleref);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(573);
    match(ANTLRv4Parser::RULE_REF);
    setState(575);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::BEGIN_ARGUMENT) {
      setState(574);
      argActionBlock();
    }
    setState(578);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ANTLRv4Parser::LT) {
      setState(577);
      elementOptions();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterRangeContext ------------------------------------------------------------------

ANTLRv4Parser::CharacterRangeContext::CharacterRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::CharacterRangeContext::STRING_LITERAL() {
  return getTokens(ANTLRv4Parser::STRING_LITERAL);
}

tree::TerminalNode* ANTLRv4Parser::CharacterRangeContext::STRING_LITERAL(size_t i) {
  return getToken(ANTLRv4Parser::STRING_LITERAL, i);
}

tree::TerminalNode* ANTLRv4Parser::CharacterRangeContext::RANGE() {
  return getToken(ANTLRv4Parser::RANGE, 0);
}


size_t ANTLRv4Parser::CharacterRangeContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleCharacterRange;
}

void ANTLRv4Parser::CharacterRangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterRange(this);
}

void ANTLRv4Parser::CharacterRangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterRange(this);
}


std::any ANTLRv4Parser::CharacterRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitCharacterRange(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::CharacterRangeContext* ANTLRv4Parser::characterRange() {
  CharacterRangeContext *_localctx = _tracker.createInstance<CharacterRangeContext>(_ctx, getState());
  enterRule(_localctx, 116, ANTLRv4Parser::RuleCharacterRange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    match(ANTLRv4Parser::STRING_LITERAL);
    setState(581);
    match(ANTLRv4Parser::RANGE);
    setState(582);
    match(ANTLRv4Parser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminalContext ------------------------------------------------------------------

ANTLRv4Parser::TerminalContext::TerminalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::TerminalContext::TOKEN_REF() {
  return getToken(ANTLRv4Parser::TOKEN_REF, 0);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::TerminalContext::elementOptions() {
  return getRuleContext<ANTLRv4Parser::ElementOptionsContext>(0);
}

tree::TerminalNode* ANTLRv4Parser::TerminalContext::STRING_LITERAL() {
  return getToken(ANTLRv4Parser::STRING_LITERAL, 0);
}


size_t ANTLRv4Parser::TerminalContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleTerminal;
}

void ANTLRv4Parser::TerminalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerminal(this);
}

void ANTLRv4Parser::TerminalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerminal(this);
}


std::any ANTLRv4Parser::TerminalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitTerminal(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::TerminalContext* ANTLRv4Parser::terminal() {
  TerminalContext *_localctx = _tracker.createInstance<TerminalContext>(_ctx, getState());
  enterRule(_localctx, 118, ANTLRv4Parser::RuleTerminal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(592);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ANTLRv4Parser::TOKEN_REF: {
        enterOuterAlt(_localctx, 1);
        setState(584);
        match(ANTLRv4Parser::TOKEN_REF);
        setState(586);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::LT) {
          setState(585);
          elementOptions();
        }
        break;
      }

      case ANTLRv4Parser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(588);
        match(ANTLRv4Parser::STRING_LITERAL);
        setState(590);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ANTLRv4Parser::LT) {
          setState(589);
          elementOptions();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementOptionsContext ------------------------------------------------------------------

ANTLRv4Parser::ElementOptionsContext::ElementOptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionsContext::LT() {
  return getToken(ANTLRv4Parser::LT, 0);
}

std::vector<ANTLRv4Parser::ElementOptionContext *> ANTLRv4Parser::ElementOptionsContext::elementOption() {
  return getRuleContexts<ANTLRv4Parser::ElementOptionContext>();
}

ANTLRv4Parser::ElementOptionContext* ANTLRv4Parser::ElementOptionsContext::elementOption(size_t i) {
  return getRuleContext<ANTLRv4Parser::ElementOptionContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionsContext::GT() {
  return getToken(ANTLRv4Parser::GT, 0);
}

std::vector<tree::TerminalNode *> ANTLRv4Parser::ElementOptionsContext::COMMA() {
  return getTokens(ANTLRv4Parser::COMMA);
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionsContext::COMMA(size_t i) {
  return getToken(ANTLRv4Parser::COMMA, i);
}


size_t ANTLRv4Parser::ElementOptionsContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleElementOptions;
}

void ANTLRv4Parser::ElementOptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementOptions(this);
}

void ANTLRv4Parser::ElementOptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementOptions(this);
}


std::any ANTLRv4Parser::ElementOptionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitElementOptions(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ElementOptionsContext* ANTLRv4Parser::elementOptions() {
  ElementOptionsContext *_localctx = _tracker.createInstance<ElementOptionsContext>(_ctx, getState());
  enterRule(_localctx, 120, ANTLRv4Parser::RuleElementOptions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    match(ANTLRv4Parser::LT);
    setState(595);
    elementOption();
    setState(600);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ANTLRv4Parser::COMMA) {
      setState(596);
      match(ANTLRv4Parser::COMMA);
      setState(597);
      elementOption();
      setState(602);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(603);
    match(ANTLRv4Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementOptionContext ------------------------------------------------------------------

ANTLRv4Parser::ElementOptionContext::ElementOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ANTLRv4Parser::IdentifierContext *> ANTLRv4Parser::ElementOptionContext::identifier() {
  return getRuleContexts<ANTLRv4Parser::IdentifierContext>();
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::ElementOptionContext::identifier(size_t i) {
  return getRuleContext<ANTLRv4Parser::IdentifierContext>(i);
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionContext::ASSIGN() {
  return getToken(ANTLRv4Parser::ASSIGN, 0);
}

tree::TerminalNode* ANTLRv4Parser::ElementOptionContext::STRING_LITERAL() {
  return getToken(ANTLRv4Parser::STRING_LITERAL, 0);
}


size_t ANTLRv4Parser::ElementOptionContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleElementOption;
}

void ANTLRv4Parser::ElementOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementOption(this);
}

void ANTLRv4Parser::ElementOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementOption(this);
}


std::any ANTLRv4Parser::ElementOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitElementOption(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::ElementOptionContext* ANTLRv4Parser::elementOption() {
  ElementOptionContext *_localctx = _tracker.createInstance<ElementOptionContext>(_ctx, getState());
  enterRule(_localctx, 122, ANTLRv4Parser::RuleElementOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(612);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(605);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(606);
      identifier();
      setState(607);
      match(ANTLRv4Parser::ASSIGN);
      setState(610);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ANTLRv4Parser::TOKEN_REF:
        case ANTLRv4Parser::RULE_REF: {
          setState(608);
          identifier();
          break;
        }

        case ANTLRv4Parser::STRING_LITERAL: {
          setState(609);
          match(ANTLRv4Parser::STRING_LITERAL);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

ANTLRv4Parser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ANTLRv4Parser::IdentifierContext::RULE_REF() {
  return getToken(ANTLRv4Parser::RULE_REF, 0);
}

tree::TerminalNode* ANTLRv4Parser::IdentifierContext::TOKEN_REF() {
  return getToken(ANTLRv4Parser::TOKEN_REF, 0);
}


size_t ANTLRv4Parser::IdentifierContext::getRuleIndex() const {
  return ANTLRv4Parser::RuleIdentifier;
}

void ANTLRv4Parser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void ANTLRv4Parser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ANTLRv4ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


std::any ANTLRv4Parser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ANTLRv4ParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ANTLRv4Parser::IdentifierContext* ANTLRv4Parser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 124, ANTLRv4Parser::RuleIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    _la = _input->LA(1);
    if (!(_la == ANTLRv4Parser::TOKEN_REF

    || _la == ANTLRv4Parser::RULE_REF)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ANTLRv4Parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  antlrv4parserParserInitialize();
#else
  ::antlr4::internal::call_once(antlrv4parserParserOnceFlag, antlrv4parserParserInitialize);
#endif
}
