%{

#include <stdio.h>
#include <stdlib.h>
#include "ast.h"

extern int yylex(void);
extern int yyerror(const char *s);
extern int yylineno;
extern char *yytext;

ASTNode *root;

%}

%union {
    char *stringValue;
    ASTNode *node;
}

%token <stringValue> IDENTIFIER REAL INTEGER STRING
%token PROGRAM
%token VAR FUNCTION FORWARD
%token BEGIN_ END_
%token IF THEN ELSE
%token COLON SEMICOLON COMMA DOT
%token ASSIGN EQUAL
%token PLUS MINUS MULTIPLY DIVIDE DIV
%token LPAREN RPAREN
%type <node> program
%type <node> optional_paramaters parameters_list parameters_list_tail
%type <node> block
%type <node> identifiers_list identifiers_list_tail
%type <node> type ordinal_type
%type <node> function_header function_header_tail block_or_forward
%type <node> formal_parameters_list
%type <node> intructions_list intructions_list_tail instruction
%type <node> expression simple_expression simple_expression_tail else_expression
%type <node> term term_tail
%type <node> factor
%type <node> effective_parameters_list effective_parameters_list_tail
%type <node> signal

%%

program:
        PROGRAM IDENTIFIER optional_paramaters SEMICOLON block DOT{
            $$ = create_node(AST_NODE_TYPE_PROGRAM, $2);
            add_child($$, $3);
            add_child($$, $5);

            root = $$;
        }
    ;

optional_paramaters:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_OPTIONAL_PARAMETERS, NULL);
        } 
    |   LPAREN parameters_list RPAREN {
            $$ = create_node(AST_NODE_TYPE_OPTIONAL_PARAMETERS, NULL);
            add_child($$, $2);
        }
    ;

parameters_list:
        IDENTIFIER parameters_list_tail {
            $$ = create_node(AST_NODE_TYPE_PARAMETERS_LIST, $1);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $1));
            add_child($$, $2);
        }
    ;

parameters_list_tail:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_PARAMETERS_LIST_TAIL, NULL);
        }
    |   COMMA IDENTIFIER parameters_list_tail {
            $$ = create_node(AST_NODE_TYPE_PARAMETERS_LIST, NULL);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $2));
            add_child($$, $3);
        }
    ;

block:
        VAR identifiers_list COLON type SEMICOLON block {
            $$ = create_node(AST_NODE_TYPE_BLOCK, NULL);
            add_child($$, $2);
            add_child($$, $4);
            add_child($$, $6);
        }
    |   function_header SEMICOLON block_or_forward SEMICOLON block {
            $$ = create_node(AST_NODE_TYPE_BLOCK, NULL);
            add_child($$, $1);
            add_child($$, $3);
            add_child($$, $5);
        }
    |   BEGIN_ intructions_list END_ {
            $$ = create_node(AST_NODE_TYPE_BLOCK, NULL);
            add_child($$, $2);
        }
    ;

identifiers_list:
        IDENTIFIER identifiers_list_tail {
            $$ = create_node(AST_NODE_TYPE_IDENTIFIERS_LIST, NULL);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $1));
            add_child($$, $2);
        }

identifiers_list_tail:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_IDENTIFIERS_LIST_TAIL, NULL);
        }
    |   COMMA IDENTIFIER identifiers_list_tail {
            $$ = create_node(AST_NODE_TYPE_IDENTIFIERS_LIST, NULL);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $2));
            add_child($$, $3);
        }
    ;

type:
        ordinal_type {
            $$ = create_node(AST_NODE_TYPE_TYPE, NULL);
            add_child($$, $1);
        }
    ;

ordinal_type:
        IDENTIFIER {
            $$ = create_node(AST_NODE_TYPE_ORDINAL_TYPE, $1);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $1));
        }
    ;

function_header:
        FUNCTION IDENTIFIER formal_parameters_list function_header_tail {
            $$ = create_node(AST_NODE_TYPE_FUNCTION_HEADER, NULL);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $2));
            add_child($$, $3);
            add_child($$, $4);
        }

function_header_tail:
        COLON IDENTIFIER {
            $$ = create_node(AST_NODE_TYPE_FUNCTION_HEADER_TAIL, NULL);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $2));
        }
    ;

block_or_forward:
        block {
            $$ = create_node(AST_NODE_TYPE_BLOCK_OR_FORWARD, NULL);
            add_child($$, $1);
        }
    |   FORWARD {
            $$ = create_node(AST_NODE_TYPE_FORWARD, NULL);
        }
    ;

formal_parameters_list:
        LPAREN VAR identifiers_list COLON IDENTIFIER RPAREN {
            $$ = create_node(AST_NODE_TYPE_FORMAL_PARAMETERS_LIST, NULL);
            add_child($$, $3);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $5));
        }
    |   LPAREN identifiers_list COLON IDENTIFIER RPAREN {
            $$ = create_node(AST_NODE_TYPE_FORMAL_PARAMETERS_LIST, NULL);
            add_child($$, $2);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $4));
        }
    ;

intructions_list:
        instruction intructions_list_tail {
            $$ = create_node(AST_NODE_TYPE_INSTRUCTIONS_LIST, NULL);
            add_child($$, $1);
            add_child($$, $2);
        }
    ;

