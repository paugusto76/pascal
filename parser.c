/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "pascal.y"


#include <stdio.h>
#include <stdlib.h>
#include "ast.h"

extern int yylex(void);
extern int yyerror(const char *s);
extern int yylineno;
extern char *yytext;

ASTNode *root;


#line 86 "parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_REAL = 4,                       /* REAL  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_PROGRAM = 7,                    /* PROGRAM  */
  YYSYMBOL_VAR = 8,                        /* VAR  */
  YYSYMBOL_FUNCTION = 9,                   /* FUNCTION  */
  YYSYMBOL_FORWARD = 10,                   /* FORWARD  */
  YYSYMBOL_BEGIN_ = 11,                    /* BEGIN_  */
  YYSYMBOL_END_ = 12,                      /* END_  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_THEN = 14,                      /* THEN  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_DO = 17,                        /* DO  */
  YYSYMBOL_REPEAT = 18,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 19,                     /* UNTIL  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_TO = 21,                        /* TO  */
  YYSYMBOL_DOWNTO = 22,                    /* DOWNTO  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_OF = 24,                        /* OF  */
  YYSYMBOL_COLON = 25,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 26,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 27,                     /* COMMA  */
  YYSYMBOL_DOT = 28,                       /* DOT  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_EQUAL = 30,                     /* EQUAL  */
  YYSYMBOL_LT = 31,                        /* LT  */
  YYSYMBOL_LE = 32,                        /* LE  */
  YYSYMBOL_GT = 33,                        /* GT  */
  YYSYMBOL_GE = 34,                        /* GE  */
  YYSYMBOL_NE = 35,                        /* NE  */
  YYSYMBOL_AND = 36,                       /* AND  */
  YYSYMBOL_OR = 37,                        /* OR  */
  YYSYMBOL_NOT = 38,                       /* NOT  */
  YYSYMBOL_MOD = 39,                       /* MOD  */
  YYSYMBOL_PLUS = 40,                      /* PLUS  */
  YYSYMBOL_MINUS = 41,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 42,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 43,                    /* DIVIDE  */
  YYSYMBOL_DIV = 44,                       /* DIV  */
  YYSYMBOL_LPAREN = 45,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 46,                    /* RPAREN  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_optional_paramaters = 49,       /* optional_paramaters  */
  YYSYMBOL_parameters_list = 50,           /* parameters_list  */
  YYSYMBOL_parameters_list_tail = 51,      /* parameters_list_tail  */
  YYSYMBOL_block = 52,                     /* block  */
  YYSYMBOL_identifiers_list = 53,          /* identifiers_list  */
  YYSYMBOL_identifiers_list_tail = 54,     /* identifiers_list_tail  */
  YYSYMBOL_type = 55,                      /* type  */
  YYSYMBOL_ordinal_type = 56,              /* ordinal_type  */
  YYSYMBOL_function_header = 57,           /* function_header  */
  YYSYMBOL_function_header_tail = 58,      /* function_header_tail  */
  YYSYMBOL_block_or_forward = 59,          /* block_or_forward  */
  YYSYMBOL_formal_parameters_list = 60,    /* formal_parameters_list  */
  YYSYMBOL_formal_parameters_list_tail = 61, /* formal_parameters_list_tail  */
  YYSYMBOL_intructions_list = 62,          /* intructions_list  */
  YYSYMBOL_intructions_list_tail = 63,     /* intructions_list_tail  */
  YYSYMBOL_instruction = 64,               /* instruction  */
  YYSYMBOL_else_expression = 65,           /* else_expression  */
  YYSYMBOL_for_tail = 66,                  /* for_tail  */
  YYSYMBOL_case_branches = 67,             /* case_branches  */
  YYSYMBOL_case_branches_tail = 68,        /* case_branches_tail  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_simple_expression = 70,         /* simple_expression  */
  YYSYMBOL_simple_expression_tail = 71,    /* simple_expression_tail  */
  YYSYMBOL_term = 72,                      /* term  */
  YYSYMBOL_term_tail = 73,                 /* term_tail  */
  YYSYMBOL_factor = 74,                    /* factor  */
  YYSYMBOL_effective_parameters_list = 75, /* effective_parameters_list  */
  YYSYMBOL_effective_parameters_list_tail = 76, /* effective_parameters_list_tail  */
  YYSYMBOL_signal = 77,                    /* signal  */
  YYSYMBOL_constant_list = 78,             /* constant_list  */
  YYSYMBOL_constant_list_tail = 79,        /* constant_list_tail  */
  YYSYMBOL_constant = 80                   /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    64,    67,    74,    82,    85,    93,    99,
     105,   112,   119,   122,   130,   137,   144,   152,   159,   163,
     169,   174,   182,   185,   191,   200,   208,   211,   219,   222,
     226,   232,   237,   242,   248,   253,   258,   266,   269,   276,
     281,   290,   299,   302,   305,   314,   318,   323,   328,   333,
     338,   343,   351,   359,   362,   367,   372,   380,   388,   391,
     396,   401,   406,   411,   419,   423,   427,   431,   435,   439,
     444,   451,   459,   462,   470,   473,   476,   482,   490,   493,
     501,   506,   511,   516
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "REAL",
  "INTEGER", "STRING", "PROGRAM", "VAR", "FUNCTION", "FORWARD", "BEGIN_",
  "END_", "IF", "THEN", "ELSE", "WHILE", "DO", "REPEAT", "UNTIL", "FOR",
  "TO", "DOWNTO", "CASE", "OF", "COLON", "SEMICOLON", "COMMA", "DOT",
  "ASSIGN", "EQUAL", "LT", "LE", "GT", "GE", "NE", "AND", "OR", "NOT",
  "MOD", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "DIV", "LPAREN", "RPAREN",
  "$accept", "program", "optional_paramaters", "parameters_list",
  "parameters_list_tail", "block", "identifiers_list",
  "identifiers_list_tail", "type", "ordinal_type", "function_header",
  "function_header_tail", "block_or_forward", "formal_parameters_list",
  "formal_parameters_list_tail", "intructions_list",
  "intructions_list_tail", "instruction", "else_expression", "for_tail",
  "case_branches", "case_branches_tail", "expression", "simple_expression",
  "simple_expression_tail", "term", "term_tail", "factor",
  "effective_parameters_list", "effective_parameters_list_tail", "signal",
  "constant_list", "constant_list_tail", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-149)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,     5,    14,   -12,  -149,    19,    25,    33,    16,    99,
      64,  -149,  -149,    69,    72,    58,    42,    51,    33,    53,
      54,    70,   -24,    58,   -11,   -11,    58,   106,   -11,   102,
      90,  -149,    94,  -149,   121,  -149,   122,    29,   101,   -11,
     -11,  -149,   115,  -149,  -149,   114,    52,     7,   112,   111,
     103,   107,  -149,    58,  -149,  -149,  -149,   109,    53,  -149,
     110,  -149,    69,   113,   130,  -149,  -149,   116,  -149,    58,
     -11,   -11,   -11,   -11,   -11,   -11,    92,  -149,  -149,  -149,
       7,   -11,   -17,    -8,    58,   -11,   -11,     1,    90,    99,
    -149,    99,   117,   136,  -149,   -11,    95,   125,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,    98,     7,     7,     7,
    -149,     7,     7,     7,     7,     7,  -149,  -149,  -149,    67,
    -149,  -149,   108,   120,   119,  -149,  -149,  -149,   146,   124,
     116,  -149,    58,  -149,  -149,   -17,   -17,   -17,    -8,    -8,
      -8,    -8,    -8,   -11,   -11,  -149,  -149,  -149,  -149,    58,
       1,  -149,   124,    36,   105,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   135,   137,   127,   119,   118,
      69,   131,  -149,    58,    58,    13,   143,  -149,  -149,   132,
     155,  -149,  -149,   134,  -149,   157,   124,    58,   124,  -149,
     127,  -149,  -149
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,     0,     6,     0,     0,
       0,     5,     4,     0,     0,    28,     0,     0,     6,    12,
       0,     0,     0,    28,    74,    74,    28,     0,    74,     0,
      26,     2,     0,     7,     0,    11,     0,     0,     0,    74,
      74,    36,     0,    75,    76,     0,    45,     0,     0,     0,
       0,     0,    10,    28,    25,    19,    18,     0,    12,    15,
       0,    14,     0,     0,     0,    16,    35,    72,    29,    28,
      74,    74,    74,    74,    74,    74,    64,    66,    65,    67,
       0,    74,    53,    58,    28,    74,    74,    74,    26,     0,
      13,     0,     0,     0,    17,    74,     0,    37,    46,    47,
      48,    49,    50,    51,    69,    70,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,    57,    31,    32,     0,
      83,    34,     0,     0,    78,    27,     9,     8,     0,    22,
      72,    71,    28,    30,    68,    53,    53,    53,    58,    58,
      58,    58,    58,    74,    74,    33,    80,    82,    81,    28,
      74,    77,    22,     0,     0,    73,    38,    56,    54,    55,
      62,    63,    59,    60,    61,     0,     0,    42,    78,     0,
       0,     0,    21,    28,    28,    74,     0,    79,    20,     0,
       0,    39,    40,     0,    41,     0,    22,    28,    22,    24,
      42,    23,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,  -149,   144,   -23,   -36,   123,  -149,  -149,
    -149,  -149,  -149,  -149,  -148,   140,    77,   -26,  -149,  -149,
    -149,   -21,   -22,    21,   -80,    11,   -41,   -65,    91,    38,
     -85,    -9,     2,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,     8,    11,    16,    20,    35,    60,    61,
      17,    65,    57,    38,   154,    29,    54,    30,   133,   145,
     121,   176,    45,    46,   110,    82,   116,    83,    41,    96,
      47,   123,   151,   124
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    63,   122,    48,   169,    39,    51,   120,     3,    56,
      76,    77,    78,    79,     4,   105,     1,    66,    67,   120,
     107,    40,     7,   108,   109,   -43,    92,    88,   111,    43,
      44,   112,    19,     5,   113,   114,   115,    62,   189,    19,
     191,    43,    44,    97,   170,    80,   138,   139,   140,   141,
     142,     9,    81,    43,    44,   157,   158,   159,   117,   106,
      10,    22,    12,   118,   119,   122,   126,    18,   127,    23,
      31,    24,    19,   130,    25,    21,    26,    32,    27,    36,
      34,    28,    70,    71,    72,    73,    74,    75,   143,   144,
     122,    98,    99,   100,   101,   102,   103,   160,   161,   162,
     163,   164,    13,    14,    55,    15,   156,    13,    14,    50,
      15,   146,   147,   148,    52,    37,    53,   171,   135,   136,
     137,   165,   166,   167,    58,    59,    64,    68,    69,    84,
      85,    87,    86,    94,   179,    89,    91,    40,    93,   129,
     132,   131,   128,    95,   134,   149,   150,   181,   182,   152,
     153,   172,   173,   175,   174,   184,   180,   185,   186,   187,
     188,   190,    33,    42,   178,   125,   183,   104,   155,   192,
     177,     0,   168,     0,     0,     0,     0,     0,     0,     0,
       0,    90
};

