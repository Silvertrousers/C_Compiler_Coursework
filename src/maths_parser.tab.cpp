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

  #include "ast.hpp"

  #include <cassert>

  extern const Statement *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 111 "src/maths_parser.tab.cpp" /* yacc.c:355  */

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
    T_DEC_INT = 337,
    T_OCTAL_INT = 338,
    T_IDENTIFIER = 339,
    T_STRING = 340,
    T_ENUM_CONSTANT = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "src/maths_parser.y" /* yacc.c:355  */

  const Statement *stmt;
  const Expression *expr;
  double number;
  std::string *string;

#line 217 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  104
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    64,    65,    66,    67,    68,    69,    71,
      72,    73,    75,    76,    77,    78,    80,    81,    83,    84,
      86,    87,    89,    90,    91,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   104,   105,   106,   107,   108,
     110,   111,   112,   113,   115,   116,   119,   120,   121,   122,
     123,   124,   125,   126,   128,   129,   131,   132,   133,   134,
     139,   139,   139,   139,   139,   139,   141,   145,   146,   147,
     148,   150,   151,   152,   154,   155,   156,   158,   159,   160,
     161,   162,   163,   164,   165,   167,   168,   170,   171,   173,
     174,   176,   177,   179,   180,   182,   183,   185,   186,   188,
     188,   188,   188,   189,   189,   190,   190,   191,   191,   191,
     193,   195,   195,   200,   200,   202,   203,   204,   205,   206,
     207,   209,   210,   212,   213,   215,   215,   215,   215,   215,
     217,   217,   217,   217,   218,   218,   218,   218,   218,   219,
     220,   221,   223,   224,   225,   226,   226,   228,   229,   231,
     233,   234,   235,   236,   238,   239,   241,   242,   243,   245,
     246,   247,   249,   250,   252,   253,   255,   255,   257,   258,
     260,   261,   262,   263,   264,   265,   266,   269,   270,   271,
     272,   274,   275,   277,   278,   280,   281,   283,   284,   285,
     287,   288,   293,   294,   295,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   307,   309,   310,   311,   313,   314
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
  "T_LCURLY_BRACKET", "T_EMPTY_BRACKETS", "T_ECURLY_BRACKETS", "T_DEC_INT",
  "T_OCTAL_INT", "T_IDENTIFIER", "T_STRING", "T_ENUM_CONSTANT", "$accept",
  "ROOT", "STATEMENT", "LABELED_STATEMENT", "COMPOUND_STATEMENT",
  "DECLARATION_LIST", "STATEMENT_LIST", "EXPRESSION_STATEMENT",
  "SELECTION_STATEMENT", "ITERATION_STATEMENT", "JUMP_STATEMENT",
  "PRIMARY_EXPRESSION", "CONSTANT", "POSTFIX_EXPRESSION",
  "ARGUMENT_EXPRESSION_LIST", "UNARY_EXPRESSION", "UNARY_OPERATOR",
  "CAST_EXPRESSION", "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION",
  "SHIFT_EXPRESSION", "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION",
  "AND_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "CONDITIONAL_EXPRESSION", "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR",
  "CONSTANT_EXPRESSION", "EXPR", "DECLARATION", "DECLARATION_SPECIFIERS",
  "INIT_DECLARATOR_LIST", "INIT_DECLARATOR", "STORAGE_CLASS_SPECIFIER",
  "TYPE_SPECIFIER", "STRUCT_OR_UNION_SPECIFIER", "STRUCT_OR_UNION",
  "STRUCT_DECLARATION_LIST", "STRUCT_DECLARATION",
  "SPECIFIER_QUALIFIER_LIST", "STRUCT_DECLARATOR_LIST",
  "STRUCT_DECLARATOR", "ENUM_SPECIFIER", "ENUMERATOR_LIST", "ENUMERATOR",
  "TYPE_QUALIFIER", "DECLARATOR", "DIRECT_DECLARATOR", "POINTER",
  "TYPE_QUALIFIER_LIST", "PARAMETER_TYPE_LIST", "PARAMETER_LIST",
  "PARAMETER_DECLARATION", "IDENTIFIER_LIST", "ABSTRACT_DECLARATOR",
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
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -278

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-278)))

