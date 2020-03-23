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
#define YYLAST   1471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  233
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  384

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
     105,   109,   110,   111,   112,   113,   114,   116,   120,   124,
     128,   129,   131,   135,   139,   142,   144,   145,   149,   150,
     154,   155,   157,   161,   165,   169,   170,   171,   173,   177,
     181,   185,   189,   193,   197,   201,   205,   209,   213,   214,
     215,   217,   218,   220,   224,   230,   232,   233,   234,   236,
     240,   241,   242,   246,   247,   251,   255,   259,   263,   267,
     271,   275,   276,   280,   281,   285,   289,   293,   297,   301,
     303,   304,   305,   306,   307,   308,   310,   311,   315,   316,
     320,   324,   328,   329,   333,   337,   338,   342,   346,   347,
     351,   355,   359,   363,   364,   368,   372,   373,   377,   378,
     382,   383,   387,   388,   392,   393,   397,   398,   402,   403,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   419,   421,   422,   426,   430,   434,   435,   439,   440,
     444,   445,   449,   450,   454,   458,   462,   463,   464,   465,
     466,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   481,   485,   489,   493,   496,   497,   501,
     505,   507,   511,   513,   517,   518,   522,   523,   527,   531,
     535,   539,   543,   545,   546,   550,   551,   555,   557,   559,
     560,   564,   566,   568,   572,   576,   580,   584,   588,   589,
     593,   597,   601,   603,   604,   608,   615,   616,   620,   624,
     626,   630,   631,   635,   637,   638,   642,   644,   648,   650,
     652,   656,   660,   664,   666,   670,   674,   678,   680,   682,
     684,   688,   692,   693
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

