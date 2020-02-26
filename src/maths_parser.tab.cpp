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

  extern const ast_node *g_root; // A way of getting the AST out

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
    T_ESQ_BRACKETS = 337,
    T_DEC_INT = 338,
    T_OCTAL_INT = 339,
    T_IDENTIFIER = 340,
    T_STRING = 341,
    T_ENUM_CONSTANT = 342,
    T_DEREFERENCE = 343,
    T_CUSTOM_TYPE = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "src/maths_parser.y" /* yacc.c:355  */

  ast_node* nodePtr;
  std::string* _text;

#line 218 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  377

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
       0,    77,    77,    79,    80,    82,    83,    85,    86,    87,
      88,    90,    91,    92,    93,    94,    95,    97,    98,    99,
     101,   102,   103,   104,   106,   107,   109,   110,   112,   113,
     115,   116,   117,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   130,   131,   132,   133,   134,   136,   137,
     138,   139,   141,   142,   145,   146,   147,   148,   149,   150,
     151,   152,   154,   155,   157,   158,   159,   160,   162,   163,
     165,   165,   165,   165,   165,   165,   167,   168,   170,   171,
     172,   173,   175,   176,   177,   179,   180,   181,   183,   184,
     185,   186,   187,   188,   189,   190,   192,   193,   195,   196,
     198,   199,   201,   202,   204,   205,   207,   208,   210,   211,
     213,   213,   213,   213,   214,   214,   215,   215,   216,   216,
     216,   218,   220,   221,   223,   223,   225,   226,   227,   228,
     229,   230,   232,   233,   235,   236,   238,   238,   238,   238,
     238,   240,   240,   240,   240,   241,   241,   241,   241,   241,
     242,   243,   244,   246,   247,   248,   249,   249,   251,   252,
     254,   256,   257,   258,   259,   261,   262,   264,   265,   266,
     268,   269,   270,   272,   273,   275,   276,   278,   278,   280,
     281,   283,   284,   285,   286,   287,   288,   289,   292,   293,
     294,   295,   297,   298,   300,   301,   303,   304,   306,   307,
     308,   310,   311,   313,   314,   316,   317,   318,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   330,   332,   333,
     334,   336,   337
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
  "T_ESQ_BRACKETS", "T_DEC_INT", "T_OCTAL_INT", "T_IDENTIFIER", "T_STRING",
  "T_ENUM_CONSTANT", "T_DEREFERENCE", "T_CUSTOM_TYPE", "$accept",
  "PROGRAM", "TRANSLATION_UNIT", "EXTERNAL_DECLARATION",
  "FUNCTION_DECLARATION", "STATEMENT", "LABELED_STATEMENT",
  "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "ITERATION_STATEMENT",
  "JUMP_STATEMENT", "PRIMARY_EXPRESSION", "CONSTANT", "POSTFIX_EXPRESSION",
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
  "PARAMETER_DECLARATION", "IDENTIFIER_LIST", "TYPE_NAME",
  "ABSTRACT_DECLARATOR", "DIRECT_ABSTRACT_DECLARATOR", "TYPEDEF_NAME",
  "INITIALIZER", "INITIALIZER_LIST", YY_NULLPTR
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

