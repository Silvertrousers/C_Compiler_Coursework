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
#define YYLAST   1348

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
     212,   214,   218,   224,   226,   227,   228,   230,   234,   235,
     236,   240,   241,   245,   249,   253,   257,   261,   265,   269,
     274,   278,   279,   283,   287,   291,   295,   299,   301,   302,
     303,   304,   305,   306,   308,   309,   313,   314,   318,   322,
     326,   327,   331,   335,   336,   340,   344,   345,   349,   353,
     357,   361,   362,   366,   370,   371,   375,   376,   380,   381,
     385,   386,   390,   391,   395,   396,   400,   401,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   417,
     419,   420,   425,   429,   433,   434,   438,   439,   443,   444,
     448,   449,   453,   457,   461,   462,   463,   464,   465,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   480,   484,   488,   492,   495,   496,   500,   504,   506,
     510,   512,   516,   517,   521,   522,   526,   530,   534,   538,
     542,   544,   545,   549,   550,   554,   556,   558,   559,   563,
     565,   567,   571,   575,   579,   584,   585,   589,   593,   597,
     599,   600,   604,   611,   615,   619,   623,   625,   634,   636,
     637,   641,   643,   647,   649,   651,   655,   659,   663,   665,
     669,   673,   677,   679,   681,   683,   687,   691,   692
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

