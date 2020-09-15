/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 8 "pasc600.y" /* yacc.c:339  */

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include "hashtbl.h"

HASHTBL *hashtbl; 

int MAX_ERRORS = 5; //declare the maximum number of error we can encounter
int scope = 0; // variable to keep track of current scope
int error_count = 0; // variable to keep track of errors encountered, used in yyeror()

extern char *yytext; 
extern int yylineno;
extern FILE *yyin;
extern char *buf;

void yyerror(char *message);

extern int yylex();

extern void yyterminate();



#line 95 "pasc600.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pasc600.tab.h".  */
#ifndef YY_YY_PASC600_TAB_H_INCLUDED
# define YY_YY_PASC600_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_PROGRAM = 258,
    T_CONST = 259,
    T_TYPE = 260,
    T_ARRAY = 261,
    T_OF = 262,
    T_VAR = 263,
    T_FORWARD = 264,
    T_FUNCTION = 265,
    T_PROCEDURE = 266,
    T_INTEGER = 267,
    T_REAL = 268,
    T_BOOLEAN = 269,
    T_CHAR = 270,
    T_STRING = 271,
    T_BEGIN = 272,
    T_END = 273,
    T_IF = 274,
    T_THEN = 275,
    T_ELSE = 276,
    T_CASE = 277,
    T_OTHERWISE = 278,
    T_WHILE = 279,
    T_DO = 280,
    T_FOR = 281,
    T_DOWNTO = 282,
    T_TO = 283,
    T_READ = 284,
    T_WRITE = 285,
    T_LENGTH = 286,
    T_RELOP = 287,
    T_ADDOP = 288,
    T_OROP = 289,
    T_MULDIVANDOP = 290,
    T_NOTOP = 291,
    T_ID = 292,
    T_ICONST = 293,
    T_RCONST = 294,
    T_BCONST = 295,
    T_CCONST = 296,
    T_SCONST = 297,
    T_LPAREN = 298,
    T_RPAREN = 299,
    T_SEMI = 300,
    T_DOT = 301,
    T_COMMA = 302,
    T_EQU = 303,
    T_COLON = 304,
    T_LBRACK = 305,
    T_RBRACK = 306,
    T_ASSIGN = 307,
    T_DOTDOT = 308,
    T_EOF = 309,
    IFX = 310,
    EXP1 = 311,
    EXP2 = 312,
    EXP3 = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "pasc600.y" /* yacc.c:355  */

    
    int intvalue;
    double doublevalue;
    char *stringvalue;
    
    

#line 203 "pasc600.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PASC600_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 220 "pasc600.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    85,    84,    89,    90,    90,    94,    97,
      98,    99,   102,   102,   103,   103,   103,   104,   104,   107,
     108,   109,   112,   113,   114,   117,   118,   121,   122,   123,
     124,   124,   126,   127,   130,   131,   134,   135,   138,   139,
     140,   141,   142,   145,   146,   147,   150,   150,   152,   153,
     152,   155,   155,   159,   160,   160,   162,   163,   166,   167,
     170,   171,   174,   175,   176,   177,   178,   179,   182,   183,
     185,   186,   187,   188,   189,   192,   193,   194,   197,   198,
     198,   200,   203,   204,   207,   208,   209,   212,   213,   214,
     215,   218,   218,   220,   220,   222,   225,   226,   229,   230,
     230,   232,   235,   236,   239,   242,   243,   246,   247,   248,
     249,   250,   251,   252,   253,   256,   259,   262,   263,   266,
     269,   269,   273,   274,   277,   278,   278,   282,   283,   284,
     287,   288,   291,   294,   295,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_PROGRAM", "T_CONST", "T_TYPE",
  "T_ARRAY", "T_OF", "T_VAR", "T_FORWARD", "T_FUNCTION", "T_PROCEDURE",
  "T_INTEGER", "T_REAL", "T_BOOLEAN", "T_CHAR", "T_STRING", "T_BEGIN",
  "T_END", "T_IF", "T_THEN", "T_ELSE", "T_CASE", "T_OTHERWISE", "T_WHILE",
  "T_DO", "T_FOR", "T_DOWNTO", "T_TO", "T_READ", "T_WRITE", "T_LENGTH",
  "T_RELOP", "T_ADDOP", "T_OROP", "T_MULDIVANDOP", "T_NOTOP", "T_ID",
  "T_ICONST", "T_RCONST", "T_BCONST", "T_CCONST", "T_SCONST", "T_LPAREN",
  "T_RPAREN", "T_SEMI", "T_DOT", "T_COMMA", "T_EQU", "T_COLON", "T_LBRACK",
  "T_RBRACK", "T_ASSIGN", "T_DOTDOT", "T_EOF", "IFX", "EXP1", "EXP2",
  "EXP3", "$accept", "program", "$@1", "$@2", "header", "$@3",
  "declarations", "constdefs", "constant_defs", "$@4", "$@5", "$@6", "$@7",
  "expression", "expression1", "expression2", "expression3", "$@8",
  "variable", "expressions", "constant", "typedefs", "type_defs", "$@9",
  "$@10", "$@11", "$@12", "type_def", "$@13", "dims", "limits", "limit",
  "typename", "standard_type", "vardefs", "variable_defs", "$@14",
  "identifiers", "subprograms", "subprogram", "sub_header", "$@15", "$@16",
  "formal_parameters", "parameter_list", "$@17", "pass", "comp_statement",
  "statements", "statement", "assignment", "if_statement", "if_tail",
  "while_statement", "for_statement", "$@18", "iter_space",
  "subprogram_call", "$@19", "io_statement", "read_list", "read_item",
  "write_list", "write_item", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -171

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-171)))