static const yytype_int16 yycheck[] =
{
      26,    37,    87,    25,   152,    29,    28,     6,     3,    32,
       3,     4,     5,     6,     0,    80,     7,    39,    40,     6,
      37,    45,     3,    40,    41,    12,    62,    53,    36,    40,
      41,    39,     3,    45,    42,    43,    44,     8,   186,     3,
     188,    40,    41,    69,     8,    38,   111,   112,   113,   114,
     115,    26,    45,    40,    41,   135,   136,   137,    84,    81,
      27,     3,    46,    85,    86,   150,    89,     3,    91,    11,
      28,    13,     3,    95,    16,     3,    18,    26,    20,    25,
      27,    23,    30,    31,    32,    33,    34,    35,    21,    22,
     175,    70,    71,    72,    73,    74,    75,   138,   139,   140,
     141,   142,     8,     9,    10,    11,   132,     8,     9,     3,
      11,     3,     4,     5,    12,    45,    26,   153,   107,   108,
     109,   143,   144,   149,     3,     3,    25,    12,    14,    17,
      19,    24,    29,     3,   170,    26,    26,    45,    25,     3,
      15,    46,    25,    27,    46,    25,    27,   173,   174,     3,
      26,    46,    17,    26,    17,    12,    25,    25,     3,    25,
       3,   187,    18,    23,    46,    88,   175,    76,   130,   190,
     168,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    48,     3,     0,    45,    49,     3,    50,    26,
      27,    51,    46,     8,     9,    11,    52,    57,     3,     3,
      53,     3,     3,    11,    13,    16,    18,    20,    23,    62,
      64,    28,    26,    51,    27,    54,    25,    45,    60,    29,
      45,    75,    62,    40,    41,    69,    70,    77,    69,    64,
       3,    69,    12,    26,    63,    10,    52,    59,     3,     3,
      55,    56,     8,    53,    25,    58,    69,    69,    12,    14,
      30,    31,    32,    33,    34,    35,     3,     4,     5,     6,
      38,    45,    72,    74,    17,    19,    29,    24,    64,    26,
      54,    26,    53,    25,     3,    27,    76,    64,    70,    70,
      70,    70,    70,    70,    75,    74,    69,    37,    40,    41,
      71,    36,    39,    42,    43,    44,    73,    64,    69,    69,
       6,    67,    77,    78,    80,    63,    52,    52,    25,     3,
      69,    46,    15,    65,    46,    72,    72,    72,    74,    74,
      74,    74,    74,    21,    22,    66,     3,     4,     5,    25,
      27,    79,     3,    26,    61,    76,    64,    71,    71,    71,
      73,    73,    73,    73,    73,    69,    69,    64,    80,    61,
       8,    53,    46,    17,    17,    26,    68,    79,    46,    53,
      25,    64,    64,    78,    12,    25,     3,    25,     3,    61,
      64,    61,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    51,    51,    52,    52,
      52,    53,    54,    54,    55,    56,    57,    58,    59,    59,
      60,    60,    61,    61,    61,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    67,    68,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    70,    71,    71,    71,    71,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    75,    76,    76,    77,    77,    77,    78,    79,    79,
      80,    80,    80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     3,     2,     0,     3,     6,     5,
       3,     2,     0,     3,     1,     1,     4,     2,     1,     1,
       7,     6,     0,     6,     5,     2,     0,     3,     0,     3,
       5,     4,     4,     5,     4,     3,     2,     0,     2,     4,
       4,     5,     0,     1,     5,     1,     3,     3,     3,     3,
       3,     3,     3,     0,     3,     3,     3,     2,     0,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     2,
       2,     4,     0,     3,     0,     1,     1,     2,     0,     3,
       2,     2,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: PROGRAM IDENTIFIER optional_paramaters SEMICOLON block DOT  */
#line 54 "pascal.y"
                                                                  {
            (yyval.node) = create_node(AST_NODE_TYPE_PROGRAM, (yyvsp[-4].stringValue));
            add_child((yyval.node), (yyvsp[-3].node));
            add_child((yyval.node), (yyvsp[-1].node));

            root = (yyval.node);
        }
#line 1287 "parser.c"
    break;

  case 3: /* optional_paramaters: %empty  */
#line 64 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_OPTIONAL_PARAMETERS, NULL);
        }
