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

#line 67 "src/compiler_parser.tab.cpp" /* yacc.c:339  */

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
   by #include "compiler_parser.tab.hpp".  */
#ifndef YY_YY_SRC_COMPILER_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_COMPILER_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/compiler_parser.y" /* yacc.c:355  */

  #include "./ast.hpp"

  #include <string>
  #include <cmath>
  #include <cassert>

  extern ast_node *g_root;

  int yylex(void);
  void yyerror(const char *);

#line 110 "src/compiler_parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_EQUALS = 258,
    T_MODULO_EQUALS = 259,
    T_LEFT_SHIFT_EQUALS = 260,
    T_RIGHT_SHIFT_EQUALS = 261,
    T_PLUS_EQUALS = 262,
    T_MINUS_EQUALS = 263,
    T_TIMES_EQUALS = 264,
    T_DIVIDE_EQUALS = 265,
    T_AND_EQUALS = 266,
    T_OR_EQUALS = 267,
    T_XOR_EQUALS = 268,
    T_LBRACKET = 269,
    T_RBRACKET = 270,
    T_LSQ_BRACKET = 271,
    T_RSQ_BRACKET = 272,
    T_RCURLY_BRACKET = 273,
    T_LCURLY_BRACKET = 274,
    T_LOGICAL_NOT = 275,
    T_BITWISE_NOT = 276,
    T_INCREMENT = 277,
    T_DECREMENT = 278,
    T_EQUALS_EQUALS = 279,
    T_NOT_EQUALS_EQUALS = 280,
    T_LESS_THAN_OR_EQUAL_TO = 281,
    T_GREATER_THAN_OR_EQUAL_TO = 282,
    T_PLUS = 283,
    T_MINUS = 284,
    T_RIGHT_SHIFT = 285,
    T_LEFT_SHIFT = 286,
    T_LESS_THAN = 287,
    T_GREATER_THAN = 288,
    T_AND = 289,
    T_OR = 290,
    T_AND_AND = 291,
    T_OR_OR = 292,
    T_DIVIDE = 293,
    T_TIMES = 294,
    T_MODULO = 295,
    T_EXPONENT = 296,
    T_AUTO = 297,
    T_BREAK = 298,
    T_CASE = 299,
    T_CHAR = 300,
    T_CONTINUE = 301,
    T_DEFAULT = 302,
    T_DO = 303,
    T_DOUBLE = 304,
    T_ELSE = 305,
    T_ENUM = 306,
    T_EXTERN = 307,
    T_FLOAT = 308,
    T_FOR = 309,
    T_IF = 310,
    T_INT = 311,
    T_LONG = 312,
    T_REGISTER = 313,
    T_RETURN = 314,
    T_SHORT = 315,
    T_SIGNED = 316,
    T_SIZEOF = 317,
    T_STATIC = 318,
    T_STRUCT = 319,
    T_SWITCH = 320,
    T_TYPEDEF = 321,
    T_UNSIGNED = 322,
    T_VOID = 323,
    T_VOLATILE = 324,
    T_WHILE = 325,
    T_ARROW = 326,
    T_COMMA = 327,
    T_DOT = 328,
    T_COLON = 329,
    T_SEMICOLON = 330,
    T_QUESTION = 331,
    T_EMPTY_BRACKETS = 332,
    T_ECURLY_BRACKETS = 333,
    T_ESQ_BRACKETS = 334,
    T_IDENTIFIER = 335,
    T_STRING = 336,
    T_DEC_INT = 337,
    T_OCTAL_INT = 338,
    T_HEX_INT = 339,
    T_NORM_FLOAT = 340,
    T_EXP_FLOAT = 341,
    T_DEREFERENCE = 342,
    T_CUSTOM_TYPE = 343,
    T_ENUM_CONSTANT = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "src/compiler_parser.y" /* yacc.c:355  */

  ast_node* nodePtr;
  std::string* _text;