#define YYTABLE_NINF -126

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    10,    54,    16,    90,  -171,    84,  -171,    69,  -171,
     150,  -171,    12,    94,   118,   151,  -171,   114,   131,   141,
     145,   157,   169,    14,    18,  -171,    20,   160,  -171,   134,
     164,  -171,    21,  -171,   119,  -171,  -171,  -171,    23,    37,
     159,   171,   172,  -171,    22,   103,   134,   134,   167,  -171,
    -171,  -171,  -171,  -171,   134,    30,    47,   176,  -171,   162,
    -171,  -171,   165,   173,   173,   134,   134,   177,   174,   175,
      39,    36,  -171,    -7,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,   178,  -171,  -171,  -171,  -171,    91,   182,  -171,   183,
     160,   184,   102,    30,    30,   179,    29,   134,   134,   134,
     134,   134,   134,   180,   134,   207,   181,  -171,    -4,     1,
    -171,   186,    70,   188,   134,  -171,   119,  -171,    82,    82,
     185,   109,  -171,  -171,  -171,  -171,   160,  -171,   187,  -171,
     189,   160,   132,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,   134,  -171,    47,    47,   176,   176,  -171,    30,
      25,   134,    30,  -171,     7,   160,   102,   119,   119,   190,
    -171,   162,    51,  -171,   192,    30,    76,  -171,   134,    30,
    -171,  -171,  -171,   120,  -171,  -171,    86,   147,   191,    91,
     142,   102,    93,   134,  -171,    30,  -171,  -171,   207,   143,
    -171,   204,  -171,   134,  -171,   186,  -171,  -171,   134,    97,
     193,     9,  -171,   194,  -171,  -171,    91,  -171,   102,  -171,
    -171,    30,   207,   160,   102,   119,  -171,     2,   201,  -171,
    -171,  -171,  -171,   120,   220,   147,  -171,  -171,   160,   146,
    -171,  -171,   134,   134,   119,   222,  -171,   102,  -171,   149,
     102,    30,    30,  -171,   102,  -171,   102,  -171,  -171,  -171
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    11,     6,     1,     0,    86,    45,     5,
       0,    17,     0,     2,     0,    77,     7,     0,    10,     9,
       0,     0,     0,     0,     0,    51,     0,     0,     8,     0,
       0,    12,    91,    93,   114,     3,    85,    84,    11,    11,
       0,    44,    43,    83,     0,     0,     0,     0,    34,    38,
      39,    40,    41,    42,     0,    18,    21,    24,    26,    29,
      32,    15,     0,    97,    97,     0,     0,     0,     0,     0,
     124,     0,   113,     0,   106,   107,   108,   109,   110,   111,
     112,     0,    88,    86,    87,    86,     0,     0,    46,    76,
      75,     0,     0,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,     0,    94,     0,     0,
     120,     0,     0,     0,     0,   104,   114,     4,     0,     0,
       0,     0,    67,    64,    66,    65,     0,    52,     0,    49,
       0,     0,     0,    82,    70,    71,    72,    73,    74,    69,
      81,    68,     0,    33,    19,    20,    22,    23,    25,    37,
       0,     0,    13,   102,     0,     0,     0,   114,   114,     0,
      34,   132,     0,   131,     0,   135,     0,   134,     0,   115,
     105,    90,    89,     0,    63,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    16,    99,    96,   103,     0,
      92,   118,   119,     0,   127,     0,   129,   128,     0,     0,
      61,     0,    59,     0,    56,    57,     0,    47,     0,    78,
      31,    36,   103,     0,     0,   114,   116,     0,     0,   130,
     133,   126,    54,     0,     0,     0,    50,    80,     0,     0,
     101,   117,     0,     0,   114,     0,    58,     0,    60,     0,
       0,   123,   122,   121,     0,    53,     0,    98,    55,   100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,  -171,  -171,  -171,   127,  -171,  -171,  -171,
    -171,  -171,  -171,   -29,   108,   100,   133,  -171,   -32,  -133,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -167,  -171,  -171,
      15,  -170,  -150,  -171,  -171,  -171,  -171,   -86,   -15,  -171,
    -171,  -171,  -171,   168,  -171,  -171,  -164,   -17,  -171,  -115,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,    38,  -171,    43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    22,    81,     3,    10,     7,     8,    12,    62,
      30,   103,    17,   149,    56,    57,    58,    95,    59,   150,
      60,    15,    26,   130,    87,   178,    40,   127,   235,   201,
     202,   128,   140,   141,    28,    44,   131,    45,    13,    23,
      24,    63,    64,   106,   154,   212,   155,    72,    73,    74,
      75,    76,   216,    77,    78,   159,   218,    79,   113,    80,
     162,   163,   166,   167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   170,    71,   203,   132,    35,   190,   205,   186,   182,
     222,   115,   207,    18,     1,    36,   157,    93,    94,    38,
       6,    41,   -95,    89,   213,    96,   158,     6,    97,   232,
     233,   209,    82,    97,    97,   199,   108,   109,   116,   226,
     176,     6,   191,   192,    98,   180,    84,     4,   228,    98,
      98,   187,   188,   203,     5,   238,   223,    19,   227,    37,
     224,    97,    97,    39,   230,    42,   -95,    90,   118,   189,
     119,   164,   183,   143,    14,   152,   184,    98,    98,   161,
      99,   100,  -125,   165,    71,   169,   102,   245,   114,   -34,
     247,   -34,    20,    21,   248,   194,   249,   120,   195,    34,
     231,   171,   172,    46,    20,    21,    47,    48,    49,    50,
      51,    52,    53,    54,   134,   135,   136,   137,   138,   243,
     197,    11,   185,   198,   121,    71,    71,   229,   122,   123,
     204,   124,   125,    91,   126,     9,    34,   210,    65,   139,
     183,   221,   239,    66,   183,    67,   174,   175,    68,    69,
      91,    16,    92,   121,   211,    25,    70,   200,   123,    27,
     124,   125,    29,   161,   217,    83,    85,    46,   -14,   165,
      47,    48,    49,    50,    51,    52,    53,    54,    31,    91,
     121,   181,    32,    71,   122,   123,    34,   124,   125,    91,
      91,   208,   214,    91,    33,   240,    91,    43,   246,   146,
     147,    61,    71,   241,   242,   144,   145,    86,   -48,    88,
     -30,   101,   102,   104,   110,   153,   105,   111,   112,   129,
     -79,   133,   142,   160,   117,   215,   234,   237,   151,   244,
     156,   168,   107,   219,   148,   173,   196,   179,   236,   206,
     177,   220,   193,     0,     0,     0,   -67,   225
};