#define YYTABLE_NINF -205

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     713,  -278,  1224,  -278,   -38,   713,   -14,     5,    30,   235,
      71,    87,  -278,  -278,  -278,  1224,  1224,  -278,  -278,  -278,
    -278,  1224,   414,  -278,  -278,  -278,    41,  -278,   203,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,   126,   329,
    1224,  -278,   -17,   192,   172,   -19,   188,   167,   176,   175,
     178,   -15,  -278,  -278,    93,  -278,  -278,  -278,   169,   713,
     211,   572,  -278,  1224,  -278,   113,  1224,  1224,  -278,  -278,
      16,  -278,  -278,  -278,  -278,   -23,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
     497,  -278,   331,   549,  -278,   -27,   893,   893,  -278,    -2,
    -278,   893,  -278,   713,  -278,  -278,  -278,   165,   170,  1224,
    1224,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  1224,  -278,  1224,  1224,  1224,  1224,  1224,
    1224,  1224,  1224,  1224,  1224,  1224,  1224,  1224,  1224,  1224,
    1224,  1224,  1224,  1224,  1224,  -278,   713,  -278,   177,   654,
     129,    17,  -278,    38,    39,  -278,   171,   182,  -278,   631,
    -278,  -278,  -278,    15,   -27,  -278,   197,  -278,   224,   121,
     -47,  -278,  -278,  -278,   977,   195,  -278,  -278,  -278,  -278,
      47,  -278,    18,  -278,  -278,  -278,  -278,   -17,   -17,   192,
     192,   172,   172,   172,   172,   -19,   -19,   188,   167,   176,
     175,   178,   153,  -278,  -278,  1224,   981,   135,   997,   713,
     713,   713,   227,   -44,  -278,   171,  -278,  -278,  -278,    15,
     202,   -27,  1012,   796,  1063,   121,   977,   921,  -278,   -31,
     977,   977,  1224,  -278,  -278,  1224,    48,   713,    80,  1077,
    1091,   136,   274,  -278,  -278,  1224,   171,  -278,   -24,  -278,
    -278,  -278,  -278,  1012,  -278,  -278,  -278,    81,    -4,   212,
     219,  -278,    83,  -278,   218,  -278,  -278,  -278,  1224,   232,
    -278,   225,  -278,   949,  -278,  -278,   231,  -278,   713,   713,
     100,   713,   104,  1142,   713,  -278,  -278,  -278,  -278,    -5,
     157,  1156,  -278,   -48,  -278,   152,  -278,   827,   221,  -278,
    -278,  -278,   -31,  1224,  -278,  -278,  -278,  -278,   713,  -278,
     713,   713,   124,   713,   215,  -278,  -278,    45,   237,   239,
    -278,   229,   152,   862,  1173,   245,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,   713,  -278,  -278,  -278,  -278,  -278,  -278,
     241,  -278,   244,   252,  -278,  -278,  -278,  -278
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    37,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,     0,     0,    60,    64,    65,
      21,     0,     0,    15,    44,    45,    40,    42,     0,     2,
       3,     4,     5,     6,     7,     8,    46,    41,    56,    66,
       0,    67,    71,    74,    77,    82,    85,    87,    89,    91,
      93,    95,    97,   111,     0,    40,    66,   110,     0,     0,
       0,     0,    35,     0,    39,     0,     0,     0,    58,    57,
       0,   128,   131,   166,   136,     0,   126,   135,   133,   134,
     129,   132,   137,   127,   145,   125,   146,   138,   130,   167,
      40,    18,     0,     0,    16,   113,   115,   117,   139,     0,
     140,   119,   141,     0,     1,    53,    52,     0,     0,     0,
       0,    48,    99,   102,   105,   106,   103,   104,   100,   101,
     107,   109,   108,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    11,     0,     0,
       0,     0,    38,     0,     0,    43,     0,   159,    14,     0,
      17,    13,    19,   177,     0,   170,   114,   121,   123,   168,
       0,   204,   116,   118,     0,   142,   120,     9,    51,    50,
       0,    54,     0,    98,    68,    69,    70,    72,    73,    76,
      75,    78,    79,    80,    81,    84,    83,    86,    88,    90,
      92,    94,     0,   112,    10,     0,     0,     0,     0,     0,
       0,     0,   164,     0,   162,     0,    12,   181,   179,   178,
       0,     0,     0,     0,     0,   169,   150,     0,   147,     0,
     152,     0,     0,    49,    47,     0,     0,     0,     0,     0,
       0,     0,    22,    24,    25,     0,     0,   161,     0,   182,
     180,   171,   122,     0,   205,   124,   175,   204,   188,     0,
     183,   185,     0,   172,     0,   151,   143,   148,     0,   149,
     154,   156,   153,     0,    55,    96,     0,    34,     0,     0,
       0,     0,     0,     0,     0,   165,   163,   160,   208,     0,
       0,     0,   187,   192,   189,   194,   174,     0,     0,   176,
     173,   158,     0,     0,   144,    26,    31,    32,     0,    33,
       0,     0,     0,    23,     0,   206,   203,   204,     0,     0,
     199,     0,   193,     0,     0,     0,   186,   191,   155,   157,
      28,    29,    30,     0,   207,   209,   201,   195,   197,   202,
       0,   198,     0,     0,    27,   200,   196,   184
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -278,  -278,     0,  -278,  -278,  -278,   -90,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,    -1,  -278,   -28,   130,   134,
      85,   148,   186,   187,   189,   190,   185,  -278,     1,   -79,
    -278,  -213,     8,   236,   -13,  -278,   109,  -278,  -164,  -278,
    -278,   101,  -221,  -130,  -278,    54,  -278,   128,   131,  -125,
    -148,  -149,  -143,  -278,  -277,  -278,    70,  -278,    84,    77,
    -278,  -246,  -278
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    91,    30,    31,    92,    93,    32,    33,    34,
      35,    36,    37,    38,   180,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     123,    58,    54,    94,   258,   166,   167,    96,    97,    98,
      99,   227,   228,   229,   269,   270,   100,   213,   214,   101,
     168,   169,   170,   219,   259,   260,   261,   262,   294,   295,
     102,   255,   289
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    56,   159,    57,   163,    60,   267,   288,   163,    95,
     226,   264,   124,   318,    68,    69,   220,    65,   125,   126,
     218,   225,    73,   132,   133,   246,   290,   164,   291,    70,
     181,   163,   285,    59,   247,   142,   165,   165,   217,    56,
     268,   134,   135,   164,   183,   246,   340,   164,    89,   230,
     163,   127,   267,   165,   287,   301,   156,   165,   143,   147,
      61,   157,   226,   226,   314,   203,   226,   226,   335,   150,
     290,   151,   291,   315,   153,   154,   250,   174,   321,    95,
     165,   271,   175,   172,   173,   144,   144,   144,   176,    62,
     329,   155,   209,   162,   249,   234,   265,   184,   185,   186,
     272,   230,   230,   177,    63,   230,   230,   144,   144,   226,
     292,   342,   103,   210,   211,   293,   232,   144,   182,  -170,
    -170,  -170,   233,   276,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,   220,   254,   225,    66,   204,   293,   230,   144,
    -190,   202,   298,   274,   271,   278,  -190,   207,   299,   162,
      71,    67,   144,    72,    73,   145,   105,   106,    74,   144,
      75,    76,    77,   144,   254,   308,    78,    79,    80,   310,
      81,    82,   144,    83,    84,   152,    85,    86,    87,    88,
      89,   107,   163,   144,   313,   223,   108,   224,   144,   333,
     109,   208,   110,   104,   144,   144,   111,   239,   283,   242,
     243,   244,   138,   236,   238,   139,   241,   191,   192,   193,
     194,   140,   144,    56,   235,    57,   323,   141,   324,   128,
     129,   290,   316,   291,    56,   254,   275,   277,   130,   131,
     146,   317,   136,   137,    56,   148,    57,   280,   282,   178,
      12,   205,    13,    14,   179,    15,    16,   212,   187,   188,
      17,   215,    18,    19,   189,   190,   221,    56,   222,    57,
      12,   245,    13,    14,   231,    15,    16,   251,   306,   307,
      17,   309,    18,    19,   195,   196,   284,   296,   297,    21,
      56,   312,    57,   334,   253,   300,   303,    24,    25,    55,
      27,   302,    56,   305,    57,   327,   338,    64,   330,    21,
     331,   332,   336,   162,   337,   343,   345,    24,    25,    55,
      27,   346,   347,    56,   197,    57,   198,   201,   160,   199,
     252,   200,   273,   344,    71,     1,     2,    72,    73,     3,
       4,     5,    74,   248,    75,    76,    77,     6,     7,     8,
      78,    79,    80,     9,    81,    82,   328,    83,    84,    10,
      85,    86,    87,    88,    89,    11,    12,   326,    13,    14,
     322,    15,    16,   112,   319,     0,    17,   286,    18,    19,
     113,   114,   115,     0,     0,   116,   117,   118,   119,     0,
       0,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,    21,     0,     0,     0,   158,
      22,     0,    23,    24,    25,    90,    27,    71,     1,     2,
      72,    73,     3,     4,     5,    74,     0,    75,    76,    77,
       6,     7,     8,    78,    79,    80,     9,    81,    82,     0,
      83,    84,    10,    85,    86,    87,    88,    89,    11,    12,
       0,    13,    14,     0,    15,    16,     0,     0,     0,    17,
       0,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    21,     0,
       0,     0,     0,    22,     0,    23,    24,    25,    90,    27,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,     0,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,     0,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -204,  -204,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     0,     0,     3,     4,     5,
       0,     0,     0,     0,     0,     6,     7,     8,   103,     0,
       0,     9,     0,     0,     0,  -204,  -204,    10,  -204,  -204,
    -204,  -204,  -204,    11,    12,     0,    13,    14,     0,    15,
      16,     0,     0,     0,    17,     0,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,    13,
      14,     0,    15,    16,     0,     0,     0,    17,     0,    18,
      19,    20,     0,    21,     0,     0,     0,   161,    22,     0,
      23,    24,    25,    26,    27,     1,     2,     0,     0,     3,
       4,     5,     0,     0,   149,     0,    21,     6,     7,     8,
       0,     0,     0,     9,    24,    25,    55,    27,     0,    10,
       0,     0,     0,     0,     0,    11,    12,     0,    13,    14,
       0,    15,    16,     0,     0,     0,    17,     0,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,    13,    14,     0,    15,    16,     0,     0,     0,    17,
       0,    18,    19,    20,     0,    21,     0,     0,     0,   216,
      22,     0,    23,    24,    25,    26,    27,     1,     2,     0,
       0,     3,     4,     5,     0,     0,   206,     0,    21,     6,
       7,     8,     0,     0,     0,     9,    24,    25,    55,    27,
       0,    10,     0,     0,     0,     0,     0,    11,    12,     0,
      13,    14,     0,    15,    16,     0,     0,     0,    17,     0,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,     0,    22,     0,    23,    24,    25,    26,    27,    71,
       0,     0,    72,    73,     0,     0,     0,    74,     0,    75,
      76,    77,     0,     0,     0,    78,    79,    80,     0,    81,
      82,     0,    83,    84,     0,    85,    86,    87,    88,    89,
      71,     0,     0,    72,    73,     0,     0,     0,    74,     0,
      75,    76,    77,     0,     0,     0,    78,    79,    80,     0,
      81,    82,     0,    83,    84,     0,    85,    86,    87,    88,
      89,     0,     0,     0,     0,    71,     0,     0,    72,    73,
       0,   256,     0,    74,     0,    75,    76,    77,     0,     0,
     257,    78,    79,    80,     0,    81,    82,     0,    83,    84,
       0,    85,    86,    87,    88,    89,    71,   325,     0,    72,
      73,     0,     0,     0,    74,     0,    75,    76,    77,     0,
       0,   171,    78,    79,    80,     0,    81,    82,     0,    83,
      84,     0,    85,    86,    87,    88,    89,    72,    73,     0,
       0,     0,    74,     0,    75,     0,    77,   339,     0,     0,
      78,    79,     0,     0,    81,    82,   171,     0,    84,     0,
       0,    86,    87,    88,    89,    72,    73,     0,     0,     0,
      74,     0,    75,     0,    77,     0,     0,     0,    78,    79,
       0,     0,    81,    82,     0,     0,    84,   171,     0,    86,
      87,    88,    89,    72,    73,     0,     0,     0,    74,     0,
      75,     0,    77,     0,     0,     0,    78,    79,     0,   266,
      81,    82,     0,     0,    84,   171,     0,    86,    87,    88,
      89,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,    15,    16,     0,     0,     0,    17,   304,    18,    19,
       0,     0,    12,   171,    13,    14,     0,    15,    16,     0,
       0,     0,    17,     0,    18,    19,     0,    12,     0,    13,
      14,     0,    15,    16,     0,    21,   237,    17,     0,    18,
      19,   171,     0,    24,    25,    55,    27,     0,     0,   240,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    55,    27,     0,     0,     0,    21,     0,     0,     0,
       0,   253,     0,     0,    24,    25,    55,    27,    12,     0,
      13,    14,     0,    15,    16,     0,     0,     0,    17,     0,
      18,    19,    12,     0,    13,    14,     0,    15,    16,     0,
       0,     0,    17,     0,    18,    19,    12,     0,    13,    14,
       0,    15,    16,     0,     0,     0,    17,    21,    18,    19,
     263,     0,     0,     0,     0,    24,    25,    55,    27,     0,
       0,    21,   279,     0,     0,     0,     0,     0,     0,    24,
      25,    55,    27,     0,     0,    21,   281,     0,     0,     0,
       0,     0,     0,    24,    25,    55,    27,    12,     0,    13,
      14,     0,    15,    16,     0,     0,     0,    17,     0,    18,
      19,    12,     0,    13,    14,     0,    15,    16,     0,     0,
       0,    17,     0,    18,    19,     0,     0,     0,    12,     0,
      13,    14,     0,    15,    16,     0,    21,   311,    17,     0,
      18,    19,     0,     0,    24,    25,    55,    27,     0,     0,
      21,     0,     0,   320,     0,     0,     0,     0,    24,    25,
      55,    27,     0,     0,     0,     0,     0,    21,     0,     0,
     341,     0,     0,     0,     0,    24,    25,    55,    27,    12,
       0,    13,    14,     0,    15,    16,     0,     0,     0,    17,
       0,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    24,    25,    55,    27
};