#define YYPACT_NINF -222

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-222)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     586,  -222,  -222,  -222,  -222,    18,  -222,  -222,  -222,  -222,
    -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,
     -21,  -222,    11,  -222,     9,   586,  -222,  -222,  -222,    60,
     792,   792,  -222,    28,  -222,   792,   688,   125,   -62,  -222,
     -27,   -11,     2,  -222,  -222,    11,  -222,  -222,  -222,   -61,
    -222,   617,  -222,  -222,   929,     3,  -222,   399,  -222,  -222,
     688,  -222,    60,   719,  1434,  -222,  -222,   125,    49,   -20,
    -222,   -27,  -222,  -222,  -222,   -21,  -222,  1153,  -222,   688,
     929,   865,  -222,    27,   929,   929,    33,  1434,    50,    55,
    1125,    59,    94,    61,  1205,  1451,   109,   114,  -222,  -222,
    -222,  1503,  1503,  -222,  -222,  -222,  -222,   820,  -222,  -222,
     127,  -222,  -222,  -222,  -222,   312,   959,  -222,  -222,  -222,
    -222,  -222,  -222,     5,   310,  1434,  -222,    -9,    72,   228,
      12,   243,   163,   176,   187,   195,   -17,  -222,  -222,    45,
    -222,  -222,   217,  -222,     4,   190,   208,  -222,    68,  -222,
    -222,  -222,   210,  1434,   -27,  -222,   -12,  -222,  1153,  -222,
    -222,  -222,  -222,  -222,  -222,  1434,   216,  -222,   231,  -222,
     901,  -222,   235,  -222,  1125,   276,  1222,   239,  1434,  -222,
     162,   820,  -222,  1434,  1434,  1434,  -222,  -222,   111,    64,
     237,  1125,  -222,  1042,  -222,  -222,  -222,  -222,   263,   266,
    1434,  1434,  -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,
    -222,  -222,  -222,  -222,  1434,  -222,  1434,  1434,  1434,  1434,
    1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,
    1434,  1434,  1434,  1434,  1434,  1434,  -222,   483,  1434,  -222,
    -222,  -222,   115,  -222,   145,  -222,   759,   270,  -222,  -222,
    -222,  -222,  -222,  -222,    -4,  -222,    27,  1434,  -222,  1125,
    -222,   250,  1274,   184,  -222,   121,  -222,   238,   134,   141,
    -222,   514,   146,  -222,  1434,  -222,  -222,  -222,  -222,   155,
    -222,    14,  -222,  -222,  -222,  -222,    -9,    -9,    72,    72,
     228,   228,   228,   228,    12,    12,   243,   163,   176,   187,
     195,    78,  -222,   281,   283,   287,   145,   792,  1434,  -222,
    -222,   295,  -222,  -222,  1139,  -222,  -222,  -222,  -222,  1434,
    1288,   204,  1340,  1125,  -222,  1125,  1125,  -222,  1434,  -222,
    -222,  1434,  -222,  -222,  -222,   296,   293,   305,  -222,  -222,
     160,  1125,   172,  1354,  1368,   224,   364,  -222,  -222,  -222,
    -222,  -222,  -222,  -222,   306,  -222,  1125,  1125,   180,  1125,
     182,  1420,  1125,  -222,  -222,  -222,  1125,  -222,  1125,  1125,
     183,  -222,  -222,  -222,  -222,  1125,  -222
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   139,   142,   177,   147,     0,   137,   146,   144,   145,
     140,   143,   148,   138,   156,   136,   157,   149,   141,   178,
       0,   181,   188,   217,     0,     2,     3,     5,     6,     0,
     126,   128,   150,     0,   151,   130,     0,   179,     0,   152,
       0,   170,     0,   192,   190,   189,     1,     4,   124,     0,
     132,   134,   127,   129,     0,   153,   131,     0,    23,    10,
       0,    24,     0,     0,     0,   186,   183,   180,   175,     0,
     173,     0,   182,   193,   191,     0,   125,     0,     8,     0,
     161,     0,   158,     0,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,    70,    74,    75,    29,     0,    52,    53,
      48,    50,    26,    11,    12,     0,     0,    13,    14,    15,
      16,    54,    49,    64,    76,     0,    78,    82,    85,    88,
      93,    96,    98,   100,   102,   104,   106,   108,   122,     0,
       9,    25,   134,   201,   199,     0,   194,   196,     0,    48,
      76,   121,     0,     0,     0,   172,     0,   133,     0,   218,
     135,     7,   162,   154,   159,     0,   160,   165,   167,   164,
       0,    45,     0,    44,     0,     0,     0,     0,     0,    47,
       0,     0,    68,     0,     0,     0,    66,    65,     0,   203,
       0,     0,    22,     0,    21,    27,    61,    60,     0,     0,
       0,     0,    56,   110,   113,   116,   117,   114,   115,   111,
     112,   118,   120,   119,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,   216,
     212,   198,   205,   200,   207,   185,     0,     0,   187,   184,
     176,   174,   171,   221,     0,   169,     0,     0,   155,     0,
      19,     0,     0,     0,    43,     0,    46,     0,     0,     0,
      51,     0,   205,   204,     0,    17,    20,    59,    58,     0,
      62,     0,   109,    79,    80,    81,    83,    84,    87,    86,
      89,    90,    91,    92,    95,    94,    97,    99,   101,   103,
     105,     0,   123,     0,     0,     0,   206,     0,     0,   215,
     211,     0,   197,   202,     0,   219,   166,   168,    18,     0,
       0,     0,     0,     0,    69,     0,     0,    77,     0,    57,
      55,     0,   214,   208,   210,     0,     0,     0,   220,   222,
       0,     0,     0,     0,     0,     0,    30,    32,    33,    63,
     107,   213,   209,   195,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    34,    39,    40,     0,    41,     0,     0,
       0,    31,    36,    37,    38,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -222,  -222,  -222,   352,  -222,   -87,  -222,    -8,   223,   264,
    -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,   -63,  -222,
     -89,    80,    83,    66,    81,   151,   152,   150,   153,   154,
    -222,   -45,   -64,  -222,   -65,   -60,    16,     0,  -222,   308,
    -222,   133,  -222,  -222,   303,   -74,   -70,  -222,   136,  -222,
     318,   240,    97,   -14,   -36,    -5,  -222,   -59,  -222,   165,
    -222,   218,  -139,  -221,  -222,  -138,  -222
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,   112,   113,   114,    60,   116,
     117,   118,   119,   120,   121,   122,   123,   279,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   214,   152,   139,    61,    62,    49,    50,
      30,    31,    32,    33,    81,    82,    83,   166,   167,    34,
      69,    70,    35,    36,    37,    38,    45,   303,   146,   147,
     148,   190,   304,   244,    39,   160,   254
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      29,   150,    67,   175,   145,   243,    42,   164,    75,    46,
     162,    76,    20,   159,   169,    51,    28,    44,     3,   151,
     253,   306,   172,    21,   150,    29,   216,   217,    59,   195,
      52,    53,   182,   233,   180,    56,   215,   189,   186,   187,
      74,    28,   151,    78,    19,   196,   197,   188,   142,   154,
     273,   306,   140,    20,   223,   224,   234,   154,   155,   218,
      68,   142,   150,   144,    21,   314,   252,    22,    71,   168,
     198,   161,   225,   226,   315,   199,   141,    72,   237,   200,
     238,   201,    85,   235,   239,   202,   240,   260,   250,    21,
     150,   330,    22,   153,   159,   141,   164,    40,   165,    22,
     255,    20,   150,    41,   275,   171,   195,    54,   151,   219,
     220,   189,    21,    55,   235,    22,   263,   236,   265,    43,
     151,   188,   173,   268,   269,   188,   174,   283,   284,   285,
     241,   141,    48,   176,    20,   178,   280,   247,   271,   242,
     238,   281,    73,   248,   239,    21,   240,   235,    22,   331,
     282,    84,    22,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   302,   318,   305,   301,   150,   339,    84,    84,   177,
     235,    84,    84,   183,   272,   327,   270,    80,   184,   237,
     235,   238,   317,   151,   150,   239,   323,   240,   191,    63,
      21,    64,   321,   235,    84,    65,    67,    66,   229,   325,
     235,   150,   151,    80,    80,   230,   326,    80,    80,   307,
     271,   308,   238,    42,   328,   309,   239,   310,   240,   235,
     329,   235,   242,   231,   266,   354,   346,   144,   347,   348,
      80,   235,   168,   336,   232,   150,   144,   356,   335,   235,
     159,   235,   235,   235,   355,   366,   322,   368,   375,   340,
     342,    77,   345,   151,   349,   245,   272,    84,   150,   364,
     365,   144,   367,   235,    79,   371,   343,   246,    84,   372,
     115,   373,   374,   358,   360,   256,   350,   249,   376,   290,
     291,   292,   293,   235,   221,   222,   361,   227,   228,   286,
     287,   370,   257,    80,   288,   289,   259,   144,   294,   295,
     261,   264,   274,   324,    80,     1,    86,    87,     2,     3,
      88,    89,    90,     4,   319,     5,     6,     7,    91,    92,
      93,     8,     9,    10,    94,    11,    12,    95,    13,    14,
      96,    15,    16,    17,    18,    19,    97,    98,   277,    99,
     100,   278,   101,   102,   203,   313,   332,   103,   333,   104,
     105,   204,   205,   206,   334,   337,   207,   208,   209,   210,
     352,   351,   211,   212,   213,   353,   362,    47,   363,   193,
     296,   298,   297,   157,   106,   299,   107,   300,   170,   156,
     192,    57,   316,    58,   251,   108,   109,   110,   111,   267,
       0,    23,     1,    86,    87,     2,     3,    88,    89,    90,
       4,   312,     5,     6,     7,    91,    92,    93,     8,     9,
      10,    94,    11,    12,    95,    13,    14,    96,    15,    16,
      17,    18,    19,    97,    98,     0,    99,   100,     0,   101,
     102,     0,     0,     0,   103,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,   107,     0,     0,     0,     0,    57,     0,
      58,     0,   108,   109,   110,   111,     1,     0,    23,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,     0,   238,
       0,     0,     0,   239,     0,   240,     0,     0,    21,     0,
       0,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   271,     1,
     238,     0,     2,     3,   239,     0,   240,     4,     0,     5,
       6,     7,    22,    23,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     2,     3,    57,     0,    58,     4,
       0,     5,     6,     7,     0,     0,    23,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     2,     3,    57,     0,    58,
       4,     0,     5,     6,     7,     0,     0,    23,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,   143,     5,     6,     7,    23,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
       0,    15,    16,    17,    18,    19,     2,     3,     0,   311,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     8,
       9,     0,     0,    11,    12,    95,     0,    14,    23,     0,
      16,    17,    18,    19,     0,    98,     0,    99,   100,     0,
     101,   102,     0,     0,     0,   103,     0,   104,   105,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       7,    23,     0,     0,     8,     9,     0,     0,    11,    12,
       0,     0,    14,     0,   107,    16,    17,    18,    19,     0,
       0,     0,     0,   108,   109,   149,   111,     2,     3,    23,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       8,     9,     0,     0,    11,    12,     0,     0,    14,     0,
       0,    16,    17,    18,    19,     2,     3,     0,     0,     0,
       4,     0,     5,   163,     7,     0,     0,     0,     8,     9,
       0,     0,    11,    12,    23,     0,    14,     0,     0,    16,
      17,    18,    19,    86,    87,     0,     0,    88,    89,    90,
       0,     0,     0,     0,     0,    91,    92,    93,     0,   258,
       0,    94,     0,     0,    95,     0,     0,    96,     0,     0,
      23,     0,     0,    97,    98,     0,    99,   100,     0,   101,
     102,     0,     0,     0,   103,     0,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,   107,     0,     0,     0,   194,    57,     0,
      58,     0,   108,   109,   110,   111,    86,    87,     0,     0,
      88,    89,    90,     0,     0,     0,     0,     0,    91,    92,
      93,     0,     0,     0,    94,     0,     0,    95,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,     0,    99,
     100,     0,   101,   102,     0,     0,     0,   103,     0,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,   107,     0,     0,     0,
     276,    57,     0,    58,     0,   108,   109,   110,   111,    86,
      87,     0,     0,    88,    89,    90,     0,     0,     0,     0,
       0,    91,    92,    93,     0,     0,     0,    94,     0,     0,
      95,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,     0,    99,   100,    95,   101,   102,     0,     0,     0,
     103,     0,   104,   105,    98,     0,    99,   100,    95,   101,
     102,     0,     0,     0,   103,     0,   104,   105,    98,     0,
      99,   100,     0,   101,   102,     0,     0,   106,   103,   107,
     104,   105,     0,     0,    57,     0,    58,     0,   108,   109,
     110,   111,     0,   107,     0,     0,     0,   338,   158,     0,
       0,     0,   108,   109,   149,   111,     0,   107,     0,     0,
      95,     0,   158,     0,     0,     0,   108,   109,   149,   111,
      98,     0,    99,   100,     0,   101,   102,    95,     0,     0,
     103,     0,   104,   105,     0,     0,     0,    98,     0,    99,
     100,     0,   101,   102,     0,     0,     0,   103,     0,   104,
     105,     0,     0,     0,     0,     0,     0,   179,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
     149,   111,     0,     0,   262,     0,   107,     0,     0,    95,
       0,     0,     0,     0,     0,   108,   109,   149,   111,    98,
       0,    99,   100,    95,   101,   102,     0,     0,     0,   103,
       0,   104,   105,    98,     0,    99,   100,     0,   101,   102,
       0,     0,     0,   103,     0,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   320,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,   108,   109,   149,
     111,     0,   107,   341,     0,    95,     0,     0,     0,     0,
       0,   108,   109,   149,   111,    98,     0,    99,   100,    95,
     101,   102,     0,     0,     0,   103,     0,   104,   105,    98,
       0,    99,   100,    95,   101,   102,     0,     0,     0,   103,
       0,   104,   105,    98,     0,    99,   100,     0,   101,   102,
       0,     0,   344,   103,   107,   104,   105,     0,     0,     0,
       0,     0,     0,   108,   109,   149,   111,     0,   107,   357,
       0,     0,     0,     0,     0,     0,     0,   108,   109,   149,
     111,     0,   107,   359,     0,    95,     0,     0,     0,     0,
       0,   108,   109,   149,   111,    98,     0,    99,   100,    95,
     101,   102,     0,     0,     0,   103,     0,   104,   105,    98,
       0,    99,   100,     0,   101,   102,    95,     0,     0,   103,
       0,   104,   105,     0,     0,     0,    98,     0,    99,   100,
       0,   101,   102,     0,   107,   369,   103,     0,   104,   105,
       0,     0,     0,   108,   109,   149,   111,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,   108,   109,   149,
     111,     0,     0,     0,     0,   181,     0,     0,    95,     0,
       0,     0,     0,     0,   108,   109,   149,   111,    98,     0,
      99,   100,     0,   101,   102,     0,     0,     0,   103,     0,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   109,   149,   111
};