static const yytype_int16 yycheck[] =
{
      29,   116,    34,   173,    90,    22,   156,   177,     1,   142,
       1,    18,   179,     1,     3,     1,    20,    46,    47,     1,
       4,     1,     1,     1,   188,    54,    25,     4,    32,    27,
      28,   181,     9,    32,    32,   168,    65,    66,    45,   206,
     126,     4,   157,   158,    48,   131,     9,    37,   212,    48,
      48,    44,    45,   223,     0,   225,    47,    45,   208,    45,
      51,    32,    32,    45,   214,    45,    45,    45,    83,   155,
      85,     1,    47,    44,     5,   104,    51,    48,    48,   111,
      33,    34,    43,   112,   116,   114,    50,   237,    52,    50,
     240,    52,    10,    11,   244,    44,   246,     6,    47,    17,
     215,   118,   119,    33,    10,    11,    36,    37,    38,    39,
      40,    41,    42,    43,    12,    13,    14,    15,    16,   234,
      44,    37,   151,    47,    33,   157,   158,   213,    37,    38,
      44,    40,    41,    47,    43,    45,    17,    44,    19,    37,
      47,    44,   228,    24,    47,    26,    37,    38,    29,    30,
      47,     1,    49,    33,   183,    37,    37,    37,    38,     8,
      40,    41,    48,   195,   193,    38,    39,    33,    37,   198,
      36,    37,    38,    39,    40,    41,    42,    43,    37,    47,
      33,    49,    37,   215,    37,    38,    17,    40,    41,    47,
      47,    49,    49,    47,    37,    49,    47,    37,    49,    99,
     100,    37,   234,   232,   233,    97,    98,    48,    37,    37,
      43,    35,    50,    48,    37,     8,    43,    43,    43,    37,
      37,    37,    43,    37,    46,    21,    25,     7,    48,     7,
      49,    43,    64,   195,   101,    50,    44,    48,   223,    48,
      53,   198,    52,    -1,    -1,    -1,    53,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    60,    63,    37,     0,     4,    65,    66,    45,
      64,    37,    67,    97,     5,    80,     1,    71,     1,    45,
      10,    11,    61,    98,    99,    37,    81,     8,    93,    48,
      69,    37,    37,    37,    17,   106,     1,    45,     1,    45,
      85,     1,    45,    37,    94,    96,    33,    36,    37,    38,
      39,    40,    41,    42,    43,    72,    73,    74,    75,    77,
      79,    37,    68,   100,   101,    19,    24,    26,    29,    30,
      37,    77,   106,   107,   108,   109,   110,   112,   113,   116,
     118,    62,     9,    65,     9,    65,    48,    83,    37,     1,
      45,    47,    49,    72,    72,    76,    72,    32,    48,    33,
      34,    35,    50,    70,    48,    43,   102,   102,    72,    72,
      37,    43,    43,   117,    52,    18,    45,    46,    97,    97,
       6,    33,    37,    38,    40,    41,    43,    86,    90,    37,
      82,    95,    96,    37,    12,    13,    14,    15,    16,    37,
      91,    92,    43,    44,    73,    73,    74,    74,    75,    72,
      78,    48,    72,     8,   103,   105,    49,    20,    25,   114,
      37,    77,   119,   120,     1,    72,   121,   122,    43,    72,
     108,   106,   106,    50,    37,    38,    96,    53,    84,    48,
      96,    49,    78,    47,    51,    72,     1,    44,    45,    96,
      91,   108,   108,    52,    44,    47,    44,    44,    47,    78,
      37,    88,    89,    90,    44,    90,    48,    86,    49,    91,
      44,    72,   104,   105,    49,    21,   111,    72,   115,   120,
     122,    44,     1,    47,    51,    53,    86,    91,   105,    96,
      91,   108,    27,    28,    25,    87,    89,     7,    90,    96,
      49,    72,    72,   108,     7,    91,    49,    91,    91,    91
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    61,    62,    60,    63,    64,    63,    65,    66,
      66,    66,    68,    67,    69,    70,    67,    71,    67,    72,
      72,    72,    73,    73,    73,    74,    74,    75,    75,    75,
      76,    75,    75,    75,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    80,    82,    81,    83,    84,
      81,    85,    81,    86,    87,    86,    86,    86,    88,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    93,    93,    93,    94,    95,
      94,    94,    96,    96,    97,    97,    97,    98,    98,    98,
      98,   100,    99,   101,    99,    99,   102,   102,   103,   104,
     103,   103,   105,   105,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   110,   111,   111,   112,
     114,   113,   115,   115,   116,   117,   116,   118,   118,   118,
     119,   119,   120,   121,   121,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     7,     3,     0,     4,     3,     3,
       3,     0,     0,     6,     0,     0,     7,     0,     4,     3,
       3,     1,     3,     3,     1,     3,     1,     2,     2,     1,
       0,     5,     1,     3,     1,     4,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     0,     0,     6,     0,     0,
       7,     0,     4,     6,     0,     7,     3,     3,     3,     1,
       3,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     0,     5,     0,
       6,     3,     3,     1,     3,     3,     0,     3,     3,     5,
       5,     0,     6,     0,     4,     2,     3,     0,     6,     0,
       7,     4,     1,     0,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     5,     2,     0,     4,
       0,     7,     3,     3,     1,     0,     5,     4,     4,     4,
       3,     1,     1,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 84 "pasc600.y" /* yacc.c:1646  */
    {scope++;}
#line 1486 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 85 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1492 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); printf("\t\t\t\t\tprogram -> header declarations subprograms comp_statement T_DOT\n"); printf("--- NUMBER OF ERRORS = %d ---\n", error_count);}
#line 1498 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[-1].stringvalue), NULL ,scope); printf("\t\t\t\t\theader -> T_PROGRAM T_ID T_SEMI\n");}
#line 1504 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue), NULL ,scope); printf("\t\t\t\t\theader -> T_PROGRAM T_ID\n"); }
#line 1510 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 91 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n");}
#line 1516 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 94 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tdeclarations -> constdefs typedefs vardefs\n");}
#line 1522 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 97 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstdefs -> T_CONST constant_defs T_SEMI\n");}
#line 1528 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 98 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstdefs -> T_CONST constant_defs\n"); printf("\t\t\t\t\tT_SEMI missing\n");}
#line 1534 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 99 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstdefs -> ε\n");}
#line 1540 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 102 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 1546 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstant_defs -> constant_defs T_SEMI T_ID T_EQU expression\n");}
#line 1552 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n");}
#line 1558 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 103 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 1564 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 103 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstant_defs -> constant_defs T_ID T_EQU expression\n");}
#line 1570 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 104 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 1576 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 104 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstant_defs -> T_ID T_EQU expression\n");}
#line 1582 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 107 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression -> expression T_RELOP expression\n");}
#line 1588 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 108 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression -> expression T_EQU expression\n");}
#line 1594 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 109 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression -> expression1\n");}
#line 1600 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression1 -> expression T_ADDOP expression\n");}
#line 1606 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression1 -> expression T_OROP expression\n");}
#line 1612 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression1 -> expression2\n");}
#line 1618 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 117 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression2 -> expression T_MULDIVANDOP expression\n");}
#line 1624 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 118 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression2 -> expression3\n");}
#line 1630 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 121 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression3 -> T_ADDOP expression\n");}
#line 1636 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 122 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression3 -> T_NOTOP expression\n");}
#line 1642 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 123 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression3 -> variable\n");}
#line 1648 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 1654 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression3 -> T_LPAREN expressions T_RPAREN\n");}
#line 1660 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 126 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression3 -> constant\n");}
#line 1666 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 127 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpression3 -> T_LPAREN expression T_RPAREN\n");}
#line 1672 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 130 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope); printf("\t\t\t\t\tvariable -> T_ID\n");}
#line 1678 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 131 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tvariable -> variable T_LBRACK expressions T_RBRACK\n");}
#line 1684 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpressions -> expressions T_COMMA expression\n");}
#line 1690 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 135 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\texpressions -> expression\n");}
#line 1696 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 138 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstant -> T_ICONST\n");}
#line 1702 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 139 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstant -> T_RCONST\n");}
#line 1708 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 140 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstant -> T_BCONST\n");}
#line 1714 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 141 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstant -> T_CCONST\n");}
#line 1720 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tconstant -> T_SCONST\n");}
#line 1726 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 145 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttypedefs -> T_TYPE type_defs T_SEMI\n");}
#line 1732 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n"); printf("\t\t\t\t\ttypedefs -> T_TYPE type_defs\n");}
#line 1738 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttypedefs -> ε\n");}
#line 1744 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 1750 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 151 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttype_defs -> type_defs T_SEMI T_ID T_EQU type_def\n");}
#line 1756 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 152 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n");}
#line 1762 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 153 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 1768 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttype_defs -> type_defs T_ID T_EQU type_def\n");}
#line 1774 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 155 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 1780 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 156 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttype_defs -> T_ID T_EQU type_def\n");}
#line 1786 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 159 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttype_def -> T_ARRAY T_LBRACK dims T_RBRACK T_OF typename\n");}
#line 1792 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 160 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_RBRACK missing\n");}
#line 1798 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 161 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttype_def -> T_ARRAY T_LBRACK dims T_OF typename\n");}
#line 1804 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 162 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttype_def -> T_LPAREN identifiers T_RPAREN\n");}
#line 1810 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 163 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttype_def -> limit T_DOTDOT limit\n");}
#line 1816 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tdims -> dims T_COMMA limits\n");}
#line 1822 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 167 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tdims -> limits\n");}
#line 1828 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 170 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tlimits -> limit T_DOTDOT limit\n");}
#line 1834 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 171 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope); printf("\t\t\t\t\tlimits -> T_ID\n");}
#line 1840 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 174 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tlimit -> T_ADDOP T_ICONST\n");}
#line 1846 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 175 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope); printf("\t\t\t\t\tlimit -> T_ADDOP T_ID\n");}
#line 1852 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 176 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tlimit -> T_ICONST\n");}
#line 1858 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 177 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tlimit -> T_CCONST\n");}
#line 1864 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 178 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tlimit -> T_BCONST\n");}
#line 1870 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 179 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope); printf("\t\t\t\t\tlimit -> T_ID\n");}
#line 1876 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 182 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\ttypename -> standard_type\n");}
#line 1882 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 183 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope); printf("\t\t\t\t\ttypename -> T_ID\n");}
#line 1888 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 185 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstandard_type -> T_INTEGER\n");}
#line 1894 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 186 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstandard_type -> T_REAL\n");}
#line 1900 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 187 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstandard_type -> T_BOOLEAN\n");}
#line 1906 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 188 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstandard_type -> T_CHAR\n");}
#line 1912 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 189 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstandard_type -> T_STRING\n");}
#line 1918 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 192 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tvardefs -> T_VAR variable_defs T_SEMI\n");}
#line 1924 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 193 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n"); printf("\t\t\t\t\tvardefs -> T_VAR variable_defs\n");}
#line 1930 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 194 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tvardefs -> ε\n");}
#line 1936 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 197 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tvariable_defs -> variable_defs T_SEMI identifiers T_COLON typename\n");}
#line 1942 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 198 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n");}
#line 1948 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 199 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tvariable_defs -> variable_defs identifiers T_COLON typename\n");}
#line 1954 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 200 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tvariable_defs -> identifiers T_COLON typename\n");}
#line 1960 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 203 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope); printf("\t\t\t\t\tidentifiers -> identifiers T_COMMA T_ID\n");}
#line 1966 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 204 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope); printf("\t\t\t\t\tidentifiers ->T_ID\n");}
#line 1972 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 207 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tsubprograms -> subprograms subprogram T_SEMI\n");}
#line 1978 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 208 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n"); printf("\t\t\t\t\tsubprograms -> subprograms subprogram\n");}
#line 1984 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 209 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tsubprograms -> ε\n");}
#line 1990 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 212 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tsubprogram -> sub_header T_SEMI T_FORWARD\n");}
#line 1996 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 213 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n"); printf("\t\t\t\t\tsubprogram -> sub_header T_FORWARD\n");}
#line 2002 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 214 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); printf("\t\t\t\t\tsubprogram -> sub_header T_SEMI declarations subprograms comp_statement\n"); scope--;}
#line 2008 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 215 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n"); hashtbl_get(hashtbl, scope); printf("\t\t\t\t\tsubprogram -> sub_header T_SEMI declarations subprograms comp_statement\n"); scope--;}
#line 2014 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 218 "pasc600.y" /* yacc.c:1646  */
    {scope++; hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 2020 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 219 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tsub_header -> T_FUNCTION T_ID formal_parameters T_COLON typename\n");}
#line 2026 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 220 "pasc600.y" /* yacc.c:1646  */
    {scope++; hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 2032 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 221 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tsub_header -> T_PROCEDURE T_ID formal_parameters\n");}
#line 2038 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 222 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope); printf("\t\t\t\t\tsub_header -> T_FUNCTION T_ID\n");}
#line 2044 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 225 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tformal_parameters -> T_LPAREN parameter_list T_RPAREN\n");}
#line 2050 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 226 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tformal_parameters -> ε\n");}
#line 2056 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 229 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tparameter_list -> parameter_list T_SEMI pass identifiers T_COLON typename\n");}
#line 2062 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 230 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tT_SEMI missing\n");}
#line 2068 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 231 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tparameter_list -> parameter_list pass identifiers T_COLON typename\n");}
#line 2074 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 232 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tparameter_list -> pass identifiers T_COLON typename\n");}
#line 2080 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 235 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tpass -> T_VAR\n");}
#line 2086 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 236 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tpass -> ε\n");}
#line 2092 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 239 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tcomp_statement -> T_BEGIN statements T_END\n");}
#line 2098 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 242 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatements -> statements T_SEMI statement\n");}
#line 2104 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 243 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatements -> statement\n");}
#line 2110 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 246 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatement -> assignment\n");}
#line 2116 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 247 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatement -> if_statement\n");}
#line 2122 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 248 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatement -> while_statement\n");}
#line 2128 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 249 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatement -> for_statement\n");}
#line 2134 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 250 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatement -> subprogram_call\n");}
#line 2140 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 251 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatement -> io_statement\n");}
#line 2146 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 252 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatement -> comp_statement\n");}
#line 2152 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 253 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tstatement -> ε\n");}
#line 2158 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 256 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tassignment -> variable T_ASSIGN expression\n");}
#line 2164 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 259 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tif_statement -> T_IF expression T_THEN statement if_tail\n");}
#line 2170 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 262 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tif_tail -> T_ELSE statement\n");}
#line 2176 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 263 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tif_tail -> ε\n");}
#line 2182 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 266 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\twhile_statement -> T_WHILE expression T_DO statement\n");}
#line 2188 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 269 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 2194 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 270 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tfor_statement -> T_FOR T_ID T_ASSIGN iter_space T_DO statement\n");}
#line 2200 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 273 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\titer_space -> expression T_TO expression\n");}
#line 2206 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 274 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\titer_space -> expression T_DOWNTO expression\n");}
#line 2212 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 277 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tsubprogram_call -> T_ID\n"); hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 2218 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 278 "pasc600.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl,(yyvsp[0].stringvalue),NULL ,scope);}
#line 2224 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 279 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tsubprogram_call -> T_ID T_LPAREN expressions T_RPAREN\n");}
#line 2230 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 282 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tio_statement -> T_READ T_LPAREN read_list T_RPAREN\n");}
#line 2236 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 283 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tio_statement -> T_READ T_LPAREN write_list T_RPAREN\n");}
#line 2242 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 284 "pasc600.y" /* yacc.c:1646  */
    {yyclearin; printf("\t\t\t\t\tio_statement -> T_WRITE T_LPAREN T_RPAREN\n");}
#line 2248 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 287 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tread_list-> read_list T_COMMA read_item\n");}
#line 2254 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 288 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tread_list-> read_item\n");}
#line 2260 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 291 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\tread_item-> variable\n");}
#line 2266 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 294 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\twrite_list-> write_list T_COMMA write_item\n");}
#line 2272 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 295 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\twrite_list-> write_item\n");}
#line 2278 "pasc600.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 298 "pasc600.y" /* yacc.c:1646  */
    {printf("\t\t\t\t\twrite_item-> expression\n");}
#line 2284 "pasc600.tab.c" /* yacc.c:1646  */
    break;


#line 2288 "pasc600.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 301 "pasc600.y" /* yacc.c:1906  */


int main(int argc, char* argv[]){
    
    if(!(hashtbl = hashtbl_create(10, NULL))) {
		fprintf(stderr, "ERROR: hashtbl_create() failed\n");
		exit(0);
    }
    yyin = fopen(argv[1], "r"); //read only 
   
    yyparse();   // parsing procedure  
    
    hashtbl_destroy(hashtbl); 
	
    fclose(yyin);// close file when we are done

    return(0);
    
    
}
        
    
void yyerror(char *message){
	error_count++; // each time we face an error increment number of errors by 1 to keep track until we reach MAX_ERROR
	printf("(%d)ERROR: \"%s\" | TOKEN: %s | LINE: %d \n", error_count, message, yytext, yylineno);
	if(error_count == MAX_ERRORS){ 
 		printf("ERRORS DETECTED IN PROGRAM: %d\nERRORS ACCEPTED: %d\nTermination...\n", error_count, MAX_ERRORS); 
 		exit(-1);
	}
}
