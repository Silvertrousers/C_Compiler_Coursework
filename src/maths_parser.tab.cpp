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

#line 67 "src/maths_parser.tab.cpp" /* yacc.c:339  */

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
   by #include "maths_parser.tab.hpp".  */
#ifndef YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/maths_parser.y" /* yacc.c:355  */

  #include "./ast.hpp"

  #include <string>
  #include <cmath>
  #include <cassert>

  extern ast_node *g_root;

  int yylex(void);
  void yyerror(const char *);

#line 110 "src/maths_parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_AUTO = 258,
    T_BREAK = 259,
    T_CASE = 260,
    T_CHAR = 261,
    T_CONST = 262,
    T_CONTINUE = 263,
    T_DEFAULT = 264,
    T_DO = 265,
    T_DOUBLE = 266,
    T_ELSE = 267,
    T_ENUM = 268,
    T_EXTERN = 269,
    T_FLOAT = 270,
    T_FOR = 271,
    T_GOTO = 272,
    T_IF = 273,
    T_INT = 274,
    T_LONG = 275,
    T_REGISTER = 276,
    T_RETURN = 277,
    T_SHORT = 278,
    T_SIGNED = 279,
    T_SIZEOF = 280,
    T_STATIC = 281,
    T_STRUCT = 282,
    T_SWITCH = 283,
    T_TYPEDEF = 284,
    T_UNION = 285,
    T_UNSIGNED = 286,
    T_VOID = 287,
    T_VOLATILE = 288,
    T_WHILE = 289,
    T_TIMES = 290,
    T_DIVIDE = 291,
    T_PLUS = 292,
    T_MINUS = 293,
    T_EXPONENT = 294,
    T_DECREMENT = 295,
    T_INCREMENT = 296,
    T_LESS_THAN = 297,
    T_GREATER_THAN = 298,
    T_EQUALS = 299,
    T_AND = 300,
    T_OR = 301,
    T_BITWISE_NOT = 302,
    T_LOGICAL_NOT = 303,
    T_AND_AND = 304,
    T_OR_OR = 305,
    T_MODULO_EQUALS = 306,
    T_LEFT_SHIFT_EQUALS = 307,
    T_RIGHT_SHIFT_EQUALS = 308,
    T_NOT_EQUALS_EQUALS = 309,
    T_EQUALS_EQUALS = 310,
    T_PLUS_EQUALS = 311,
    T_MINUS_EQUALS = 312,
    T_TIMES_EQUALS = 313,
    T_DIVIDE_EQUALS = 314,
    T_LESS_THAN_OR_EQUAL_TO = 315,
    T_GREATER_THAN_OR_EQUAL_TO = 316,
    T_AND_EQUALS = 317,
    T_OR_EQUALS = 318,
    T_XOR_EQUALS = 319,
    T_ARROW = 320,
    T_RIGHT_SHIFT = 321,
    T_LEFT_SHIFT = 322,
    T_MODULO = 323,
    T_COMMA = 324,
    T_DOT = 325,
    T_COLON = 326,
    T_SEMICOLON = 327,
    T_QUESTION = 328,
    T_LBRACKET = 329,
    T_RBRACKET = 330,
    T_LSQ_BRACKET = 331,
    T_RSQ_BRACKET = 332,
    T_RCURLY_BRACKET = 333,
    T_LCURLY_BRACKET = 334,
    T_EMPTY_BRACKETS = 335,
    T_ECURLY_BRACKETS = 336,
    T_ESQ_BRACKETS = 337,
    T_IDENTIFIER = 338,
    T_STRING = 339,
    T_DEC_INT = 340,
    T_OCTAL_INT = 341,
    T_HEX_INT = 342,
    T_NORM_FLOAT = 343,
    T_EXP_FLOAT = 344,
    T_DEREFERENCE = 345,
    T_CUSTOM_TYPE = 346,
    T_ENUM_CONSTANT = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "src/maths_parser.y" /* yacc.c:355  */

  ast_node* nodePtr;
  std::string* _text;

