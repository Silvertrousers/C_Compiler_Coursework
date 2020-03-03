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

  #include <cassert>

  extern const ast_node *g_root;

  int yylex(void);
  void yyerror(const char *);

#line 108 "src/maths_parser.tab.cpp" /* yacc.c:355  */

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
    T_DEC_INT_LONG = 341,
    T_DEC_INT_UNSIGNED = 342,
    T_OCTAL_INT = 343,
    T_OCTAL_INT_LONG = 344,
    T_OCTAL_INT_UNSIGNED = 345,
    T_HEX_INT = 346,
    T_HEX_INT_LONG = 347,
    T_HEX_INT_UNSIGNED = 348,
    T_NORM_DOUBLE = 349,
    T_NORM_FLOAT = 350,
    T_NORM_LONG_DOUBLE = 351,
    T_EXP_DOUBLE = 352,
    T_EXP_FLOAT = 353,
    T_EXP_LONG_DOUBLE = 354,
    T_DEREFERENCE = 355,
    T_CUSTOM_TYPE = 356,
    T_ENUM_CONSTANT = 357
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "src/maths_parser.y" /* yacc.c:355  */

  ast_node* nodePtr;
  std::string* _text;

#line 228 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 245 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   1683

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  393

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   357

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    82,    83,    88,    89,    92,    96,   100,
     104,   108,   109,   110,   111,   112,   113,   115,   119,   123,
     127,   128,   130,   134,   138,   141,   143,   144,   148,   149,
     153,   154,   156,   160,   164,   168,   169,   170,   172,   176,
     180,   184,   188,   192,   196,   200,   204,   208,   212,   213,
     214,   216,   220,   221,   223,   227,   232,   233,   235,   236,
     237,   239,   243,   244,   247,   248,   252,   256,   260,   264,
     268,   272,   276,   277,   281,   282,   286,   290,   294,   298,
     302,   304,   305,   306,   307,   308,   309,   311,   312,   316,
     317,   321,   325,   329,   330,   334,   338,   339,   343,   347,
     348,   352,   356,   360,   364,   365,   369,   373,   374,   378,
     379,   383,   384,   388,   389,   393,   394,   398,   399,   403,
     404,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   420,   422,   423,   427,   431,   435,   436,   440,
     441,   445,   446,   450,   451,   455,   456,   460,   461,   462,
     463,   464,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   479,   483,   487,   491,   492,   494,
     495,   499,   503,   505,   509,   511,   515,   516,   520,   521,
     525,   529,   533,   537,   541,   543,   544,   548,   549,   553,
     555,   556,   558,   559,   563,   565,   567,   571,   575,   579,
     583,   587,   588,   592,   596,   600,   602,   603,   607,   608,
     612,   614,   615,   619,   623,   625,   629,   630,   634,   636,
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
  "T_ESQ_BRACKETS", "T_IDENTIFIER", "T_STRING", "T_DEC_INT",
  "T_DEC_INT_LONG", "T_DEC_INT_UNSIGNED", "T_OCTAL_INT",
  "T_OCTAL_INT_LONG", "T_OCTAL_INT_UNSIGNED", "T_HEX_INT",
  "T_HEX_INT_LONG", "T_HEX_INT_UNSIGNED", "T_NORM_DOUBLE", "T_NORM_FLOAT",
  "T_NORM_LONG_DOUBLE", "T_EXP_DOUBLE", "T_EXP_FLOAT", "T_EXP_LONG_DOUBLE",
  "T_DEREFERENCE", "T_CUSTOM_TYPE", "T_ENUM_CONSTANT", "$accept",
  "PROGRAM", "TRANSLATION_UNIT", "EXTERNAL_DECLARATION",
  "FUNCTION_DECLARATION", "STATEMENT", "LABELED_STATEMENT", "DEFAULT",
  "CASE", "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
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
  "PARAMETER_TYPE_LIST", "ELIPSIS", "PARAMETER_LIST",
  "PARAMETER_DECLARATION", "IDENTIFIER_LIST", "IDENTIFIER", "TYPE_NAME",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357
};
# endif