static const yytype_int16 yycheck[] =
{
       0,     2,    92,     2,    35,     5,   227,   253,    35,    22,
     174,   224,    40,   290,    15,    16,   164,     9,    35,    36,
     163,   170,     7,    42,    43,    69,    74,    74,    76,    21,
     109,    35,   245,    71,    78,    50,    84,    84,   163,    40,
      71,    60,    61,    74,   123,    69,   323,    74,    33,   174,
      35,    68,   273,    84,    78,   268,    79,    84,    73,    59,
      74,    84,   226,   227,    69,   144,   230,   231,   314,    61,
      74,    63,    76,    78,    66,    67,   219,    79,   291,    92,
      84,   229,    84,    96,    97,    69,    69,    69,   101,    84,
     303,    75,    75,    93,   219,    77,   226,   125,   126,   127,
     230,   226,   227,   103,    74,   230,   231,    69,    69,   273,
     258,   324,    71,    75,    75,   258,    69,    69,   110,    74,
      75,    76,    75,    75,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   290,   222,   293,    74,   146,   290,   273,    69,
      69,   143,    69,   232,   302,    75,    75,   149,    75,   159,
       3,    74,    69,     6,     7,    72,    40,    41,    11,    69,
      13,    14,    15,    69,   253,    75,    19,    20,    21,    75,
      23,    24,    69,    26,    27,    72,    29,    30,    31,    32,
      33,    65,    35,    69,   284,    74,    70,    76,    69,    75,
      74,    72,    76,     0,    69,    69,    80,    72,    72,   209,
     210,   211,    45,   205,   206,    39,   208,   132,   133,   134,
     135,    46,    69,   224,    71,   224,    74,    49,    76,    37,
      38,    74,    75,    76,   235,   314,   235,   237,    66,    67,
      71,    84,    54,    55,   245,    34,   245,   239,   240,    84,
      35,    74,    37,    38,    84,    40,    41,    86,   128,   129,
      45,    79,    47,    48,   130,   131,    69,   268,    44,   268,
      35,    44,    37,    38,    79,    40,    41,    75,   278,   279,
      45,   281,    47,    48,   136,   137,    12,    75,    69,    74,
     291,   283,   291,    78,    79,    77,    71,    82,    83,    84,
      85,    69,   303,    72,   303,    84,    77,    72,   308,    74,
     310,   311,    75,   313,    75,    70,    75,    82,    83,    84,
      85,    77,    70,   324,   138,   324,   139,   142,    92,   140,
     221,   141,   231,   333,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   215,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   302,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   297,    37,    38,
     293,    40,    41,    44,   290,    -1,    45,   246,    47,    48,
      51,    52,    53,    -1,    -1,    56,    57,    58,    59,    -1,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    -1,    81,    82,    83,    84,    85,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    85,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    71,    -1,
      -1,    22,    -1,    -1,    -1,    78,    79,    28,    81,    82,
      83,    84,    85,    34,    35,    -1,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    -1,
      81,    82,    83,    84,    85,     4,     5,    -1,    -1,     8,
       9,    10,    -1,    -1,    72,    -1,    74,    16,    17,    18,
      -1,    -1,    -1,    22,    82,    83,    84,    85,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    -1,    81,    82,    83,    84,    85,     4,     5,    -1,
      -1,     8,     9,    10,    -1,    -1,    72,    -1,    74,    16,
      17,    18,    -1,    -1,    -1,    22,    82,    83,    84,    85,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    85,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    75,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      84,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,     3,    70,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    84,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    -1,    15,    75,    -1,    -1,
      19,    20,    -1,    -1,    23,    24,    84,    -1,    27,    -1,
      -1,    30,    31,    32,    33,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    84,    -1,    30,
      31,    32,    33,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    19,    20,    -1,    78,
      23,    24,    -1,    -1,    27,    84,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    78,    47,    48,
      -1,    -1,    35,    84,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,    -1,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    74,    75,    45,    -1,    47,
      48,    84,    -1,    82,    83,    84,    85,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    83,    84,    85,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    48,    35,    -1,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    74,    47,    48,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
      -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    74,    75,    45,    -1,
      47,    48,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    35,
      -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     8,     9,    10,    16,    17,    18,    22,
      28,    34,    35,    37,    38,    40,    41,    45,    47,    48,
      72,    74,    79,    81,    82,    83,    84,    85,    88,    89,
      90,    91,    94,    95,    96,    97,    98,    99,   100,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   119,    84,   102,   115,   118,    71,
      89,    74,    84,    74,    72,   119,    74,    74,   102,   102,
     119,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      84,    89,    92,    93,   120,   121,   124,   125,   126,   127,
     133,   136,   147,    71,     0,    40,    41,    65,    70,    74,
      76,    80,    44,    51,    52,    53,    56,    57,    58,    59,
      62,    63,    64,   117,   104,    35,    36,    68,    37,    38,
      66,    67,    42,    43,    60,    61,    54,    55,    45,    39,
      46,    49,    50,    73,    69,    72,    71,    89,    34,    72,
     119,   119,    72,   119,   119,    75,    79,    84,    78,    93,
     120,    78,    89,    35,    74,    84,   122,   123,   137,   138,
     139,    84,   121,   121,    79,    84,   121,    89,    84,    84,
     101,   116,   119,   116,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   109,   110,   111,
     112,   113,   119,   116,    89,    74,    72,   119,    72,    75,
      75,    75,    86,   134,   135,    79,    78,   136,   139,   140,
     137,    69,    44,    74,    76,   138,   125,   128,   129,   130,
     136,    79,    69,    75,    77,    71,   119,    75,   119,    72,
      72,   119,    89,    89,    89,    44,    69,    78,   134,   136,
     139,    75,   123,    79,   116,   148,    75,    84,   121,   141,
     142,   143,   144,    77,   118,   130,    78,   129,    71,   131,
     132,   137,   130,   128,   116,   115,    75,    89,    75,    75,
     119,    75,   119,    72,    12,   118,   135,    78,   148,   149,
      74,    76,   137,   139,   145,   146,    75,    69,    69,    75,
      77,   118,    69,    71,    78,    72,    89,    89,    75,    89,
      75,    75,   119,    93,    69,    78,    75,    84,   141,   145,
      77,   118,   146,    74,    76,    70,   143,    84,   132,   118,
      89,    89,    89,    75,    78,   148,    75,    75,    77,    75,
     141,    77,   118,    70,    89,    75,    77,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    89,    89,    89,    89,    90,
      90,    90,    91,    91,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    99,    99,   100,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   107,   108,   108,   108,
     108,   108,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   126,   126,   126,   127,   127,   128,   128,   129,
     130,   130,   130,   130,   131,   131,   132,   132,   132,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     144,   144,   145,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   147,   148,   148,   148,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     4,     3,     3,     1,     1,     2,     1,     2,
       2,     1,     5,     7,     5,     5,     7,     9,     8,     8,
       8,     7,     7,     7,     6,     2,     1,     1,     3,     2,
       1,     1,     1,     3,     1,     1,     1,     4,     2,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     5,     1,     1,     1,     2,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     2,     2,
       5,     4,     1,     3,     1,     3,     1,     1,     1,     2,
       1,     3,     3,     4,     4,     3,     4,     1,     2,     2,
       3,     1,     2,     1,     5,     1,     3,     2,     1,     2,
       1,     3,     1,     2,     1,     3,     4,     3,     3,     2,
       4,     3,     3,     2,     1,     1,     3,     4,     1,     3
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
#line 62 "src/maths_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].stmt); fprintf(stderr, "Bye "); }
#line 1787 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 110 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Identifier ");}
#line 1793 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 111 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Constant ");}
#line 1799 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 112 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "String ");}
#line 1805 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 115 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number); fprintf(stderr, "Int ");}
#line 1811 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 116 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.number) = (yyvsp[0].number); }
#line 1817 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Hi ");}
#line 1823 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 125 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Increment ");}
#line 1829 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 131 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Unary ");}
#line 1835 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 132 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Unary ");}
#line 1841 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 133 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Unary ");}
#line 1847 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 134 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "UnaryOperator ");}
#line 1853 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 139 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Plus ");}
#line 1859 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Cast ");}
#line 1865 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 146 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Multiply ");}
#line 1871 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 151 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Add ");}
#line 1877 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 185 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "AssignmentExpressed ");}
#line 1883 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 186 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "ActualAssignment ");}
#line 1889 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 188 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Equals ");}
#line 1895 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 188 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "Timesequals ");}
#line 1901 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 195 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "ExpressionFound! ");}
#line 1907 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1911 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 340 "src/maths_parser.y" /* yacc.c:1906  */


const Statement *g_root; // Definition of variable (to match declaration earlier)

const Statement *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
