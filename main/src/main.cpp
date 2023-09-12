#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

#include <antlr4-runtime.h>
#include <fstream>

#include "ANTLRv4Parser.h"
#include "ANTLRv4Lexer.h"
#include "AntlrAstGenerator.h"

using namespace antlr4;

int main(int argc, char** argv) {
    if(argc <= 4) return 1;
    std::string parserFile = argv[1];
    std::string lexerFile = argv[2];
    std::fstream parserFS;
    std::fstream lexerFS;
    parserFS.open(parserFile, std::fstream::in | std::fstream::out | std::fstream::app);
    lexerFS.open(lexerFile, std::fstream::in | std::fstream::out | std::fstream::app);

    ANTLRInputStream* parser_input = new ANTLRInputStream(parserFS);
    ANTLRv4Lexer* parser_lexer = new ANTLRv4Lexer(parser_input);
    CommonTokenStream* parser_tokens = new CommonTokenStream(parser_lexer);
    ANTLRv4Parser* parser_parser = new ANTLRv4Parser(parser_tokens);

    ANTLRInputStream* lexer_input = new ANTLRInputStream(lexerFS);
    ANTLRv4Lexer* lexer_lexer = new ANTLRv4Lexer(lexer_input);
    CommonTokenStream* lexer_tokens = new CommonTokenStream(lexer_lexer);
    ANTLRv4Parser* lexer_parser = new ANTLRv4Parser(lexer_tokens);


    auto* parser_root = parser_parser->grammarSpec();
    auto* lexer_root = lexer_parser->grammarSpec();

    AntlrAstGenerator visitor(parser_parser, parser_root, lexer_root);

    visitor.openHeader(argv[3]);
    visitor.openSource(argv[4]);

    visitor.visit(parser_root);

    return 0;
}