static const yytype_int16 yycheck[] =
{
       0,    64,    38,    90,    63,   144,    20,    81,    69,     0,
      80,    72,    74,    77,    84,    29,     0,    22,     7,    64,
     158,   242,    87,    85,    87,    25,    35,    36,    36,   116,
      30,    31,    95,    50,    94,    35,   125,   107,   101,   102,
      45,    25,    87,    51,    33,    40,    41,   107,    62,    69,
     189,   272,    60,    74,    42,    43,    73,    69,    78,    68,
      87,    75,   125,    63,    85,    69,    78,    88,    79,    83,
      65,    79,    60,    61,    78,    70,    60,    75,    74,    74,
      76,    76,    79,    69,    80,    80,    82,   174,   153,    85,
     153,    77,    88,    44,   158,    79,   170,    79,    71,    88,
     165,    74,   165,    85,   191,    72,   193,    79,   153,    37,
      38,   181,    85,    85,    69,    88,   176,    72,   178,    22,
     165,   181,    72,   183,   184,   185,    71,   216,   217,   218,
     144,   115,    72,    74,    74,    74,   200,    69,    74,   144,
      76,   201,    45,    75,    80,    85,    82,    69,    88,    71,
     214,    54,    88,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   235,   259,   238,   234,   238,   314,    80,    81,    85,
      69,    84,    85,    74,   189,   274,    75,    54,    74,    74,
      69,    76,   257,   238,   257,    80,    75,    82,    71,    74,
      85,    76,   262,    69,   107,    80,   242,    82,    45,    75,
      69,   274,   257,    80,    81,    39,    75,    84,    85,    74,
      74,    76,    76,   237,    69,    80,    80,    82,    82,    69,
      75,    69,   237,    46,    72,    75,   323,   237,   325,   326,
     107,    69,   256,   308,    49,   308,   246,    75,   307,    69,
     314,    69,    69,    69,   341,    75,    72,    75,    75,   319,
     320,    44,   322,   308,   328,    75,   271,   170,   331,   356,
     357,   271,   359,    69,    51,   362,    72,    69,   181,   366,
      57,   368,   369,   343,   344,    69,   331,    77,   375,   223,
     224,   225,   226,    69,    66,    67,    72,    54,    55,   219,
     220,   361,    71,   170,   221,   222,    71,   307,   227,   228,
      34,    72,    75,    75,   181,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    74,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    85,    37,
      38,    85,    40,    41,    44,    85,    75,    45,    75,    47,
      48,    51,    52,    53,    77,    70,    56,    57,    58,    59,
      77,    75,    62,    63,    64,    70,    12,    25,    72,   115,
     229,   231,   230,    75,    72,   232,    74,   233,    85,    71,
      78,    79,   256,    81,   154,    83,    84,    85,    86,   181,
      -1,    89,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   246,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    83,    84,    85,    86,     3,    -1,    89,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    85,    -1,
      -1,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,     3,
      76,    -1,     6,     7,    80,    -1,    82,    11,    -1,    13,
      14,    15,    88,    89,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    79,    -1,    81,    11,
      -1,    13,    14,    15,    -1,    -1,    89,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    79,    -1,    81,
      11,    -1,    13,    14,    15,    -1,    -1,    89,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    85,    13,    14,    15,    89,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,     6,     7,    -1,    70,
      -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,    19,
      20,    -1,    -1,    23,    24,    25,    -1,    27,    89,    -1,
      30,    31,    32,    33,    -1,    35,    -1,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,
      15,    89,    -1,    -1,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    -1,    74,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,     6,     7,    89,
      -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    30,    31,    32,    33,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    78,    15,    -1,    -1,    -1,    19,    20,
      -1,    -1,    23,    24,    89,    -1,    27,    -1,    -1,    30,
      31,    32,    33,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    78,
      -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,
      89,    -1,    -1,    34,    35,    -1,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,     4,
       5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    37,    38,    25,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,    35,    -1,    37,    38,    25,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    -1,    72,    45,    74,
      47,    48,    -1,    -1,    79,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    74,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    83,    84,    85,    86,    -1,    74,    -1,    -1,
      25,    -1,    79,    -1,    -1,    -1,    83,    84,    85,    86,
      35,    -1,    37,    38,    -1,    40,    41,    25,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    72,    -1,    74,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    35,
      -1,    37,    38,    25,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    74,    75,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    35,    -1,    37,    38,    25,
      40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,    35,
      -1,    37,    38,    25,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    72,    45,    74,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    74,    75,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    35,    -1,    37,    38,    25,
      40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,    35,
      -1,    37,    38,    -1,    40,    41,    25,    -1,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    74,    75,    45,    -1,    47,    48,
      -1,    -1,    -1,    83,    84,    85,    86,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    74,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      74,    85,    88,    89,    91,    92,    93,    94,   126,   127,
     130,   131,   132,   133,   139,   142,   143,   144,   145,   154,
      79,    85,   143,   142,   145,   146,     0,    93,    72,   128,
     129,   143,   127,   127,    79,    85,   127,    79,    81,    97,
      98,   126,   127,    74,    76,    80,    82,   144,    87,   140,
     141,    79,    75,   142,   145,    69,    72,    44,    97,    98,
     131,   134,   135,   136,   142,    79,     4,     5,     8,     9,
      10,    16,    17,    18,    22,    25,    28,    34,    35,    37,
      38,    40,    41,    45,    47,    48,    72,    74,    83,    84,
      85,    86,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   125,
      97,   126,   143,    85,   127,   147,   148,   149,   150,    85,
     108,   121,   124,    44,    69,    78,   140,   129,    79,   122,
     155,    97,   136,    78,   135,    71,   137,   138,   143,   136,
     134,    72,   124,    72,    71,    95,    74,    85,    74,    72,
     125,    74,   108,    74,    74,    74,   108,   108,   125,   136,
     151,    71,    78,    99,    78,    95,    40,    41,    65,    70,
      74,    76,    80,    44,    51,    52,    53,    56,    57,    58,
      59,    62,    63,    64,   123,   110,    35,    36,    68,    37,
      38,    66,    67,    42,    43,    60,    61,    54,    55,    45,
      39,    46,    49,    50,    73,    69,    72,    74,    76,    80,
      82,   143,   145,   152,   153,    75,    69,    69,    75,    77,
     124,   141,    78,   155,   156,   124,    69,    71,    78,    71,
      95,    34,    72,   125,    72,   125,    72,   151,   125,   125,
      75,    74,   145,   152,    75,    95,    78,    85,    85,   107,
     122,   125,   122,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   114,   114,   115,   116,   117,   118,
     119,   125,   122,   147,   152,   124,   153,    74,    76,    80,
      82,    70,   149,    85,    69,    78,   138,   124,    95,    74,
      72,   125,    72,    75,    75,    75,    75,   110,    69,    75,
      77,    71,    75,    75,    77,   147,   124,    70,    78,   155,
     125,    75,   125,    72,    72,   125,    95,    95,    95,   122,
     121,    75,    77,    70,    75,    95,    75,    75,   125,    75,
     125,    72,    12,    72,    95,    95,    75,    95,    75,    75,
     125,    95,    95,    95,    95,    75,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     104,   104,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   107,   108,   108,   108,   108,   108,   108,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   113,   114,   114,
     114,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   132,   132,   133,   133,   134,   134,
     135,   136,   136,   136,   136,   137,   137,   138,   138,   138,
     139,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   151,   151,   152,   152,   152,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   154,   155,   155,
     155,   156,   156
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       4,     3,     3,     1,     1,     2,     1,     2,     2,     1,
       5,     7,     5,     5,     7,     9,     8,     8,     8,     7,
       7,     7,     6,     3,     2,     2,     3,     2,     1,     1,
       1,     3,     1,     1,     1,     4,     2,     4,     3,     3,
       2,     2,     1,     3,     1,     2,     2,     2,     2,     4,
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
       2,     5,     4,     1,     3,     1,     3,     1,     1,     1,
       2,     1,     3,     2,     4,     4,     2,     4,     1,     2,
       2,     3,     1,     2,     1,     5,     1,     3,     2,     1,
       2,     1,     3,     1,     2,     1,     2,     1,     3,     4,
       3,     2,     1,     4,     3,     2,     1,     1,     1,     3,
       4,     1,     3
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
        case 3:
#line 79 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","",std::vector<ast_node*>{(yyvsp[0].nodePtr)});}
#line 1861 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 80 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)});}
#line 1867 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "CompoundStatement ");}
#line 1873 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "ExpressionStatement ");}
#line 1879 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 93 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "SelectionStatement ");}
#line 1885 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "IterationStatement ");}
#line 1891 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 136 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 1897 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION","",std::vector<ast_node*>{(yyvsp[0].nodePtr)});}
#line 1903 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 139 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr)});}
#line 1909 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 1915 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 142 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 1921 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 220 "src/maths_parser.y" /* yacc.c:1646  */
    {fprintf(stderr, "ExpressionFound! ");}
#line 1927 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 1931 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 342 "src/maths_parser.y" /* yacc.c:1906  */


const ast_node *g_root; // Definition of variable (to match declaration earlier)

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