#line 220 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 237 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  386

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    84,    85,    89,    90,    93,    97,   101,
     102,   103,   104,   105,   106,   108,   112,   116,   120,   121,
     123,   127,   131,   134,   138,   139,   143,   144,   148,   149,
     151,   155,   159,   163,   164,   165,   167,   171,   175,   179,
     183,   187,   191,   195,   199,   203,   207,   208,   209,   211,
     215,   216,   218,   222,   227,   228,   230,   231,   232,   234,
     238,   239,   240,   244,   245,   249,   253,   257,   261,   265,
     269,   273,   274,   278,   279,   283,   287,   291,   295,   299,
     301,   302,   303,   304,   305,   306,   308,   309,   313,   314,
     318,   322,   326,   327,   331,   335,   336,   340,   344,   345,
     349,   353,   357,   361,   362,   366,   370,   371,   375,   376,
     380,   381,   385,   386,   390,   391,   395,   396,   400,   401,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   417,   419,   420,   424,   428,   432,   433,   437,   438,
     442,   443,   447,   448,   452,   456,   460,   461,   462,   463,
     464,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   479,   483,   487,   491,   492,   494,   495,
     499,   503,   505,   509,   511,   515,   516,   520,   521,   525,
     529,   533,   537,   541,   543,   544,   548,   549,   553,   555,
     556,   558,   559,   563,   565,   567,   571,   575,   579,   583,
     587,   588,   592,   596,   600,   602,   603,   607,   614,   615,
     619,   623,   625,   629,   630,   634,   636,   637,   641,   643,
     647,   649,   651,   655,   659,   663,   665,   669,   673,   677,
     679,   681,   683,   687,   691,   692
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_AUTO", "T_BREAK", "T_CASE", "T_CHAR",
  "T_CONST", "T_CONTINUE", "T_DEFAULT", "T_DO", "T_DOUBLE", "T_ELSE",
  "T_ENUM", "T_EXTERN", "T_FLOAT", "T_FOR", "T_GOTO", "T_IF", "T_INT",
  "T_LONG", "T_REGISTER", "T_RETURN", "T_SHORT", "T_SIGNED", "T_SIZEOF",
  "T_STATIC", "T_STRUCT", "T_SWITCH", "T_TYPEDEF", "T_UNION", "T_UNSIGNED",
  "T_VOID", "T_VOLATILE", "T_WHILE", "T_TIMES", "T_DIVIDE", "T_PLUS",
  "T_MINUS", "T_EXPONENT", "T_DECREMENT", "T_INCREMENT", "T_LESS_THAN",
  "T_GREATER_THAN", "T_EQUALS", "T_AND", "T_OR", "T_BITWISE_NOT",
  "T_LOGICAL_NOT", "T_AND_AND", "T_OR_OR", "T_MODULO_EQUALS",
  "T_LEFT_SHIFT_EQUALS", "T_RIGHT_SHIFT_EQUALS", "T_NOT_EQUALS_EQUALS",
  "T_EQUALS_EQUALS", "T_PLUS_EQUALS", "T_MINUS_EQUALS", "T_TIMES_EQUALS",
  "T_DIVIDE_EQUALS", "T_LESS_THAN_OR_EQUAL_TO",
  "T_GREATER_THAN_OR_EQUAL_TO", "T_AND_EQUALS", "T_OR_EQUALS",
  "T_XOR_EQUALS", "T_ARROW", "T_RIGHT_SHIFT", "T_LEFT_SHIFT", "T_MODULO",
  "T_COMMA", "T_DOT", "T_COLON", "T_SEMICOLON", "T_QUESTION", "T_LBRACKET",
  "T_RBRACKET", "T_LSQ_BRACKET", "T_RSQ_BRACKET", "T_RCURLY_BRACKET",
  "T_LCURLY_BRACKET", "T_EMPTY_BRACKETS", "T_ECURLY_BRACKETS",
  "T_ESQ_BRACKETS", "T_IDENTIFIER", "T_STRING", "T_DEC_INT", "T_OCTAL_INT",
  "T_HEX_INT", "T_NORM_FLOAT", "T_EXP_FLOAT", "T_DEREFERENCE",
  "T_CUSTOM_TYPE", "T_ENUM_CONSTANT", "$accept", "PROGRAM",
  "TRANSLATION_UNIT", "EXTERNAL_DECLARATION", "FUNCTION_DECLARATION",
  "STATEMENT", "LABELED_STATEMENT", "DEFAULT", "CASE",
  "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "SWITCH", "IF", "ELSE",
  "ITERATION_STATEMENT", "FOR", "WHILE", "DO", "JUMP_STATEMENT", "GOTO",
  "RETURN", "PRIMARY_EXPRESSION", "CONSTANT", "POSTFIX_EXPRESSION",
  "ARGUMENT_EXPRESSION_LIST", "UNARY_EXPRESSION", "SIZE_OF",
  "UNARY_OPERATOR", "CAST_EXPRESSION", "MULTIPLICATIVE_EXPRESSION",
  "ADDITIVE_EXPRESSION", "SHIFT_EXPRESSION", "RELATIONAL_EXPRESSION",
  "EQUALITY_EXPRESSION", "AND_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION",
  "INCLUSIVE_OR_EXPRESSION", "LOGICAL_AND_EXPRESSION",
  "LOGICAL_OR_EXPRESSION", "CONDITIONAL_EXPRESSION",
  "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR", "CONSTANT_EXPRESSION",
  "EXPR", "DECLARATION", "DECLARATION_SPECIFIERS", "INIT_DECLARATOR_LIST",
  "INIT_DECLARATOR", "STORAGE_CLASS_SPECIFIER", "TYPE_SPECIFIER",
  "STRUCT_OR_UNION_SPECIFIER", "STRUCT_OR_UNION",
  "STRUCT_DECLARATION_LIST", "STRUCT_DECLARATION",
  "SPECIFIER_QUALIFIER_LIST", "STRUCT_DECLARATOR_LIST",
  "STRUCT_DECLARATOR", "ENUM_SPECIFIER", "ENUM", "ENUMERATOR_LIST",
  "ENUMERATOR", "ENUM_CONSTANT", "TYPE_QUALIFIER", "DECLARATOR",
  "DIRECT_DECLARATOR", "POINTER", "DEREFERENCE", "TYPE_QUALIFIER_LIST",
  "PARAMETER_TYPE_LIST", "PARAMETER_LIST", "PARAMETER_DECLARATION",
  "IDENTIFIER_LIST", "IDENTIFIER", "TYPE_NAME", "ABSTRACT_DECLARATOR",
  "DIRECT_ABSTRACT_DECLARATOR", "TYPEDEF_NAME", "INITIALIZER",
  "INITIALIZER_LIST", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