intructions_list_tail:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_INSTRUCTIONS_LIST_TAIL, NULL);
        }
    |   SEMICOLON instruction intructions_list_tail {
            $$ = create_node(AST_NODE_TYPE_INSTRUCTIONS_LIST_TAIL, NULL);
            add_child($$, $2);
            add_child($$, $3);
        }
    ;

instruction:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_INSTRUCTION, NULL);
        }
    |   BEGIN_ intructions_list END_ {
            $$ = create_node(AST_NODE_TYPE_INSTRUCTION, NULL);
            add_child($$, $2);
        }
    |   IF expression THEN instruction else_expression {
            $$ = create_node(AST_NODE_TYPE_IF_STATEMENT, NULL);
            add_child($$, $2);
            add_child($$, $4);
            add_child($$, $5);
        }
    |   IDENTIFIER ASSIGN expression {
            $$ = create_node(AST_NODE_TYPE_ASSIGNMENT_STATEMENT, NULL);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $1));
            add_child($$, $3);
        }
    |   IDENTIFIER effective_parameters_list {
            $$ = create_node(AST_NODE_TYPE_FUNCTION_CALL, $1);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $1));
            add_child($$, $2);
        }
    ;

else_expression:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_ELSE_EXPRESSION, NULL);
        }
    |   ELSE instruction {
            $$ = create_node(AST_NODE_TYPE_ELSE_EXPRESSION, NULL);
            add_child($$, $2);
        }
    ;

expression:
        simple_expression {
            $$ = create_node(AST_NODE_TYPE_EXPRESSION, NULL);
            add_child($$, $1);
        }
    |   simple_expression EQUAL simple_expression {
            $$ = create_node(AST_NODE_TYPE_EXPRESSION, "=");
            add_child($$, $1);
            add_child($$, $3);
        }
    ;

simple_expression:
        signal term simple_expression_tail {
            $$ = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION, NULL);
            add_child($$, $1);
            add_child($$, $2);
            add_child($$, $3);
        }

simple_expression_tail:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION_TAIL, NULL);
        }
    |   PLUS term simple_expression_tail {
            $$ = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION_TAIL, "+");
            add_child($$, $2);
            add_child($$, $3);
        }
    |   MINUS term simple_expression_tail {
            $$ = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION_TAIL, "-");
            add_child($$, $2);
            add_child($$, $3);
        }
    ;

term:
        factor term_tail {
            $$ = create_node(AST_NODE_TYPE_TERM, NULL);
            add_child($$, $1);
            add_child($$, $2);
        }
    ;

term_tail:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_TERM_TAIL, NULL);
        }
    |   MULTIPLY factor term_tail {
            $$ = create_node(AST_NODE_TYPE_TERM_TAIL, "*");
            add_child($$, $2);
            add_child($$, $3);
        }
    |   DIVIDE factor term_tail {
            $$ = create_node(AST_NODE_TYPE_TERM_TAIL, "/");
            add_child($$, $2);
            add_child($$, $3);
        }
    |   DIV factor term_tail {
            $$ = create_node(AST_NODE_TYPE_TERM_TAIL, "div");
            add_child($$, $2);
            add_child($$, $3);
        }
    ;

factor:
        IDENTIFIER {
            $$ = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $1));
        }
    |   INTEGER {
            $$ = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child($$, create_node(AST_NODE_TYPE_INTEGER, $1));
        }
    |   REAL {
            $$ = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child($$, create_node(AST_NODE_TYPE_REAL, $1));
        }
    |   STRING {
            $$ = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child($$, create_node(AST_NODE_TYPE_STRING, $1));
        }
    |   LPAREN expression RPAREN {
            $$ = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child($$, $2);
        }
    |   IDENTIFIER effective_parameters_list {
            $$ = create_node(AST_NODE_TYPE_FUNCTION_CALL, $1);
            add_child($$, create_node(AST_NODE_TYPE_IDENTIFIER, $1));
            add_child($$, $2);
        }
    ;    

effective_parameters_list:
        LPAREN expression effective_parameters_list_tail RPAREN {
            $$ = create_node(AST_NODE_TYPE_EFFECTIVE_PARAMETERS_LIST, NULL);
            add_child($$, $2);
            add_child($$, $3);
        }
    ;

effective_parameters_list_tail:
        /* empty */ {
            $$ = create_node(AST_NODE_TYPE_EFFECTIVE_PARAMETERS_LIST_TAIL, NULL);
        }
    |   COMMA expression effective_parameters_list_tail {
            $$ = create_node(AST_NODE_TYPE_EFFECTIVE_PARAMETERS_LIST_TAIL, NULL);
            add_child($$, $2);
            add_child($$, $3);
        }
    ;

signal:
    /* empty */ {
            $$ = create_node(AST_NODE_TYPE_SIGNAL, NULL);
        }
    |   PLUS {
            $$ = create_node(AST_NODE_TYPE_SIGNAL, "+");
        }
    |   MINUS {
            $$ = create_node(AST_NODE_TYPE_SIGNAL, "-");
        }
    ;

%%

int yyerror(const char *s) {

    fprintf(stderr, "Error: %s at line %d: %s\n", s, yylineno, yytext);

    return 0;
}