#line 1295 "parser.c"
    break;

  case 4: /* optional_paramaters: LPAREN parameters_list RPAREN  */
#line 67 "pascal.y"
                                      {
            (yyval.node) = create_node(AST_NODE_TYPE_OPTIONAL_PARAMETERS, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
        }
#line 1304 "parser.c"
    break;

  case 5: /* parameters_list: IDENTIFIER parameters_list_tail  */
#line 74 "pascal.y"
                                        {
            (yyval.node) = create_node(AST_NODE_TYPE_PARAMETERS_LIST, (yyvsp[-1].stringValue));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-1].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1314 "parser.c"
    break;

  case 6: /* parameters_list_tail: %empty  */
#line 82 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_PARAMETERS_LIST_TAIL, NULL);
        }
#line 1322 "parser.c"
    break;

  case 7: /* parameters_list_tail: COMMA IDENTIFIER parameters_list_tail  */
#line 85 "pascal.y"
                                              {
            (yyval.node) = create_node(AST_NODE_TYPE_PARAMETERS_LIST, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-1].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1332 "parser.c"
    break;

  case 8: /* block: VAR identifiers_list COLON type SEMICOLON block  */
#line 93 "pascal.y"
                                                        {
            (yyval.node) = create_node(AST_NODE_TYPE_BLOCK, NULL);
            add_child((yyval.node), (yyvsp[-4].node));
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1343 "parser.c"
    break;

  case 9: /* block: function_header SEMICOLON block_or_forward SEMICOLON block  */
#line 99 "pascal.y"
                                                                   {
            (yyval.node) = create_node(AST_NODE_TYPE_BLOCK, NULL);
            add_child((yyval.node), (yyvsp[-4].node));
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1354 "parser.c"
    break;

  case 10: /* block: BEGIN_ intructions_list END_  */
#line 105 "pascal.y"
                                     {
            (yyval.node) = create_node(AST_NODE_TYPE_BLOCK, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
        }
#line 1363 "parser.c"
    break;

  case 11: /* identifiers_list: IDENTIFIER identifiers_list_tail  */
#line 112 "pascal.y"
                                         {
            (yyval.node) = create_node(AST_NODE_TYPE_IDENTIFIERS_LIST, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-1].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1373 "parser.c"
    break;

  case 12: /* identifiers_list_tail: %empty  */
#line 119 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_IDENTIFIERS_LIST_TAIL, NULL);
        }
#line 1381 "parser.c"
    break;

  case 13: /* identifiers_list_tail: COMMA IDENTIFIER identifiers_list_tail  */
#line 122 "pascal.y"
                                               {
            (yyval.node) = create_node(AST_NODE_TYPE_IDENTIFIERS_LIST, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-1].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1391 "parser.c"
    break;

  case 14: /* type: ordinal_type  */
#line 130 "pascal.y"
                     {
            (yyval.node) = create_node(AST_NODE_TYPE_TYPE, NULL);
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1400 "parser.c"
    break;

  case 15: /* ordinal_type: IDENTIFIER  */
#line 137 "pascal.y"
                   {
            (yyval.node) = create_node(AST_NODE_TYPE_ORDINAL_TYPE, (yyvsp[0].stringValue));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[0].stringValue)));
        }
#line 1409 "parser.c"
    break;

  case 16: /* function_header: FUNCTION IDENTIFIER formal_parameters_list function_header_tail  */
#line 144 "pascal.y"
                                                                        {
            (yyval.node) = create_node(AST_NODE_TYPE_FUNCTION_HEADER, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-2].stringValue)));
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1420 "parser.c"
    break;

  case 17: /* function_header_tail: COLON IDENTIFIER  */
#line 152 "pascal.y"
                         {
            (yyval.node) = create_node(AST_NODE_TYPE_FUNCTION_HEADER_TAIL, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[0].stringValue)));
        }