#define YYPACT_NINF -232

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-232)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     601,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,    37,  -232,
    -232,  -232,    29,   601,  -232,  -232,  -232,    15,   415,   415,
    -232,    47,  -232,    58,   415,   -62,   483,   -37,   -10,  -232,
    -232,   -23,  -232,  -232,  -232,    80,  -232,   -16,  -232,  -232,
     745,   -35,    -9,   -20,  -232,   464,  -232,  -232,   415,  1195,
    -232,  -232,   483,  -232,  -232,   -10,  -232,    37,  -232,   294,
    -232,   745,   681,  -232,    14,   745,   745,  -232,   -40,  -232,
      23,    -9,    84,  -232,   111,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  1248,  1248,  -232,  -232,
    -232,  -232,   641,  -232,  -232,  -232,  -232,  -232,  -232,    -2,
    1195,  -232,   378,   778,  -232,  -232,    85,   117,  -232,   119,
     153,   940,  -232,   956,  -232,  -232,    16,   167,  1264,  1195,
    -232,    25,   101,   138,    52,   245,    74,   198,   186,   190,
     -28,  -232,  -232,   137,  -232,    15,   182,   197,   199,   212,
    -232,  -232,  -232,   216,  -232,  -232,  -232,  -232,   261,   294,
    -232,  -232,  -232,  -232,  -232,  1195,   243,  -232,   250,  -232,
     720,    -9,  -232,  1195,    13,  -232,  -232,  1195,  -232,  -232,
      -3,   478,   258,   940,   265,  -232,   859,  -232,  -232,  -232,
    1195,  1195,  1009,  1195,   303,  -232,   200,  -232,  -232,   255,
     255,  1195,  1195,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  1195,   641,  -232,  -232,  1195,
    1195,  1195,  1195,  1195,  1195,  1195,  1195,  1195,  1195,  1195,
    1195,  1195,  1195,  1195,  1195,  1195,  1195,  1195,  1195,  -232,
     940,   501,  1195,  -232,  -232,  -232,    71,  -232,   490,  -232,
     415,  -232,  -232,    30,  -232,    14,  1195,  -232,  -232,  -232,
    -232,  -232,   573,   561,  -232,  1195,  -232,   940,  -232,    34,
      60,  1025,   214,    65,   272,  -232,  -232,  -232,   115,  -232,
      45,  -232,   279,  -232,  -232,  -232,    25,    25,   101,   101,
     138,   138,   138,   138,    52,    52,   245,    74,   198,   186,
     190,   -38,  -232,  -232,   281,   284,   285,   490,   415,  1195,
    -232,  -232,  -232,   266,  -232,  -232,  -232,  -232,  -232,   940,
     940,  1078,   222,  1094,   940,  1195,  1195,  -232,  -232,  -232,
    1195,  -232,  -232,  -232,   286,   288,  -232,  -232,  -232,   349,
     940,   159,  1110,  1163,   226,  -232,   166,  -232,  -232,  -232,
    -232,  -232,   940,  -232,   940,   940,   171,   940,   193,  1179,
     299,  -232,  -232,  -232,   940,  -232,   940,   940,   221,  -232,
    -232,  -232,  -232,   940,  -232
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   147,   150,   155,   180,   145,   154,   152,   153,   148,
     151,   156,   146,   164,   144,   157,   149,   186,     0,   208,
     199,   223,     0,     2,     3,     5,     6,     0,   134,   136,
     158,     0,   159,     0,   138,     0,   187,     0,   195,   189,
     160,     0,     1,     4,   132,     0,   140,   142,   135,   137,
       0,   161,     0,   177,   139,     0,    23,     8,     0,     0,
     194,   191,   188,   200,   197,   196,   190,     0,   133,     0,
       7,   168,     0,   165,     0,   170,     0,   185,     0,   181,
     183,     0,     0,    19,     0,    18,    48,    46,    34,    53,
      77,    33,    47,    79,    80,    81,     0,     0,    78,    82,
      83,    29,     0,    56,    58,    59,    60,    26,     9,     0,
       0,    10,     0,     0,    11,    12,     0,     0,    13,     0,
       0,     0,    14,     0,    61,    55,    71,    84,     0,     0,
      86,    90,    93,    96,   101,   104,   106,   108,   110,   112,
     114,   116,   130,     0,    24,     0,    54,   206,     0,   202,
     203,    84,   129,     0,    54,   201,   198,   141,   142,     0,
     224,   143,   169,   162,   166,     0,   167,   172,   174,   171,
       0,     0,   179,     0,     0,    50,    49,     0,    73,    72,
       0,   209,     0,     0,     0,    22,     0,    25,    21,    27,
       0,     0,     0,     0,     0,    52,     0,    68,    67,     0,
       0,     0,     0,    63,   118,   121,   124,   125,   122,   123,
     119,   120,   126,   128,   127,     0,     0,    75,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,   222,   218,   205,   211,   207,   213,   193,
       0,   192,   227,     0,   176,     0,     0,   163,   182,   184,
     178,    57,     0,   211,   210,     0,    17,     0,    20,     0,
       0,     0,     0,     0,     0,    51,    66,    65,     0,    69,
       0,   117,     0,    87,    88,    89,    91,    92,    95,    94,
      97,    98,    99,   100,   103,   102,   105,   107,   109,   111,
     113,     0,   131,    15,     0,     0,     0,   212,     0,     0,
     221,   217,   204,     0,   225,   173,   175,    85,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    62,    76,
       0,   220,   214,   216,     0,     0,   226,   228,    32,    30,
       0,     0,     0,     0,     0,    36,     0,    70,   115,   219,
     215,    35,     0,    45,     0,     0,     0,     0,     0,     0,
       0,    31,    42,    43,     0,    44,     0,     0,     0,    37,
      39,    40,    41,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -232,  -232,  -232,   340,  -232,  -110,  -232,  -232,  -232,   -25,
    -232,   257,  -232,  -232,  -232,  -232,  -232,  -232,  -232,   177,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,   -58,  -232,  -232,
    -122,    39,    81,    87,    91,   140,   146,   155,   176,   178,
    -232,   -51,   -19,  -232,   -45,     2,   -31,    17,  -232,   350,
    -232,    83,  -232,  -232,   343,   -67,   -27,  -232,   169,  -232,
    -232,   354,   259,  -232,   210,    -6,   -33,   -29,  -232,  -232,
     -56,  -232,   181,     0,   225,  -134,  -231,  -232,  -153,  -232
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   352,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   278,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   215,   153,   143,    26,   147,    45,    46,
      28,    29,    30,    31,    72,    73,    74,   166,   167,    32,
      33,    78,    79,    80,    34,    35,    36,    37,    38,    65,
     304,   149,   150,   154,   182,   305,   248,    40,   161,   253
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      39,   151,   148,   189,    62,   164,   252,   218,   152,    64,
      57,   194,    41,   247,    55,   307,    56,    27,    39,   236,
      17,    47,    70,    39,   144,    69,   171,    39,   238,    42,
     330,    51,   307,    53,    18,   172,   156,    39,   178,   179,
      27,    76,   237,    19,   162,    48,    49,   264,   169,    66,
     160,    54,   151,   197,   198,   146,    81,   219,   220,   152,
      55,   158,    56,   238,   173,   184,   183,    39,   168,   261,
     217,   151,   145,   266,    39,   181,   189,    20,   199,   171,
      77,   187,   165,   200,    44,    18,    18,   201,   260,   202,
     221,   226,   227,   203,    19,    19,   313,   283,   284,   285,
     238,    20,    20,   164,   180,   314,   319,   151,    18,   228,
     229,   238,   146,   146,   152,   151,   232,    19,   246,   328,
     254,   146,   152,    50,    20,   196,   238,    19,   259,   145,
     303,   238,   320,    71,    52,   222,   223,   324,    19,   158,
     160,   245,   241,   317,   242,    39,    67,    39,   243,    68,
     244,    19,   263,   175,    71,    71,   190,   318,    71,    71,
     337,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   180,
     176,   326,   279,   146,   151,    71,   146,   327,   191,   181,
     192,   152,   269,   270,   272,   273,   281,   306,   151,   276,
     277,   224,   225,   238,   280,   152,   239,   151,   204,   338,
     339,   316,   246,    62,   345,   205,   206,   207,   180,   302,
     208,   209,   210,   211,   193,   238,   212,   213,   214,   234,
     353,   354,   238,   263,   233,    41,   235,   238,   360,   301,
     146,    39,   361,   364,   362,   363,    39,   365,    63,   168,
     240,   151,   334,    71,   370,    39,   371,   372,   152,   238,
      75,   286,   287,   374,   335,   366,   238,   146,   241,   275,
     242,   249,   151,   322,   243,   155,   244,    19,   250,   348,
     238,    75,    75,   323,    20,    75,    75,   238,   238,    90,
     251,   342,   238,   373,   160,   359,   230,   231,    93,    71,
      94,    95,    69,    96,    97,   288,   289,   347,    98,   255,
      99,   100,    75,   290,   291,   292,   293,    90,   256,   146,
     146,   294,   295,   341,   146,   344,    93,   346,    94,    95,
     265,    96,    97,   267,    92,    19,    98,   102,    99,   100,
     146,   336,   159,   325,   356,   358,    19,   103,   104,   105,
     106,   329,   146,   331,   146,   146,   332,   146,   349,   333,
     351,   368,   350,    43,   146,   102,   146,   146,   369,   186,
     159,   274,   296,   146,    19,   103,   104,   105,   106,   297,
      75,     1,    82,    83,     2,    84,    85,    86,     3,   298,
       4,     5,     6,    87,    88,     7,     8,     9,    89,    10,
      11,    90,    12,    13,    91,    14,    15,    16,    17,    92,
      93,   299,    94,    95,   300,    96,    97,   157,     1,   170,
      98,     2,    99,   100,   315,     3,    75,     4,     5,     6,
     258,   312,     7,     8,     9,   174,    10,    11,     0,    12,
      13,   282,    14,    15,    16,    17,     0,   101,     0,   102,
       0,     0,     0,   185,    55,     0,    56,     0,    19,   103,
     104,   105,   106,     0,     0,     0,    21,     1,    82,    83,
       2,    84,    85,    86,     3,     0,     4,     5,     6,    87,
      88,     7,     8,     9,    89,    10,    11,    90,    12,    13,
      91,    14,    15,    16,    17,    92,    93,     0,    94,    95,
       0,    96,    97,    21,     1,     0,    98,     2,    99,   100,
       0,     3,     0,     4,     5,     6,     0,     0,     7,     8,
       9,     0,    10,    11,     0,    12,    13,     0,    14,    15,
      16,    17,     0,   101,     0,   102,     0,     0,     0,     0,
      55,     0,    56,     0,    19,   103,   104,   105,   106,   262,
       0,   242,    21,     0,    58,   243,    59,   244,     0,     0,
      60,   308,    61,   309,     0,    20,     0,   310,     0,   311,
       0,     0,   241,     0,   242,     0,     1,     0,   243,     2,
     244,    19,     0,     3,     0,     4,     5,     6,    20,    21,
       7,     8,     9,     0,    10,    11,     0,    12,    13,     0,
      14,    15,    16,    17,     1,     0,     0,     2,     0,     0,
       0,     3,     0,     4,     5,     6,     0,     0,     7,     8,
       9,     0,    10,    11,     0,    12,    13,     0,    14,    15,
      16,    17,   262,     0,   242,     0,     0,     0,   243,     0,
     244,     0,     0,     0,   262,     0,   242,     2,     0,     0,
     243,     3,   244,     4,     0,     6,     0,     0,     7,     8,
      20,    21,    10,    11,    90,     0,    13,     0,     0,    15,
      16,    17,    18,    93,     0,    94,    95,     0,    96,    97,
       0,    19,     0,    98,     0,    99,   100,     2,    20,    21,
       0,     3,     0,     4,     0,     6,     0,     0,     7,     8,
       0,     0,    10,    11,     0,     0,    13,     0,     0,    15,
      16,    17,   102,     0,     0,     0,     0,     0,     0,     0,
       0,    19,   103,   104,   105,   106,     2,     0,     0,    21,
       3,     0,     4,     0,     6,     0,     0,     7,     8,     0,
       0,    10,    11,     0,     0,    13,     0,     0,    15,    16,
      17,     2,     0,     0,     0,     3,   163,     4,     0,     6,
       0,     0,     7,     8,     0,     0,    10,    11,     0,    21,
      13,     0,     0,    15,    16,    17,     0,     0,     0,     0,
       0,     0,    82,    83,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,    88,   257,     0,     0,    89,     0,
       0,    90,     0,     0,    91,     0,     0,     0,    21,    92,
      93,     0,    94,    95,     0,    96,    97,     0,     0,     0,
      98,     0,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,     0,   102,
       0,     0,     0,   188,    55,     0,    56,     0,    19,   103,
     104,   105,   106,    82,    83,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,    88,     0,     0,     0,    89,
       0,     0,    90,     0,     0,    91,     0,     0,     0,     0,
      92,    93,     0,    94,    95,     0,    96,    97,     0,     0,
       0,    98,     0,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
     102,     0,     0,     0,   268,    55,     0,    56,     0,    19,
     103,   104,   105,   106,    82,    83,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,    88,     0,     0,     0,
      89,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,    92,    93,     0,    94,    95,     0,    96,    97,    90,
       0,     0,    98,     0,    99,   100,     0,     0,    93,     0,
      94,    95,     0,    96,    97,     0,     0,     0,    98,     0,
      99,   100,     0,     0,     0,     0,     0,     0,     0,   101,
       0,   102,     0,     0,     0,     0,    55,     0,    56,     0,
      19,   103,   104,   105,   106,   195,     0,   102,     0,     0,
       0,     0,    90,     0,     0,     0,    19,   103,   104,   105,
     106,    93,     0,    94,    95,     0,    96,    97,    90,     0,
       0,    98,     0,    99,   100,     0,     0,    93,     0,    94,
      95,     0,    96,    97,     0,     0,     0,    98,     0,    99,
     100,     0,     0,     0,     0,     0,     0,     0,   271,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,    19,
     103,   104,   105,   106,   321,     0,   102,     0,     0,     0,
       0,    90,     0,     0,     0,    19,   103,   104,   105,   106,
      93,     0,    94,    95,     0,    96,    97,    90,     0,     0,
      98,     0,    99,   100,     0,     0,    93,     0,    94,    95,
       0,    96,    97,    90,     0,     0,    98,     0,    99,   100,
       0,     0,    93,     0,    94,    95,     0,    96,    97,   102,
     340,     0,    98,     0,    99,   100,     0,     0,    19,   103,
     104,   105,   106,   343,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,    19,   103,   104,   105,   106,     0,
       0,   102,   355,     0,     0,     0,    90,     0,     0,     0,
      19,   103,   104,   105,   106,    93,     0,    94,    95,     0,
      96,    97,    90,     0,     0,    98,     0,    99,   100,     0,
       0,    93,     0,    94,    95,     0,    96,    97,    90,     0,
       0,    98,     0,    99,   100,     0,     0,    93,     0,    94,
      95,     0,    96,    97,   102,   357,     0,    98,     0,    99,
     100,     0,     0,    19,   103,   104,   105,   106,     0,     0,
     102,   367,     0,     0,     0,     0,     0,     0,     0,    19,
     103,   104,   105,   106,     0,     0,   102,     0,     0,     0,
       0,    90,     0,     0,     0,    19,   103,   104,   105,   106,
      93,     0,    94,    95,     0,    96,    97,    90,     0,     0,
      98,     0,    99,   100,     0,     0,    93,     0,    94,    95,
       0,    96,    97,     0,     0,     0,    98,     0,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,    19,   103,
     104,   105,   106,     0,     0,   216,     0,     0,     0,     0,
       0,     0,     0,     0,    19,   103,   104,   105,   106
};

