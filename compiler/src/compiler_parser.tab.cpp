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
    T_AUTO = 258,
    T_BREAK = 259,
    T_CASE = 260,
    T_CHAR = 261,
    T_CONTINUE = 262,
    T_DEFAULT = 263,
    T_DO = 264,
    T_DOUBLE = 265,
    T_ELSE = 266,
    T_ENUM = 267,
    T_EXTERN = 268,
    T_FLOAT = 269,
    T_FOR = 270,
    T_IF = 271,
    T_INT = 272,
    T_LONG = 273,
    T_REGISTER = 274,
    T_RETURN = 275,
    T_SHORT = 276,
    T_SIGNED = 277,
    T_SIZEOF = 278,
    T_STATIC = 279,
    T_STRUCT = 280,
    T_SWITCH = 281,
    T_TYPEDEF = 282,
    T_UNSIGNED = 283,
    T_VOID = 284,
    T_VOLATILE = 285,
    T_WHILE = 286,
    T_TIMES = 287,
    T_DIVIDE = 288,
    T_PLUS = 289,
    T_MINUS = 290,
    T_EXPONENT = 291,
    T_DECREMENT = 292,
    T_INCREMENT = 293,
    T_LESS_THAN = 294,
    T_GREATER_THAN = 295,
    T_EQUALS = 296,
    T_AND = 297,
    T_OR = 298,
    T_BITWISE_NOT = 299,
    T_LOGICAL_NOT = 300,
    T_AND_AND = 301,
    T_OR_OR = 302,
    T_MODULO_EQUALS = 303,
    T_LEFT_SHIFT_EQUALS = 304,
    T_RIGHT_SHIFT_EQUALS = 305,
    T_NOT_EQUALS_EQUALS = 306,
    T_EQUALS_EQUALS = 307,
    T_PLUS_EQUALS = 308,
    T_MINUS_EQUALS = 309,
    T_TIMES_EQUALS = 310,
    T_DIVIDE_EQUALS = 311,
    T_LESS_THAN_OR_EQUAL_TO = 312,
    T_GREATER_THAN_OR_EQUAL_TO = 313,
    T_AND_EQUALS = 314,
    T_OR_EQUALS = 315,
    T_XOR_EQUALS = 316,
    T_ARROW = 317,
    T_RIGHT_SHIFT = 318,
    T_LEFT_SHIFT = 319,
    T_MODULO = 320,
    T_COMMA = 321,
    T_DOT = 322,
    T_COLON = 323,
    T_SEMICOLON = 324,
    T_QUESTION = 325,
    T_LBRACKET = 326,
    T_RBRACKET = 327,
    T_LSQ_BRACKET = 328,
    T_RSQ_BRACKET = 329,
    T_RCURLY_BRACKET = 330,
    T_LCURLY_BRACKET = 331,
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
#define YYLAST   1492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  380

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
       0,    82,    82,    84,    85,    89,    90,    93,    97,   101,
     102,   103,   104,   105,   106,   108,   112,   116,   120,   121,
     123,   127,   131,   134,   136,   137,   141,   142,   146,   147,
     149,   153,   157,   161,   162,   163,   165,   169,   173,   177,
     181,   185,   189,   193,   197,   201,   205,   206,   207,   209,
     210,   212,   216,   222,   224,   225,   226,   228,   232,   233,
     234,   238,   239,   243,   247,   251,   255,   259,   263,   267,
     268,   272,   273,   277,   281,   285,   289,   293,   295,   296,
     297,   298,   299,   300,   302,   303,   307,   308,   312,   316,
     320,   321,   325,   329,   330,   334,   338,   339,   343,   347,
     351,   355,   356,   360,   364,   365,   369,   370,   374,   375,
     379,   380,   384,   385,   389,   390,   394,   395,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   411,
     413,   414,   418,   422,   426,   427,   431,   432,   436,   437,
     441,   442,   446,   450,   454,   455,   456,   457,   458,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   473,   477,   481,   485,   488,   489,   493,   497,   499,
     503,   505,   509,   510,   514,   515,   519,   523,   527,   531,
     535,   537,   538,   542,   543,   547,   549,   551,   552,   556,
     558,   560,   564,   568,   572,   576,   580,   581,   585,   589,
     593,   595,   596,   600,   607,   608,   612,   616,   618,   622,
     623,   627,   629,   630,   634,   636,   640,   642,   644,   648,
     652,   656,   658,   662,   666,   670,   672,   674,   676,   680,
     684,   685
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_AUTO", "T_BREAK", "T_CASE", "T_CHAR",
  "T_CONTINUE", "T_DEFAULT", "T_DO", "T_DOUBLE", "T_ELSE", "T_ENUM",
  "T_EXTERN", "T_FLOAT", "T_FOR", "T_IF", "T_INT", "T_LONG", "T_REGISTER",
  "T_RETURN", "T_SHORT", "T_SIGNED", "T_SIZEOF", "T_STATIC", "T_STRUCT",
  "T_SWITCH", "T_TYPEDEF", "T_UNSIGNED", "T_VOID", "T_VOLATILE", "T_WHILE",
  "T_TIMES", "T_DIVIDE", "T_PLUS", "T_MINUS", "T_EXPONENT", "T_DECREMENT",
  "T_INCREMENT", "T_LESS_THAN", "T_GREATER_THAN", "T_EQUALS", "T_AND",
  "T_OR", "T_BITWISE_NOT", "T_LOGICAL_NOT", "T_AND_AND", "T_OR_OR",
  "T_MODULO_EQUALS", "T_LEFT_SHIFT_EQUALS", "T_RIGHT_SHIFT_EQUALS",
  "T_NOT_EQUALS_EQUALS", "T_EQUALS_EQUALS", "T_PLUS_EQUALS",
  "T_MINUS_EQUALS", "T_TIMES_EQUALS", "T_DIVIDE_EQUALS",
  "T_LESS_THAN_OR_EQUAL_TO", "T_GREATER_THAN_OR_EQUAL_TO", "T_AND_EQUALS",
  "T_OR_EQUALS", "T_XOR_EQUALS", "T_ARROW", "T_RIGHT_SHIFT",
  "T_LEFT_SHIFT", "T_MODULO", "T_COMMA", "T_DOT", "T_COLON", "T_SEMICOLON",
  "T_QUESTION", "T_LBRACKET", "T_RBRACKET", "T_LSQ_BRACKET",
  "T_RSQ_BRACKET", "T_RCURLY_BRACKET", "T_LCURLY_BRACKET",
  "T_EMPTY_BRACKETS", "T_ECURLY_BRACKETS", "T_ESQ_BRACKETS",
  "T_IDENTIFIER", "T_STRING", "T_DEC_INT", "T_OCTAL_INT", "T_HEX_INT",
  "T_NORM_FLOAT", "T_EXP_FLOAT", "T_DEREFERENCE", "T_CUSTOM_TYPE",
  "T_ENUM_CONSTANT", "$accept", "PROGRAM", "TRANSLATION_UNIT",
  "EXTERNAL_DECLARATION", "FUNCTION_DECLARATION", "STATEMENT",
  "LABELED_STATEMENT", "DEFAULT", "CASE", "COMPOUND_STATEMENT",
  "DECLARATION_LIST", "STATEMENT_LIST", "EXPRESSION_STATEMENT",
  "SELECTION_STATEMENT", "SWITCH", "IF", "ELSE", "ITERATION_STATEMENT",
  "FOR", "WHILE", "DO", "JUMP_STATEMENT", "RETURN", "PRIMARY_EXPRESSION",
  "CONSTANT", "POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST",
  "UNARY_EXPRESSION", "SIZE_OF", "UNARY_OPERATOR", "CAST_EXPRESSION",
  "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION", "SHIFT_EXPRESSION",
  "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION", "AND_EXPRESSION",
  "EXCLUSIVE_OR_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "CONDITIONAL_EXPRESSION", "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR",
  "CONSTANT_EXPRESSION", "EXPR", "DECLARATION", "DECLARATION_SPECIFIERS",
  "INIT_DECLARATOR_LIST", "INIT_DECLARATOR", "STORAGE_CLASS_SPECIFIER",
  "TYPE_SPECIFIER", "STRUCT_OR_UNION_SPECIFIER", "STRUCT_OR_UNION",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