#define YYPACT_NINF -236

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-236)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     282,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,    -8,  -236,
    -236,  -236,    32,   282,  -236,  -236,  -236,    55,   439,   439,
    -236,   -31,  -236,   -26,   439,   625,   585,   -52,   -21,  -236,
    -236,   -46,  -236,  -236,  -236,    96,  -236,   313,  -236,  -236,
     798,   -24,   -74,    11,  -236,   488,  -236,  -236,   625,  -236,
      55,   669,  1318,  -236,  -236,   585,  -236,  -236,   -21,  -236,
      -8,  -236,  1063,  -236,   625,   798,   734,  -236,    63,   798,
     798,  -236,     7,  -236,   -20,   -74,    29,  -236,    49,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    1371,  1371,  -236,  -236,  -236,  -236,   694,  -236,  -236,  -236,
    -236,  -236,  -236,    61,  1318,  -236,   402,   831,  -236,  -236,
      73,    84,  -236,    93,   142,   993,  -236,  1079,  -236,  -236,
     159,   532,  1387,  1318,  -236,     9,   165,   156,    45,   199,
      91,   191,   186,   215,   -40,  -236,  -236,   135,   177,  -236,
    -236,   225,   586,   195,   208,  -236,    -4,  -236,  -236,  -236,
     212,  -236,  -236,  -236,  -236,  1063,  -236,  -236,  -236,  -236,
    -236,  -236,  1318,   218,  -236,   223,  -236,   773,   -74,  -236,
    1318,    39,  -236,  -236,  1318,  -236,  -236,    20,   801,   221,
     993,   230,  -236,   912,  -236,  -236,  1318,  1318,  1132,  1318,
     271,  -236,   162,  -236,  -236,   228,   228,  1318,  1318,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  1318,   694,  -236,  -236,  1318,  1318,  1318,  1318,  1318,
    1318,  1318,  1318,  1318,  1318,  1318,  1318,  1318,  1318,  1318,
    1318,  1318,  1318,  1318,  1318,  -236,   993,   525,  1318,  -236,
    -236,  -236,   210,  -236,   664,  -236,   439,   228,  -236,  -236,
    -236,    62,  -236,    63,  1318,  -236,  -236,  -236,  -236,  -236,
     597,   779,  -236,  1318,  -236,   993,  -236,    40,    64,  1148,
     169,    74,   242,  -236,  -236,  -236,    82,  -236,   -27,  -236,
     243,  -236,  -236,  -236,     9,     9,   165,   165,   156,   156,
     156,   156,    45,    45,   199,    91,   191,   186,   215,   143,
    -236,  -236,   245,   246,   240,   664,   439,  1318,  -236,  -236,
    -236,  -236,  1009,  -236,  -236,  -236,  -236,  -236,   993,   993,
    1201,   173,  1217,   993,  1318,  1318,  -236,  -236,  -236,  1318,
    -236,  -236,  -236,   248,   247,  -236,  -236,  -236,   325,   993,
      85,  1233,  1286,   175,  -236,    94,  -236,  -236,  -236,  -236,
    -236,   993,  -236,   993,   993,   122,   993,   123,  1302,   255,
    -236,  -236,  -236,   993,  -236,   993,   993,   136,  -236,  -236,
    -236,  -236,   993,  -236
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   149,   152,   157,   182,   147,   156,   154,   155,   150,
     153,   158,   148,   166,   146,   159,   151,   188,     0,   213,
     202,   228,     0,     2,     3,     5,     6,     0,   136,   138,
     160,     0,   161,     0,   140,     0,   189,     0,   198,   191,
     162,     0,     1,     4,   134,     0,   142,   144,   137,   139,
       0,   163,     0,   179,   141,     0,    25,     8,     0,    26,
       0,     0,     0,   196,   193,   190,   203,   200,   199,   192,
       0,   135,     0,     7,     0,   170,     0,   167,     0,   172,
       0,   187,     0,   183,   185,     0,     0,    21,     0,    20,
      50,    48,    36,    55,    79,    35,    49,    81,    82,    83,
       0,     0,    80,    84,    85,    31,     0,    58,    60,    61,
      62,    28,    11,     0,     0,    12,     0,     0,    13,    14,
       0,     0,    15,     0,     0,     0,    16,     0,    63,    57,
      73,    86,     0,     0,    88,    92,    95,    98,   103,   106,
     108,   110,   112,   114,   116,   118,   132,     0,    56,    10,
      27,   144,   209,     0,   205,   206,     0,   211,    86,   131,
       0,    56,   204,   201,   143,     0,   229,   145,     9,   171,
     164,   168,     0,   169,   174,   176,   173,     0,     0,   181,
       0,     0,    52,    51,     0,    75,    74,     0,   214,     0,
       0,     0,    24,     0,    23,    29,     0,     0,     0,     0,
       0,    54,     0,    70,    69,     0,     0,     0,     0,    65,
     120,   123,   126,   127,   124,   125,   121,   122,   128,   130,
     129,     0,     0,    77,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,   227,
     223,   208,   216,   210,   218,   195,     0,     0,   197,   194,
     232,     0,   178,     0,     0,   165,   184,   186,   180,    59,
       0,   216,   215,     0,    19,     0,    22,     0,     0,     0,
       0,     0,     0,    53,    68,    67,     0,    71,     0,   119,
       0,    89,    90,    91,    93,    94,    97,    96,    99,   100,
     101,   102,   105,   104,   107,   109,   111,   113,   115,     0,
     133,    17,     0,     0,     0,   217,     0,     0,   226,   222,
     207,   212,     0,   230,   175,   177,    87,    18,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    64,    78,     0,
     225,   219,   221,     0,     0,   231,   233,    34,    32,     0,
       0,     0,     0,     0,    38,     0,    72,   117,   224,   220,
      37,     0,    47,     0,     0,     0,     0,     0,     0,     0,
      33,    44,    45,     0,    46,     0,     0,     0,    39,    41,
      42,    43,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -236,  -236,  -236,   316,  -236,    22,  -236,  -236,  -236,    46,
      33,   229,  -236,  -236,  -236,  -236,  -236,  -236,  -236,   144,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,   -57,  -236,  -236,
    -117,    30,    24,    38,    43,   108,   109,   107,   111,   115,
    -236,   -61,   -58,  -236,  -103,    26,    25,     6,  -236,   289,
    -236,    15,  -236,  -236,   285,   -64,   -55,  -236,   104,  -236,
    -236,   283,   194,  -236,    21,   -14,   -34,   -30,  -236,  -236,
     -51,  -236,   118,  -236,     0,   157,  -130,  -235,  -236,  -163,
    -236
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,   111,   112,   113,   114,   115,
      58,   117,   118,   119,   120,   121,   361,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   286,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   221,   160,   147,    59,    60,    45,    46,
      28,    29,    30,    31,    76,    77,    78,   173,   174,    32,
      33,    82,    83,    84,    34,    35,    36,    37,    38,    68,
     312,   154,   155,   156,   161,   189,   313,   254,    40,   167,
     261
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      39,   159,   260,    65,    41,   158,    27,   242,    67,    17,
     153,   191,   171,    47,   166,    81,   224,   315,    39,    18,
     169,   180,   253,    39,   176,    26,    69,    39,    19,    27,
     243,    51,    42,    53,    48,    49,   315,    39,   163,   244,
      54,   225,   226,   185,   186,    50,   151,   337,    26,    19,
      52,   188,    80,   159,    19,   148,   151,   158,   272,    66,
      39,   157,   257,    18,   175,    75,    20,   152,   258,   262,
      39,    79,    19,   178,   227,   223,   158,   267,    39,    20,
      74,    57,   179,   150,   232,   233,   244,    85,   116,   162,
      75,    75,   269,    73,    75,    75,    79,    79,   182,   150,
      79,    79,   234,   235,   149,   178,   244,   166,   291,   292,
     293,   159,   328,   171,   268,   158,   148,   148,   183,   159,
     168,    75,   252,   158,    44,   148,    18,    79,   322,   190,
     244,   172,   187,   238,    18,    19,   329,   323,   251,   195,
     244,   150,    20,    19,   196,   314,   333,   200,   335,   287,
      20,   244,    39,   202,   336,   197,   326,   363,   271,   346,
     244,   325,    70,   289,   198,    71,   369,   188,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   310,   159,   244,   244,
     148,   158,    75,   148,   373,   375,   203,   204,    79,   228,
     229,   244,   244,   159,   245,   284,   285,   158,   382,   244,
     187,   339,   274,   199,   344,   195,   158,   252,    65,   230,
     231,   205,   277,   278,   280,   281,   206,   239,   244,   240,
     207,   283,   208,    41,   288,   244,   209,    75,   332,   244,
     271,   244,   351,    79,   368,   246,   148,    39,   187,   175,
     236,   237,    39,   152,   296,   297,   159,   321,   294,   295,
     158,   241,   152,    39,   166,   343,    72,   255,   311,   309,
     298,   299,   300,   301,   256,   148,   152,   356,   357,   302,
     303,   247,   158,   248,   263,     1,   259,   249,     2,   250,
      19,   264,     3,   273,     4,     5,     6,   327,   275,     7,
       8,     9,    96,    10,    11,   331,    12,    13,    19,    14,
      15,    16,    17,   334,   342,   338,     1,   340,   341,     2,
     358,   359,   152,     3,   378,     4,     5,     6,   148,   148,
       7,     8,     9,   148,    10,    11,   360,    12,    13,    43,
      14,    15,    16,    17,   282,   193,   304,   306,   305,   148,
     347,   348,   307,    18,    72,   354,   350,   308,   353,   164,
     355,   148,    19,   148,   148,   177,   148,   324,   181,    20,
      21,   362,   266,   148,   320,   148,   148,   365,   367,   290,
       0,     0,   148,   370,     0,   371,   372,     0,   374,    55,
       0,    56,     0,     0,   377,   379,     0,   380,   381,     0,
       0,    21,     0,     0,   383,     1,    86,    87,     2,    88,
      89,    90,     3,     0,     4,     5,     6,    91,    92,     7,
       8,     9,    93,    10,    11,    94,    12,    13,    95,    14,
      15,    16,    17,    96,    97,     0,    98,    99,     0,   100,
     101,     0,     1,     0,   102,     2,   103,   104,     0,     3,
       0,     4,     5,     6,     0,     0,     7,     8,     9,     0,
      10,    11,     0,    12,    13,     0,    14,    15,    16,    17,
       0,   105,     0,   106,     0,     0,     0,   192,    55,     0,
      56,     0,    19,   107,   108,   109,   110,     0,     0,     0,
      21,     1,    86,    87,     2,    88,    89,    90,     3,     0,
       4,     5,     6,    91,    92,     7,     8,     9,    93,    10,
      11,    94,    12,    13,    95,    14,    15,    16,    17,    96,
      97,     0,    98,    99,     0,   100,   101,    21,     1,     0,
     102,     2,   103,   104,     0,     3,     0,     4,     5,     6,
       0,     0,     7,     8,     9,     0,    10,    11,     0,    12,
      13,     0,    14,    15,    16,    17,     0,   105,     0,   106,
       0,     0,     0,     0,    55,     0,    56,     0,    19,   107,
     108,   109,   110,   210,     0,     0,    21,     0,     0,     0,
     211,   212,   213,     0,     0,   214,   215,   216,   217,     0,
       0,   218,   219,   220,     0,     0,   247,     0,   248,     0,
       1,     0,   249,     2,   250,    19,     0,     3,     0,     4,
       5,     6,    20,    21,     7,     8,     9,     0,    10,    11,
       0,    12,    13,     0,    14,    15,    16,    17,     1,     0,
       0,     2,     0,     0,     0,     3,     0,     4,     5,     6,
       0,     0,     7,     8,     9,     0,    10,    11,     0,    12,
      13,     0,    14,    15,    16,    17,    61,   247,    62,   248,
       0,     0,    63,   249,    64,   250,    19,     0,   270,     0,
     248,     0,     1,    20,   249,     2,   250,     0,     0,     3,
       0,     4,     5,     6,    20,    21,     7,     8,     9,     0,
      10,    11,     0,    12,    13,     0,    14,    15,    16,    17,
       2,    55,     0,    56,     3,     0,     4,     0,     6,     0,
       0,     7,     8,    21,     0,    10,    11,    94,     0,    13,
       0,     0,    15,    16,    17,     0,    97,     0,    98,    99,
       0,   100,   101,     0,     0,   316,   102,   317,   103,   104,
       2,   318,     0,   319,     3,     0,     4,     0,     6,    19,
       0,     7,     8,     0,     0,    10,    11,    21,     0,    13,
       0,     0,    15,    16,    17,   106,     0,     0,     0,     0,
       0,     0,     0,     0,    19,   107,   108,   109,   110,     2,
       0,     0,    21,     3,     0,     4,     0,     6,     0,     0,
       7,     8,     0,     0,    10,    11,     0,     0,    13,     0,
       0,    15,    16,    17,     2,     0,     0,     0,     3,   170,
       4,     0,     6,     0,     0,     7,     8,     0,     0,    10,
      11,     0,    21,    13,     0,     0,    15,    16,    17,     0,
       0,     0,     0,     0,     0,    86,    87,     0,    88,    89,
      90,     0,     0,     0,     0,     0,    91,    92,   265,     0,
     270,    93,   248,     0,    94,     0,   249,    95,   250,     0,
       0,    21,    96,    97,     0,    98,    99,     0,   100,   101,
       0,     0,   270,   102,   248,   103,   104,     0,   249,     0,
     250,     0,     0,     0,     0,     0,    21,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,   106,     0,     0,     0,   194,    55,     0,    56,
       0,    19,   107,   108,   109,   110,    86,    87,     0,    88,
      89,    90,     0,     0,     0,     0,     0,    91,    92,     0,
       0,     0,    93,     0,     0,    94,     0,     0,    95,     0,
       0,     0,     0,    96,    97,     0,    98,    99,     0,   100,
     101,     0,     0,     0,   102,     0,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,     0,   106,     0,     0,     0,   276,    55,     0,
      56,     0,    19,   107,   108,   109,   110,    86,    87,     0,
      88,    89,    90,     0,     0,     0,     0,     0,    91,    92,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
       0,     0,     0,     0,    96,    97,     0,    98,    99,     0,
     100,   101,    94,     0,     0,   102,     0,   103,   104,     0,
       0,    97,     0,    98,    99,     0,   100,   101,     0,     0,
       0,   102,     0,   103,   104,     0,     0,     0,     0,     0,
       0,     0,   105,     0,   106,     0,     0,     0,     0,    55,
       0,    56,     0,    19,   107,   108,   109,   110,     0,     0,
     106,     0,     0,     0,   345,   165,    94,     0,     0,    19,
     107,   108,   109,   110,     0,    97,     0,    98,    99,     0,
     100,   101,    94,     0,     0,   102,     0,   103,   104,     0,
       0,    97,     0,    98,    99,     0,   100,   101,     0,     0,
       0,   102,     0,   103,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,     0,     0,     0,   165,
       0,     0,     0,    19,   107,   108,   109,   110,   201,     0,
     106,     0,     0,     0,     0,    94,     0,     0,     0,    19,
     107,   108,   109,   110,    97,     0,    98,    99,     0,   100,
     101,    94,     0,     0,   102,     0,   103,   104,     0,     0,
      97,     0,    98,    99,     0,   100,   101,     0,     0,     0,
     102,     0,   103,   104,     0,     0,     0,     0,     0,     0,
       0,   279,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,    19,   107,   108,   109,   110,   330,     0,   106,
       0,     0,     0,     0,    94,     0,     0,     0,    19,   107,
     108,   109,   110,    97,     0,    98,    99,     0,   100,   101,
      94,     0,     0,   102,     0,   103,   104,     0,     0,    97,
       0,    98,    99,     0,   100,   101,    94,     0,     0,   102,
       0,   103,   104,     0,     0,    97,     0,    98,    99,     0,
     100,   101,   106,   349,     0,   102,     0,   103,   104,     0,
       0,    19,   107,   108,   109,   110,   352,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,    19,   107,   108,
     109,   110,     0,     0,   106,   364,     0,     0,     0,    94,
       0,     0,     0,    19,   107,   108,   109,   110,    97,     0,
      98,    99,     0,   100,   101,    94,     0,     0,   102,     0,
     103,   104,     0,     0,    97,     0,    98,    99,     0,   100,
     101,    94,     0,     0,   102,     0,   103,   104,     0,     0,
      97,     0,    98,    99,     0,   100,   101,   106,   366,     0,
     102,     0,   103,   104,     0,     0,    19,   107,   108,   109,
     110,     0,     0,   106,   376,     0,     0,     0,     0,     0,
       0,     0,    19,   107,   108,   109,   110,     0,     0,   106,
       0,     0,     0,     0,    94,     0,     0,     0,    19,   107,
     108,   109,   110,    97,     0,    98,    99,     0,   100,   101,
      94,     0,     0,   102,     0,   103,   104,     0,     0,    97,
       0,    98,    99,     0,   100,   101,     0,     0,     0,   102,
       0,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,     0,     0,     0,     0,     0,     0,
       0,    19,   107,   108,   109,   110,     0,     0,   222,     0,
       0,     0,     0,     0,     0,     0,     0,    19,   107,   108,
     109,   110
};