#define YYPACT_NINF -247

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-247)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     672,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
      -4,  -247,  -247,  -247,    19,   672,  -247,  -247,  -247,    39,
     745,   745,  -247,    18,  -247,    75,   745,   194,   214,   -47,
      -2,  -247,  -247,   -41,  -247,  -247,  -247,    33,  -247,     1,
    -247,  -247,   888,   -23,   -33,     2,  -247,   474,  -247,  -247,
     703,  1403,  -247,  -247,   214,  -247,  -247,    -2,  -247,    -4,
    -247,  1118,  -247,   888,   822,  -247,   -16,   888,   888,  -247,
      -7,  -247,    56,   -33,     5,  -247,    48,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  1420,
    1420,  -247,  -247,  -247,  -247,   776,  -247,  -247,  -247,  -247,
    -247,  -247,    74,  1403,  -247,   385,   922,  -247,  -247,    88,
     178,  -247,   188,   192,  1090,  -247,   104,  1171,  -247,  -247,
      13,   383,  1473,  1403,  -247,   -18,    28,   100,    30,   124,
     153,   235,   232,   238,   -10,  -247,  -247,    61,  -247,    39,
     210,    45,   231,   243,  -247,    62,  -247,  -247,  -247,   237,
    -247,  -247,  -247,  -247,   273,  1118,  -247,  -247,  -247,  -247,
    -247,  1403,   247,  -247,   249,  -247,   858,   -33,  -247,  1403,
      26,  -247,  -247,  1403,  -247,  -247,    69,    60,   252,  1090,
     257,  -247,  1006,  -247,  -247,  -247,  1403,  1403,  1188,  1403,
     298,   261,  -247,   122,  -247,  -247,   104,   104,  1403,  1403,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  1403,   776,  -247,  -247,  1403,  1403,  1403,  1403,
    1403,  1403,  1403,  1403,  1403,  1403,  1403,  1403,  1403,  1403,
    1403,  1403,  1403,  1403,  1403,  1403,  -247,  1090,   560,  1403,
    -247,  -247,  -247,   121,  -247,   219,  -247,   745,   104,  -247,
    -247,  -247,    54,  -247,   -16,  1403,  -247,  -247,  -247,  -247,
    -247,   591,   233,  -247,  1403,  -247,  1090,  -247,   102,   105,
    1241,   169,   106,   260,  -247,  -247,  -247,  -247,   113,  -247,
     -45,  -247,   262,  -247,  -247,  -247,   -18,   -18,    28,    28,
     100,   100,   100,   100,    30,    30,   124,   153,   235,   232,
     238,   -20,  -247,  -247,   263,   264,   259,   219,   745,  1403,
    -247,  -247,  -247,  -247,  1104,  -247,  -247,  -247,  -247,  -247,
    1090,  1090,  1255,   185,  1308,  1090,  1403,  1403,  -247,  -247,
    -247,  1403,  -247,  -247,  -247,   267,   266,  -247,  -247,  -247,
     332,  1090,   130,  1322,  1336,   191,  -247,   133,  -247,  -247,
    -247,  -247,  -247,  1090,  -247,  1090,  1090,   164,  1090,   167,
    1389,   274,  -247,  -247,  -247,  1090,  -247,  1090,  1090,   168,
    -247,  -247,  -247,  -247,  1090,  -247
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   149,   152,   189,   157,   183,   147,   156,   154,   155,
     150,   153,   158,   148,   166,   146,   167,   159,   151,   190,
       0,   215,   204,   230,     0,     2,     3,     5,     6,     0,
     136,   138,   160,     0,   161,     0,   140,     0,   191,     0,
     200,   193,   162,     0,     1,     4,   134,     0,   142,   144,
     137,   139,     0,   163,     0,   180,   141,     0,    23,     8,
       0,     0,   198,   195,   192,   205,   202,   201,   194,     0,
     135,     0,     7,   171,     0,   168,     0,   173,     0,   188,
       0,   184,   186,     0,     0,    19,     0,    18,    48,    46,
      54,    34,    55,    79,    33,    47,    81,    82,    83,     0,
       0,    80,    84,    85,    29,     0,    58,    60,    61,    62,
      26,     9,     0,     0,    10,     0,     0,    11,    12,     0,
       0,    13,     0,     0,     0,    14,     0,     0,    63,    57,
      73,    86,     0,     0,    88,    92,    95,    98,   103,   106,
     108,   110,   112,   114,   116,   118,   132,     0,    24,     0,
      56,   211,     0,   207,   208,     0,   213,    86,   131,     0,
      56,   206,   203,   143,   144,     0,   231,   145,   172,   164,
     169,     0,   170,   175,   177,   174,     0,     0,   182,     0,
       0,    51,    50,     0,    75,    74,     0,   216,     0,     0,
       0,    22,     0,    25,    21,    27,     0,     0,     0,     0,
       0,     0,    53,     0,    70,    69,     0,     0,     0,     0,
      65,   120,   123,   126,   127,   124,   125,   121,   122,   128,
     130,   129,     0,     0,    77,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
     229,   225,   210,   218,   212,   220,   197,     0,     0,   199,
     196,   234,     0,   179,     0,     0,   165,   185,   187,   181,
      59,     0,   218,   217,     0,    17,     0,    20,     0,     0,
       0,     0,     0,     0,    49,    52,    68,    67,     0,    71,
       0,   119,     0,    89,    90,    91,    93,    94,    97,    96,
      99,   100,   101,   102,   105,   104,   107,   109,   111,   113,
     115,     0,   133,    15,     0,     0,     0,   219,     0,     0,
     228,   224,   209,   214,     0,   232,   176,   178,    87,    16,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    64,
      78,     0,   227,   221,   223,     0,     0,   233,   235,    32,
      30,     0,     0,     0,     0,     0,    36,     0,    72,   117,
     226,   222,    35,     0,    45,     0,     0,     0,     0,     0,
       0,     0,    31,    42,    43,     0,    44,     0,     0,     0,
      37,    39,    40,    41,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -247,  -247,  -247,   320,  -247,   -86,  -247,  -247,  -247,   -26,
    -247,   234,  -247,  -247,  -247,  -247,  -247,  -247,  -247,   147,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,   -15,  -247,
    -247,  -119,    40,    79,    50,    87,   109,   110,   111,   112,
     115,  -247,   -19,   -69,  -247,   -14,   -13,   -51,   272,  -247,
     284,  -247,    95,  -247,  -247,   277,   -66,   -64,  -247,    92,
    -247,  -247,   276,   183,  -247,   -30,    -8,   -24,   -39,  -247,
    -247,   -57,  -247,   107,  -247,     0,   138,  -135,  -246,  -247,
    -161,  -247
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   363,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   288,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   222,   159,   147,    28,   151,    47,
      48,    30,    31,    32,    33,    74,    75,    76,   172,   173,
      34,    35,    80,    81,    82,    36,    37,    38,    39,    40,
      67,   314,   153,   154,   155,   160,   188,   315,   255,    42,
     167,   262
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      41,    66,   166,   152,   261,     3,   148,   317,   170,   168,
      65,    59,    43,   175,   225,    64,   254,   226,   227,    44,
      41,    49,    77,    72,   245,    41,   317,    20,   162,    41,
     195,    19,   339,    53,    68,    55,    21,   161,   200,    41,
     243,   187,   158,    77,    77,    71,   157,    77,    77,   245,
     228,   341,   273,   204,   205,   171,    78,   150,    20,    79,
     156,   164,   177,   244,   193,   229,   230,    21,   174,    41,
      20,   178,   233,   234,    22,    77,    41,   181,   206,    21,
      57,    83,    58,   207,   184,   185,    22,   208,    22,   209,
     235,   236,   186,   210,   158,   177,   166,    52,   157,   190,
     179,    21,    69,   275,   269,    70,   195,   293,   294,   295,
     170,    46,   253,    20,   203,   150,   150,   224,   157,   248,
     182,   249,    21,   324,   150,   250,   201,   251,    21,    22,
     245,   258,   325,   246,   271,    22,   249,   259,   245,   289,
     250,   164,   251,   252,   270,   189,    77,    73,   272,    41,
      22,    41,   158,   291,    54,   328,   157,   263,    21,   187,
     158,   313,   196,   348,   157,   268,   231,   232,    73,    73,
     186,   245,    73,    73,   245,   245,   312,   330,   237,   238,
     331,   335,   337,   278,   279,   281,   282,    21,   338,   150,
     329,   245,   150,    77,   285,   248,   290,   249,   239,   245,
      73,   250,   245,   251,    21,   365,   286,   287,   371,   253,
     186,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,    64,
     158,   311,   272,   245,   157,   316,   245,   245,   245,   375,
      43,   334,   377,   384,   349,   350,   158,   150,    41,   356,
     157,   327,   197,    41,   245,   166,   174,   353,   323,   157,
     245,   345,   198,   370,    41,   364,   199,   333,   358,   296,
     297,    73,    29,    57,   240,    58,   150,   372,   241,   373,
     374,   247,   376,   300,   301,   302,   303,   242,    60,   381,
      61,   382,   383,   318,    62,   319,    63,    29,   385,   320,
     158,   321,    50,    51,   157,   346,   256,   271,    56,   249,
     298,   299,   257,   250,   260,   251,   264,    71,    73,   352,
     265,   355,   359,   357,   304,   305,   157,   274,   276,   149,
     150,   150,    95,   284,   336,   150,   344,   340,   342,   343,
     367,   369,   360,   361,   362,    45,   380,   283,   306,   192,
     307,   150,   308,   163,   309,   176,   326,   379,   310,   180,
     267,   292,     0,   150,   322,   150,   150,     0,   150,     0,
       0,     0,     0,     0,     0,   150,     0,   150,   150,     0,
       0,     0,     0,     0,   150,     0,     0,   149,     1,    84,
      85,     2,     3,    86,    87,    88,     4,     0,     5,     6,
       7,    89,    90,    91,     8,     9,    10,    92,    11,    12,
      93,    13,    14,    94,    15,    16,    17,    18,    19,    95,
      96,     0,    97,    98,     0,    99,   100,   211,     0,     0,
     101,     0,   102,   103,   212,   213,   214,     0,     0,   215,
     216,   217,   218,     0,     0,   219,   220,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,     0,   105,
       0,     0,     0,   191,    57,     0,    58,     0,    21,   106,
     107,   108,   109,     0,     0,     0,    23,     1,    84,    85,
       2,     3,    86,    87,    88,     4,     0,     5,     6,     7,
      89,    90,    91,     8,     9,    10,    92,    11,    12,    93,
      13,    14,    94,    15,    16,    17,    18,    19,    95,    96,
       0,    97,    98,     0,    99,   100,     0,     0,     0,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,     0,   105,     0,
       0,     0,     0,    57,     0,    58,     0,    21,   106,   107,
     108,   109,     0,     1,     0,    23,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,     0,    15,
      16,    17,    18,    19,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,     0,    11,    12,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,     0,   249,     0,     0,     0,
     250,     0,   251,    21,     0,     0,     0,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   271,     0,   249,     0,     0,
       0,   250,     0,   251,     0,     1,     0,     0,     2,     3,
       0,    22,    23,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
       0,    15,    16,    17,    18,    19,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     1,     0,
       0,     2,     3,     0,     0,    21,     4,     0,     5,     6,
       7,     0,    22,    23,     8,     9,    10,     0,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     0,
       0,     0,     2,     3,     0,     0,    21,     4,     0,     5,
       0,     7,     0,     0,    23,     8,     9,     0,     0,    11,
      12,    93,     0,    14,     0,     0,    16,    17,    18,    19,
       0,    96,     0,    97,    98,     0,    99,   100,     0,     0,
       0,   101,     0,   102,   103,     0,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,    23,     7,     0,     0,
       0,     8,     9,     0,     0,    11,    12,     0,     0,    14,
     105,     0,    16,    17,    18,    19,     0,     0,     0,    21,
     106,   107,   108,   109,     2,     3,     0,    23,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     8,     9,     0,
       0,    11,    12,     0,     0,    14,     0,     0,    16,    17,
      18,    19,     0,     0,     2,     3,     0,     0,     0,     4,
     169,     5,     0,     7,     0,     0,     0,     8,     9,     0,
       0,    11,    12,    23,     0,    14,     0,     0,    16,    17,
      18,    19,     0,     0,     0,     0,    84,    85,     0,     0,
      86,    87,    88,     0,     0,     0,   266,     0,    89,    90,
      91,     0,     0,     0,    92,     0,     0,    93,     0,    23,
      94,     0,     0,     0,     0,     0,    95,    96,     0,    97,
      98,     0,    99,   100,     0,     0,     0,   101,     0,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,   105,     0,     0,     0,
     194,    57,     0,    58,     0,    21,   106,   107,   108,   109,
      84,    85,     0,     0,    86,    87,    88,     0,     0,     0,
       0,     0,    89,    90,    91,     0,     0,     0,    92,     0,
       0,    93,     0,     0,    94,     0,     0,     0,     0,     0,
      95,    96,     0,    97,    98,     0,    99,   100,     0,     0,
       0,   101,     0,   102,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,     0,
     105,     0,     0,     0,   277,    57,     0,    58,     0,    21,
     106,   107,   108,   109,    84,    85,     0,     0,    86,    87,
      88,     0,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,    92,     0,     0,    93,     0,     0,    94,     0,
       0,     0,     0,     0,    95,    96,     0,    97,    98,    93,
      99,   100,     0,     0,     0,   101,     0,   102,   103,    96,
       0,    97,    98,    93,    99,   100,     0,     0,     0,   101,
       0,   102,   103,    96,     0,    97,    98,     0,    99,   100,
       0,     0,   104,   101,   105,   102,   103,     0,     0,    57,
       0,    58,     0,    21,   106,   107,   108,   109,   105,     0,
       0,     0,   347,   165,     0,     0,     0,    21,   106,   107,
     108,   109,   105,     0,     0,     0,    93,   165,     0,     0,
       0,    21,   106,   107,   108,   109,    96,     0,    97,    98,
       0,    99,   100,    93,     0,     0,   101,     0,   102,   103,
       0,     0,     0,    96,     0,    97,    98,     0,    99,   100,
       0,     0,     0,   101,     0,   102,   103,     0,     0,     0,
       0,     0,     0,   202,     0,   105,     0,     0,     0,     0,
       0,     0,     0,     0,    21,   106,   107,   108,   109,     0,
     280,     0,   105,     0,     0,     0,    93,     0,     0,     0,
       0,    21,   106,   107,   108,   109,    96,     0,    97,    98,
      93,    99,   100,     0,     0,     0,   101,     0,   102,   103,
      96,     0,    97,    98,     0,    99,   100,     0,     0,     0,
     101,     0,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,     0,   105,     0,     0,     0,     0,
       0,     0,     0,     0,    21,   106,   107,   108,   109,   105,
     351,     0,     0,    93,     0,     0,     0,     0,    21,   106,
     107,   108,   109,    96,     0,    97,    98,    93,    99,   100,
       0,     0,     0,   101,     0,   102,   103,    96,     0,    97,
      98,    93,    99,   100,     0,     0,     0,   101,     0,   102,
     103,    96,     0,    97,    98,     0,    99,   100,     0,     0,
     354,   101,   105,   102,   103,     0,     0,     0,     0,     0,
       0,    21,   106,   107,   108,   109,   105,   366,     0,     0,
       0,     0,     0,     0,     0,    21,   106,   107,   108,   109,
     105,   368,     0,     0,    93,     0,     0,     0,     0,    21,
     106,   107,   108,   109,    96,     0,    97,    98,    93,    99,
     100,     0,     0,     0,   101,     0,   102,   103,    96,     0,
      97,    98,     0,    99,   100,    93,     0,     0,   101,     0,
     102,   103,     0,     0,     0,    96,     0,    97,    98,     0,
      99,   100,     0,   105,   378,   101,     0,   102,   103,     0,
       0,     0,    21,   106,   107,   108,   109,   105,     0,     0,
       0,     0,     0,     0,     0,     0,    21,   106,   107,   108,
     109,     0,     0,     0,   183,     0,     0,     0,    93,     0,
       0,     0,     0,    21,   106,   107,   108,   109,    96,     0,
      97,    98,     0,    99,   100,     0,     0,     0,   101,     0,
     102,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,    21,   106,   107,   108,
     109
};