#define YYPACT_NINF -239

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-239)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     605,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,   -46,  -239,
    -239,  -239,    54,   605,  -239,  -239,  -239,    18,   705,   705,
    -239,    35,  -239,    57,   705,    73,   113,   -54,   -18,  -239,
    -239,   -44,  -239,  -239,  -239,   181,  -239,   -27,  -239,  -239,
     649,    -1,   -19,     6,  -239,   468,  -239,  -239,   677,  1339,
    -239,  -239,   113,  -239,  -239,   -18,  -239,   -46,  -239,  1084,
    -239,   649,   778,  -239,    70,   649,   649,  -239,    15,  -239,
      51,   -19,    37,  -239,    50,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  1392,  1392,  -239,  -239,
    -239,  -239,   738,  -239,  -239,  -239,  -239,  -239,  -239,    68,
    1339,  -239,   382,   852,  -239,  -239,    89,   112,  -239,   140,
     163,  1014,  -239,  1100,  -239,  -239,    24,   282,  1408,  1339,
    -239,    31,    92,   131,    26,   255,   102,   191,   202,   222,
     -25,  -239,  -239,   189,  -239,    18,   212,    52,   214,   230,
    -239,   -42,  -239,  -239,  -239,   227,  -239,  -239,  -239,  -239,
     275,  1084,  -239,  -239,  -239,  -239,  -239,  1339,   251,  -239,
     250,  -239,   817,   -19,  -239,  1339,    19,  -239,  -239,  1339,
    -239,  -239,   -16,   153,   247,  1014,   253,  -239,   933,  -239,
    -239,  -239,  1339,  1339,  1153,  1339,   295,  -239,   215,  -239,
    -239,   248,   248,  1339,  1339,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  1339,   738,  -239,
    -239,  1339,  1339,  1339,  1339,  1339,  1339,  1339,  1339,  1339,
    1339,  1339,  1339,  1339,  1339,  1339,  1339,  1339,  1339,  1339,
    1339,  -239,  1014,   505,  1339,  -239,  -239,  -239,   196,  -239,
     152,  -239,   705,   248,  -239,  -239,  -239,    27,  -239,    70,
    1339,  -239,  -239,  -239,  -239,  -239,   577,   206,  -239,  1339,
    -239,  1014,  -239,    76,    80,  1169,   229,    90,   256,  -239,
    -239,  -239,   132,  -239,    -6,  -239,   261,  -239,  -239,  -239,
      31,    31,    92,    92,   131,   131,   131,   131,    26,    26,
     255,   102,   191,   202,   222,    93,  -239,  -239,   267,   268,
     270,   152,   705,  1339,  -239,  -239,  -239,  -239,  1030,  -239,
    -239,  -239,  -239,  -239,  1014,  1014,  1222,   234,  1238,  1014,
    1339,  1339,  -239,  -239,  -239,  1339,  -239,  -239,  -239,   274,
     273,  -239,  -239,  -239,   337,  1014,   133,  1254,  1307,   236,
    -239,   148,  -239,  -239,  -239,  -239,  -239,  1014,  -239,  1014,
    1014,   156,  1014,   169,  1323,   280,  -239,  -239,  -239,  1014,
    -239,  1014,  1014,   200,  -239,  -239,  -239,  -239,  1014,  -239
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   147,   150,   155,   180,   145,   154,   152,   153,   148,
     151,   156,   146,   164,   144,   157,   149,   186,     0,   211,
     200,   226,     0,     2,     3,     5,     6,     0,   134,   136,
     158,     0,   159,     0,   138,     0,   187,     0,   196,   189,
     160,     0,     1,     4,   132,     0,   140,   142,   135,   137,
       0,   161,     0,   177,   139,     0,    23,     8,     0,     0,
     194,   191,   188,   201,   198,   197,   190,     0,   133,     0,
       7,   168,     0,   165,     0,   170,     0,   185,     0,   181,
     183,     0,     0,    19,     0,    18,    48,    46,    34,    53,
      77,    33,    47,    79,    80,    81,     0,     0,    78,    82,
      83,    29,     0,    56,    58,    59,    60,    26,     9,     0,
       0,    10,     0,     0,    11,    12,     0,     0,    13,     0,
       0,     0,    14,     0,    61,    55,    71,    84,     0,     0,
      86,    90,    93,    96,   101,   104,   106,   108,   110,   112,
     114,   116,   130,     0,    24,     0,    54,   207,     0,   203,
     204,     0,   209,    84,   129,     0,    54,   202,   199,   141,
     142,     0,   227,   143,   169,   162,   166,     0,   167,   172,
     174,   171,     0,     0,   179,     0,     0,    50,    49,     0,
      73,    72,     0,   212,     0,     0,     0,    22,     0,    25,
      21,    27,     0,     0,     0,     0,     0,    52,     0,    68,
      67,     0,     0,     0,     0,    63,   118,   121,   124,   125,
     122,   123,   119,   120,   126,   128,   127,     0,     0,    75,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,   225,   221,   206,   214,   208,
     216,   193,     0,     0,   195,   192,   230,     0,   176,     0,
       0,   163,   182,   184,   178,    57,     0,   214,   213,     0,
      17,     0,    20,     0,     0,     0,     0,     0,     0,    51,
      66,    65,     0,    69,     0,   117,     0,    87,    88,    89,
      91,    92,    95,    94,    97,    98,    99,   100,   103,   102,
     105,   107,   109,   111,   113,     0,   131,    15,     0,     0,
       0,   215,     0,     0,   224,   220,   205,   210,     0,   228,
     173,   175,    85,    16,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    62,    76,     0,   223,   217,   219,     0,
       0,   229,   231,    32,    30,     0,     0,     0,     0,     0,
      36,     0,    70,   115,   222,   218,    35,     0,    45,     0,
       0,     0,     0,     0,     0,     0,    31,    42,    43,     0,
      44,     0,     0,     0,    37,    39,    40,    41,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,  -239,   327,  -239,  -108,  -239,  -239,  -239,    -3,
    -239,   239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,   157,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,   -57,  -239,  -239,
    -114,    84,    85,    63,    82,   118,   119,   120,   121,   117,
    -239,   -53,   -21,  -239,   -51,    95,   -36,   210,  -239,   294,
    -239,    28,  -239,  -239,   287,   -52,   -64,  -239,   105,  -239,
    -239,   284,   193,  -239,   -29,    61,   -33,   -30,  -239,  -239,
     -55,  -239,   115,  -239,     0,   150,  -131,  -238,  -239,  -160,
    -239
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   357,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   282,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   217,   155,   143,    26,   147,    45,    46,
      28,    29,    30,    31,    72,    73,    74,   168,   169,    32,
      33,    78,    79,    80,    34,    35,    36,    37,    38,    65,
     308,   149,   150,   151,   156,   184,   309,   250,    40,   163,
     257
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      39,   256,   153,   148,    62,   191,   154,   164,    64,    63,
     311,   171,    17,   196,    69,   220,   249,    18,    39,   144,
     166,    75,   238,    39,   253,    18,    19,    39,    66,   311,
     254,    51,    57,    53,    19,   158,   157,    39,   183,   180,
     181,    20,    75,    75,    70,   239,    75,    75,   162,    55,
     240,    56,   268,   153,    42,   146,   265,   154,   152,   186,
     240,   199,   200,   221,   222,   228,   229,    39,   333,    20,
      77,   219,   153,    75,    39,    76,   189,   270,    71,    41,
     191,   173,    81,   230,   231,   173,   201,    44,    47,    18,
     174,   202,   175,   318,   264,   203,   223,   204,    19,    71,
      71,   205,   319,    71,    71,    20,   177,   287,   288,   289,
     153,    50,   146,   146,   154,    19,   258,   248,   153,   178,
     166,   146,   154,   243,   263,   244,   224,   225,   160,   245,
      71,   246,    19,    52,   307,   170,   185,    19,   167,    20,
     162,    18,   240,    75,   234,    39,   240,    39,   324,    55,
      19,    56,   325,   267,   183,   322,   240,    20,   342,   240,
     192,   335,   329,   323,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   283,   193,    58,   146,    59,   153,   146,    75,
      60,   154,    61,   310,   226,   227,   285,   182,   331,   240,
      71,   280,   281,   153,   332,   359,   160,   154,   247,   321,
      27,   194,   153,   248,   240,    62,   343,   344,   198,   306,
     365,   350,   240,   312,   266,   313,   244,   235,   369,   314,
     245,   315,   246,    27,   195,   240,   267,   358,    48,    49,
      20,   371,   146,    39,    54,   236,    71,    67,    39,   366,
      68,   367,   368,   317,   370,   240,   153,   339,   241,    39,
     154,   375,   340,   376,   377,   145,   240,   243,   237,   244,
     379,   146,   378,   245,   182,   246,    19,   266,   153,   244,
     242,   240,   353,   245,   279,   246,   251,   273,   274,   276,
     277,   294,   295,   296,   297,   240,   252,   162,   328,   284,
     240,   255,   240,   347,    41,   364,   232,   233,   290,   291,
     352,   292,   293,   182,   298,   299,    69,   259,   260,   269,
     170,   271,   145,   206,   146,   146,    92,   330,    19,   146,
     207,   208,   209,   334,   305,   210,   211,   212,   213,   336,
     337,   214,   215,   216,   338,   146,   354,   355,   356,   374,
      43,   188,   300,   278,   301,   304,   302,   146,   303,   146,
     146,   159,   146,   172,   320,   176,   262,   316,   286,   146,
     327,   146,   146,     0,     0,     0,     0,     0,   146,     0,
       0,     0,     0,     0,     0,     1,    82,    83,     2,    84,
      85,    86,     3,     0,     4,     5,     6,    87,    88,     7,
       8,     9,    89,    10,    11,    90,    12,    13,    91,    14,
      15,    16,    17,    92,    93,     0,    94,    95,     0,    96,
      97,   346,     0,   349,    98,   351,    99,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   361,   363,     0,     0,     0,     0,     0,     0,
       0,   101,     0,   102,     0,     0,     0,   187,    55,   373,
      56,     0,    19,   103,   104,   105,   106,     0,     0,     0,
      21,     1,    82,    83,     2,    84,    85,    86,     3,     0,
       4,     5,     6,    87,    88,     7,     8,     9,    89,    10,
      11,    90,    12,    13,    91,    14,    15,    16,    17,    92,
      93,     0,    94,    95,     0,    96,    97,     0,     1,     0,
      98,     2,    99,   100,     0,     3,     0,     4,     5,     6,
       0,     0,     7,     8,     9,     0,    10,    11,     0,    12,
      13,     0,    14,    15,    16,    17,     0,   101,     0,   102,
       0,     0,     0,     0,    55,     0,    56,     0,    19,   103,
     104,   105,   106,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,     0,   244,     0,
       1,     0,   245,     2,   246,    19,     0,     3,     0,     4,
       5,     6,    20,    21,     7,     8,     9,     0,    10,    11,
       0,    12,    13,     0,    14,    15,    16,    17,     1,     0,
       0,     2,     0,     0,     0,     3,     0,     4,     5,     6,
       0,     0,     7,     8,     9,     0,    10,    11,     0,    12,
      13,     0,    14,    15,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,     0,
     244,     0,     0,     0,   245,     2,   246,     0,     0,     3,
       0,     4,     0,     6,    20,    21,     7,     8,     0,     0,
      10,    11,     0,     0,    13,     0,    18,    15,    16,    17,
       1,     0,     0,     2,     0,    19,     0,     3,     0,     4,
       5,     6,    20,    21,     7,     8,     9,     0,    10,    11,
       0,    12,    13,     0,    14,    15,    16,    17,     1,     0,
       0,     2,     0,     0,     0,     3,     0,     4,     5,     6,
       0,     0,     7,     8,     9,     0,    10,    11,     0,    12,
      13,     0,    14,    15,    16,    17,     0,    21,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     3,     0,
       4,     0,     6,     0,     0,     7,     8,    19,     0,    10,
      11,    90,     0,    13,     0,    21,    15,    16,    17,     0,
      93,     0,    94,    95,     0,    96,    97,     0,     0,     0,
      98,     0,    99,   100,     2,     0,     0,     0,     3,     0,
       4,     0,     6,    21,     0,     7,     8,     0,     0,    10,
      11,     0,     0,    13,     0,     0,    15,    16,    17,   102,
       0,     0,     0,     0,     0,     0,     0,     0,    19,   103,
     104,   105,   106,     2,     0,     0,    21,     3,     0,     4,
       0,     6,     0,     0,     7,     8,     0,     0,    10,    11,
       0,     0,    13,     0,     0,    15,    16,    17,     0,     0,
       0,     0,     0,   165,     0,     0,    82,    83,     0,    84,
      85,    86,     0,     0,     0,     0,    21,    87,    88,     0,
       0,     0,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,    92,    93,     0,    94,    95,     0,    96,
      97,     0,   261,     0,    98,     0,    99,   100,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,     0,   102,     0,     0,     0,   190,    55,     0,
      56,     0,    19,   103,   104,   105,   106,    82,    83,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,    88,
       0,     0,     0,    89,     0,     0,    90,     0,     0,    91,
       0,     0,     0,     0,    92,    93,     0,    94,    95,     0,
      96,    97,     0,     0,     0,    98,     0,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,   102,     0,     0,     0,   272,    55,
       0,    56,     0,    19,   103,   104,   105,   106,    82,    83,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
      88,     0,     0,     0,    89,     0,     0,    90,     0,     0,
      91,     0,     0,     0,     0,    92,    93,     0,    94,    95,
       0,    96,    97,    90,     0,     0,    98,     0,    99,   100,
       0,     0,    93,     0,    94,    95,     0,    96,    97,     0,
       0,     0,    98,     0,    99,   100,     0,     0,     0,     0,
       0,     0,     0,   101,     0,   102,     0,     0,     0,     0,
      55,     0,    56,     0,    19,   103,   104,   105,   106,     0,
       0,   102,     0,     0,     0,   341,   161,    90,     0,     0,
      19,   103,   104,   105,   106,     0,    93,     0,    94,    95,
       0,    96,    97,    90,     0,     0,    98,     0,    99,   100,
       0,     0,    93,     0,    94,    95,     0,    96,    97,     0,
       0,     0,    98,     0,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
     161,     0,     0,     0,    19,   103,   104,   105,   106,   197,
       0,   102,     0,     0,     0,     0,    90,     0,     0,     0,
      19,   103,   104,   105,   106,    93,     0,    94,    95,     0,
      96,    97,    90,     0,     0,    98,     0,    99,   100,     0,
       0,    93,     0,    94,    95,     0,    96,    97,     0,     0,
       0,    98,     0,    99,   100,     0,     0,     0,     0,     0,
       0,     0,   275,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,    19,   103,   104,   105,   106,   326,     0,
     102,     0,     0,     0,     0,    90,     0,     0,     0,    19,
     103,   104,   105,   106,    93,     0,    94,    95,     0,    96,
      97,    90,     0,     0,    98,     0,    99,   100,     0,     0,
      93,     0,    94,    95,     0,    96,    97,    90,     0,     0,
      98,     0,    99,   100,     0,     0,    93,     0,    94,    95,
       0,    96,    97,   102,   345,     0,    98,     0,    99,   100,
       0,     0,    19,   103,   104,   105,   106,   348,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,    19,   103,
     104,   105,   106,     0,     0,   102,   360,     0,     0,     0,
      90,     0,     0,     0,    19,   103,   104,   105,   106,    93,
       0,    94,    95,     0,    96,    97,    90,     0,     0,    98,
       0,    99,   100,     0,     0,    93,     0,    94,    95,     0,
      96,    97,    90,     0,     0,    98,     0,    99,   100,     0,
       0,    93,     0,    94,    95,     0,    96,    97,   102,   362,
       0,    98,     0,    99,   100,     0,     0,    19,   103,   104,
     105,   106,     0,     0,   102,   372,     0,     0,     0,     0,
       0,     0,     0,    19,   103,   104,   105,   106,     0,     0,
     102,     0,     0,     0,     0,    90,     0,     0,     0,    19,
     103,   104,   105,   106,    93,     0,    94,    95,     0,    96,
      97,    90,     0,     0,    98,     0,    99,   100,     0,     0,
      93,     0,    94,    95,     0,    96,    97,     0,     0,     0,
      98,     0,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,     0,    19,   103,   104,   105,   106,     0,     0,   218,
       0,     0,     0,     0,     0,     0,     0,     0,    19,   103,
     104,   105,   106
};