static const yytype_int16 yycheck[] =
{
       0,    62,   165,    37,    18,    62,     0,    47,    38,    30,
      61,   114,    76,    27,    72,    89,   133,   252,    18,    71,
      75,    41,   152,    23,    79,     0,    72,    27,    80,    23,
      70,    31,     0,    33,    28,    29,   271,    37,    68,    66,
      34,    32,    33,   100,   101,    76,    60,    74,    23,    80,
      76,   106,    76,   114,    80,    55,    70,   114,   188,    38,
      60,    61,    66,    71,    78,    50,    87,    61,    72,   172,
      70,    50,    80,    66,    65,   132,   133,   180,    78,    87,
      47,    35,    75,    58,    39,    40,    66,    76,    55,    68,
      75,    76,    72,    47,    79,    80,    75,    76,    69,    74,
      79,    80,    57,    58,    58,    66,    66,   165,   225,   226,
     227,   172,    72,   177,    75,   172,   116,   117,    69,   180,
      74,   106,   152,   180,    69,   125,    71,   106,    66,    68,
      66,    68,   106,    42,    71,    80,    72,    75,   152,   117,
      66,   116,    87,    80,    71,   248,    72,   125,    66,   207,
      87,    66,   152,   127,    72,    71,   273,    72,   188,   322,
      66,   264,    66,   221,    71,    69,    72,   222,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   244,   248,    66,    66,
     190,   248,   177,   193,    72,    72,    37,    38,   177,    34,
      35,    66,    66,   264,    69,   205,   206,   264,    72,    66,
     184,    68,   190,    71,   317,   193,   273,   247,   252,    63,
      64,    62,   196,   197,   198,   199,    67,    36,    66,    43,
      71,    69,    73,   247,   208,    66,    77,   222,    69,    66,
     270,    66,    69,   222,    69,    68,   246,   247,   222,   263,
      51,    52,   252,   247,   230,   231,   317,   257,   228,   229,
     317,    46,   256,   263,   322,   316,    41,    72,   246,   243,
     232,   233,   234,   235,    66,   275,   270,   335,   339,   236,
     237,    71,   339,    73,    66,     3,    74,    77,     6,    79,
      80,    68,    10,    72,    12,    13,    14,   275,    68,    17,
      18,    19,    31,    21,    22,   279,    24,    25,    80,    27,
      28,    29,    30,    71,    74,    72,     3,    72,    72,     6,
      72,    74,   316,    10,    69,    12,    13,    14,   328,   329,
      17,    18,    19,   333,    21,    22,    11,    24,    25,    23,
      27,    28,    29,    30,   200,   116,   238,   240,   239,   349,
     328,   329,   241,    71,    41,   333,   330,   242,   332,    70,
     334,   361,    80,   363,   364,    80,   366,   263,    85,    87,
      88,   349,   178,   373,   256,   375,   376,   351,   352,   222,
      -1,    -1,   382,   361,    -1,   363,   364,    -1,   366,    76,
      -1,    78,    -1,    -1,   368,   373,    -1,   375,   376,    -1,
      -1,    88,    -1,    -1,   382,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    -1,    37,
      38,    -1,     3,    -1,    42,     6,    44,    45,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    -1,    27,    28,    29,    30,
      -1,    69,    -1,    71,    -1,    -1,    -1,    75,    76,    -1,
      78,    -1,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      88,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    -1,    37,    38,    88,     3,    -1,
      42,     6,    44,    45,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    -1,    27,    28,    29,    30,    -1,    69,    -1,    71,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    81,
      82,    83,    84,    41,    -1,    -1,    88,    -1,    -1,    -1,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      -1,    59,    60,    61,    -1,    -1,    71,    -1,    73,    -1,
       3,    -1,    77,     6,    79,    80,    -1,    10,    -1,    12,
      13,    14,    87,    88,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    -1,    27,    28,    29,    30,     3,    -1,
      -1,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    -1,    27,    28,    29,    30,    71,    71,    73,    73,
      -1,    -1,    77,    77,    79,    79,    80,    -1,    71,    -1,
      73,    -1,     3,    87,    77,     6,    79,    -1,    -1,    10,
      -1,    12,    13,    14,    87,    88,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    -1,    27,    28,    29,    30,
       6,    76,    -1,    78,    10,    -1,    12,    -1,    14,    -1,
      -1,    17,    18,    88,    -1,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    29,    30,    -1,    32,    -1,    34,    35,
      -1,    37,    38,    -1,    -1,    71,    42,    73,    44,    45,
       6,    77,    -1,    79,    10,    -1,    12,    -1,    14,    80,
      -1,    17,    18,    -1,    -1,    21,    22,    88,    -1,    25,
      -1,    -1,    28,    29,    30,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,     6,
      -1,    -1,    88,    10,    -1,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,
      -1,    28,    29,    30,     6,    -1,    -1,    -1,    10,    75,
      12,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    21,
      22,    -1,    88,    25,    -1,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    75,    -1,
      71,    20,    73,    -1,    23,    -1,    77,    26,    79,    -1,
      -1,    88,    31,    32,    -1,    34,    35,    -1,    37,    38,
      -1,    -1,    71,    42,    73,    44,    45,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    88,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    -1,    -1,    75,    76,    -1,    78,
      -1,    80,    81,    82,    83,    84,     4,     5,    -1,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    -1,    -1,    75,    76,    -1,
      78,    -1,    80,    81,    82,    83,    84,     4,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    -1,
      37,    38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    78,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      71,    -1,    -1,    -1,    75,    76,    23,    -1,    -1,    80,
      81,    82,    83,    84,    -1,    32,    -1,    34,    35,    -1,
      37,    38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,
      -1,    32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    69,    -1,
      71,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    32,    -1,    34,    35,    -1,    37,
      38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,
      32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    69,    -1,    71,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    32,    -1,    34,    35,    -1,    37,    38,
      23,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,    32,
      -1,    34,    35,    -1,    37,    38,    23,    -1,    -1,    42,
      -1,    44,    45,    -1,    -1,    32,    -1,    34,    35,    -1,
      37,    38,    71,    72,    -1,    42,    -1,    44,    45,    -1,
      -1,    80,    81,    82,    83,    84,    69,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    -1,    -1,    71,    72,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    32,    -1,
      34,    35,    -1,    37,    38,    23,    -1,    -1,    42,    -1,
      44,    45,    -1,    -1,    32,    -1,    34,    35,    -1,    37,
      38,    23,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,
      32,    -1,    34,    35,    -1,    37,    38,    71,    72,    -1,
      42,    -1,    44,    45,    -1,    -1,    80,    81,    82,    83,
      84,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    32,    -1,    34,    35,    -1,    37,    38,
      23,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,    32,
      -1,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    42,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84
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
      76,   164,    76,   164,   137,    76,    78,    99,   100,   136,
     137,    71,    73,    77,    79,   156,   154,   157,   159,    72,
      66,    69,    41,    99,   100,   141,   144,   145,   146,   154,
      76,    89,   151,   152,   153,    76,     4,     5,     7,     8,
       9,    15,    16,    20,    23,    26,    31,    32,    34,    35,
      37,    38,    42,    44,    45,    69,    71,    81,    82,    83,
      84,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   135,   164,    99,
     136,   155,   137,   160,   161,   162,   163,   164,   117,   131,
     134,   164,   154,   157,   139,    76,   132,   169,    99,   146,
      75,   145,    68,   147,   148,   155,   146,   144,    66,    75,
      41,   151,    69,    69,    71,   117,   117,   135,   146,   165,
      68,   134,    75,   101,    75,    95,    71,    71,    71,    71,
      95,    69,   135,    37,    38,    62,    67,    71,    73,    77,
      41,    48,    49,    50,    53,    54,    55,    56,    59,    60,
      61,   133,    71,   117,   120,    32,    33,    65,    34,    35,
      63,    64,    39,    40,    57,    58,    51,    52,    42,    36,
      43,    46,    47,    70,    66,    69,    68,    71,    73,    77,
      79,   155,   157,   166,   167,    72,    66,    66,    72,    74,
     169,   170,   134,    66,    68,    75,   152,   134,    75,    72,
      71,   157,   166,    72,    95,    68,    75,   135,   135,    69,
     135,   135,   109,    69,   164,   164,   116,   132,   135,   132,
     165,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   124,   124,   125,   126,   127,   128,   129,   135,
     132,    95,   160,   166,   134,   167,    71,    73,    77,    79,
     162,   164,    66,    75,   148,   134,   120,    95,    72,    72,
      69,   135,    69,    72,    71,    66,    72,    74,    72,    68,
      72,    72,    74,   160,   134,    75,   169,    95,    95,    72,
     135,    69,    69,   135,    95,   135,   132,   131,    72,    74,
      11,   106,    95,    72,    72,   135,    72,   135,    69,    72,
      95,    95,    95,    72,    95,    72,    72,   135,    69,    95,
      95,    95,    72,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    98,    99,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   104,   105,   106,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   109,
     110,   111,   111,   111,   111,   112,   113,   113,   113,   113,
     114,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   117,   117,   117,   117,   117,   117,   118,
     119,   119,   119,   119,   119,   119,   120,   120,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   135,   135,   136,   136,   137,   137,   137,   137,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   142,   143,   144,   144,   145,
     146,   146,   146,   146,   147,   147,   148,   148,   148,   149,
     149,   149,   150,   151,   151,   152,   152,   153,   154,   155,
     155,   156,   156,   156,   156,   156,   156,   156,   157,   157,
     157,   157,   158,   159,   159,   160,   161,   161,   162,   162,
     162,   163,   163,   164,   165,   165,   166,   166,   166,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   168,   169,
     169,   169,   170,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     4,
       3,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     1,     4,     3,     3,     1,     1,     2,     1,     2,
       2,     1,     5,     7,     5,     1,     1,     1,     5,     7,
       9,     8,     8,     8,     7,     7,     7,     6,     1,     1,
       1,     2,     2,     3,     2,     1,     1,     1,     1,     3,
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
       1,     1,     1,     2,     4,     5,     1,     1,     2,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     2,     2,
       5,     4,     1,     1,     3,     1,     3,     1,     1,     1,
       2,     1,     3,     2,     4,     4,     2,     4,     1,     2,
       2,     3,     1,     1,     2,     1,     1,     3,     2,     1,
       2,     1,     3,     1,     1,     2,     1,     2,     1,     3,
       4,     3,     2,     1,     4,     3,     2,     1,     1,     1,
       3,     4,     1,     3
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
#line 1851 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1857 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1865 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1871 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1877 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 93 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1885 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr),NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1893 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1901 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 105 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1909 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 109 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1915 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 110 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1921 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 111 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1927 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 112 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1933 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 113 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1939 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 114 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1945 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 116 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1953 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1961 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 124 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1969 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 128 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DEFAULT", "default");}
#line 1975 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 129 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CASE", "case");}
#line 1981 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 131 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1989 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 135 "src/compiler_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1997 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 139 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2005 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 142 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 2011 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 144 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2017 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 145 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 2025 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 149 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2031 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 150 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 2039 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 154 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 2045 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 155 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = NULL; }
#line 2051 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2059 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 161 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2067 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 165 "src/compiler_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2075 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 169 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", "switch");}
#line 2081 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 170 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", "if");}
#line 2087 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", "else" );}
#line 2093 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 173 "src/compiler_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2101 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 177 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2109 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 181 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2117 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 185 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2125 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 189 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2133 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 193 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2141 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2149 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 201 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2157 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 205 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2165 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 209 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2173 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 213 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", "for");}
#line 2179 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 214 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", "while");}
#line 2185 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 215 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", "do");}
#line 2191 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 217 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "continue");}
#line 2197 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 218 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "break");}
#line 2203 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 220 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2211 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 224 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2219 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 230 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", "return");}
#line 2225 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 232 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2231 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 233 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2237 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 234 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2243 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 236 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION","", branches, branch_notes);}
#line 2251 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 240 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2257 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 241 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text), 0, 8)))); }
#line 2263 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 242 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*(yyvsp[0]._text))))); }
#line 2269 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 246 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2275 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 247 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","array_indexing", branches, branch_notes);}
#line 2283 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 251 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","fn_call", branches, branch_notes);}
#line 2291 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 255 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","fn_call", branches, branch_notes);}
#line 2299 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 259 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","struct member access", branches, branch_notes);}
#line 2307 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 263 "src/compiler_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}
#line 2315 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 267 "src/compiler_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2323 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 271 "src/compiler_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2331 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 275 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2337 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 276 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2345 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 280 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2351 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 281 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2359 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 285 "src/compiler_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2367 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 289 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2375 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 293 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2383 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 297 "src/compiler_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2391 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 301 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", "size_of");}
#line 2397 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 303 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","and");}
#line 2403 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 304 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","times");}
#line 2409 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 305 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","plus");}
#line 2415 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 306 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","minus");}
#line 2421 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 307 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","bitwise_not");}
#line 2427 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 308 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","logical_not");}
#line 2433 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 310 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2439 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 311 "src/compiler_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("CAST_EXPRESSION","", branches, branch_notes);}
#line 2447 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 315 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2453 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 316 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2461 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 320 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2469 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 324 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","%", branches, branch_notes);}
#line 2477 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 328 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2483 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 329 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2491 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 333 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2499 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 337 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2505 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 338 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("SHIFT_EXPRESSION","<<", branches, branch_notes);}
#line 2513 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 342 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("SHIFT_EXPRESSION",">>", branches, branch_notes);}
#line 2521 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 346 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2527 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 347 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2535 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 351 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2543 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 355 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2551 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 359 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2559 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 363 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2565 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 364 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2573 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 368 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2581 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 372 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2587 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 373 "src/compiler_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","&", branches, branch_notes);}
#line 2595 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 377 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2601 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 378 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","^", branches, branch_notes);}
#line 2609 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 382 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2615 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 383 "src/compiler_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","|", branches, branch_notes);}
#line 2623 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 387 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2629 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 388 "src/compiler_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","&&", branches, branch_notes);}
#line 2637 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 392 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2643 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 393 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","||", branches, branch_notes);}
#line 2651 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 397 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2657 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 398 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2665 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 402 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2671 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 403 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2679 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 407 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "=");}
#line 2685 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 408 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "*=");}
#line 2691 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 409 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "/=");}
#line 2697 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 410 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "%=");}
#line 2703 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 411 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "+=");}
#line 2709 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 412 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "-=");}
#line 2715 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 413 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "<<=");}
#line 2721 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 414 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", ">>=");}
#line 2727 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 415 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "&=");}
#line 2733 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 416 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "^=");}
#line 2739 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 417 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "|=");}
#line 2745 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 419 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2751 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 421 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2757 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 422 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2765 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 426 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2773 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 430 "src/compiler_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2781 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 434 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2787 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 435 "src/compiler_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2795 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 439 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2801 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 440 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2809 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 444 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2815 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 445 "src/compiler_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2823 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 449 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2829 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 450 "src/compiler_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2837 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 454 "src/compiler_parser.y" /* yacc.c:1646  */
    {													std::vector<ast_node*> branches = {(yyvsp[0].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","just a declarator", branches, branch_notes);}
#line 2845 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 458 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2853 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 462 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "typedef");}
#line 2859 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 463 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "extern");}
#line 2865 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 464 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "static");}
#line 2871 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 465 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "auto");}
#line 2877 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 466 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "register");}
#line 2883 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 468 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "void");}
#line 2889 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 469 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "char");}
#line 2895 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 470 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "short");}
#line 2901 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 471 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "int");}
#line 2907 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 472 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "long");}
#line 2913 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 473 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "float");}
#line 2919 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 474 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "double");}
#line 2925 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 475 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "signed");}
#line 2931 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 476 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "unsigned");}
#line 2937 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 477 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2943 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 478 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2949 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 479 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2955 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 481 "src/compiler_parser.y" /* yacc.c:1646  */
    {                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2963 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 485 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2971 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 489 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2979 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 493 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", "struct");}
#line 2985 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 496 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2991 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 497 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}
#line 2999 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 501 "src/compiler_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}
#line 3007 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 505 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3013 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 507 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3021 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 511 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3027 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 513 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3035 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 517 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3041 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 518 "src/compiler_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}
#line 3049 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 522 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 3055 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 523 "src/compiler_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3063 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 527 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3071 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 531 "src/compiler_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3079 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 535 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3087 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 539 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3095 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 543 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM", "enum");}
#line 3101 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 545 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3107 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 546 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3115 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 550 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3121 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 551 "src/compiler_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR","", branches, branch_notes);}
#line 3129 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 555 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3135 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 557 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER", "volatile");}
#line 3141 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 559 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3147 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 560 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATOR","", branches, branch_notes);}
#line 3155 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 564 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3161 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 566 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3167 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 568 "src/compiler_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}
#line 3175 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 572 "src/compiler_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}
#line 3183 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 576 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}
#line 3191 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 580 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}
#line 3199 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 584 "src/compiler_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","fn_dcl ", branches, branch_notes);}
#line 3207 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 588 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3213 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 589 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3221 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 593 "src/compiler_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3229 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 597 "src/compiler_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3237 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 601 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3243 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 603 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3249 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 604 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3257 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 608 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3263 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 615 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3269 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 616 "src/compiler_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3277 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 620 "src/compiler_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3285 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 624 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3291 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 626 "src/compiler_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3299 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 630 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3305 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 631 "src/compiler_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER_LIST","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("IDENTIFIER_LIST","", branches, branch_notes);}
#line 3313 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 635 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3319 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 637 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3325 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 638 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 3333 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 642 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3339 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 644 "src/compiler_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3347 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 648 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3353 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 650 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3359 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 652 "src/compiler_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3367 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 656 "src/compiler_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3375 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 660 "src/compiler_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3383 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 664 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3389 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 666 "src/compiler_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3397 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 670 "src/compiler_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3405 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 674 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3413 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 678 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3419 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 680 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text));}
#line 3425 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 682 "src/compiler_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3431 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 684 "src/compiler_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3439 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 688 "src/compiler_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3447 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 692 "src/compiler_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3453 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 693 "src/compiler_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 3461 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3465 "src/compiler_parser.tab.cpp" /* yacc.c:1646  */
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
#line 700 "src/compiler_parser.y" /* yacc.c:1906  */


ast_node *g_root;

ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