static const yytype_int16 yycheck[] =
{
       0,    40,    71,    60,   165,     7,    57,   253,    74,    73,
      40,    37,    20,    77,   133,    39,   151,    35,    36,     0,
      20,    29,    52,    49,    69,    25,   272,    74,    67,    29,
     116,    33,    77,    33,    75,    35,    83,    67,   124,    39,
      50,   105,    61,    73,    74,    44,    61,    77,    78,    69,
      68,    71,   187,    40,    41,    71,    79,    57,    74,    92,
      60,    69,    69,    73,   115,    37,    38,    83,    76,    69,
      74,    78,    42,    43,    90,   105,    76,    72,    65,    83,
      79,    79,    81,    70,    99,   100,    90,    74,    90,    76,
      60,    61,   105,    80,   113,    69,   165,    79,   113,   113,
      44,    83,    69,   189,    78,    72,   192,   226,   227,   228,
     176,    72,   151,    74,   127,   115,   116,   132,   133,    74,
      72,    76,    83,    69,   124,    80,   126,    82,    83,    90,
      69,    69,    78,    72,    74,    90,    76,    75,    69,   208,
      80,   149,    82,   151,    75,    71,   176,    52,   187,   149,
      90,   151,   171,   222,    79,   274,   171,   171,    83,   223,
     179,   247,    74,   324,   179,   179,    66,    67,    73,    74,
     183,    69,    77,    78,    69,    69,   245,    75,    54,    55,
      75,    75,    69,   196,   197,   198,   199,    83,    75,   189,
     276,    69,   192,   223,    72,    74,   209,    76,    45,    69,
     105,    80,    69,    82,    83,    75,   206,   207,    75,   248,
     223,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   253,
     249,   244,   271,    69,   249,   249,    69,    69,    69,    75,
     248,    72,    75,    75,   330,   331,   265,   247,   248,   335,
     265,   265,    74,   253,    69,   324,   264,    72,   258,   274,
      69,   318,    74,    72,   264,   351,    74,   280,   337,   229,
     230,   176,     0,    79,    39,    81,   276,   363,    46,   365,
     366,    71,   368,   233,   234,   235,   236,    49,    74,   375,
      76,   377,   378,    74,    80,    76,    82,    25,   384,    80,
     319,    82,    30,    31,   319,   319,    75,    74,    36,    76,
     231,   232,    69,    80,    77,    82,    69,    44,   223,   332,
      71,   334,   341,   336,   237,   238,   341,    75,    71,    57,
     330,   331,    34,    72,    74,   335,    77,    75,    75,    75,
     353,   354,    75,    77,    12,    25,    72,   200,   239,   115,
     240,   351,   241,    69,   242,    78,   264,   370,   243,    83,
     177,   223,    -1,   363,   257,   365,   366,    -1,   368,    -1,
      -1,    -1,    -1,    -1,    -1,   375,    -1,   377,   378,    -1,
      -1,    -1,    -1,    -1,   384,    -1,    -1,   115,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    40,    41,    44,    -1,    -1,
      45,    -1,    47,    48,    51,    52,    53,    -1,    -1,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    -1,    -1,    -1,    91,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    -1,     3,    -1,    91,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    -1,     3,    -1,    -1,     6,     7,
      -1,    90,    91,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    83,    11,    -1,    13,    14,
      15,    -1,    90,    91,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    30,    31,    32,    33,    -1,
      -1,    -1,     6,     7,    -1,    -1,    83,    11,    -1,    13,
      -1,    15,    -1,    -1,    91,    19,    20,    -1,    -1,    23,
      24,    25,    -1,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    91,    15,    -1,    -1,
      -1,    19,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      74,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    83,
      84,    85,    86,    87,     6,     7,    -1,    91,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    19,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      78,    13,    -1,    15,    -1,    -1,    -1,    19,    20,    -1,
      -1,    23,    24,    91,    -1,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    78,    -1,    16,    17,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    91,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
       4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    -1,    -1,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,     4,     5,    -1,    -1,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    37,    38,    25,
      40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,    35,
      -1,    37,    38,    25,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    72,    45,    74,    47,    48,    -1,    -1,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    74,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    74,    -1,    -1,    -1,    25,    79,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    35,    -1,    37,    38,
      -1,    40,    41,    25,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    -1,
      72,    -1,    74,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    35,    -1,    37,    38,
      25,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    74,
      75,    -1,    -1,    25,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    35,    -1,    37,    38,    25,    40,    41,
      -1,    -1,    -1,    45,    -1,    47,    48,    35,    -1,    37,
      38,    25,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      72,    45,    74,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      74,    75,    -1,    -1,    25,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    35,    -1,    37,    38,    25,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    35,    -1,
      37,    38,    -1,    40,    41,    25,    -1,    -1,    45,    -1,
      47,    48,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,
      40,    41,    -1,    74,    75,    45,    -1,    47,    48,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    74,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      74,    83,    90,    91,    94,    95,    96,    97,   140,   141,
     144,   145,   146,   147,   153,   154,   158,   159,   160,   161,
     162,   168,   172,   159,     0,    96,    72,   142,   143,   159,
     141,   141,    79,   168,    79,   168,   141,    79,    81,   102,
      74,    76,    80,    82,   160,   158,   161,   163,    75,    69,
      72,    44,   102,   145,   148,   149,   150,   158,    79,    92,
     155,   156,   157,    79,     4,     5,     8,     9,    10,    16,
      17,    18,    22,    25,    28,    34,    35,    37,    38,    40,
      41,    45,    47,    48,    72,    74,    84,    85,    86,    87,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   139,   140,   141,
     168,   141,   164,   165,   166,   167,   168,   121,   135,   138,
     168,   158,   161,   143,   159,    79,   136,   173,   150,    78,
     149,    71,   151,   152,   159,   150,   148,    69,    78,    44,
     155,    72,    72,    74,   121,   121,   139,   150,   169,    71,
     138,    78,   104,   140,    78,    98,    74,    74,    74,    74,
      98,   168,    72,   139,    40,    41,    65,    70,    74,    76,
      80,    44,    51,    52,    53,    56,    57,    58,    59,    62,
      63,    64,   137,    74,   121,   124,    35,    36,    68,    37,
      38,    66,    67,    42,    43,    60,    61,    54,    55,    45,
      39,    46,    49,    50,    73,    69,    72,    71,    74,    76,
      80,    82,   159,   161,   170,   171,    75,    69,    69,    75,
      77,   173,   174,   138,    69,    71,    78,   156,   138,    78,
      75,    74,   161,   170,    75,    98,    71,    78,   139,   139,
      72,   139,   139,   112,    72,    72,   168,   168,   120,   136,
     139,   136,   169,   124,   124,   124,   125,   125,   126,   126,
     127,   127,   127,   127,   128,   128,   129,   130,   131,   132,
     133,   139,   136,    98,   164,   170,   138,   171,    74,    76,
      80,    82,   166,   168,    69,    78,   152,   138,   124,    98,
      75,    75,    72,   139,    72,    75,    74,    69,    75,    77,
      75,    71,    75,    75,    77,   164,   138,    78,   173,    98,
      98,    75,   139,    72,    72,   139,    98,   139,   136,   135,
      75,    77,    12,   109,    98,    75,    75,   139,    75,   139,
      72,    75,    98,    98,    98,    75,    98,    75,    75,   139,
      72,    98,    98,    98,    75,    98
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    98,    98,    98,    98,    99,    99,    99,   100,   101,
     102,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   107,   108,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   112,   113,   114,
     114,   114,   114,   114,   115,   116,   117,   117,   117,   117,
     118,   118,   118,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   121,   121,   121,   121,   121,   121,   122,
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   125,   126,   126,   126,   127,   127,   127,   128,   128,
     128,   128,   128,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   139,   139,   140,   140,   141,   141,   141,   141,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   146,   146,   146,   147,   147,   148,   148,
     149,   150,   150,   150,   150,   151,   151,   152,   152,   152,
     153,   153,   153,   154,   155,   155,   156,   156,   157,   158,
     158,   159,   159,   160,   160,   160,   160,   160,   160,   160,
     161,   161,   161,   161,   162,   163,   163,   164,   165,   165,
     166,   166,   166,   167,   167,   168,   169,   169,   170,   170,
     170,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     172,   173,   173,   173,   174,   174
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     1,     1,
       4,     3,     3,     1,     1,     2,     1,     2,     2,     1,
       5,     7,     5,     1,     1,     1,     5,     7,     9,     8,
       8,     8,     7,     7,     7,     6,     1,     1,     1,     3,
       2,     2,     3,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     4,     2,     4,     3,     3,     2,
       2,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     5,     1,     1,     1,     2,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     2,
       2,     5,     4,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     3,     2,     4,     4,     2,     4,
       1,     2,     2,     3,     1,     1,     2,     1,     1,     3,
       2,     1,     2,     1,     3,     1,     1,     2,     1,     2,
       1,     3,     4,     3,     2,     1,     4,     3,     2,     1,
       1,     1,     3,     4,     1,     3
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
#line 82 "src/maths_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].nodePtr); }
#line 1874 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1880 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1888 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1894 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1900 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 93 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1908 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr),NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1916 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1922 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 102 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1928 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1934 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1940 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 105 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1946 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 106 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1952 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 108 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1960 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1968 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 116 "src/maths_parser.y" /* yacc.c:1646  */
    {                                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1976 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DEFAULT", "default");}
#line 1982 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 121 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CASE", "case");}
#line 1988 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 123 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1996 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 127 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2004 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 131 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2012 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 134 "src/maths_parser.y" /* yacc.c:1646  */
    {                                                  std::vector<ast_node*> branches = {NULL, NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2020 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2026 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 139 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 2034 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 143 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2040 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 2048 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 2054 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = NULL; }
#line 2060 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2068 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 155 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2076 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2084 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 163 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", "switch");}
#line 2090 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 164 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", "if");}
#line 2096 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 165 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", "else" );}
#line 2102 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2110 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2118 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 175 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2126 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 179 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2134 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 183 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2142 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 187 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2150 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 191 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2158 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 195 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2166 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 199 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2174 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 203 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2182 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 207 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", "for");}
#line 2188 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 208 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", "while");}
#line 2194 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 209 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", "do");}
#line 2200 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 211 "src/maths_parser.y" /* yacc.c:1646  */
    {                                  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"GOTO", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2208 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 215 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "continue");}
#line 2214 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 216 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "break");}
#line 2220 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 218 "src/maths_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2228 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "src/maths_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2236 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 227 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("GOTO", "goto");}
#line 2242 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 228 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", "return");}
#line 2248 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 230 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2254 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 231 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2260 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 232 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2266 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 234 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2274 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 238 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2280 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 239 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text), 0, 8)))); }
#line 2286 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 240 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2292 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 244 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2298 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 245 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2306 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 249 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2314 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 253 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2322 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 257 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION",".", branches, branch_notes);}
#line 2330 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 261 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}
#line 2338 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 265 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2346 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 269 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2354 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 273 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2360 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 274 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2368 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 278 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2374 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 279 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2382 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 283 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2390 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 287 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2398 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 291 "src/maths_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2406 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 295 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2414 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 299 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", "size_of");}
#line 2420 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 301 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","and");}
#line 2426 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 302 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","times");}
#line 2432 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 303 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","plus");}
#line 2438 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 304 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","minus");}
#line 2444 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 305 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","bitwise_not");}
#line 2450 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 306 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","logical_not");}
#line 2456 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 308 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2462 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 309 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("CAST_EXPRESSION","", branches, branch_notes);}
#line 2470 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 313 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2476 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 314 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2484 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 318 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2492 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 322 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","%", branches, branch_notes);}
#line 2500 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 326 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2506 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 327 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2514 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 331 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2522 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 335 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2528 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 336 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","<<", branches, branch_notes);}
#line 2536 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 340 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION",">>", branches, branch_notes);}
#line 2544 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 344 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2550 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 345 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2558 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 349 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2566 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 353 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2574 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 357 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2582 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 361 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2588 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 362 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2596 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 366 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2604 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 370 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2610 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 371 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","&", branches, branch_notes);}
#line 2618 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 375 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2624 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 376 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","^", branches, branch_notes);}
#line 2632 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 380 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2638 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 381 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","|", branches, branch_notes);}
#line 2646 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 385 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2652 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 386 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","&&", branches, branch_notes);}
#line 2660 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 390 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2666 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 391 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","||", branches, branch_notes);}
#line 2674 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 395 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2680 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 396 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2688 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 400 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2694 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 401 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2702 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 405 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "=");}
#line 2708 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 406 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "*=");}
#line 2714 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 407 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "/=");}
#line 2720 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 408 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "%=");}
#line 2726 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 409 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "+=");}
#line 2732 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 410 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "-=");}
#line 2738 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 411 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "<<=");}
#line 2744 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 412 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", ">>=");}
#line 2750 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 413 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "&=");}
#line 2756 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 414 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "^=");}
#line 2762 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 415 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "|=");}
#line 2768 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 417 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2774 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 419 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2780 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 420 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2788 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 424 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","oh_dear", branches, branch_notes);}
#line 2796 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 428 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2804 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 432 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2810 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 433 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2818 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 437 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2824 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 438 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2832 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 442 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2838 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 443 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2846 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 447 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2852 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 448 "src/maths_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2860 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 452 "src/maths_parser.y" /* yacc.c:1646  */
    {													std::vector<ast_node*> branches = {(yyvsp[0].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2868 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 456 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2876 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 460 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "typedef");}
#line 2882 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 461 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "extern");}
#line 2888 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 462 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "static");}
#line 2894 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 463 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "auto");}
#line 2900 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 464 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "register");}
#line 2906 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 466 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "void");}
#line 2912 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 467 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "char");}
#line 2918 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 468 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "short");}
#line 2924 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 469 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "int");}
#line 2930 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 470 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "long");}
#line 2936 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 471 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "float");}
#line 2942 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 472 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "double");}
#line 2948 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 473 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "signed");}
#line 2954 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 474 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "unsigned");}
#line 2960 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 475 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2966 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 476 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2972 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 477 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2978 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 479 "src/maths_parser.y" /* yacc.c:1646  */
    {                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2986 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 483 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2994 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 487 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3002 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 491 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", "struct");}
#line 3008 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 492 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", "union");}
#line 3014 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 494 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3020 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 495 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}
#line 3028 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 499 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}
#line 3036 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 503 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3042 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 505 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3050 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 509 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3056 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 511 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3064 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 515 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3070 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 516 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}
#line 3078 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 520 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 3084 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 521 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3092 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 525 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3100 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 529 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3108 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 533 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3116 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 537 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3124 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 541 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM", "enum");}
#line 3130 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 543 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3136 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 544 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3144 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 548 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3150 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 549 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR","", branches, branch_notes);}
#line 3158 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 553 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3164 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 555 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER", "const");}
#line 3170 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 556 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER", "volatile");}
#line 3176 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 558 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3182 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 559 "src/maths_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATOR","", branches, branch_notes);}
#line 3190 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 563 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3196 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 565 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3202 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 567 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3210 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 571 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3218 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 575 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3226 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 579 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3234 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 583 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3242 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 587 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3248 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 588 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3256 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 592 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3264 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 596 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3272 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 600 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3278 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 602 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3284 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 603 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3292 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 607 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3298 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 614 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3304 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 615 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3312 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 619 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3320 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 623 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3326 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 625 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3334 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 629 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3340 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 630 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER_LIST","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("IDENTIFIER_LIST","", branches, branch_notes);}
#line 3348 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 634 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3354 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 636 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3360 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 637 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 3368 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 641 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3374 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 643 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3382 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 647 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3388 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 649 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3394 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 651 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3402 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 655 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3410 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 659 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3418 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 663 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3424 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 665 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3432 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 669 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3440 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 673 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3448 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 677 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3454 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 679 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text));}
#line 3460 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 681 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3466 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 683 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3474 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 687 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3482 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 691 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3488 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 692 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 3496 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3500 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 699 "src/maths_parser.y" /* yacc.c:1906  */


ast_node *g_root;

ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