#line 1429 "parser.c"
    break;

  case 18: /* block_or_forward: block  */
#line 159 "pascal.y"
              {
            (yyval.node) = create_node(AST_NODE_TYPE_BLOCK_OR_FORWARD, NULL);
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1438 "parser.c"
    break;

  case 19: /* block_or_forward: FORWARD  */
#line 163 "pascal.y"
                {
            (yyval.node) = create_node(AST_NODE_TYPE_FORWARD, NULL);
        }
#line 1446 "parser.c"
    break;

  case 20: /* formal_parameters_list: LPAREN VAR identifiers_list COLON IDENTIFIER formal_parameters_list_tail RPAREN  */
#line 169 "pascal.y"
                                                                                        {
            (yyval.node) = create_node(AST_NODE_TYPE_FORMAL_PARAMETERS_LIST, NULL);
            add_child((yyval.node), (yyvsp[-4].node));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-2].stringValue)));
        }
#line 1456 "parser.c"
    break;

  case 21: /* formal_parameters_list: LPAREN identifiers_list COLON IDENTIFIER formal_parameters_list_tail RPAREN  */
#line 174 "pascal.y"
                                                                                    {
            (yyval.node) = create_node(AST_NODE_TYPE_FORMAL_PARAMETERS_LIST, NULL);
            add_child((yyval.node), (yyvsp[-4].node));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-2].stringValue)));
        }