#line 217 "src/compiler_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_COMPILER_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "src/compiler_parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1542

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  228
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  375

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

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
      85,    86,    87,    88,    89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    84,    85,    89,    90,    93,    97,   103,
     104,   105,   106,   107,   108,   110,   114,   118,   122,   123,
     125,   129,   133,   136,   138,   139,   143,   144,   148,   149,
     151,   155,   159,   163,   164,   165,   167,   171,   175,   179,
     183,   187,   191,   195,   199,   203,   207,   208,   209,   211,
     212,   214,   218,   224,   226,   229,   230,   231,   234,   235,
     236,   240,   241,   245,   249,   253,   257,   261,   265,   269,
     270,   274,   275,   279,   283,   287,   291,   295,   297,   298,
     299,   300,   301,   302,   304,   305,   309,   310,   314,   318,
     322,   323,   327,   331,   332,   336,   340,   341,   345,   349,
     353,   357,   358,   362,   366,   367,   371,   372,   376,   377,
     381,   382,   386,   387,   391,   392,   396,   397,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   413,
     415,   416,   421,   425,   429,   430,   434,   435,   439,   440,
     444,   445,   449,   453,   457,   458,   459,   460,   461,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   476,   480,   484,   488,   491,   492,   496,   500,   502,
     506,   508,   512,   513,   517,   518,   522,   526,   530,   534,
     538,   540,   541,   545,   546,   550,   552,   554,   555,   559,
     561,   563,   567,   571,   575,   580,   581,   585,   589,   593,
     595,   596,   600,   607,   608,   612,   616,   618,   627,   629,
     630,   634,   636,   640,   642,   644,   648,   652,   656,   658,
     662,   666,   670,   672,   674,   676,   680,   684,   685
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_EQUALS", "T_MODULO_EQUALS",
  "T_LEFT_SHIFT_EQUALS", "T_RIGHT_SHIFT_EQUALS", "T_PLUS_EQUALS",
  "T_MINUS_EQUALS", "T_TIMES_EQUALS", "T_DIVIDE_EQUALS", "T_AND_EQUALS",
  "T_OR_EQUALS", "T_XOR_EQUALS", "T_LBRACKET", "T_RBRACKET",
  "T_LSQ_BRACKET", "T_RSQ_BRACKET", "T_RCURLY_BRACKET", "T_LCURLY_BRACKET",
  "T_LOGICAL_NOT", "T_BITWISE_NOT", "T_INCREMENT", "T_DECREMENT",
  "T_EQUALS_EQUALS", "T_NOT_EQUALS_EQUALS", "T_LESS_THAN_OR_EQUAL_TO",
  "T_GREATER_THAN_OR_EQUAL_TO", "T_PLUS", "T_MINUS", "T_RIGHT_SHIFT",
  "T_LEFT_SHIFT", "T_LESS_THAN", "T_GREATER_THAN", "T_AND", "T_OR",
  "T_AND_AND", "T_OR_OR", "T_DIVIDE", "T_TIMES", "T_MODULO", "T_EXPONENT",
  "T_AUTO", "T_BREAK", "T_CASE", "T_CHAR", "T_CONTINUE", "T_DEFAULT",
  "T_DO", "T_DOUBLE", "T_ELSE", "T_ENUM", "T_EXTERN", "T_FLOAT", "T_FOR",
  "T_IF", "T_INT", "T_LONG", "T_REGISTER", "T_RETURN", "T_SHORT",
  "T_SIGNED", "T_SIZEOF", "T_STATIC", "T_STRUCT", "T_SWITCH", "T_TYPEDEF",
  "T_UNSIGNED", "T_VOID", "T_VOLATILE", "T_WHILE", "T_ARROW", "T_COMMA",
  "T_DOT", "T_COLON", "T_SEMICOLON", "T_QUESTION", "T_EMPTY_BRACKETS",
  "T_ECURLY_BRACKETS", "T_ESQ_BRACKETS", "T_IDENTIFIER", "T_STRING",
  "T_DEC_INT", "T_OCTAL_INT", "T_HEX_INT", "T_NORM_FLOAT", "T_EXP_FLOAT",
  "T_DEREFERENCE", "T_CUSTOM_TYPE", "T_ENUM_CONSTANT", "$accept",
  "PROGRAM", "TRANSLATION_UNIT", "EXTERNAL_DECLARATION",
  "FUNCTION_DECLARATION", "STATEMENT", "LABELED_STATEMENT", "DEFAULT",
  "CASE", "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "SWITCH", "IF", "ELSE",
  "ITERATION_STATEMENT", "FOR", "WHILE", "DO", "JUMP_STATEMENT", "RETURN",
  "PRIMARY_EXPRESSION", "CONSTANT", "POSTFIX_EXPRESSION",
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
  "IDENTIFIER", "TYPE_NAME", "ABSTRACT_DECLARATOR",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