static const yytype_int16 yycheck[] =
{
       0,   161,    59,    58,    37,   113,    59,    71,    38,    38,
     248,    75,    30,   121,    41,   129,   147,    71,    18,    55,
      72,    50,    47,    23,    66,    71,    80,    27,    72,   267,
      72,    31,    35,    33,    80,    65,    65,    37,   102,    96,
      97,    87,    71,    72,    47,    70,    75,    76,    69,    76,
      66,    78,   183,   110,     0,    55,    72,   110,    58,   110,
      66,    37,    38,    32,    33,    39,    40,    67,    74,    87,
      89,   128,   129,   102,    74,    76,   112,   185,    50,    18,
     188,    66,    76,    57,    58,    66,    62,    69,    27,    71,
      75,    67,    41,    66,    75,    71,    65,    73,    80,    71,
      72,    77,    75,    75,    76,    87,    69,   221,   222,   223,
     167,    76,   112,   113,   167,    80,   167,   147,   175,    69,
     172,   121,   175,    71,   175,    73,    34,    35,    67,    77,
     102,    79,    80,    76,   242,    74,    68,    80,    68,    87,
     161,    71,    66,   172,    42,   145,    66,   147,    72,    76,
      80,    78,    72,   183,   218,   269,    66,    87,   318,    66,
      71,    68,    72,   271,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   203,    71,    71,   185,    73,   244,   188,   218,
      77,   244,    79,   244,    63,    64,   217,   102,    66,    66,
     172,   201,   202,   260,    72,    72,   145,   260,   147,   260,
       0,    71,   269,   243,    66,   248,   324,   325,   123,   240,
      72,   329,    66,    71,    71,    73,    73,    36,    72,    77,
      77,    79,    79,    23,    71,    66,   266,   345,    28,    29,
      87,    72,   242,   243,    34,    43,   218,    66,   248,   357,
      69,   359,   360,   253,   362,    66,   313,   312,    69,   259,
     313,   369,   313,   371,   372,    55,    66,    71,    46,    73,
     378,   271,    72,    77,   179,    79,    80,    71,   335,    73,
      68,    66,   335,    77,    69,    79,    72,   192,   193,   194,
     195,   228,   229,   230,   231,    66,    66,   318,    69,   204,
      66,    74,    66,    69,   243,    69,    51,    52,   224,   225,
     331,   226,   227,   218,   232,   233,    41,    66,    68,    72,
     259,    68,   112,    41,   324,   325,    31,    71,    80,   329,
      48,    49,    50,    72,   239,    53,    54,    55,    56,    72,
      72,    59,    60,    61,    74,   345,    72,    74,    11,    69,
      23,   112,   234,   196,   235,   238,   236,   357,   237,   359,
     360,    67,   362,    76,   259,    81,   173,   252,   218,   369,
     275,   371,   372,    -1,    -1,    -1,    -1,    -1,   378,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    -1,    37,
      38,   326,    -1,   328,    42,   330,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   347,   348,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    -1,    -1,    75,    76,   364,
      78,    -1,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      88,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    -1,    37,    38,    -1,     3,    -1,
      42,     6,    44,    45,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    -1,    27,    28,    29,    30,    -1,    69,    -1,    71,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
       3,    -1,    77,     6,    79,    80,    -1,    10,    -1,    12,
      13,    14,    87,    88,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    -1,    27,    28,    29,    30,     3,    -1,
      -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    -1,    -1,    -1,    77,     6,    79,    -1,    -1,    10,
      -1,    12,    -1,    14,    87,    88,    17,    18,    -1,    -1,
      21,    22,    -1,    -1,    25,    -1,    71,    28,    29,    30,
       3,    -1,    -1,     6,    -1,    80,    -1,    10,    -1,    12,
      13,    14,    87,    88,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    -1,    27,    28,    29,    30,     3,    -1,
      -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    -1,    27,    28,    29,    30,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,
      12,    -1,    14,    -1,    -1,    17,    18,    80,    -1,    21,
      22,    23,    -1,    25,    -1,    88,    28,    29,    30,    -1,
      32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      42,    -1,    44,    45,     6,    -1,    -1,    -1,    10,    -1,
      12,    -1,    14,    88,    -1,    17,    18,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    -1,    28,    29,    30,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,     6,    -1,    -1,    88,    10,    -1,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    21,    22,
      -1,    -1,    25,    -1,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,     4,     5,    -1,     7,
       8,     9,    -1,    -1,    -1,    -1,    88,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    -1,    37,
      38,    -1,    75,    -1,    42,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    -1,    -1,    75,    76,    -1,
      78,    -1,    80,    81,    82,    83,    84,     4,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    75,    76,
      -1,    78,    -1,    80,    81,    82,    83,    84,     4,     5,
      -1,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      -1,    37,    38,    23,    -1,    -1,    42,    -1,    44,    45,
      -1,    -1,    32,    -1,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    81,    82,    83,    84,    -1,
      -1,    71,    -1,    -1,    -1,    75,    76,    23,    -1,    -1,
      80,    81,    82,    83,    84,    -1,    32,    -1,    34,    35,
      -1,    37,    38,    23,    -1,    -1,    42,    -1,    44,    45,
      -1,    -1,    32,    -1,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    81,    82,    83,    84,    69,
      -1,    71,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    32,    -1,    34,    35,    -1,
      37,    38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    69,    -1,
      71,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    32,    -1,    34,    35,    -1,    37,
      38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,
      32,    -1,    34,    35,    -1,    37,    38,    23,    -1,    -1,
      42,    -1,    44,    45,    -1,    -1,    32,    -1,    34,    35,
      -1,    37,    38,    71,    72,    -1,    42,    -1,    44,    45,
      -1,    -1,    80,    81,    82,    83,    84,    69,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    -1,    -1,    71,    72,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    80,    81,    82,    83,    84,    32,
      -1,    34,    35,    -1,    37,    38,    23,    -1,    -1,    42,
      -1,    44,    45,    -1,    -1,    32,    -1,    34,    35,    -1,
      37,    38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    32,    -1,    34,    35,    -1,    37,    38,    71,    72,
      -1,    42,    -1,    44,    45,    -1,    -1,    80,    81,    82,
      83,    84,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    32,    -1,    34,    35,    -1,    37,
      38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,
      32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    10,    12,    13,    14,    17,    18,    19,
      21,    22,    24,    25,    27,    28,    29,    30,    71,    80,
      87,    88,    91,    92,    93,    94,   136,   137,   140,   141,
     142,   143,   149,   150,   154,   155,   156,   157,   158,   164,
     168,   155,     0,    93,    69,   138,   139,   155,   137,   137,
      76,   164,    76,   164,   137,    76,    78,    99,    71,    73,
      77,    79,   156,   154,   157,   159,    72,    66,    69,    41,
      99,   141,   144,   145,   146,   154,    76,    89,   151,   152,
     153,    76,     4,     5,     7,     8,     9,    15,    16,    20,
      23,    26,    31,    32,    34,    35,    37,    38,    42,    44,
      45,    69,    71,    81,    82,    83,    84,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   135,   136,   137,   164,   137,   160,   161,
     162,   163,   164,   117,   131,   134,   164,   154,   157,   139,
     155,    76,   132,   169,   146,    75,   145,    68,   147,   148,
     155,   146,   144,    66,    75,    41,   151,    69,    69,    71,
     117,   117,   135,   146,   165,    68,   134,    75,   101,   136,
      75,    95,    71,    71,    71,    71,    95,    69,   135,    37,
      38,    62,    67,    71,    73,    77,    41,    48,    49,    50,
      53,    54,    55,    56,    59,    60,    61,   133,    71,   117,
     120,    32,    33,    65,    34,    35,    63,    64,    39,    40,
      57,    58,    51,    52,    42,    36,    43,    46,    47,    70,
      66,    69,    68,    71,    73,    77,    79,   155,   157,   166,
     167,    72,    66,    66,    72,    74,   169,   170,   134,    66,
      68,    75,   152,   134,    75,    72,    71,   157,   166,    72,
      95,    68,    75,   135,   135,    69,   135,   135,   109,    69,
     164,   164,   116,   132,   135,   132,   165,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   123,   123,   124,   124,
     125,   126,   127,   128,   129,   135,   132,    95,   160,   166,
     134,   167,    71,    73,    77,    79,   162,   164,    66,    75,
     148,   134,   120,    95,    72,    72,    69,   135,    69,    72,
      71,    66,    72,    74,    72,    68,    72,    72,    74,   160,
     134,    75,   169,    95,    95,    72,   135,    69,    69,   135,
      95,   135,   132,   131,    72,    74,    11,   106,    95,    72,
      72,   135,    72,   135,    69,    72,    95,    95,    95,    72,
      95,    72,    72,   135,    69,    95,    95,    95,    72,    95
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
     156,   156,   156,   156,   156,   156,   157,   157,   157,   157,
     158,   159,   159,   160,   161,   161,   162,   162,   162,   163,
     163,   164,   165,   165,   166,   166,   166,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   169,   169,   169,
     170,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     1,     1,
       4,     3,     3,     1,     1,     2,     1,     2,     2,     1,
       5,     7,     5,     1,     1,     1,     5,     7,     9,     8,
       8,     8,     7,     7,     7,     6,     1,     1,     1,     2,
       2,     3,     2,     1,     1,     1,     1,     3,     1,     1,
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
       3,     2,     4,     4,     2,     4,     1,     2,     2,     3,
       1,     1,     2,     1,     1,     3,     2,     1,     2,     1,
       3,     1,     1,     2,     1,     2,     1,     3,     4,     3,
       2,     1,     4,     3,     2,     1,     1,     1,     3,     4,
       1,     3
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
#line 1852 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1858 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1866 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1872 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1878 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 93 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1886 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr),NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1894 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1900 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 102 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1906 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1912 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1918 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 105 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1924 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 106 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1930 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 108 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1938 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1946 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 116 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1954 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DEFAULT", "default");}
#line 1960 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 121 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CASE", "case");}
#line 1966 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 123 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1974 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 127 "src/compiler_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1982 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 131 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1990 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 134 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 1996 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 136 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2002 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 137 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 2010 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 141 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2016 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 142 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 2024 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 2030 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 147 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = NULL; }
#line 2036 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 149 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2044 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 153 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2052 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "src/compiler_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2060 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 161 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", "switch");}
#line 2066 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 162 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", "if");}
#line 2072 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 163 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", "else" );}
#line 2078 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 165 "src/compiler_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2086 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 169 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2094 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 173 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2102 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 177 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2110 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 181 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2118 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 185 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2126 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 189 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2134 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 193 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2142 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2150 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 201 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2158 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 205 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", "for");}
#line 2164 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 206 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", "while");}
#line 2170 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 207 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", "do");}
#line 2176 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 209 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "continue");}
#line 2182 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 210 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "break");}
#line 2188 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 212 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2196 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 216 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2204 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", "return");}
#line 2210 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 224 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2216 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 225 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2222 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 226 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2228 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 228 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2236 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 232 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2242 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 233 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text), 0, 8)))); }
#line 2248 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 234 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2254 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 238 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2260 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 239 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2268 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 243 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2276 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 247 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2284 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 251 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION",".", branches, branch_notes);}
#line 2292 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 255 "src/compiler_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}
#line 2300 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 259 "src/compiler_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2308 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 263 "src/compiler_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2316 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 267 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2322 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 268 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2330 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2336 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 273 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2344 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 277 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2352 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 281 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2360 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 285 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2368 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 289 "src/compiler_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2376 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 293 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", "size_of");}
#line 2382 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 295 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","and");}
#line 2388 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 296 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","times");}
#line 2394 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 297 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","plus");}
#line 2400 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 298 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","minus");}
#line 2406 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 299 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","bitwise_not");}
#line 2412 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 300 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","logical_not");}
#line 2418 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 302 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2424 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 303 "src/compiler_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("CAST_EXPRESSION","", branches, branch_notes);}
#line 2432 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 307 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2438 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 308 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2446 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 312 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2454 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 316 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","%", branches, branch_notes);}
#line 2462 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 320 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2468 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 321 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2476 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 325 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2484 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 329 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2490 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 330 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("SHIFT_EXPRESSION","<<", branches, branch_notes);}
#line 2498 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 334 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("SHIFT_EXPRESSION",">>", branches, branch_notes);}
#line 2506 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 338 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2512 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 339 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2520 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 343 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2528 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 347 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2536 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 351 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2544 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 355 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2550 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 356 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2558 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 360 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2566 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 364 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2572 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 365 "src/compiler_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","&", branches, branch_notes);}
#line 2580 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 369 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2586 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 370 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","^", branches, branch_notes);}
#line 2594 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 374 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2600 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 375 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","|", branches, branch_notes);}
#line 2608 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 379 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2614 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 380 "src/compiler_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","&&", branches, branch_notes);}
#line 2622 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 384 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2628 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 385 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","||", branches, branch_notes);}
#line 2636 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 389 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2642 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 390 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2650 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 394 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2656 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 395 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2664 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 399 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "=");}
#line 2670 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 400 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "*=");}
#line 2676 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 401 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "/=");}
#line 2682 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 402 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "%=");}
#line 2688 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 403 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "+=");}
#line 2694 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 404 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "-=");}
#line 2700 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 405 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "<<=");}
#line 2706 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 406 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", ">>=");}
#line 2712 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 407 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "&=");}
#line 2718 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 408 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "^=");}
#line 2724 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 409 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "|=");}
#line 2730 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 411 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2736 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 413 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2742 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 414 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2750 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 418 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","oh_dear", branches, branch_notes);}
#line 2758 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 422 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2766 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 426 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2772 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 427 "src/compiler_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2780 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 431 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2786 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 432 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2794 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 436 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2800 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 437 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2808 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 441 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2814 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 442 "src/compiler_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2822 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 446 "src/compiler_parser.y" /* yacc.c:1646  */
    {													std::vector<ast_node*> branches = {(yyvsp[0].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2830 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 450 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2838 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 454 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "typedef");}
#line 2844 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 455 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "extern");}
#line 2850 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 456 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "static");}
#line 2856 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 457 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "auto");}
#line 2862 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 458 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "register");}
#line 2868 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 460 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "void");}
#line 2874 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 461 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "char");}
#line 2880 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 462 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "short");}
#line 2886 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 463 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "int");}
#line 2892 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 464 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "long");}
#line 2898 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 465 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "float");}
#line 2904 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 466 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "double");}
#line 2910 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 467 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "signed");}
#line 2916 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 468 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "unsigned");}
#line 2922 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 469 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2928 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 470 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2934 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 471 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2940 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 473 "src/compiler_parser.y" /* yacc.c:1646  */
    {                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2948 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 477 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2956 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 481 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2964 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 485 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", "struct");}
#line 2970 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 488 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2976 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 489 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}
#line 2984 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 493 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}
#line 2992 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 497 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2998 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 499 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3006 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 503 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3012 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 505 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3020 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 509 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3026 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 510 "src/compiler_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}
#line 3034 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 514 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 3040 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 515 "src/compiler_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3048 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 519 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3056 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 523 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3064 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 527 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3072 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 531 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3080 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 535 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM", "enum");}
#line 3086 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 537 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3092 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 538 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3100 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 542 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3106 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 543 "src/compiler_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR","", branches, branch_notes);}
#line 3114 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 547 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3120 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 549 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER", "volatile");}
#line 3126 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 551 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3132 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 552 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATOR","", branches, branch_notes);}
#line 3140 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 556 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3146 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 558 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3152 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 560 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}
#line 3160 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 564 "src/compiler_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}
#line 3168 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 568 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}
#line 3176 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 572 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}
#line 3184 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 576 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl ", branches, branch_notes);}
#line 3192 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 580 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3198 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 581 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3206 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 585 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3214 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 589 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3222 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 593 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3228 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 595 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3234 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 596 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3242 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 600 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3248 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 607 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3254 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 608 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3262 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 612 "src/compiler_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3270 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 616 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3276 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 618 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3284 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 622 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3290 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 623 "src/compiler_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER_LIST","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("IDENTIFIER_LIST","", branches, branch_notes);}
#line 3298 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 627 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3304 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 629 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3310 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 630 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 3318 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 634 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3324 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 636 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3332 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 640 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3338 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 642 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3344 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 644 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3352 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 648 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3360 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 652 "src/compiler_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3368 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 656 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3374 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 658 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3382 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 662 "src/compiler_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3390 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 666 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3398 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 670 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3404 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 672 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text));}
#line 3410 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 674 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3416 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 676 "src/compiler_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3424 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 680 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3432 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 684 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3438 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 685 "src/compiler_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 3446 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3450 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
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