static const yytype_int16 yycheck[] =
{
       0,    59,    58,   113,    37,    72,   159,   129,    59,    38,
      35,   121,    18,   147,    76,   246,    78,     0,    18,    47,
      30,    27,    47,    23,    55,    41,    66,    27,    66,     0,
      68,    31,   263,    33,    71,    75,    65,    37,    96,    97,
      23,    76,    70,    80,    71,    28,    29,   181,    75,    72,
      69,    34,   110,    37,    38,    55,    76,    32,    33,   110,
      76,    67,    78,    66,    41,   110,    68,    67,    74,    72,
     128,   129,    55,   183,    74,   102,   186,    87,    62,    66,
      89,   112,    68,    67,    69,    71,    71,    71,    75,    73,
      65,    39,    40,    77,    80,    80,    66,   219,   220,   221,
      66,    87,    87,   170,   102,    75,    72,   165,    71,    57,
      58,    66,   112,   113,   165,   173,    42,    80,   147,    74,
     165,   121,   173,    76,    87,   123,    66,    80,   173,   112,
     240,    66,    72,    50,    76,    34,    35,    72,    80,   145,
     159,   147,    71,   265,    73,   145,    66,   147,    77,    69,
      79,    80,   181,    69,    71,    72,    71,   267,    75,    76,
     313,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   177,
      69,    66,   201,   183,   242,   102,   186,    72,    71,   216,
      71,   242,   190,   191,   192,   193,   215,   242,   256,   199,
     200,    63,    64,    66,   202,   256,    69,   265,    41,   319,
     320,   256,   241,   246,   324,    48,    49,    50,   216,   238,
      53,    54,    55,    56,    71,    66,    59,    60,    61,    43,
     340,    72,    66,   262,    36,   241,    46,    66,    72,   237,
     240,   241,   352,    72,   354,   355,   246,   357,    38,   255,
      68,   309,   308,   170,   364,   255,   366,   367,   309,    66,
      50,   222,   223,   373,   309,    72,    66,   267,    71,    69,
      73,    72,   330,   271,    77,    65,    79,    80,    66,   330,
      66,    71,    72,    69,    87,    75,    76,    66,    66,    23,
      74,    69,    66,    72,   313,    69,    51,    52,    32,   216,
      34,    35,    41,    37,    38,   224,   225,   326,    42,    66,
      44,    45,   102,   226,   227,   228,   229,    23,    68,   319,
     320,   230,   231,   321,   324,   323,    32,   325,    34,    35,
      72,    37,    38,    68,    31,    80,    42,    71,    44,    45,
     340,    75,    76,    71,   342,   343,    80,    81,    82,    83,
      84,    72,   352,    72,   354,   355,    72,   357,    72,    74,
      11,   359,    74,    23,   364,    71,   366,   367,    69,   112,
      76,   194,   232,   373,    80,    81,    82,    83,    84,   233,
     170,     3,     4,     5,     6,     7,     8,     9,    10,   234,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,   235,    34,    35,   236,    37,    38,    67,     3,    76,
      42,     6,    44,    45,   255,    10,   216,    12,    13,    14,
     171,   250,    17,    18,    19,    81,    21,    22,    -1,    24,
      25,   216,    27,    28,    29,    30,    -1,    69,    -1,    71,
      -1,    -1,    -1,    75,    76,    -1,    78,    -1,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    88,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      -1,    37,    38,    88,     3,    -1,    42,     6,    44,    45,
      -1,    10,    -1,    12,    13,    14,    -1,    -1,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    -1,    27,    28,
      29,    30,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    81,    82,    83,    84,    71,
      -1,    73,    88,    -1,    71,    77,    73,    79,    -1,    -1,
      77,    71,    79,    73,    -1,    87,    -1,    77,    -1,    79,
      -1,    -1,    71,    -1,    73,    -1,     3,    -1,    77,     6,
      79,    80,    -1,    10,    -1,    12,    13,    14,    87,    88,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,    -1,
      27,    28,    29,    30,     3,    -1,    -1,     6,    -1,    -1,
      -1,    10,    -1,    12,    13,    14,    -1,    -1,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    -1,    27,    28,
      29,    30,    71,    -1,    73,    -1,    -1,    -1,    77,    -1,
      79,    -1,    -1,    -1,    71,    -1,    73,     6,    -1,    -1,
      77,    10,    79,    12,    -1,    14,    -1,    -1,    17,    18,
      87,    88,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      29,    30,    71,    32,    -1,    34,    35,    -1,    37,    38,
      -1,    80,    -1,    42,    -1,    44,    45,     6,    87,    88,
      -1,    10,    -1,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,     6,    -1,    -1,    88,
      10,    -1,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
      -1,    21,    22,    -1,    -1,    25,    -1,    -1,    28,    29,
      30,     6,    -1,    -1,    -1,    10,    75,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    21,    22,    -1,    88,
      25,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    75,    -1,    -1,    20,    -1,
      -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    88,    31,
      32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    -1,    -1,    75,    76,    -1,    78,    -1,    80,    81,
      82,    83,    84,     4,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      31,    32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    -1,    -1,    75,    76,    -1,    78,    -1,    80,
      81,    82,    83,    84,     4,     5,    -1,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    35,    -1,    37,    38,    23,
      -1,    -1,    42,    -1,    44,    45,    -1,    -1,    32,    -1,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    42,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,
      80,    81,    82,    83,    84,    69,    -1,    71,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    32,    -1,    34,    35,    -1,    37,    38,    23,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    32,    -1,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    42,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    69,    -1,    71,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      32,    -1,    34,    35,    -1,    37,    38,    23,    -1,    -1,
      42,    -1,    44,    45,    -1,    -1,    32,    -1,    34,    35,
      -1,    37,    38,    23,    -1,    -1,    42,    -1,    44,    45,
      -1,    -1,    32,    -1,    34,    35,    -1,    37,    38,    71,
      72,    -1,    42,    -1,    44,    45,    -1,    -1,    80,    81,
      82,    83,    84,    69,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,
      -1,    71,    72,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    32,    -1,    34,    35,    -1,
      37,    38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    32,    -1,    34,    35,    -1,    37,    38,    23,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    32,    -1,    34,
      35,    -1,    37,    38,    71,    72,    -1,    42,    -1,    44,
      45,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      32,    -1,    34,    35,    -1,    37,    38,    23,    -1,    -1,
      42,    -1,    44,    45,    -1,    -1,    32,    -1,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    42,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    10,    12,    13,    14,    17,    18,    19,
      21,    22,    24,    25,    27,    28,    29,    30,    71,    80,
      87,    88,    91,    92,    93,    94,   136,   137,   140,   141,
     142,   143,   149,   150,   154,   155,   156,   157,   158,   163,
     167,   155,     0,    93,    69,   138,   139,   155,   137,   137,
      76,   163,    76,   163,   137,    76,    78,    99,    71,    73,
      77,    79,   156,   154,   157,   159,    72,    66,    69,    41,
      99,   141,   144,   145,   146,   154,    76,    89,   151,   152,
     153,    76,     4,     5,     7,     8,     9,    15,    16,    20,
      23,    26,    31,    32,    34,    35,    37,    38,    42,    44,
      45,    69,    71,    81,    82,    83,    84,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   135,   136,   137,   163,   137,   160,   161,
     162,   117,   131,   134,   163,   154,   157,   139,   155,    76,
     132,   168,   146,    75,   145,    68,   147,   148,   155,   146,
     144,    66,    75,    41,   151,    69,    69,    71,   117,   117,
     135,   146,   164,    68,   134,    75,   101,   136,    75,    95,
      71,    71,    71,    71,    95,    69,   135,    37,    38,    62,
      67,    71,    73,    77,    41,    48,    49,    50,    53,    54,
      55,    56,    59,    60,    61,   133,    71,   117,   120,    32,
      33,    65,    34,    35,    63,    64,    39,    40,    57,    58,
      51,    52,    42,    36,    43,    46,    47,    70,    66,    69,
      68,    71,    73,    77,    79,   155,   157,   165,   166,    72,
      66,    74,   168,   169,   134,    66,    68,    75,   152,   134,
      75,    72,    71,   157,   165,    72,    95,    68,    75,   135,
     135,    69,   135,   135,   109,    69,   163,   163,   116,   132,
     135,   132,   164,   120,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   124,   124,   125,   126,   127,   128,
     129,   135,   132,    95,   160,   165,   134,   166,    71,    73,
      77,    79,   162,    66,    75,   148,   134,   120,    95,    72,
      72,    69,   135,    69,    72,    71,    66,    72,    74,    72,
      68,    72,    72,    74,   160,   134,    75,   168,    95,    95,
      72,   135,    69,    69,   135,    95,   135,   132,   131,    72,
      74,    11,   106,    95,    72,    72,   135,    72,   135,    69,
      72,    95,    95,    95,    72,    95,    72,    72,   135,    69,
      95,    95,    95,    72,    95
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
#line 1817 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1823 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1831 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1837 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1843 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 93 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1851 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1859 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1865 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1871 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1877 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 106 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1883 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 107 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1889 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 108 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1895 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 110 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1903 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 114 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1911 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 118 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1919 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 122 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DEFAULT", "default");}
#line 1925 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 123 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CASE", "case");}
#line 1931 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 125 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1939 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 129 "src/compiler_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1947 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1955 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 136 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 1961 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1967 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 139 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 1975 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 143 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1981 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 1989 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 1995 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = NULL; }
#line 2001 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2009 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 155 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2017 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "src/compiler_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2025 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 163 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", "switch");}
#line 2031 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 164 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", "if");}
#line 2037 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 165 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", "else" );}
#line 2043 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "src/compiler_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2051 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2059 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 175 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2067 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 179 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2075 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 183 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2083 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 187 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2091 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 191 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2099 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 195 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2107 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 199 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2115 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 203 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2123 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 207 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", "for");}
#line 2129 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 208 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", "while");}
#line 2135 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 209 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", "do");}
#line 2141 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 211 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "continue");}
#line 2147 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 212 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "break");}
#line 2153 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 214 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2161 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 218 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2169 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 224 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", "return");}
#line 2175 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 226 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2181 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 227 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2187 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 228 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2193 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 230 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION","", branches, branch_notes);}
#line 2201 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 234 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2207 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 235 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text), 0, 8)))); }
#line 2213 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 236 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2219 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 240 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2225 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 241 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","array_indexing", branches, branch_notes);}
#line 2233 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 245 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","fn_call", branches, branch_notes);}
#line 2241 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 249 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","fn_call", branches, branch_notes);}
#line 2249 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 253 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","struct member access", branches, branch_notes);}
#line 2257 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 257 "src/compiler_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}
#line 2265 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 261 "src/compiler_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2273 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 265 "src/compiler_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2281 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 269 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                             std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                             (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2289 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 274 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2297 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 278 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2303 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 279 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2311 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 283 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2319 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 287 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2327 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 291 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2335 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 295 "src/compiler_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2343 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 299 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", "size_of");}
#line 2349 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 301 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","and");}
#line 2355 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 302 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","times");}
#line 2361 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 303 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","plus");}
#line 2367 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 304 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","minus");}
#line 2373 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 305 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","bitwise_not");}
#line 2379 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 306 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","logical_not");}
#line 2385 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 308 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2391 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 309 "src/compiler_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("CAST_EXPRESSION","", branches, branch_notes);}
#line 2399 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 313 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2405 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 314 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2413 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 318 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2421 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 322 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","%", branches, branch_notes);}
#line 2429 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 326 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2435 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 327 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2443 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 331 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2451 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 335 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2457 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 336 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("SHIFT_EXPRESSION","<<", branches, branch_notes);}
#line 2465 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 340 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("SHIFT_EXPRESSION",">>", branches, branch_notes);}
#line 2473 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 344 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2479 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 345 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2487 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 349 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2495 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 353 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2503 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 357 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2511 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 361 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2517 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 362 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2525 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 366 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2533 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 370 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2539 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 371 "src/compiler_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","&", branches, branch_notes);}
#line 2547 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 375 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2553 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 376 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","^", branches, branch_notes);}
#line 2561 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 380 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2567 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 381 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","|", branches, branch_notes);}
#line 2575 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 385 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2581 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 386 "src/compiler_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","&&", branches, branch_notes);}
#line 2589 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 390 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2595 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 391 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","||", branches, branch_notes);}
#line 2603 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 395 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2609 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 396 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2617 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 400 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2623 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 401 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2631 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 405 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "=");}
#line 2637 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 406 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "*=");}
#line 2643 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 407 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "/=");}
#line 2649 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 408 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "%=");}
#line 2655 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 409 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "+=");}
#line 2661 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 410 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "-=");}
#line 2667 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 411 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "<<=");}
#line 2673 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 412 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", ">>=");}
#line 2679 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 413 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "&=");}
#line 2685 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 414 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "^=");}
#line 2691 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 415 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "|=");}
#line 2697 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 417 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2703 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 419 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2709 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 420 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2717 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 425 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2725 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 429 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2733 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 433 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2739 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 434 "src/compiler_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2747 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 438 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2753 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 439 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2761 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 443 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2767 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 444 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2775 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 448 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2781 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 449 "src/compiler_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2789 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 453 "src/compiler_parser.y" /* yacc.c:1646  */
    {													std::vector<ast_node*> branches = {(yyvsp[0].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","just a declarator", branches, branch_notes);}
#line 2797 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 457 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2805 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 461 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "typedef");}
#line 2811 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 462 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "extern");}
#line 2817 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 463 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "static");}
#line 2823 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 464 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "auto");}
#line 2829 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 465 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "register");}
#line 2835 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 467 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "void");}
#line 2841 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 468 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "char");}
#line 2847 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 469 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "short");}
#line 2853 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 470 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "int");}
#line 2859 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 471 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "long");}
#line 2865 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 472 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "float");}
#line 2871 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 473 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "double");}
#line 2877 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 474 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "signed");}
#line 2883 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 475 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "unsigned");}
#line 2889 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 476 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2895 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 477 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2901 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 478 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2907 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 480 "src/compiler_parser.y" /* yacc.c:1646  */
    {                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2915 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 484 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2923 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 488 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2931 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 492 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", "struct");}
#line 2937 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 495 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2943 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 496 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}
#line 2951 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 500 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}
#line 2959 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 504 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2965 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 506 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 2973 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 510 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2979 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 512 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 2987 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 516 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2993 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 517 "src/compiler_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}
#line 3001 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 521 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 3007 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 522 "src/compiler_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3015 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 526 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3023 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 530 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3031 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 534 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3039 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 538 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3047 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 542 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM", "enum");}
#line 3053 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 544 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3059 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 545 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3067 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 549 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3073 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 550 "src/compiler_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR","", branches, branch_notes);}
#line 3081 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 554 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3087 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 556 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER", "volatile");}
#line 3093 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 558 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3099 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 559 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATOR","", branches, branch_notes);}
#line 3107 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 563 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3113 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 565 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3119 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 567 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}
#line 3127 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 571 "src/compiler_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}
#line 3135 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 575 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}
#line 3143 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 579 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}
#line 3151 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 584 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3157 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 585 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3165 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 589 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3173 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 593 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3181 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 597 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3187 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 599 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3193 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 600 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3201 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 604 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3207 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 611 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3215 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 615 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3223 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 619 "src/compiler_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3231 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 623 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3237 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 625 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3245 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 634 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3251 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 636 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3257 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 637 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 3265 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 641 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3271 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 643 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3279 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 647 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3285 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 649 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3291 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 651 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3299 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 655 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3307 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 659 "src/compiler_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3315 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 663 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3321 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 665 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3329 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 669 "src/compiler_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3337 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 673 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3345 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 677 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3351 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 679 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text));}
#line 3357 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 681 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3363 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 683 "src/compiler_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3371 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 687 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3379 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 691 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3385 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 692 "src/compiler_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 3393 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3397 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
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
#line 699 "src/compiler_parser.y" /* yacc.c:1906  */


ast_node *g_root;

ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
