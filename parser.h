/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    REAL = 259,                    /* REAL  */
    INTEGER = 260,                 /* INTEGER  */
    STRING = 261,                  /* STRING  */
    PROGRAM = 262,                 /* PROGRAM  */
    VAR = 263,                     /* VAR  */
    FUNCTION = 264,                /* FUNCTION  */
    FORWARD = 265,                 /* FORWARD  */
    BEGIN_ = 266,                  /* BEGIN_  */
    END_ = 267,                    /* END_  */
    IF = 268,                      /* IF  */
    THEN = 269,                    /* THEN  */
    ELSE = 270,                    /* ELSE  */
    WHILE = 271,                   /* WHILE  */
    DO = 272,                      /* DO  */
    REPEAT = 273,                  /* REPEAT  */
    UNTIL = 274,                   /* UNTIL  */
    FOR = 275,                     /* FOR  */
    TO = 276,                      /* TO  */
    DOWNTO = 277,                  /* DOWNTO  */
    CASE = 278,                    /* CASE  */
    OF = 279,                      /* OF  */
    COLON = 280,                   /* COLON  */
    SEMICOLON = 281,               /* SEMICOLON  */
    COMMA = 282,                   /* COMMA  */
    DOT = 283,                     /* DOT  */
    ASSIGN = 284,                  /* ASSIGN  */
    EQUAL = 285,                   /* EQUAL  */
    LT = 286,                      /* LT  */
    LE = 287,                      /* LE  */
    GT = 288,                      /* GT  */
    GE = 289,                      /* GE  */
    NE = 290,                      /* NE  */
    AND = 291,                     /* AND  */
    OR = 292,                      /* OR  */
    NOT = 293,                     /* NOT  */
    MOD = 294,                     /* MOD  */
    PLUS = 295,                    /* PLUS  */
    MINUS = 296,                   /* MINUS  */
    MULTIPLY = 297,                /* MULTIPLY  */
    DIVIDE = 298,                  /* DIVIDE  */
    DIV = 299,                     /* DIV  */
    LPAREN = 300,                  /* LPAREN  */
    RPAREN = 301                   /* RPAREN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "pascal.y"

    char *stringValue;
    ASTNode *node;

#line 115 "parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_H_INCLUDED  */
