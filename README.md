# About

This is a proof-of-concept implementation to convert an antlr4 parse tree automatically into an AST. 

It is the first of two projects and Linux C++ only.

## How it works  

This project is a visitor program using the antlr4 grammar for grammars (ANTLRv4Parser.g4). A conversion algorithm identifies main rules for AST node classes and propagates the needed data fields from the children. It then generates visitor files for the target grammar to create an AST form source files of the target language.  
  
The second project is a visitor program for the target language with the generated files from the first project.  
  
## Usage
  
Call the program with the 4 arguments:
target_parser_grammar.g4 target_lexer_grammar.g4 output_visitor_header.h output_visitor_source.cpp

## Current State

The basic algorithm structure is set up and some propagation is done. Since this is a proof-of-concept, there is no focus on performance optimization. 
Next steps:
- print the AST node classes and visit methods
- identify and handle operators (this is a problem since precedence and right-associativity are not always handled well in grammars)
- verify result with source printer round trips
- optimize the used data fields and their names