#line 1466 "parser.c"
    break;

  case 22: /* formal_parameters_list_tail: %empty  */
#line 182 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_FORMAL_PARAMETERS_LIST_TAIL, NULL);
        }
#line 1474 "parser.c"
    break;

  case 23: /* formal_parameters_list_tail: SEMICOLON VAR identifiers_list COLON IDENTIFIER formal_parameters_list_tail  */
#line 185 "pascal.y"
                                                                                    {
            (yyval.node) = create_node(AST_NODE_TYPE_FORMAL_PARAMETERS_LIST_TAIL, NULL);
            add_child((yyval.node), (yyvsp[-3].node));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-1].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1485 "parser.c"
    break;

  case 24: /* formal_parameters_list_tail: SEMICOLON identifiers_list COLON IDENTIFIER formal_parameters_list_tail  */
#line 191 "pascal.y"
                                                                                {
            (yyval.node) = create_node(AST_NODE_TYPE_FORMAL_PARAMETERS_LIST_TAIL, NULL);
            add_child((yyval.node), (yyvsp[-3].node));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-1].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1496 "parser.c"
    break;

  case 25: /* intructions_list: instruction intructions_list_tail  */
#line 200 "pascal.y"
                                          {
            (yyval.node) = create_node(AST_NODE_TYPE_INSTRUCTIONS_LIST, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1506 "parser.c"
    break;

  case 26: /* intructions_list_tail: %empty  */
#line 208 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_INSTRUCTIONS_LIST_TAIL, NULL);
        }
#line 1514 "parser.c"
    break;

  case 27: /* intructions_list_tail: SEMICOLON instruction intructions_list_tail  */
#line 211 "pascal.y"
                                                    {
            (yyval.node) = create_node(AST_NODE_TYPE_INSTRUCTIONS_LIST_TAIL, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1524 "parser.c"
    break;

  case 28: /* instruction: %empty  */
#line 219 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_INSTRUCTION, NULL);
        }
#line 1532 "parser.c"
    break;

  case 29: /* instruction: BEGIN_ intructions_list END_  */
#line 222 "pascal.y"
                                     {
            (yyval.node) = create_node(AST_NODE_TYPE_INSTRUCTION, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
        }
#line 1541 "parser.c"
    break;

  case 30: /* instruction: IF expression THEN instruction else_expression  */
#line 226 "pascal.y"
                                                       {
            (yyval.node) = create_node(AST_NODE_TYPE_IF_STATEMENT, NULL);
            add_child((yyval.node), (yyvsp[-3].node));
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1552 "parser.c"
    break;

  case 31: /* instruction: WHILE expression DO instruction  */
#line 232 "pascal.y"
                                        {
            (yyval.node) = create_node(AST_NODE_TYPE_WHILE_STATEMENT, NULL);
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1562 "parser.c"
    break;

  case 32: /* instruction: REPEAT instruction UNTIL expression  */
#line 237 "pascal.y"
                                            {
            (yyval.node) = create_node(AST_NODE_TYPE_REPEAT_UNTIL_STATEMENT, NULL);
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1572 "parser.c"
    break;

  case 33: /* instruction: FOR IDENTIFIER ASSIGN expression for_tail  */
#line 242 "pascal.y"
                                                  {
            (yyval.node) = create_node(AST_NODE_TYPE_FOR_STATEMENT, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-3].stringValue)));
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1583 "parser.c"
    break;

  case 34: /* instruction: CASE expression OF case_branches  */
#line 248 "pascal.y"
                                         {
            (yyval.node) = create_node(AST_NODE_TYPE_CASE_STATEMENT, NULL);
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1593 "parser.c"
    break;

  case 35: /* instruction: IDENTIFIER ASSIGN expression  */
#line 253 "pascal.y"
                                     {
            (yyval.node) = create_node(AST_NODE_TYPE_ASSIGNMENT_STATEMENT, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-2].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1603 "parser.c"
    break;

  case 36: /* instruction: IDENTIFIER effective_parameters_list  */
#line 258 "pascal.y"
                                             {
            (yyval.node) = create_node(AST_NODE_TYPE_FUNCTION_CALL, (yyvsp[-1].stringValue));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-1].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1613 "parser.c"
    break;

  case 37: /* else_expression: %empty  */
#line 266 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_ELSE_EXPRESSION, NULL);
        }
#line 1621 "parser.c"
    break;

  case 38: /* else_expression: ELSE instruction  */
#line 269 "pascal.y"
                         {
            (yyval.node) = create_node(AST_NODE_TYPE_ELSE_EXPRESSION, NULL);
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1630 "parser.c"
    break;

  case 39: /* for_tail: TO expression DO instruction  */
#line 276 "pascal.y"
                                     {
            (yyval.node) = create_node(AST_NODE_TYPE_FOR_TAIL_EXPRESSION, "to");
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1640 "parser.c"
    break;

  case 40: /* for_tail: DOWNTO expression DO instruction  */
#line 281 "pascal.y"
                                         {
            (yyval.node) = create_node(AST_NODE_TYPE_FOR_TAIL_EXPRESSION, "downto");
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1650 "parser.c"
    break;

  case 41: /* case_branches: constant_list COLON instruction case_branches_tail END_  */
#line 290 "pascal.y"
                                                                {
            (yyval.node) = create_node(AST_NODE_TYPE_CASE_BRANCHES, NULL);
            add_child((yyval.node), (yyvsp[-4].node));
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[-1].node));
        }
#line 1661 "parser.c"
    break;

  case 42: /* case_branches_tail: %empty  */
#line 299 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_CASE_BRANCHES_TAIL, NULL);
        }
#line 1669 "parser.c"
    break;

  case 43: /* case_branches_tail: SEMICOLON  */
#line 302 "pascal.y"
                              {
            (yyval.node) = create_node(AST_NODE_TYPE_CASE_BRANCHES_TAIL, NULL);
        }
#line 1677 "parser.c"
    break;

  case 44: /* case_branches_tail: SEMICOLON constant_list COLON instruction case_branches_tail  */
#line 305 "pascal.y"
                                                                     {
            (yyval.node) = create_node(AST_NODE_TYPE_CASE_BRANCHES_TAIL, NULL);
            add_child((yyval.node), (yyvsp[-3].node));
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1688 "parser.c"
    break;

  case 45: /* expression: simple_expression  */
#line 314 "pascal.y"
                          {
            (yyval.node) = create_node(AST_NODE_TYPE_EXPRESSION, NULL);
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1697 "parser.c"
    break;

  case 46: /* expression: simple_expression EQUAL simple_expression  */
#line 318 "pascal.y"
                                                  {
            (yyval.node) = create_node(AST_NODE_TYPE_EXPRESSION, "=");
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1707 "parser.c"
    break;

  case 47: /* expression: simple_expression LT simple_expression  */
#line 323 "pascal.y"
                                               {
            (yyval.node) = create_node(AST_NODE_TYPE_EXPRESSION, "<");
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1717 "parser.c"
    break;

  case 48: /* expression: simple_expression LE simple_expression  */
#line 328 "pascal.y"
                                               {
            (yyval.node) = create_node(AST_NODE_TYPE_EXPRESSION, "<=");
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1727 "parser.c"
    break;

  case 49: /* expression: simple_expression GT simple_expression  */
#line 333 "pascal.y"
                                               {
            (yyval.node) = create_node(AST_NODE_TYPE_EXPRESSION, ">");
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1737 "parser.c"
    break;

  case 50: /* expression: simple_expression GE simple_expression  */
#line 338 "pascal.y"
                                               {
            (yyval.node) = create_node(AST_NODE_TYPE_EXPRESSION, ">=");
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1747 "parser.c"
    break;

  case 51: /* expression: simple_expression NE simple_expression  */
#line 343 "pascal.y"
                                               {
            (yyval.node) = create_node(AST_NODE_TYPE_EXPRESSION, "<>");
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1757 "parser.c"
    break;

  case 52: /* simple_expression: signal term simple_expression_tail  */
#line 351 "pascal.y"
                                           {
            (yyval.node) = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION, NULL);
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1768 "parser.c"
    break;

  case 53: /* simple_expression_tail: %empty  */
#line 359 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION_TAIL, NULL);
        }
#line 1776 "parser.c"
    break;

  case 54: /* simple_expression_tail: PLUS term simple_expression_tail  */
#line 362 "pascal.y"
                                         {
            (yyval.node) = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION_TAIL, "+");
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1786 "parser.c"
    break;

  case 55: /* simple_expression_tail: MINUS term simple_expression_tail  */
#line 367 "pascal.y"
                                          {
            (yyval.node) = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION_TAIL, "-");
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1796 "parser.c"
    break;

  case 56: /* simple_expression_tail: OR term simple_expression_tail  */
#line 372 "pascal.y"
                                       {
            (yyval.node) = create_node(AST_NODE_TYPE_SIMPLE_EXPRESSION_TAIL, "or");
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1806 "parser.c"
    break;

  case 57: /* term: factor term_tail  */
#line 380 "pascal.y"
                         {
            (yyval.node) = create_node(AST_NODE_TYPE_TERM, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1816 "parser.c"
    break;

  case 58: /* term_tail: %empty  */
#line 388 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_TERM_TAIL, NULL);
        }
#line 1824 "parser.c"
    break;

  case 59: /* term_tail: MULTIPLY factor term_tail  */
#line 391 "pascal.y"
                                  {
            (yyval.node) = create_node(AST_NODE_TYPE_TERM_TAIL, "*");
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1834 "parser.c"
    break;

  case 60: /* term_tail: DIVIDE factor term_tail  */
#line 396 "pascal.y"
                                {
            (yyval.node) = create_node(AST_NODE_TYPE_TERM_TAIL, "/");
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1844 "parser.c"
    break;

  case 61: /* term_tail: DIV factor term_tail  */
#line 401 "pascal.y"
                             {
            (yyval.node) = create_node(AST_NODE_TYPE_TERM_TAIL, "div");
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1854 "parser.c"
    break;

  case 62: /* term_tail: AND factor term_tail  */
#line 406 "pascal.y"
                             {
            (yyval.node) = create_node(AST_NODE_TYPE_TERM_TAIL, "and");
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1864 "parser.c"
    break;

  case 63: /* term_tail: MOD factor term_tail  */
#line 411 "pascal.y"
                             {
            (yyval.node) = create_node(AST_NODE_TYPE_TERM_TAIL, "mod");
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1874 "parser.c"
    break;

  case 64: /* factor: IDENTIFIER  */
#line 419 "pascal.y"
                   {
            (yyval.node) = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[0].stringValue)));
        }
#line 1883 "parser.c"
    break;

  case 65: /* factor: INTEGER  */
#line 423 "pascal.y"
                {
            (yyval.node) = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_INTEGER, (yyvsp[0].stringValue)));
        }
#line 1892 "parser.c"
    break;

  case 66: /* factor: REAL  */
#line 427 "pascal.y"
             {
            (yyval.node) = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_REAL, (yyvsp[0].stringValue)));
        }
#line 1901 "parser.c"
    break;

  case 67: /* factor: STRING  */
#line 431 "pascal.y"
               {
            (yyval.node) = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_STRING, (yyvsp[0].stringValue)));
        }
#line 1910 "parser.c"
    break;

  case 68: /* factor: LPAREN expression RPAREN  */
#line 435 "pascal.y"
                                 {
            (yyval.node) = create_node(AST_NODE_TYPE_FACTOR, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
        }
#line 1919 "parser.c"
    break;

  case 69: /* factor: IDENTIFIER effective_parameters_list  */
#line 439 "pascal.y"
                                             {
            (yyval.node) = create_node(AST_NODE_TYPE_FUNCTION_CALL, (yyvsp[-1].stringValue));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[-1].stringValue)));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1929 "parser.c"
    break;

  case 70: /* factor: NOT factor  */
#line 444 "pascal.y"
                   {
            (yyval.node) = create_node(AST_NODE_TYPE_FACTOR, "not");
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1938 "parser.c"
    break;

  case 71: /* effective_parameters_list: LPAREN expression effective_parameters_list_tail RPAREN  */
#line 451 "pascal.y"
                                                                {
            (yyval.node) = create_node(AST_NODE_TYPE_EFFECTIVE_PARAMETERS_LIST, NULL);
            add_child((yyval.node), (yyvsp[-2].node));
            add_child((yyval.node), (yyvsp[-1].node));
        }
#line 1948 "parser.c"
    break;

  case 72: /* effective_parameters_list_tail: %empty  */
#line 459 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_EFFECTIVE_PARAMETERS_LIST_TAIL, NULL);
        }
#line 1956 "parser.c"
    break;

  case 73: /* effective_parameters_list_tail: COMMA expression effective_parameters_list_tail  */
#line 462 "pascal.y"
                                                        {
            (yyval.node) = create_node(AST_NODE_TYPE_EFFECTIVE_PARAMETERS_LIST_TAIL, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 1966 "parser.c"
    break;

  case 74: /* signal: %empty  */
#line 470 "pascal.y"
                {
            (yyval.node) = create_node(AST_NODE_TYPE_SIGNAL, NULL);
        }
#line 1974 "parser.c"
    break;

  case 75: /* signal: PLUS  */
#line 473 "pascal.y"
             {
            (yyval.node) = create_node(AST_NODE_TYPE_SIGNAL, "+");
        }
#line 1982 "parser.c"
    break;

  case 76: /* signal: MINUS  */
#line 476 "pascal.y"
              {
            (yyval.node) = create_node(AST_NODE_TYPE_SIGNAL, "-");
        }
#line 1990 "parser.c"
    break;

  case 77: /* constant_list: constant constant_list_tail  */
#line 482 "pascal.y"
                                    {
            (yyval.node) = create_node(AST_NODE_TYPE_CONSTANT_LIST, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 2000 "parser.c"
    break;

  case 78: /* constant_list_tail: %empty  */
#line 490 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_CONSTANT_LIST_TAIL, NULL);
        }
#line 2008 "parser.c"
    break;

  case 79: /* constant_list_tail: COMMA constant constant_list_tail  */
#line 493 "pascal.y"
                                          {
            (yyval.node) = create_node(AST_NODE_TYPE_CONSTANT_LIST_TAIL, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), (yyvsp[0].node));
        }
#line 2018 "parser.c"
    break;

  case 80: /* constant: signal IDENTIFIER  */
#line 501 "pascal.y"
                          {
            (yyval.node) = create_node(AST_NODE_TYPE_CONSTANT, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), create_node(AST_NODE_TYPE_IDENTIFIER, (yyvsp[0].stringValue)));
        }
#line 2028 "parser.c"
    break;

  case 81: /* constant: signal INTEGER  */
#line 506 "pascal.y"
                       {
            (yyval.node) = create_node(AST_NODE_TYPE_CONSTANT, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), create_node(AST_NODE_TYPE_INTEGER, (yyvsp[0].stringValue)));
        }
#line 2038 "parser.c"
    break;

  case 82: /* constant: signal REAL  */
#line 511 "pascal.y"
                    {
            (yyval.node) = create_node(AST_NODE_TYPE_CONSTANT, NULL);
            add_child((yyval.node), (yyvsp[-1].node));
            add_child((yyval.node), create_node(AST_NODE_TYPE_REAL, (yyvsp[0].stringValue)));
        }
#line 2048 "parser.c"
    break;

  case 83: /* constant: STRING  */
#line 516 "pascal.y"
               {
            (yyval.node) = create_node(AST_NODE_TYPE_CONSTANT, NULL);
            add_child((yyval.node), create_node(AST_NODE_TYPE_STRING, (yyvsp[0].stringValue)));
        }
#line 2057 "parser.c"
    break;


#line 2061 "parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 522 "pascal.y"


int yyerror(const char *s) {

    fprintf(stderr, "Error: %s at line %d: %s\n", s, yylineno, yytext);

    return 0;
}