#define YYPACT_NINF -170

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-170)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     636,    22,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,    39,   636,  -170,  -170,  -170,    16,  1429,  1429,
    -170,    -4,  -170,    28,  1429,    -8,     8,     6,   -21,  -170,
    -170,    37,  -170,  -170,  -170,    60,  -170,    10,  -170,  -170,
    1454,   163,   -28,   180,  -170,   427,  -170,  -170,  1429,  1271,
    -170,  -170,     8,  -170,  -170,   -21,  -170,    22,  -170,   905,
    -170,  1454,  1347,  -170,    91,  1454,  1454,  -170,    25,  -170,
     157,   -28,   498,  -170,  -170,  1295,  1295,  -170,  -170,  -170,
    -170,   129,  -170,   134,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,   161,
    1271,  -170,   356,   692,  -170,  -170,   198,   223,  -170,   244,
     246,   834,  -170,   929,  -170,  -170,   500,   966,  1360,  1271,
    -170,   248,   215,    -5,   249,   280,   229,   233,   242,   247,
     127,  -170,  -170,    94,  -170,    16,   218,    57,   281,   222,
    -170,  -170,  -170,   286,  -170,  -170,  -170,  -170,   326,   905,
    -170,  -170,  -170,  -170,  -170,  1271,   264,  -170,   265,  -170,
    1400,  -170,   -28,  1271,   122,    48,     2,   330,  1271,  -170,
    -170,  -170,  -170,   834,   272,  -170,   763,  -170,  -170,  -170,
    1271,  1271,   994,  1271,   277,  -170,   101,  1271,  1271,  -170,
    -170,   268,   268,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  1271,   498,  -170,  -170,  1271,
    1271,  1271,  1271,  1271,  1271,  1271,  1271,  1271,  1271,  1271,
    1271,  1271,  1271,  1271,  1271,  1271,  1271,  1271,  1271,  -170,
     834,   547,  1271,  -170,  -170,  -170,   380,  -170,    64,  -170,
    1429,  -170,  -170,   141,  -170,    91,  1271,  -170,  -170,  -170,
    -170,  -170,   603,   173,  -170,  1271,  -170,   834,  -170,    50,
      84,  1018,   116,    96,   335,  -170,   118,  -170,    42,  -170,
    -170,  -170,   336,  -170,  -170,  -170,   248,   248,   215,   215,
      -5,    -5,    -5,    -5,   249,   249,   280,   229,   233,   242,
     247,   103,  -170,  -170,   338,   341,   333,    64,  1429,  1271,
    -170,  -170,  -170,  -170,   279,  -170,  -170,  -170,  -170,   834,
     834,   250,   121,  1083,   834,  1271,  -170,  1271,  -170,  -170,
    1271,  -170,  -170,  -170,   343,   348,  -170,  -170,  -170,   318,
     834,   123,  1109,  1180,   133,  -170,   135,  -170,  -170,  -170,
    -170,  -170,   834,  -170,   834,   834,   138,   834,   143,  1206,
     294,  -170,  -170,  -170,   834,  -170,   834,   834,   164,  -170,
    -170,  -170,  -170,   834,  -170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   147,   150,   155,   180,   145,   154,   152,   153,
     148,   151,   156,   146,   164,   144,   157,   149,   186,   208,
     199,   223,     0,     2,     3,     5,     6,     0,   134,   136,
     158,     0,   159,     0,   138,     0,   187,     0,   195,   189,
     160,     0,     1,     4,   132,     0,   140,   142,   135,   137,
       0,   161,     0,   177,   139,     0,    23,     8,     0,     0,
     194,   191,   188,   200,   197,   196,   190,     0,   133,     0,
       7,   168,     0,   165,     0,   170,     0,   185,     0,   181,
     183,     0,     0,    83,    82,     0,     0,    80,    81,    78,
      79,     0,    19,     0,    18,    48,    46,    34,    53,    77,
      33,    47,    29,    57,    58,    59,    60,    26,     9,     0,
       0,    10,     0,     0,    11,    12,     0,     0,    13,     0,
       0,     0,    14,     0,    61,    56,    71,    84,     0,     0,
      86,    90,    93,    96,   101,   104,   106,   108,   110,   112,
     114,   116,   130,     0,    24,     0,    55,   206,     0,   202,
     203,    84,   129,     0,    55,   201,   198,   141,   142,     0,
     224,   143,   169,   162,   166,     0,   167,   172,   174,   171,
       0,   179,     0,     0,     0,     0,   209,     0,     0,    72,
      73,    50,    49,     0,     0,    22,     0,    25,    21,    27,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    67,
      68,     0,     0,    63,   118,   121,   124,   125,   122,   123,
     119,   120,   126,   128,   127,     0,     0,    75,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,   222,   218,   205,   211,   207,   213,   193,
       0,   192,   227,     0,   176,     0,     0,   163,   182,   184,
     178,    54,     0,   211,   210,     0,    17,     0,    20,     0,
       0,     0,     0,     0,     0,    51,     0,    69,     0,    66,
      65,   117,     0,    88,    87,    89,    91,    92,    95,    94,
      99,   100,    97,    98,   102,   103,   105,   107,   109,   111,
     113,     0,   131,    15,     0,     0,     0,   212,     0,     0,
     221,   217,   204,   225,     0,   173,   175,    85,    16,     0,
       0,     0,     0,     0,     0,     0,    64,     0,    62,    76,
       0,   220,   214,   216,     0,     0,   226,   228,    32,    30,
       0,     0,     0,     0,     0,    36,     0,    70,   115,   219,
     215,    35,     0,    45,     0,     0,     0,     0,     0,     0,
       0,    31,    42,    43,     0,    44,     0,     0,     0,    37,
      39,    40,    41,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,   349,  -170,   -29,  -170,  -170,  -170,    15,
    -170,   259,  -170,  -170,  -170,  -170,  -170,  -170,  -170,   186,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,    -3,  -170,  -170,
     -91,    87,    97,    88,   112,   149,   150,   148,   151,   152,
    -170,   -50,   -66,  -170,   -75,   -74,   145,    72,  -170,   320,
    -170,   -18,  -170,  -170,   313,   -60,   -61,  -170,   136,  -170,
    -170,   311,   221,  -170,   -31,     1,   -32,     4,  -170,  -170,
     -54,  -170,   147,     0,   190,  -130,  -169,  -170,  -153,  -170
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   352,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   276,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   215,   153,   143,    26,   147,    45,    46,
      28,    29,    30,    31,    72,    73,    74,   166,   167,    32,
      33,    78,    79,    80,    34,    35,    36,    37,    38,    65,
     304,   149,   150,   154,   177,   305,   248,    40,   161,   253
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      39,    39,    41,   160,   148,    62,   252,    63,   175,   152,
     162,    55,   164,    69,   169,    50,   262,   247,   242,    75,
       1,   176,    58,    39,    59,   224,   225,    39,    47,    55,
       1,    51,    71,    53,   155,   184,     1,    39,   218,    42,
      75,    75,    64,   171,    75,    75,   264,    52,    18,   196,
      57,    75,    66,    71,    71,   146,   151,    71,    71,   328,
     152,    77,    70,   261,    71,   319,    20,    39,   158,   156,
      56,   241,    27,   242,    39,   168,    19,   307,   308,   243,
     309,   244,   179,   180,   189,    60,    19,    61,    56,    20,
     254,    44,   194,   160,   307,    27,    19,   172,   259,   320,
      48,    49,    19,    20,   175,     1,    54,   151,    19,    20,
     164,   324,   146,   146,   238,   152,   269,   270,   272,   273,
     238,   146,   238,   152,   278,   217,   151,   145,   283,   284,
     285,   277,    67,   326,   243,    68,   244,    19,   354,    75,
     260,   310,   175,   311,    20,    39,   158,    39,   245,   281,
     360,   246,    71,   364,   266,   176,   238,   189,   366,   313,
     173,   337,   151,   301,   236,   165,   238,   306,   238,   239,
     151,    19,   302,   238,   317,   238,   275,   330,    20,   373,
     263,   316,    76,   146,   145,    75,   146,   262,   238,   242,
     327,   323,   152,   238,   172,   238,   342,   322,    71,    81,
     144,   279,   280,   237,   181,   238,   152,   238,   359,   182,
     238,   303,   190,   314,    62,   238,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   335,   183,   238,   191,   318,   151,
     146,    39,    41,   222,   223,   246,    39,   341,   160,   344,
     243,   346,   244,   151,   334,    39,   168,   187,   192,   152,
     193,   347,   151,   232,    82,   340,   263,   146,   356,   358,
      83,    84,    85,    86,   233,   226,   227,   234,    87,    88,
     348,   228,   229,   235,    89,   368,   219,   220,   221,    90,
     338,   339,   240,    82,   250,   345,   249,   336,   159,    83,
      84,    85,    86,   251,   230,   231,   151,    87,    88,   286,
     287,   353,    99,    89,   290,   291,   292,   293,    90,   146,
     146,   288,   289,   361,   146,   362,   363,   151,   365,    69,
      19,   103,   104,   105,   106,   370,   255,   371,   372,   256,
     146,    99,   294,   295,   374,   265,   267,   101,    19,   325,
     333,   329,   146,   331,   146,   146,   332,   146,   349,    19,
     103,   104,   105,   106,   146,   350,   146,   146,   351,   369,
      82,   186,    43,   146,   185,    55,    83,    84,    85,    86,
     274,   296,   298,   297,    87,    88,   299,   157,   300,   170,
      89,   315,   174,   258,   241,    90,   242,   312,     2,    91,
      92,     3,    93,    94,    95,     4,   282,     5,     6,     7,
      96,    97,     8,     9,    10,    98,    11,    12,    99,    13,
      14,   100,    15,    16,    17,    18,   101,     0,     0,     0,
       0,   102,     0,     0,    56,     0,    19,   103,   104,   105,
     106,    82,     0,     0,    21,     0,    55,    83,    84,    85,
      86,     0,     0,     0,     0,    87,    88,   243,     0,   244,
      19,    89,     0,     0,     0,     0,    90,     0,     0,     2,
      91,    92,     3,    93,    94,    95,     4,     0,     5,     6,
       7,    96,    97,     8,     9,    10,    98,    11,    12,    99,
      13,    14,   100,    15,    16,    17,    18,   101,     0,     0,
       0,     0,   102,     0,     0,    56,     0,    19,   103,   104,
     105,   106,    82,     0,   197,    21,   198,     0,    83,    84,
      85,    86,   199,   200,     0,     0,    87,    88,     0,     0,
       0,     0,    89,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     8,     9,     0,     0,    11,    12,
      99,   241,    14,   242,     0,    16,    17,    18,     0,     0,
       0,   201,     0,   202,     0,     0,     0,   203,    19,   103,
     104,   105,   106,     0,     0,     0,    21,     0,     0,     2,
       0,     0,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,   262,     0,   242,
       0,     0,     0,     0,   243,     0,   244,    19,     0,     0,
       0,     0,     0,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     3,     0,
       1,     0,     4,     0,     5,     6,     7,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,     0,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     2,     0,
     243,     3,   244,     0,     0,     4,     0,     5,     6,     7,
      20,    21,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    82,     0,     0,     0,
     188,    55,    83,    84,    85,    86,    19,     0,     0,     0,
      87,    88,     0,    20,    21,     0,    89,     0,     0,     0,
       0,    90,     0,     0,     0,    91,    92,     0,    93,    94,
      95,     0,     0,     0,     0,     0,    96,    97,     0,     0,
       0,    98,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,   102,     0,     0,
      56,     0,    19,   103,   104,   105,   106,    82,     0,     0,
       0,   268,    55,    83,    84,    85,    86,     0,     0,     0,
       0,    87,    88,     0,     0,     0,     0,    89,     0,     0,
       0,     0,    90,     0,     0,     0,    91,    92,     0,    93,
      94,    95,     0,     0,     0,     0,     0,    96,    97,     0,
       0,     0,    98,     0,     0,    99,     0,     0,   100,     0,
       0,     0,     0,   101,     0,     0,     0,     0,   102,     0,
       0,    56,     0,    19,   103,   104,   105,   106,    82,     0,
       0,     0,     0,    55,    83,    84,    85,    86,     0,     0,
       0,     0,    87,    88,     0,     0,     0,     0,    89,     0,
       0,     0,     0,    90,     0,     0,     0,    91,    92,     0,
      93,    94,    95,     0,     0,     0,     0,     0,    96,    97,
       0,     0,     0,    98,     0,     0,    99,     0,     0,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,   102,
       0,     0,    56,     0,    19,   103,   104,   105,   106,    82,
       0,     0,     0,     0,   159,    83,    84,    85,    86,     0,
       0,     0,     0,    87,    88,     0,     0,     0,     0,    89,
       0,     0,     0,    82,    90,     0,     0,     0,     0,    83,
      84,    85,    86,     0,     0,     0,     0,    87,    88,     0,
       0,     0,     0,    89,     0,     0,     0,    99,    90,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
       0,     0,     0,     0,     0,    19,   103,   104,   105,   106,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   195,     0,     0,     0,    82,    19,
     103,   104,   105,   106,    83,    84,    85,    86,     0,     0,
       0,     0,    87,    88,     0,     0,     0,     0,    89,     0,
       0,     0,    82,    90,     0,     0,     0,     0,    83,    84,
      85,    86,     0,     0,     0,     0,    87,    88,     0,     0,
       0,     0,    89,     0,     0,     0,    99,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   271,
       0,     0,     0,     0,    19,   103,   104,   105,   106,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   321,     0,     0,     0,    82,    19,   103,
     104,   105,   106,    83,    84,    85,    86,     0,     0,     0,
       0,    87,    88,     0,     0,     0,     0,    89,     0,     0,
       0,     0,    90,    82,   355,     0,     0,     0,     0,    83,
      84,    85,    86,     0,     0,     0,     0,    87,    88,     0,
       0,     0,     0,    89,     0,    99,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,     0,
       0,     0,     0,    19,   103,   104,   105,   106,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
     103,   104,   105,   106,    82,   357,     0,     0,     0,     0,
      83,    84,    85,    86,     0,     0,     0,     0,    87,    88,
       0,     0,     0,     0,    89,     0,     0,     0,     0,    90,
      82,   367,     0,     0,     0,     0,    83,    84,    85,    86,
       0,     0,     0,     0,    87,    88,     0,     0,     0,     0,
      89,     0,    99,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,   103,   104,   105,   106,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,    19,   103,   104,   105,
     106,    83,    84,    85,    86,     0,     0,     0,     0,    87,
      88,     0,     0,     0,     0,    89,     0,     0,     0,   178,
      90,     0,     0,     0,     0,    83,    84,    85,    86,     0,
       0,     0,     0,    87,    88,     0,     0,     0,     0,    89,
       0,     0,     0,    99,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,   103,   104,   105,   106,     0,    99,     0,     0,
       0,     0,     0,     0,     0,   163,     0,     0,     0,     0,
       0,     0,     0,     0,   216,    19,   103,   104,   105,   106,
      83,    84,    85,    86,     0,     0,     0,     0,    87,    88,
       0,     0,     3,     0,    89,     0,     4,     0,     5,    90,
       7,     0,     0,     8,     9,     0,     0,    11,    12,     0,
       0,    14,     0,     0,    16,    17,    18,     0,   257,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
      19,   103,   104,   105,   106,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     8,     9,     0,     0,
      11,    12,     0,     0,    14,     0,     0,    16,    17,    18,
       0,     2,     0,     0,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     8,     9,    10,    21,    11,
      12,     0,    13,    14,     0,    15,    16,    17,    18,     3,
       0,     0,     0,     4,     0,     5,     0,     7,     0,     0,
       8,     9,     0,     0,    11,    12,     0,    21,    14,     0,
       0,    16,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21
};