#define YYPACT_NINF -176

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-176)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     678,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
     -34,  -176,  -176,  -176,    52,   678,  -176,  -176,  -176,    39,
     853,   853,  -176,    82,  -176,   133,   853,   743,    76,   -57,
      31,  -176,  -176,    20,  -176,  -176,  -176,   -14,  -176,   709,
    -176,  -176,   630,    25,    12,    42,  -176,   481,  -176,  -176,
     743,  -176,    39,   788,  1526,  -176,  -176,    76,  -176,  -176,
      31,  -176,   -34,  -176,  1233,  -176,   743,   630,   929,  -176,
      59,   630,   630,  -176,   -54,  -176,    84,    12,    79,  -176,
      91,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  1578,  1578,  -176,  -176,  -176,  -176,   884,
    -176,  -176,  -176,  -176,  -176,    97,  1526,  -176,   392,  1000,
    -176,  -176,   137,   149,  -176,   151,   156,  1164,  -176,   190,
    1250,  -176,  -176,   166,   390,  1595,  1526,  -176,   -17,   -24,
     -39,    48,   147,   233,   243,   239,   253,   -41,  -176,  -176,
       1,   221,  -176,  -176,   260,   217,   240,   249,  -176,    85,
    -176,  -176,  -176,   231,  -176,  -176,  -176,  -176,  1233,  -176,
    -176,  -176,  -176,  -176,  -176,  1526,   250,  -176,   258,  -176,
     964,    12,  -176,  1526,   -48,  -176,  -176,  1526,  -176,  -176,
     119,   248,   245,  1164,   262,  -176,  1082,  -176,  -176,  1526,
    1526,  1302,  1526,   287,   259,  -176,    63,  -176,  -176,   190,
     190,  1526,  1526,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  1526,   884,  -176,  -176,  1526,
    1526,  1526,  1526,  1526,  1526,  1526,  1526,  1526,  1526,  1526,
    1526,  1526,  1526,  1526,  1526,  1526,  1526,  1526,  1526,  -176,
    1164,   564,  1526,  -176,  -176,  -176,    64,  -176,   139,  -176,
     822,   190,  -176,  -176,  -176,     9,  -176,    59,  1526,  -176,
    -176,  -176,  -176,  -176,   595,   227,  -176,  1526,  -176,  1164,
    -176,   128,   129,  1319,   175,   163,   263,  -176,  -176,  -176,
    -176,   168,  -176,    17,  -176,   264,  -176,  -176,  -176,   -17,
     -17,   -24,   -24,   -39,   -39,   -39,   -39,    48,    48,   147,
     233,   243,   239,   253,    74,  -176,  -176,   266,   267,   257,
     139,   853,  1526,  -176,  -176,   268,  -176,  -176,  -176,  1181,
    -176,  -176,  -176,  -176,  -176,  1164,  1164,  1371,   196,  1388,
    1164,  1526,  1526,  -176,  -176,  -176,  1526,  -176,  -176,  -176,
     269,   270,   273,  -176,  -176,  -176,   333,  1164,   179,  1440,
    1457,   203,  -176,   180,  -176,  -176,  -176,  -176,  -176,  -176,
    1164,  -176,  1164,  1164,   183,  1164,   194,  1509,   274,  -176,
    -176,  -176,  1164,  -176,  1164,  1164,   195,  -176,  -176,  -176,
    -176,  1164,  -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   150,   153,   190,   158,   184,   148,   157,   155,   156,
     151,   154,   159,   149,   167,   147,   168,   160,   152,   191,
       0,   218,   205,   233,     0,     2,     3,     5,     6,     0,
     137,   139,   161,     0,   162,     0,   141,     0,   192,     0,
     201,   194,   163,     0,     1,     4,   135,     0,   143,   145,
     138,   140,     0,   164,     0,   181,   142,     0,    25,    10,
       0,    26,     0,     0,     0,   199,   196,   193,   206,   203,
     202,   195,     0,   136,     0,     8,     0,   172,     0,   169,
       0,   174,     0,   189,     0,   185,   187,     0,     0,    21,
       0,    20,    50,    48,    56,    36,    57,    80,    35,    49,
      82,    83,    84,     0,     0,    81,    85,    86,    31,     0,
      60,    62,    63,    28,    11,     0,     0,    12,     0,     0,
      13,    14,     0,     0,    15,     0,     0,     0,    16,     0,
       0,    64,    59,    74,    87,     0,     0,    89,    93,    96,
      99,   104,   107,   109,   111,   113,   115,   117,   119,   133,
       0,    58,     9,    27,   145,   214,     0,   208,   211,     0,
     216,    87,   132,     0,    58,   207,   204,   144,     0,   234,
     146,     7,   173,   165,   170,     0,   171,   176,   178,   175,
       0,     0,   183,     0,     0,    53,    52,     0,    76,    75,
       0,   219,     0,     0,     0,    24,     0,    23,    29,     0,
       0,     0,     0,     0,     0,    55,     0,    71,    70,     0,
       0,     0,     0,    66,   121,   124,   127,   128,   125,   126,
     122,   123,   129,   131,   130,     0,     0,    78,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,   232,   228,   213,   221,   215,   223,   198,
       0,     0,   200,   197,   237,     0,   180,     0,     0,   166,
     186,   188,   182,    61,     0,   221,   220,     0,    19,     0,
      22,     0,     0,     0,     0,     0,     0,    51,    54,    69,
      68,     0,    72,     0,   120,     0,    90,    91,    92,    94,
      95,    98,    97,   100,   101,   102,   103,   106,   105,   108,
     110,   112,   114,   116,     0,   134,    17,     0,     0,     0,
     222,     0,     0,   231,   227,     0,   209,   212,   217,     0,
     235,   177,   179,    88,    18,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    65,    79,     0,   230,   224,   226,
       0,     0,     0,   236,   238,    34,    32,     0,     0,     0,
       0,     0,    38,     0,    73,   118,   229,   225,   210,    37,
       0,    47,     0,     0,     0,     0,     0,     0,     0,    33,
      44,    45,     0,    46,     0,     0,     0,    39,    41,    42,
      43,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,   324,  -176,   -59,  -176,  -176,  -176,   -15,
      49,   232,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   148,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   -60,  -176,
    -176,  -128,     2,    60,    51,    65,   110,   111,   109,   113,
     114,  -176,   -63,   -58,  -176,  -104,    27,    23,     6,  -176,
     283,  -176,    15,  -176,  -176,   277,   -75,   -27,  -176,    89,
    -176,  -176,   275,   182,  -176,     7,    45,   -32,   -29,  -176,
    -176,   -61,  -176,  -176,   101,  -176,     0,   141,  -145,  -175,
    -176,  -163,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,   113,   114,   115,   116,   117,
      60,   119,   120,   121,   122,   123,   370,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   291,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   225,   163,   150,    61,    62,    47,
      48,    30,    31,    32,    33,    78,    79,    80,   176,   177,
      34,    35,    84,    85,    86,    36,    37,    38,    39,    40,
      70,   317,   326,   157,   158,   159,   164,   192,   318,   258,
      42,   170,   265
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      41,   162,   156,   174,   161,   264,    29,    67,   228,   246,
     257,    69,   194,   232,   233,   181,   169,    20,   229,   230,
      41,   181,    59,    28,   182,    41,    21,   234,   235,    41,
     272,    29,   247,    53,    75,    55,    50,    51,     3,    41,
      20,   166,    56,   188,   189,   152,   276,    68,    28,    21,
     172,   231,    44,   162,   179,    72,   161,   151,    73,    81,
     198,   171,    41,   160,    19,    43,    22,    77,   203,   155,
     248,   266,    41,   249,    49,   227,   161,   165,   329,   271,
      41,   320,   191,   153,    81,    81,   248,   330,    81,    81,
     236,   237,    77,    77,   344,    71,    77,    77,    76,   153,
     320,   296,   297,   298,    82,   174,   118,   154,   238,   239,
     169,    46,   162,    20,    83,   161,    81,   154,   151,   151,
     162,    87,    21,   161,    77,   178,   256,   151,   183,   204,
     175,    22,   248,    20,   278,   288,   190,   198,   251,    22,
     252,   153,    21,   248,   253,   346,   254,    21,   319,   333,
      63,   185,    64,   292,   261,    41,    65,   206,    66,    22,
     262,    52,   275,   186,   332,    21,   354,   294,   193,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,    81,   248,   162,
     315,   316,   161,   151,   273,    77,   151,   248,   248,   191,
     255,   240,   241,   335,   336,   162,   207,   208,   161,   289,
     290,   199,    54,   321,   190,   322,    21,   161,   351,   323,
     334,   324,   256,   200,    67,   201,   281,   282,   284,   285,
     202,   209,   248,    81,   299,   300,   210,   342,   340,   293,
     211,    77,   212,   343,   248,   275,   213,   339,   248,   248,
     151,    41,   248,   190,   372,   378,    41,   155,   382,   162,
     350,   328,   161,   248,   248,   248,   155,    41,   359,   384,
     391,   169,   248,    21,   314,   377,   355,   356,   242,   151,
     155,   362,   243,   365,   364,   244,   161,   303,   304,   305,
     306,   251,   250,   252,   301,   302,    43,   253,   371,   254,
      21,   274,   245,   252,    74,   307,   308,   253,   263,   254,
     338,   379,   178,   380,   381,   259,   383,    22,   260,   267,
     277,    99,   274,   388,   252,   389,   390,   155,   253,   268,
     254,   287,   392,   279,   349,   151,   151,   341,   352,   345,
     151,   347,   348,   368,   366,   369,   387,   367,    22,    45,
     196,   286,   309,   311,   310,   167,   331,   151,   312,   180,
     313,   327,   184,   270,   358,     0,   361,   295,   363,     0,
     151,     0,   151,   151,     0,   151,     0,     0,     0,     0,
       0,     0,   151,     0,   151,   151,   374,   376,     0,     0,
       0,   151,     0,     0,     0,     1,    88,    89,     2,     3,
      90,    91,    92,     4,   386,     5,     6,     7,    93,    94,
      95,     8,     9,    10,    96,    11,    12,    97,    13,    14,
      98,    15,    16,    17,    18,    19,    99,   100,     0,   101,
     102,     0,   103,   104,   214,     0,     0,   105,     0,   106,
     107,   215,   216,   217,     0,     0,   218,   219,   220,   221,
       0,     0,   222,   223,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,   109,     0,     0,     0,
     195,    57,     0,    58,     0,    21,   110,   111,     0,     0,
     112,     0,     0,     0,     1,    88,    89,     2,     3,    90,
      91,    92,     4,    23,     5,     6,     7,    93,    94,    95,
       8,     9,    10,    96,    11,    12,    97,    13,    14,    98,
      15,    16,    17,    18,    19,    99,   100,     0,   101,   102,
       0,   103,   104,     0,     0,     0,   105,     0,   106,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,   109,     0,     0,     0,     0,
      57,     0,    58,     0,    21,   110,   111,     1,     0,   112,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,    23,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,     0,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     2,     3,   251,     0,
     252,     4,     0,     5,   253,     7,   254,    21,     0,     8,
       9,     0,     0,    11,    12,     0,     0,    14,     0,     0,
      16,    17,    18,    19,    22,    23,     0,     0,     0,   274,
       0,   252,     0,     0,     0,   253,     0,   254,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,    22,    23,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    23,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     1,     0,     0,     2,
       3,     0,    20,    74,     4,     0,     5,     6,     7,     0,
       0,    21,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
      58,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      23,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,    57,     0,    58,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    23,    11,    12,     0,    13,    14,
       0,    15,    16,    17,    18,    19,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,    21,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,     0,    23,
       2,     3,   325,     0,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     8,     9,     0,     0,    11,    12,    97,
       0,    14,     0,     0,    16,    17,    18,    19,     0,   100,
       0,   101,   102,    23,   103,   104,     0,     0,     0,   105,
       0,   106,   107,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     8,     9,
       0,     0,    11,    12,    23,     0,    14,     0,   109,    16,
      17,    18,    19,     0,     0,     0,     0,    21,   110,   111,
       2,     3,   112,     0,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     8,     9,    23,     0,    11,    12,     0,
       0,    14,     0,     0,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,    88,    89,     0,   173,    90,    91,
      92,     0,     0,     0,     0,     0,    93,    94,    95,     0,
       0,     0,    96,     0,     0,    97,     0,     0,    98,     0,
      23,     0,     0,     0,    99,   100,     0,   101,   102,     0,
     103,   104,   269,     0,     0,   105,     0,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,   108,     0,   109,     0,     0,     0,   197,    57,
       0,    58,     0,    21,   110,   111,    88,    89,   112,     0,
      90,    91,    92,     0,     0,     0,     0,     0,    93,    94,
      95,     0,     0,     0,    96,     0,     0,    97,     0,     0,
      98,     0,     0,     0,     0,     0,    99,   100,     0,   101,
     102,     0,   103,   104,     0,     0,     0,   105,     0,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,   109,     0,     0,     0,
     280,    57,     0,    58,     0,    21,   110,   111,    88,    89,
     112,     0,    90,    91,    92,     0,     0,     0,     0,     0,
      93,    94,    95,     0,     0,     0,    96,     0,     0,    97,
       0,     0,    98,     0,     0,     0,     0,     0,    99,   100,
       0,   101,   102,     0,   103,   104,    97,     0,     0,   105,
       0,   106,   107,     0,     0,     0,   100,     0,   101,   102,
       0,   103,   104,     0,     0,     0,   105,     0,   106,   107,
       0,     0,     0,     0,     0,     0,   108,     0,   109,     0,
       0,     0,     0,    57,     0,    58,     0,    21,   110,   111,
       0,     0,   112,     0,     0,   109,     0,     0,    97,   353,
     168,     0,     0,     0,    21,   110,   111,     0,   100,   112,
     101,   102,     0,   103,   104,    97,     0,     0,   105,     0,
     106,   107,     0,     0,     0,   100,     0,   101,   102,     0,
     103,   104,     0,     0,     0,   105,     0,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,   168,     0,     0,     0,    21,   110,   111,     0,
       0,   112,   205,     0,   109,     0,     0,    97,     0,     0,
       0,     0,     0,    21,   110,   111,     0,   100,   112,   101,
     102,     0,   103,   104,    97,     0,     0,   105,     0,   106,
     107,     0,     0,     0,   100,     0,   101,   102,     0,   103,
     104,     0,     0,     0,   105,     0,   106,   107,     0,     0,
       0,     0,     0,     0,   283,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,    21,   110,   111,     0,     0,
     112,   337,     0,   109,     0,     0,    97,     0,     0,     0,
       0,     0,    21,   110,   111,     0,   100,   112,   101,   102,
       0,   103,   104,    97,     0,     0,   105,     0,   106,   107,
       0,     0,     0,   100,     0,   101,   102,     0,   103,   104,
       0,     0,     0,   105,     0,   106,   107,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   357,     0,     0,     0,
       0,     0,     0,     0,    21,   110,   111,     0,     0,   112,
     360,     0,   109,     0,     0,    97,     0,     0,     0,     0,
       0,    21,   110,   111,     0,   100,   112,   101,   102,     0,
     103,   104,    97,     0,     0,   105,     0,   106,   107,     0,
       0,     0,   100,     0,   101,   102,     0,   103,   104,     0,
       0,     0,   105,     0,   106,   107,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   373,     0,     0,     0,     0,
       0,     0,     0,    21,   110,   111,     0,     0,   112,     0,
       0,   109,   375,     0,    97,     0,     0,     0,     0,     0,
      21,   110,   111,     0,   100,   112,   101,   102,     0,   103,
     104,    97,     0,     0,   105,     0,   106,   107,     0,     0,
       0,   100,     0,   101,   102,     0,   103,   104,     0,     0,
       0,   105,     0,   106,   107,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   385,     0,     0,     0,     0,     0,
       0,     0,    21,   110,   111,     0,     0,   112,     0,     0,
     109,     0,     0,    97,     0,     0,     0,     0,     0,    21,
     110,   111,     0,   100,   112,   101,   102,     0,   103,   104,
      97,     0,     0,   105,     0,   106,   107,     0,     0,     0,
     100,     0,   101,   102,     0,   103,   104,     0,     0,     0,
     105,     0,   106,   107,     0,     0,     0,     0,     0,     0,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
       0,    21,   110,   111,     0,     0,   112,     0,     0,   226,
       0,     0,     0,     0,     0,     0,     0,     0,    21,   110,
     111,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
       0,    64,    63,    78,    64,   168,     0,    39,   136,    50,
     155,    40,   116,    37,    38,    69,    74,    74,    35,    36,
      20,    69,    37,     0,    78,    25,    83,    66,    67,    29,
      78,    25,    73,    33,    49,    35,    30,    31,     7,    39,
      74,    70,    36,   103,   104,    60,   191,    40,    25,    83,
      77,    68,     0,   116,    81,    69,   116,    57,    72,    52,
     119,    76,    62,    63,    33,    20,   100,    52,   127,    63,
      69,   175,    72,    72,    29,   135,   136,    70,    69,   183,
      80,   256,   109,    60,    77,    78,    69,    78,    81,    82,
      42,    43,    77,    78,    77,    75,    81,    82,    49,    76,
     275,   229,   230,   231,    79,   180,    57,    62,    60,    61,
     168,    72,   175,    74,   102,   175,   109,    72,   118,   119,
     183,    79,    83,   183,   109,    80,   155,   127,    44,   129,
      71,   100,    69,    74,   193,    72,   109,   196,    74,   100,
      76,   118,    83,    69,    80,    71,    82,    83,   252,   277,
      74,    72,    76,   211,    69,   155,    80,   130,    82,   100,
      75,    79,   191,    72,   268,    83,   329,   225,    71,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   180,    69,   252,
     248,   250,   252,   193,    75,   180,   196,    69,    69,   226,
     155,    54,    55,    75,    75,   268,    40,    41,   268,   209,
     210,    74,    79,    74,   187,    76,    83,   277,   322,    80,
     279,    82,   251,    74,   256,    74,   199,   200,   201,   202,
      74,    65,    69,   226,   232,   233,    70,    69,    75,   212,
      74,   226,    76,    75,    69,   274,    80,    72,    69,    69,
     250,   251,    69,   226,    75,    75,   256,   251,    75,   322,
     321,   261,   322,    69,    69,    69,   260,   267,    72,    75,
      75,   329,    69,    83,   247,    72,   335,   336,    45,   279,
     274,   340,    39,   346,   342,    46,   346,   236,   237,   238,
     239,    74,    71,    76,   234,   235,   251,    80,   357,    82,
      83,    74,    49,    76,    44,   240,   241,    80,    77,    82,
     283,   370,   267,   372,   373,    75,   375,   100,    69,    69,
      75,    34,    74,   382,    76,   384,   385,   321,    80,    71,
      82,    72,   391,    71,    77,   335,   336,    74,    70,    75,
     340,    75,    75,    70,    75,    12,    72,    77,   100,    25,
     118,   203,   242,   244,   243,    72,   267,   357,   245,    82,
     246,   260,    87,   181,   337,    -1,   339,   226,   341,    -1,
     370,    -1,   372,   373,    -1,   375,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    -1,   384,   385,   359,   360,    -1,    -1,
      -1,   391,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   377,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    40,    41,    44,    -1,    -1,    45,    -1,    47,
      48,    51,    52,    53,    -1,    -1,    56,    57,    58,    59,
      -1,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   101,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    83,    84,    85,     3,    -1,    88,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,   101,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,    74,    -1,
      76,    11,    -1,    13,    80,    15,    82,    83,    -1,    19,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      30,    31,    32,    33,   100,   101,    -1,    -1,    -1,    74,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,   100,   101,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,   101,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,     3,    -1,    -1,     6,
       7,    -1,    74,    44,    11,    -1,    13,    14,    15,    -1,
      -1,    83,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
     101,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    79,    -1,    81,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,   101,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    83,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    -1,   101,
       6,     7,    70,    -1,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      -1,    37,    38,   101,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    19,    20,
      -1,    -1,    23,    24,   101,    -1,    27,    -1,    74,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    83,    84,    85,
       6,     7,    88,    -1,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    19,    20,   101,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,    78,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,
     101,    -1,    -1,    -1,    34,    35,    -1,    37,    38,    -1,
      40,    41,    78,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,
      -1,    81,    -1,    83,    84,    85,     4,     5,    88,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    84,    85,     4,     5,
      88,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    38,    -1,    40,    41,    25,    -1,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    83,    84,    85,
      -1,    -1,    88,    -1,    -1,    74,    -1,    -1,    25,    78,
      79,    -1,    -1,    -1,    83,    84,    85,    -1,    35,    88,
      37,    38,    -1,    40,    41,    25,    -1,    -1,    45,    -1,
      47,    48,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    83,    84,    85,    -1,
      -1,    88,    72,    -1,    74,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    -1,    35,    88,    37,
      38,    -1,    40,    41,    25,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,    -1,
      88,    72,    -1,    74,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    -1,    35,    88,    37,    38,
      -1,    40,    41,    25,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    -1,    -1,    88,
      72,    -1,    74,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,    35,    88,    37,    38,    -1,
      40,    41,    25,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    35,    -1,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    -1,    -1,    88,    -1,
      -1,    74,    75,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    -1,    35,    88,    37,    38,    -1,    40,
      41,    25,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,
      74,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    -1,    35,    88,    37,    38,    -1,    40,    41,
      25,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    -1,    -1,    88
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      74,    83,   100,   101,   104,   105,   106,   107,   150,   151,
     154,   155,   156,   157,   163,   164,   168,   169,   170,   171,
     172,   179,   183,   169,     0,   106,    72,   152,   153,   169,
     151,   151,    79,   179,    79,   179,   151,    79,    81,   112,
     113,   150,   151,    74,    76,    80,    82,   170,   168,   171,
     173,    75,    69,    72,    44,   112,   113,   155,   158,   159,
     160,   168,    79,   102,   165,   166,   167,    79,     4,     5,
       8,     9,    10,    16,    17,    18,    22,    25,    28,    34,
      35,    37,    38,    40,    41,    45,    47,    48,    72,    74,
      84,    85,    88,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     149,   179,   112,   150,   169,   151,   174,   176,   177,   178,
     179,   131,   145,   148,   179,   168,   171,   153,    79,   146,
     184,   112,   160,    78,   159,    71,   161,   162,   169,   160,
     158,    69,    78,    44,   165,    72,    72,    74,   131,   131,
     149,   160,   180,    71,   148,    78,   114,    78,   108,    74,
      74,    74,    74,   108,   179,    72,   149,    40,    41,    65,
      70,    74,    76,    80,    44,    51,    52,    53,    56,    57,
      58,    59,    62,    63,    64,   147,    74,   131,   134,    35,
      36,    68,    37,    38,    66,    67,    42,    43,    60,    61,
      54,    55,    45,    39,    46,    49,    50,    73,    69,    72,
      71,    74,    76,    80,    82,   169,   171,   181,   182,    75,
      69,    69,    75,    77,   184,   185,   148,    69,    71,    78,
     166,   148,    78,    75,    74,   171,   181,    75,   108,    71,
      78,   149,   149,    72,   149,   149,   122,    72,    72,   179,
     179,   130,   146,   149,   146,   180,   134,   134,   134,   135,
     135,   136,   136,   137,   137,   137,   137,   138,   138,   139,
     140,   141,   142,   143,   149,   146,   108,   174,   181,   148,
     182,    74,    76,    80,    82,    70,   175,   177,   179,    69,
      78,   162,   148,   134,   108,    75,    75,    72,   149,    72,
      75,    74,    69,    75,    77,    75,    71,    75,    75,    77,
     174,   148,    70,    78,   184,   108,   108,    75,   149,    72,
      72,   149,   108,   149,   146,   145,    75,    77,    70,    12,
     119,   108,    75,    75,   149,    75,   149,    72,    75,   108,
     108,   108,    75,   108,    75,    75,   149,    72,   108,   108,
     108,    75,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   105,   106,   106,   107,   107,   107,
     107,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     110,   111,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   117,   118,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   121,   122,
     123,   124,   124,   124,   124,   124,   125,   126,   127,   127,
     127,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   130,   130,   131,   131,   131,   131,   131,   131,
     132,   133,   133,   133,   133,   133,   133,   134,   134,   135,
     135,   135,   135,   136,   136,   136,   137,   137,   137,   138,
     138,   138,   138,   138,   139,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   148,   149,   149,   150,   150,   151,   151,   151,
     151,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   156,   156,   156,   157,   157,   158,
     158,   159,   160,   160,   160,   160,   161,   161,   162,   162,
     162,   163,   163,   163,   164,   165,   165,   166,   166,   167,
     168,   168,   169,   169,   170,   170,   170,   170,   170,   170,
     170,   171,   171,   171,   171,   172,   173,   173,   174,   174,
     175,   176,   176,   177,   177,   177,   178,   178,   179,   180,
     180,   181,   181,   181,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   183,   184,   184,   184,   185,   185
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     1,     4,     3,     3,     1,     1,     2,     1,     2,
       2,     1,     5,     7,     5,     1,     1,     1,     5,     7,
       9,     8,     8,     8,     7,     7,     7,     6,     1,     1,
       1,     3,     2,     2,     3,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     4,     2,     4,     3,     3,
       2,     2,     1,     3,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     5,     1,     1,     1,
       2,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       2,     2,     5,     4,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     2,     1,     3,     2,     4,     4,     2,
       4,     1,     2,     2,     3,     1,     1,     2,     1,     3,
       3,     1,     3,     2,     1,     2,     1,     3,     1,     1,
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
#line 80 "src/maths_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].nodePtr); }
#line 1914 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 82 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1920 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 83 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           fprintf(stderr,"hihihihih");
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1929 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1935 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1941 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 92 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                               (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1949 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 96 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1957 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 100 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {NULL, (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1965 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr),NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1973 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 108 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1979 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 109 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1985 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 110 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1991 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 111 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1997 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 112 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2003 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2009 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 115 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 2017 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 119 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 2025 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 123 "src/maths_parser.y" /* yacc.c:1646  */
    {                                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 2033 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 127 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DEFAULT", "default");}
#line 2039 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 128 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CASE", "case");}
#line 2045 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 130 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2053 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 134 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2061 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2069 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 2075 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 143 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2081 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 2089 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2095 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 2103 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 153 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 2109 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 154 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = NULL; }
#line 2115 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 156 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2123 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 160 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2131 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 164 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2139 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 168 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", "switch");}
#line 2145 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 169 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", "if");}
#line 2151 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 170 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", "else" );}
#line 2157 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 172 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2165 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 176 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2173 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 180 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2181 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 184 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2189 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 188 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2197 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 192 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2205 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 196 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2213 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 200 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2221 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 204 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2229 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 208 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2237 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 212 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", "for");}
#line 2243 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 213 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", "while");}
#line 2249 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 214 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", "do");}
#line 2255 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 216 "src/maths_parser.y" /* yacc.c:1646  */
    {                                  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"GOTO", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2263 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 220 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "continue");}
#line 2269 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 221 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "break");}
#line 2275 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 223 "src/maths_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2283 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 227 "src/maths_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2291 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 232 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("GOTO", "goto");}
#line 2297 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 233 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", "return");}
#line 2303 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 235 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2309 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 236 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2315 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 237 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2321 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 239 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2329 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 243 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2335 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 244 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2341 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 247 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2347 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 248 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2355 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 252 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2363 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 256 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2371 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 260 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION",".", branches, branch_notes);}
#line 2379 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 264 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}
#line 2387 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 268 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2395 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2403 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 276 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2409 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 277 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2417 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 281 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2423 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 282 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2431 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 286 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2439 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 290 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2447 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 294 "src/maths_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2455 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 298 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2463 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 302 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", "size_of");}
#line 2469 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 304 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","and");}
#line 2475 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 305 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","times");}
#line 2481 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 306 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","plus");}
#line 2487 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 307 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","minus");}
#line 2493 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 308 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","bitwise_not");}
#line 2499 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 309 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR","logical_not");}
#line 2505 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 311 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2511 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 312 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}
#line 2519 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 316 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2525 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 317 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2533 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 321 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2541 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 325 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}
#line 2549 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 329 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2555 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 330 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2563 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 334 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2571 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 338 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2577 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 339 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","<<", branches, branch_notes);}
#line 2585 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 343 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION",">>", branches, branch_notes);}
#line 2593 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 347 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2599 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 348 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2607 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 352 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2615 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 356 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2623 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 360 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2631 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 364 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2637 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 365 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2645 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 369 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2653 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 373 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2659 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 374 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","", branches, branch_notes);}
#line 2667 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 378 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2673 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 379 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","", branches, branch_notes);}
#line 2681 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 383 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2687 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 384 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","", branches, branch_notes);}
#line 2695 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 388 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2701 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 389 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","", branches, branch_notes);}
#line 2709 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 393 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2715 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 394 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","", branches, branch_notes);}
#line 2723 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 398 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2729 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 399 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2737 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 403 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2743 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 404 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2751 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 408 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "equals");}
#line 2757 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 409 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "times_equals");}
#line 2763 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 410 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "divide_equals");}
#line 2769 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 411 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "modulo_equals");}
#line 2775 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 412 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "plus_equals");}
#line 2781 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 413 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "minus_equals");}
#line 2787 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 414 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "left_shift_equals");}
#line 2793 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 415 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "right_shift_equals");}
#line 2799 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 416 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "and_equals");}
#line 2805 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 417 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "xor_equals");}
#line 2811 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 418 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", "or_equals");}
#line 2817 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 420 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2823 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 422 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2829 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 423 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2837 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 427 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2845 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 431 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2853 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 435 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2859 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 436 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2867 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 440 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2873 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 441 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2881 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 445 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2887 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 446 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2895 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 450 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2901 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 451 "src/maths_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2909 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 455 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2915 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 456 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2923 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 460 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "typedef");}
#line 2929 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 461 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "extern");}
#line 2935 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 462 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "static");}
#line 2941 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 463 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "auto");}
#line 2947 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 464 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", "register");}
#line 2953 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 466 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "void");}
#line 2959 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 467 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "char");}
#line 2965 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 468 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "short");}
#line 2971 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 469 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "int");}
#line 2977 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 470 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "long");}
#line 2983 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 471 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "float");}
#line 2989 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 472 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "double");}
#line 2995 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 473 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "signed");}
#line 3001 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 474 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", "unsigned");}
#line 3007 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 475 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3013 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 476 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3019 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 477 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3025 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 479 "src/maths_parser.y" /* yacc.c:1646  */
    {                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3033 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 483 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3041 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 487 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3049 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 491 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", "struct");}
#line 3055 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 492 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", "union");}
#line 3061 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 494 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3067 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 495 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}
#line 3075 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 499 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}
#line 3083 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 503 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3089 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 505 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3097 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 509 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3103 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 511 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3111 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 515 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3117 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 516 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}
#line 3125 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 520 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 3131 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 521 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3139 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 525 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3147 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 529 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3155 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 533 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3163 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 537 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3171 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 541 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM", "enum");}
#line 3177 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 543 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3183 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 544 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3191 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 548 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3197 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 549 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR","", branches, branch_notes);}
#line 3205 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 553 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3211 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 555 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER", "const");}
#line 3217 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 556 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER", "volatile");}
#line 3223 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 558 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3229 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 559 "src/maths_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATOR","", branches, branch_notes);}
#line 3237 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 563 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3243 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 565 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3249 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 567 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3257 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 571 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3265 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 575 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3273 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 579 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3281 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 583 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3289 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 587 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3295 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 588 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3303 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 592 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3311 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 596 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3319 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 600 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3325 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 602 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3331 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 603 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3339 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 607 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3345 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 608 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","ELIPSIS"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_TYPE_LIST","", branches, branch_notes);}
#line 3353 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 612 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ELIPSIS","...");}
#line 3359 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 614 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3365 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 615 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3373 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 619 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3381 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 623 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3387 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 625 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3395 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 629 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3401 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 630 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER_LIST","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("IDENTIFIER_LIST","", branches, branch_notes);}
#line 3409 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 634 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3415 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 636 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3421 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 637 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 3429 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 641 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3435 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 643 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3443 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 647 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3449 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 649 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3455 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 651 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3463 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 655 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3471 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 659 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3479 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 663 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3485 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 665 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3493 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 669 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3501 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 673 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3509 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 677 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3515 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 679 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text));}
#line 3521 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 681 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3527 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 683 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3535 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 687 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3543 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 691 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3549 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 692 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 3557 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3561 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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


const ast_node *g_root;

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
