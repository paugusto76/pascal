%{

#include "ast.h"
#include "parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

%}

%option noyywrap

DIGIT [[:digit:]]
ID [[:alpha:]][[:alnum:]]*

%%

"program" { return PROGRAM; }
"begin" { return BEGIN_; }
"end" { return END_; }
"var" { return VAR; }
"function" { return FUNCTION; }
"if" { return IF; }
"then" { return THEN; }
"else" { return ELSE; }
"while" { return WHILE; }
"do" { return DO; }
"repeat" { return REPEAT; }
"until" { return UNTIL; }
"for" { return FOR; }
"to" { return TO; }
"downto" { return DOWNTO; }
"forward" { return FORWARD; }
"div" { return DIV; }
"case" { return CASE; }
"of" { return OF; }

":" { return COLON; }
";" { return SEMICOLON; }
"," { return COMMA; }
":=" { return ASSIGN; }
"=" { return EQUAL; }
"(" { return LPAREN; }
")" { return RPAREN; }
"+" { return PLUS; }
"-" { return MINUS; }
"*" { return MULTIPLY; }
"/" { return DIVIDE; }
"." { return DOT; }
"<" { return LT; }
"<=" { return LE; }
">" { return GT; }
">=" { return GE; }
"<>" { return NE; }
"and" { return AND; }
"or" { return OR; }
"not" { return NOT; }
"mod" { return MOD; }

{DIGIT}+ { yylval.stringValue = strdup(yytext); return INTEGER; }
{DIGIT}+("."{DIGIT}*)?([eE]([+-])?{DIGIT}+)? {
    yylval.stringValue = strdup(yytext);
    return REAL;
}

{ID} {
    yylval.stringValue = strdup(yytext);
    return IDENTIFIER;
}

"'"([^\n]|"''")*"'" {
    yylval.stringValue = strdup(yytext);
    return STRING;
}

[ \t\r]+ { /* Ignore whitespace */ }

\n { yylineno++; }

. { return yytext[0]; }

%%