static const yytype_int16 yycheck[] =
{
       0,     1,     1,    69,    58,    37,   159,    38,    82,    59,
      71,    19,    72,     3,    75,    19,    14,   147,    16,    50,
      14,    82,    14,    23,    16,    30,    31,    27,    27,    19,
      14,    31,    50,    33,    65,   110,    14,    37,   129,     0,
      71,    72,    38,    18,    75,    76,   176,    19,    69,   123,
      35,    82,    15,    71,    72,    55,    59,    75,    76,    17,
     110,    89,    47,    15,    82,    15,    87,    67,    67,    65,
      78,    14,     0,    16,    74,    74,    80,   246,    14,    77,
      16,    79,    85,    86,   113,    77,    80,    79,    78,    87,
     165,    75,   121,   159,   263,    23,    80,    72,   173,    15,
      28,    29,    80,    87,   178,    14,    34,   110,    80,    87,
     170,    15,   112,   113,    72,   165,   190,   191,   192,   193,
      72,   121,    72,   173,   198,   128,   129,    55,   219,   220,
     221,   197,    72,    15,    77,    75,    79,    80,    15,   170,
      18,    77,   216,    79,    87,   145,   145,   147,   147,   215,
      15,   147,   170,    15,   183,   216,    72,   186,    15,    18,
       3,   314,   165,   237,    37,    74,    72,   242,    72,    75,
     173,    80,   238,    72,   265,    72,    75,    74,    87,    15,
     176,   256,    19,   183,   112,   216,   186,    14,    72,    16,
      72,    75,   242,    72,    72,    72,    75,   271,   216,    19,
      55,   201,   202,    76,    75,    72,   256,    72,    75,    75,
      72,   240,    14,    72,   246,    72,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   309,    74,    72,    14,   267,   242,
     240,   241,   241,    28,    29,   241,   246,   321,   314,   323,
      77,   325,    79,   256,   308,   255,   255,   112,    14,   309,
      14,   327,   265,    34,    14,    15,   262,   267,   342,   343,
      20,    21,    22,    23,    41,    26,    27,    35,    28,    29,
     330,    32,    33,    36,    34,   359,    38,    39,    40,    39,
     319,   320,    74,    14,    72,   324,    15,    18,    19,    20,
      21,    22,    23,    17,    24,    25,   309,    28,    29,   222,
     223,   340,    62,    34,   226,   227,   228,   229,    39,   319,
     320,   224,   225,   352,   324,   354,   355,   330,   357,     3,
      80,    81,    82,    83,    84,   364,    72,   366,   367,    74,
     340,    62,   230,   231,   373,    15,    74,    70,    80,    14,
      17,    15,   352,    15,   354,   355,    15,   357,    15,    80,
      81,    82,    83,    84,   364,    17,   366,   367,    50,    75,
      14,   112,    23,   373,    18,    19,    20,    21,    22,    23,
     194,   232,   234,   233,    28,    29,   235,    67,   236,    76,
      34,   255,    81,   172,    14,    39,    16,   250,    42,    43,
      44,    45,    46,    47,    48,    49,   216,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    80,    81,    82,    83,
      84,    14,    -1,    -1,    88,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    29,    77,    -1,    79,
      80,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    -1,    80,    81,    82,
      83,    84,    14,    -1,    14,    88,    16,    -1,    20,    21,
      22,    23,    22,    23,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    51,
      -1,    53,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      62,    14,    64,    16,    -1,    67,    68,    69,    -1,    -1,
      -1,    71,    -1,    73,    -1,    -1,    -1,    77,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    88,    -1,    -1,    42,
      -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    -1,    -1,    56,    57,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    66,    67,    68,    69,    14,    -1,    16,
      -1,    -1,    -1,    -1,    77,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,
      14,    -1,    49,    -1,    51,    52,    53,    -1,    -1,    56,
      57,    58,    -1,    60,    61,    -1,    63,    64,    -1,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      77,    45,    79,    -1,    -1,    49,    -1,    51,    52,    53,
      87,    88,    56,    57,    58,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    67,    68,    69,    14,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    80,    -1,    -1,    -1,
      28,    29,    -1,    87,    88,    -1,    34,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    80,    81,    82,    83,    84,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    -1,    80,    81,    82,    83,    84,    14,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    80,    81,    82,    83,    84,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    14,    39,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    62,    39,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    14,    80,
      81,    82,    83,    84,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    14,    39,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    62,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    14,    80,    81,
      82,    83,    84,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    34,    -1,    62,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      34,    -1,    62,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    80,    81,    82,    83,
      84,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    14,
      39,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    62,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    80,    81,    82,    83,    84,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    45,    -1,    34,    -1,    49,    -1,    51,    39,
      53,    -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    -1,    18,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    45,    -1,    -1,    -1,    49,
      -1,    51,    -1,    53,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    57,    58,    88,    60,
      61,    -1,    63,    64,    -1,    66,    67,    68,    69,    45,
      -1,    -1,    -1,    49,    -1,    51,    -1,    53,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    88,    64,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    42,    45,    49,    51,    52,    53,    56,    57,
      58,    60,    61,    63,    64,    66,    67,    68,    69,    80,
      87,    88,    91,    92,    93,    94,   136,   137,   140,   141,
     142,   143,   149,   150,   154,   155,   156,   157,   158,   163,
     167,   155,     0,    93,    75,   138,   139,   155,   137,   137,
      19,   163,    19,   163,   137,    19,    78,    99,    14,    16,
      77,    79,   156,   154,   157,   159,    15,    72,    75,     3,
      99,   141,   144,   145,   146,   154,    19,    89,   151,   152,
     153,    19,    14,    20,    21,    22,    23,    28,    29,    34,
      39,    43,    44,    46,    47,    48,    54,    55,    59,    62,
      65,    70,    75,    81,    82,    83,    84,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   135,   136,   137,   163,   137,   160,   161,
     162,   117,   131,   134,   163,   154,   157,   139,   155,    19,
     132,   168,   146,    18,   145,    74,   147,   148,   155,   146,
     144,    18,    72,     3,   151,   135,   146,   164,    14,   117,
     117,    75,    75,    74,   134,    18,   101,   136,    18,    95,
      14,    14,    14,    14,    95,    75,   135,    14,    16,    22,
      23,    71,    73,    77,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   133,    14,   117,   120,    38,
      39,    40,    28,    29,    30,    31,    26,    27,    32,    33,
      24,    25,    34,    41,    35,    36,    37,    76,    72,    75,
      74,    14,    16,    77,    79,   155,   157,   165,   166,    15,
      72,    17,   168,   169,   134,    72,    74,    18,   152,   134,
      18,    15,    14,   157,   165,    15,    95,    74,    18,   135,
     135,    75,   135,   135,   109,    75,   116,   132,   135,   163,
     163,   132,   164,   120,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   124,   124,   125,   126,   127,   128,
     129,   135,   132,    95,   160,   165,   134,   166,    14,    16,
      77,    79,   162,    18,    72,   148,   134,   120,    95,    15,
      15,    75,   135,    75,    15,    14,    15,    72,    17,    15,
      74,    15,    15,    17,   160,   134,    18,   168,    95,    95,
      15,   135,    75,    75,   135,    95,   135,   132,   131,    15,
      17,    50,   106,    95,    15,    15,   135,    15,   135,    75,
      15,    95,    95,    95,    15,    95,    15,    15,   135,    75,
      95,    95,    95,    15,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   104,   105,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   109,   110,   111,
     111,   111,   111,   112,   113,   113,   113,   113,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   117,   117,   117,   117,   117,   118,   119,   119,
     119,   119,   119,   119,   120,   120,   121,   121,   121,   121,
     122,   122,   122,   123,   123,   123,   124,   124,   124,   124,
     124,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     135,   135,   136,   136,   137,   137,   137,   137,   137,   137,
     138,   138,   139,   139,   140,   140,   140,   140,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   142,   142,   142,   143,   144,   144,   145,   146,   146,
     146,   146,   147,   147,   148,   148,   148,   149,   149,   149,
     150,   151,   151,   152,   152,   153,   154,   155,   155,   156,
     156,   156,   156,   156,   156,   157,   157,   157,   157,   158,
     159,   159,   160,   161,   161,   162,   162,   162,   163,   164,
     164,   165,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   168,   168,   168,   169,   169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     1,     1,
       4,     3,     3,     1,     1,     2,     1,     2,     2,     1,
       5,     7,     5,     1,     1,     1,     5,     7,     9,     8,
       8,     8,     7,     7,     7,     6,     1,     1,     1,     2,
       2,     3,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     4,     3,     3,     2,     2,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     5,     1,     1,     2,     2,     1,     2,
       1,     2,     1,     3,     1,     3,     2,     2,     5,     4,
       1,     1,     3,     1,     3,     1,     1,     1,     2,     1,
       3,     2,     4,     4,     2,     1,     2,     2,     3,     1,
       1,     2,     1,     1,     3,     2,     1,     2,     1,     1,
       2,     1,     2,     1,     3,     4,     3,     2,     1,     4,
       3,     2,     1,     1,     1,     3,     4,     1,     3
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
#line 82 "src/compiler_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].nodePtr); }
#line 1857 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1863 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1871 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1877 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1883 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 93 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1891 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1899 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1905 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1911 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1917 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 106 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1923 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 107 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1929 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 108 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1935 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 110 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1943 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 114 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1951 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 118 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1959 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 122 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DEFAULT", "default");}
#line 1965 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 123 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CASE", "case");}
#line 1971 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 125 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1979 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 129 "src/compiler_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1987 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1995 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 136 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 2001 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2007 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 139 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 2015 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 143 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2021 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 2029 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 2035 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = NULL; }
#line 2041 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2049 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 155 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2057 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "src/compiler_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2065 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 163 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", "switch");}
#line 2071 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 164 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", "if");}
#line 2077 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 165 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", "else" );}
#line 2083 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "src/compiler_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2091 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2099 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 175 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2107 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 179 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2115 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 183 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2123 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 187 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2131 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 191 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2139 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 195 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2147 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 199 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2155 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 203 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2163 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 207 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", "for");}
#line 2169 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 208 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", "while");}
#line 2175 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 209 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", "do");}
#line 2181 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 211 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "continue");}
#line 2187 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 212 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "break");}
#line 2193 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 214 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2201 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 218 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2209 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 224 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", "return");}
#line 2215 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 226 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION","", branches, branch_notes);}
#line 2223 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 229 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2229 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 230 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2235 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 231 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2241 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 234 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2247 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 235 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text), 0, 8)))); }
#line 2253 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 236 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2259 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 240 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2265 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 241 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","array_indexing", branches, branch_notes);}
#line 2273 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 245 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","fn_call", branches, branch_notes);}
#line 2281 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 249 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","fn_call", branches, branch_notes);}
#line 2289 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 253 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","struct member access", branches, branch_notes);}
#line 2297 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 257 "src/compiler_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}
#line 2305 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 261 "src/compiler_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2313 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 265 "src/compiler_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2321 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 269 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2327 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 270 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2335 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 274 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2341 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 275 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2349 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 279 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2357 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 283 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2365 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 287 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2373 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 291 "src/compiler_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2381 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 295 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", "size_of");}
#line 2387 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 297 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","and");}
#line 2393 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 298 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","times");}
#line 2399 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 299 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","plus");}
#line 2405 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 300 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","minus");}
#line 2411 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 301 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","bitwise_not");}
#line 2417 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 302 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","logical_not");}
#line 2423 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 304 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2429 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 305 "src/compiler_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("CAST_EXPRESSION","", branches, branch_notes);}
#line 2437 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 309 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2443 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 310 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2451 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 314 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2459 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 318 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","%", branches, branch_notes);}
#line 2467 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 322 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2473 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 323 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2481 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 327 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2489 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 331 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2495 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 332 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("SHIFT_EXPRESSION","<<", branches, branch_notes);}
#line 2503 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 336 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("SHIFT_EXPRESSION",">>", branches, branch_notes);}
#line 2511 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 340 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2517 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 341 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2525 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 345 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2533 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 349 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2541 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 353 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2549 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 357 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2555 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 358 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2563 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 362 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2571 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 366 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2577 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 367 "src/compiler_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","&", branches, branch_notes);}
#line 2585 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 371 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2591 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 372 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","^", branches, branch_notes);}
#line 2599 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 376 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2605 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 377 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","|", branches, branch_notes);}
#line 2613 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 381 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2619 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 382 "src/compiler_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","&&", branches, branch_notes);}
#line 2627 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 386 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2633 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 387 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","||", branches, branch_notes);}
#line 2641 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 391 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2647 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 392 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2655 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 396 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2661 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 397 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2669 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 401 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "=");}
#line 2675 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 402 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "*=");}
#line 2681 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 403 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "/=");}
#line 2687 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 404 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "%=");}
#line 2693 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 405 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "+=");}
#line 2699 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 406 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "-=");}
#line 2705 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 407 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "<<=");}
#line 2711 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 408 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", ">>=");}
#line 2717 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 409 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "&=");}
#line 2723 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 410 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "^=");}
#line 2729 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 411 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "|=");}
#line 2735 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 413 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2741 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 415 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2747 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 416 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2755 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 421 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2763 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 425 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2771 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 429 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2777 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 430 "src/compiler_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2785 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 434 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2791 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 435 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2799 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 439 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2805 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 440 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2813 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 444 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2819 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 445 "src/compiler_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2827 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 449 "src/compiler_parser.y" /* yacc.c:1646  */
    {													std::vector<ast_node*> branches = {(yyvsp[0].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","just a declarator", branches, branch_notes);}
#line 2835 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 453 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2843 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 457 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "typedef");}
#line 2849 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 458 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "extern");}
#line 2855 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 459 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "static");}
#line 2861 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 460 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "auto");}
#line 2867 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 461 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "register");}
#line 2873 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 463 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "void");}
#line 2879 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 464 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "char");}
#line 2885 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 465 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "short");}
#line 2891 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 466 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "int");}
#line 2897 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 467 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "long");}
#line 2903 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 468 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "float");}
#line 2909 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 469 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "double");}
#line 2915 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 470 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "signed");}
#line 2921 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 471 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "unsigned");}
#line 2927 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 472 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2933 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 473 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2939 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 474 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2945 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 476 "src/compiler_parser.y" /* yacc.c:1646  */
    {                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2953 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 480 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2961 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 484 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2969 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 488 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", "struct");}
#line 2975 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 491 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2981 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 492 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}
#line 2989 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 496 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}
#line 2997 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 500 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3003 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 502 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3011 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 506 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3017 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 508 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3025 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 512 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3031 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 513 "src/compiler_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}
#line 3039 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 517 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 3045 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 518 "src/compiler_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3053 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 522 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3061 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 526 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3069 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 530 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3077 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 534 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3085 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 538 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM", "enum");}
#line 3091 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 540 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3097 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 541 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3105 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 545 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3111 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 546 "src/compiler_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR","", branches, branch_notes);}
#line 3119 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 550 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3125 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 552 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER", "volatile");}
#line 3131 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 554 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3137 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 555 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATOR","", branches, branch_notes);}
#line 3145 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 559 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3151 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 561 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3157 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 563 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}
#line 3165 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 567 "src/compiler_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}
#line 3173 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 571 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}
#line 3181 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 575 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}
#line 3189 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 580 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3195 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 581 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3203 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 585 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3211 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 589 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3219 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 593 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3225 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 595 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3231 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 596 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3239 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 600 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3245 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 607 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3251 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 608 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3259 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 612 "src/compiler_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3267 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 616 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3273 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 618 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3281 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 627 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3287 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 629 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3293 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 630 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 3301 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 634 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3307 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 636 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3315 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 640 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3321 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 642 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3327 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 644 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3335 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 648 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3343 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 652 "src/compiler_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3351 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 656 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3357 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 658 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3365 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 662 "src/compiler_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3373 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 666 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3381 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 670 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3387 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 672 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text));}
#line 3393 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 674 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3399 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 676 "src/compiler_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3407 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 680 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3415 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 684 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3421 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 685 "src/compiler_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 3429 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3433 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
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
#line 692 "src/compiler_parser.y" /* yacc.c:1906  */


ast_node *g_root;

ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
