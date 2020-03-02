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
#line 12 "src/maths_parser.y" /* yacc.c:355  */

  ast_node* nodePtr;
  std::string* _text;

#line 215 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 232 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   1669

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  393

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
       0,    73,    73,    75,    76,    80,    81,    84,    88,    92,
      96,   100,   101,   102,   103,   104,   105,   107,   111,   115,
     119,   120,   122,   126,   130,   133,   135,   136,   140,   141,
     145,   146,   148,   152,   156,   160,   161,   162,   164,   168,
     172,   176,   180,   184,   188,   192,   196,   200,   204,   205,
     206,   208,   212,   213,   215,   219,   224,   225,   227,   228,
     229,   231,   235,   236,   239,   240,   244,   248,   252,   256,
     260,   264,   268,   269,   273,   274,   278,   282,   286,   290,
     294,   296,   297,   298,   299,   300,   301,   303,   304,   308,
     309,   313,   317,   321,   322,   326,   330,   331,   335,   339,
     340,   344,   348,   352,   356,   357,   361,   365,   366,   370,
     371,   375,   376,   380,   381,   385,   386,   390,   391,   395,
     396,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   412,   414,   415,   419,   423,   427,   428,   432,
     433,   437,   438,   442,   443,   447,   448,   452,   453,   454,
     455,   456,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   471,   475,   479,   483,   484,   486,
     487,   491,   495,   497,   501,   503,   507,   508,   512,   513,
     517,   521,   525,   529,   533,   535,   536,   540,   541,   545,
     547,   548,   550,   551,   555,   557,   559,   563,   567,   571,
     575,   579,   580,   584,   588,   592,   594,   595,   599,   600,
     604,   606,   607,   611,   615,   617,   621,   622,   626,   628,
     629,   633,   635,   639,   641,   643,   647,   651,   655,   657,
     661,   665,   669,   671,   673,   675,   679,   683,   684
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

#define YYPACT_NINF -242

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-242)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     666,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
     -36,  -242,  -242,  -242,    14,   666,  -242,  -242,  -242,    66,
     872,   872,  -242,   -24,  -242,     2,   872,   768,   139,   -57,
      12,  -242,  -242,   -35,  -242,  -242,  -242,    63,  -242,   697,
    -242,  -242,  1009,   -28,   -23,    32,  -242,   479,  -242,  -242,
     768,  -242,    66,   799,  1514,  -242,  -242,   139,  -242,  -242,
      12,  -242,   -36,  -242,  1233,  -242,   768,  1009,   945,  -242,
      57,  1009,  1009,  -242,   -56,  -242,    42,   -23,     1,  -242,
      34,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  1531,  1531,  -242,  -242,  -242,  -242,   900,
    -242,  -242,  -242,  -242,  -242,    51,  1514,  -242,   392,  1039,
    -242,  -242,    56,    65,  -242,    69,    73,  1205,  -242,    83,
    1285,  -242,  -242,   166,   286,  1583,  1514,  -242,    78,   164,
      28,    48,   157,   118,   177,   184,   174,   -41,  -242,  -242,
     175,   154,  -242,  -242,   220,   215,   219,   209,  -242,    29,
    -242,  -242,  -242,   227,  -242,  -242,  -242,  -242,  1233,  -242,
    -242,  -242,  -242,  -242,  -242,  1514,   221,  -242,   231,  -242,
     981,   -23,  -242,  1514,   -51,  -242,  -242,  1514,  -242,  -242,
      90,   279,   233,  1205,   235,  -242,  1122,  -242,  -242,  1514,
    1514,  1302,  1514,   275,   243,  -242,   196,  -242,  -242,    83,
      83,  1514,  1514,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  1514,   900,  -242,  -242,  1514,
    1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,
    1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,  1514,  -242,
    1205,   563,  1514,  -242,  -242,  -242,    76,  -242,   225,  -242,
     839,    83,  -242,  -242,  -242,   -48,  -242,    57,  1514,  -242,
    -242,  -242,  -242,  -242,   594,   278,  -242,  1514,  -242,  1205,
    -242,   119,   128,  1354,   201,   129,   247,  -242,  -242,  -242,
    -242,   163,  -242,   -11,  -242,   249,  -242,  -242,  -242,    78,
      78,   164,   164,    28,    28,    28,    28,    48,    48,   157,
     118,   177,   184,   174,   -45,  -242,  -242,   253,   254,   245,
     225,   872,  1514,  -242,  -242,   261,  -242,  -242,  -242,  1219,
    -242,  -242,  -242,  -242,  -242,  1205,  1205,  1368,   203,  1420,
    1205,  1514,  1514,  -242,  -242,  -242,  1514,  -242,  -242,  -242,
     258,   257,   271,  -242,  -242,  -242,   334,  1205,   168,  1434,
    1448,   213,  -242,   179,  -242,  -242,  -242,  -242,  -242,  -242,
    1205,  -242,  1205,  1205,   180,  1205,   183,  1500,   284,  -242,
    -242,  -242,  1205,  -242,  1205,  1205,   194,  -242,  -242,  -242,
    -242,  1205,  -242
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
      62,    63,    60,    28,    11,     0,     0,    12,     0,     0,
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
    -242,  -242,  -242,   322,  -242,   -59,  -242,  -242,  -242,    84,
      21,   244,  -242,  -242,  -242,  -242,  -242,  -242,  -242,   148,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,   -60,  -242,
    -242,  -128,    55,    58,    81,    -6,   121,   122,   125,   126,
     130,  -242,   -63,   -58,  -242,  -104,    27,    23,     6,  -242,
     302,  -242,    15,  -242,  -242,   295,   -75,   -27,  -242,   111,
    -242,  -242,   292,   199,  -242,     7,    45,   -32,   -29,  -242,
    -242,   -61,  -242,  -242,   123,  -242,     0,   155,  -145,  -241,
    -242,  -163,  -242
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
     257,    69,   194,   181,    44,   320,   169,    20,   181,     3,
      41,   329,   182,    28,   248,    41,   346,   272,    21,    41,
     330,    29,   247,    53,   320,    55,    50,    51,    20,    41,
      71,   166,    56,   188,   189,    19,   276,    68,    28,    21,
     172,    82,    22,   162,   179,    52,   161,   151,   248,    81,
     198,    21,    41,   160,    83,    43,   344,    77,   203,   155,
      76,   266,    41,   185,    49,   227,   161,   165,   118,   271,
      41,    54,   191,   153,    81,    81,   183,    21,    81,    81,
     236,   237,    77,    77,   234,   235,    77,    77,   261,   153,
      22,   296,   297,   298,   262,   174,   186,   154,   238,   239,
     169,    87,   162,   229,   230,   161,    81,   154,   151,   151,
     162,    59,   193,   161,    77,   178,   256,   151,   175,   204,
     199,    20,    72,    75,   278,    73,   190,   198,    46,   200,
      20,   153,    21,   201,   152,    22,   231,   202,   319,   333,
     251,    21,   252,   292,    22,    41,   253,   206,   254,   248,
     171,    21,   275,   242,   332,   273,   354,   294,    21,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,    81,   248,   162,
     315,   316,   161,   151,   335,    77,   151,   248,   248,   191,
     255,   232,   233,   336,   340,   162,   207,   208,   161,   289,
     290,   240,   241,    63,   190,    64,   243,   161,   351,    65,
     334,    66,   256,   245,    67,   250,   281,   282,   284,   285,
     244,   209,   342,    81,   307,   308,   210,   248,   343,   293,
     211,    77,   212,   372,   248,   275,   213,   249,   248,   248,
     151,    41,   248,   190,   378,   382,    41,   155,   384,   162,
     350,   328,   161,   248,    74,   248,   155,    41,   288,   391,
     248,   169,   248,   339,   314,   359,   355,   356,   260,   151,
     155,   362,   248,   365,   364,   377,   161,   299,   300,   251,
     267,   252,   301,   302,   259,   253,    43,   254,   371,   321,
      21,   322,   268,    22,   263,   323,   279,   324,   277,    99,
     338,   379,   178,   380,   381,   287,   383,   303,   304,   305,
     306,   341,   349,   388,   345,   389,   390,   155,   347,   348,
     214,   352,   392,   366,   367,   151,   151,   215,   216,   217,
     151,   368,   218,   219,   220,   221,   369,    45,   222,   223,
     224,   286,   274,   274,   252,   252,   387,   151,   253,   253,
     254,   254,   196,   309,   358,   310,   361,    22,   363,   311,
     151,   312,   151,   151,   167,   151,   313,   180,   331,   184,
     270,   295,   151,   327,   151,   151,   374,   376,     0,     0,
       0,   151,     0,     0,     0,     1,    88,    89,     2,     3,
      90,    91,    92,     4,   386,     5,     6,     7,    93,    94,
      95,     8,     9,    10,    96,    11,    12,    97,    13,    14,
      98,    15,    16,    17,    18,    19,    99,   100,     0,   101,
     102,     0,   103,   104,     0,     0,     0,   105,     0,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,   109,     0,     0,     0,
     195,    57,     0,    58,     0,   110,   111,    21,   112,     0,
       0,    23,     1,    88,    89,     2,     3,    90,    91,    92,
       4,     0,     5,     6,     7,    93,    94,    95,     8,     9,
      10,    96,    11,    12,    97,    13,    14,    98,    15,    16,
      17,    18,    19,    99,   100,     0,   101,   102,     0,   103,
     104,     0,     0,     0,   105,     0,   106,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,   109,     0,     0,     0,     0,    57,     0,
      58,     0,   110,   111,    21,   112,     1,     0,    23,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   251,     0,   252,
       0,     0,     0,   253,     0,   254,     0,     0,    21,     0,
       0,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   274,     1,
     252,     0,     2,     3,   253,     0,   254,     4,     0,     5,
       6,     7,    22,    23,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    74,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     4,    21,     5,     6,     7,    23,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
       0,    15,    16,    17,    18,    19,     2,     3,     0,   325,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     8,
       9,     0,     0,    11,    12,    97,     0,    14,    23,     0,
      16,    17,    18,    19,     0,   100,     0,   101,   102,     0,
     103,   104,     0,     0,     0,   105,     0,   106,   107,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       7,    23,     0,     0,     8,     9,     0,     0,    11,    12,
       0,     0,    14,     0,   109,    16,    17,    18,    19,     0,
       0,     0,     0,   110,   111,    21,   112,     2,     3,    23,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       8,     9,     0,     0,    11,    12,     0,     0,    14,     0,
       0,    16,    17,    18,    19,     2,     3,     0,     0,     0,
       4,     0,     5,   173,     7,     0,     0,     0,     8,     9,
       0,     0,    11,    12,    23,     0,    14,     0,     0,    16,
      17,    18,    19,    88,    89,     0,     0,    90,    91,    92,
       0,     0,     0,     0,     0,    93,    94,    95,     0,   269,
       0,    96,     0,     0,    97,     0,     0,    98,     0,     0,
      23,     0,     0,    99,   100,     0,   101,   102,     0,   103,
     104,     0,     0,     0,   105,     0,   106,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,   109,     0,     0,     0,   197,    57,     0,
      58,     0,   110,   111,    21,   112,    88,    89,     0,     0,
      90,    91,    92,     0,     0,     0,     0,     0,    93,    94,
      95,     0,     0,     0,    96,     0,     0,    97,     0,     0,
      98,     0,     0,     0,     0,     0,    99,   100,     0,   101,
     102,     0,   103,   104,     0,     0,     0,   105,     0,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,   109,     0,     0,     0,
     280,    57,     0,    58,     0,   110,   111,    21,   112,    88,
      89,     0,     0,    90,    91,    92,     0,     0,     0,     0,
       0,    93,    94,    95,     0,     0,     0,    96,     0,     0,
      97,     0,     0,    98,     0,     0,     0,     0,     0,    99,
     100,     0,   101,   102,    97,   103,   104,     0,     0,     0,
     105,     0,   106,   107,   100,     0,   101,   102,    97,   103,
     104,     0,     0,     0,   105,     0,   106,   107,   100,     0,
     101,   102,     0,   103,   104,     0,     0,   108,   105,   109,
     106,   107,     0,     0,    57,     0,    58,     0,   110,   111,
      21,   112,     0,   109,     0,     0,     0,   353,   168,     0,
       0,     0,   110,   111,    21,   112,     0,   109,     0,     0,
      97,     0,   168,     0,     0,     0,   110,   111,    21,   112,
     100,     0,   101,   102,     0,   103,   104,    97,     0,     0,
     105,     0,   106,   107,     0,     0,     0,   100,     0,   101,
     102,     0,   103,   104,     0,     0,     0,   105,     0,   106,
     107,     0,     0,     0,     0,     0,     0,   205,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   111,
      21,   112,     0,     0,   283,     0,   109,     0,     0,    97,
       0,     0,     0,     0,     0,   110,   111,    21,   112,   100,
       0,   101,   102,    97,   103,   104,     0,     0,     0,   105,
       0,   106,   107,   100,     0,   101,   102,     0,   103,   104,
       0,     0,     0,   105,     0,   106,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   111,    21,
     112,     0,   109,   357,     0,    97,     0,     0,     0,     0,
       0,   110,   111,    21,   112,   100,     0,   101,   102,    97,
     103,   104,     0,     0,     0,   105,     0,   106,   107,   100,
       0,   101,   102,    97,   103,   104,     0,     0,     0,   105,
       0,   106,   107,   100,     0,   101,   102,     0,   103,   104,
       0,     0,   360,   105,   109,   106,   107,     0,     0,     0,
       0,     0,     0,   110,   111,    21,   112,     0,   109,   373,
       0,     0,     0,     0,     0,     0,     0,   110,   111,    21,
     112,     0,   109,   375,     0,    97,     0,     0,     0,     0,
       0,   110,   111,    21,   112,   100,     0,   101,   102,    97,
     103,   104,     0,     0,     0,   105,     0,   106,   107,   100,
       0,   101,   102,     0,   103,   104,    97,     0,     0,   105,
       0,   106,   107,     0,     0,     0,   100,     0,   101,   102,
       0,   103,   104,     0,   109,   385,   105,     0,   106,   107,
       0,     0,     0,   110,   111,    21,   112,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   111,    21,
     112,     0,     0,     0,     0,   187,     0,     0,    97,     0,
       0,     0,     0,     0,   110,   111,    21,   112,   100,     0,
     101,   102,     0,   103,   104,     0,     0,     0,   105,     0,
     106,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,    21,   112
};

static const yytype_int16 yycheck[] =
{
       0,    64,    63,    78,    64,   168,     0,    39,   136,    50,
     155,    40,   116,    69,     0,   256,    74,    74,    69,     7,
      20,    69,    78,     0,    69,    25,    71,    78,    85,    29,
      78,    25,    73,    33,   275,    35,    30,    31,    74,    39,
      75,    70,    36,   103,   104,    33,   191,    40,    25,    85,
      77,    79,    88,   116,    81,    79,   116,    57,    69,    52,
     119,    85,    62,    63,    87,    20,    77,    52,   127,    63,
      49,   175,    72,    72,    29,   135,   136,    70,    57,   183,
      80,    79,   109,    60,    77,    78,    44,    85,    81,    82,
      42,    43,    77,    78,    66,    67,    81,    82,    69,    76,
      88,   229,   230,   231,    75,   180,    72,    62,    60,    61,
     168,    79,   175,    35,    36,   175,   109,    72,   118,   119,
     183,    37,    71,   183,   109,    80,   155,   127,    71,   129,
      74,    74,    69,    49,   193,    72,   109,   196,    72,    74,
      74,   118,    85,    74,    60,    88,    68,    74,   252,   277,
      74,    85,    76,   211,    88,   155,    80,   130,    82,    69,
      76,    85,   191,    45,   268,    75,   329,   225,    85,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   180,    69,   252,
     248,   250,   252,   193,    75,   180,   196,    69,    69,   226,
     155,    37,    38,    75,    75,   268,    40,    41,   268,   209,
     210,    54,    55,    74,   187,    76,    39,   277,   322,    80,
     279,    82,   251,    49,   256,    71,   199,   200,   201,   202,
      46,    65,    69,   226,   240,   241,    70,    69,    75,   212,
      74,   226,    76,    75,    69,   274,    80,    72,    69,    69,
     250,   251,    69,   226,    75,    75,   256,   251,    75,   322,
     321,   261,   322,    69,    44,    69,   260,   267,    72,    75,
      69,   329,    69,    72,   247,    72,   335,   336,    69,   279,
     274,   340,    69,   346,   342,    72,   346,   232,   233,    74,
      69,    76,   234,   235,    75,    80,   251,    82,   357,    74,
      85,    76,    71,    88,    77,    80,    71,    82,    75,    34,
     283,   370,   267,   372,   373,    72,   375,   236,   237,   238,
     239,    74,    77,   382,    75,   384,   385,   321,    75,    75,
      44,    70,   391,    75,    77,   335,   336,    51,    52,    53,
     340,    70,    56,    57,    58,    59,    12,    25,    62,    63,
      64,   203,    74,    74,    76,    76,    72,   357,    80,    80,
      82,    82,   118,   242,   337,   243,   339,    88,   341,   244,
     370,   245,   372,   373,    72,   375,   246,    82,   267,    87,
     181,   226,   382,   260,   384,   385,   359,   360,    -1,    -1,
      -1,   391,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   377,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    -1,
      -1,    89,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
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
      74,    85,    88,    89,    91,    92,    93,    94,   137,   138,
     141,   142,   143,   144,   150,   151,   155,   156,   157,   158,
     159,   166,   170,   156,     0,    93,    72,   139,   140,   156,
     138,   138,    79,   166,    79,   166,   138,    79,    81,    99,
     100,   137,   138,    74,    76,    80,    82,   157,   155,   158,
     160,    75,    69,    72,    44,    99,   100,   142,   145,   146,
     147,   155,    79,    87,   152,   153,   154,    79,     4,     5,
       8,     9,    10,    16,    17,    18,    22,    25,    28,    34,
      35,    37,    38,    40,    41,    45,    47,    48,    72,    74,
      83,    84,    86,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     136,   166,    99,   137,   156,   138,   161,   163,   164,   165,
     166,   118,   132,   135,   166,   155,   158,   140,    79,   133,
     171,    99,   147,    78,   146,    71,   148,   149,   156,   147,
     145,    69,    78,    44,   152,    72,    72,    74,   118,   118,
     136,   147,   167,    71,   135,    78,   101,    78,    95,    74,
      74,    74,    74,    95,   166,    72,   136,    40,    41,    65,
      70,    74,    76,    80,    44,    51,    52,    53,    56,    57,
      58,    59,    62,    63,    64,   134,    74,   118,   121,    35,
      36,    68,    37,    38,    66,    67,    42,    43,    60,    61,
      54,    55,    45,    39,    46,    49,    50,    73,    69,    72,
      71,    74,    76,    80,    82,   156,   158,   168,   169,    75,
      69,    69,    75,    77,   171,   172,   135,    69,    71,    78,
     153,   135,    78,    75,    74,   158,   168,    75,    95,    71,
      78,   136,   136,    72,   136,   136,   109,    72,    72,   166,
     166,   117,   133,   136,   133,   167,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   124,   125,   125,   126,
     127,   128,   129,   130,   136,   133,    95,   161,   168,   135,
     169,    74,    76,    80,    82,    70,   162,   164,   166,    69,
      78,   149,   135,   121,    95,    75,    75,    72,   136,    72,
      75,    74,    69,    75,    77,    75,    71,    75,    75,    77,
     161,   135,    70,    78,   171,    95,    95,    75,   136,    72,
      72,   136,    95,   136,   133,   132,    75,    77,    70,    12,
     106,    95,    75,    75,   136,    75,   136,    72,    75,    95,
      95,    95,    75,    95,    75,    75,   136,    72,    95,    95,
      95,    75,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    98,    99,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   104,   105,   106,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   109,
     110,   111,   111,   111,   111,   111,   112,   113,   114,   114,
     114,   114,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     119,   120,   120,   120,   120,   120,   120,   121,   121,   122,
     122,   122,   122,   123,   123,   123,   124,   124,   124,   125,
     125,   125,   125,   125,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   135,   136,   136,   137,   137,   138,   138,   138,
     138,   138,   138,   139,   139,   140,   140,   141,   141,   141,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   143,   144,   144,   145,
     145,   146,   147,   147,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   150,   151,   152,   152,   153,   153,   154,
     155,   155,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   158,   158,   158,   158,   159,   160,   160,   161,   161,
     162,   163,   163,   164,   164,   164,   165,   165,   166,   167,
     167,   168,   168,   168,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   170,   171,   171,   171,   172,   172
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
#line 73 "src/maths_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].nodePtr); }
#line 1890 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1896 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1904 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1910 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1916 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                               (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1924 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 88 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1932 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {NULL, (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1940 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 96 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr),NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1948 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 100 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1954 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 101 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1960 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1966 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1972 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 104 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1978 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 105 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1984 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 107 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1992 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 111 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 2000 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "src/maths_parser.y" /* yacc.c:1646  */
    {                                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 2008 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 119 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DEFAULT", *(yyvsp[0]._text));}
#line 2014 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 120 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CASE", *(yyvsp[0]._text));}
#line 2020 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 122 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2028 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 126 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2036 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 130 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2044 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 133 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 2050 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 135 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2056 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 136 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 2064 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 140 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2070 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 2078 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 145 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 2084 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 148 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2092 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 152 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2100 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 156 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2108 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", *(yyvsp[0]._text));}
#line 2114 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", *(yyvsp[0]._text));}
#line 2120 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 162 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", *(yyvsp[0]._text));}
#line 2126 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 164 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2134 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 168 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2142 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 172 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2150 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 176 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2158 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 180 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2166 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 184 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2174 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 188 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2182 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 192 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2190 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 196 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2198 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 200 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2206 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 204 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", *(yyvsp[0]._text));}
#line 2212 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 205 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", *(yyvsp[0]._text));}
#line 2218 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 206 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", *(yyvsp[0]._text));}
#line 2224 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 208 "src/maths_parser.y" /* yacc.c:1646  */
    {                                  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"GOTO", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2232 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 212 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-1]._text));}
#line 2238 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 213 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-1]._text));}
#line 2244 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 215 "src/maths_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2252 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 219 "src/maths_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2260 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 224 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("GOTO", *(yyvsp[0]._text));}
#line 2266 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 225 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", *(yyvsp[0]._text));}
#line 2272 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 227 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2278 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 228 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2284 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 229 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2290 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 231 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2298 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 235 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2304 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 236 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2310 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 239 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2316 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 240 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2324 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 244 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2332 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 248 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2340 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 252 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION",".", branches, branch_notes);}
#line 2348 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 256 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}
#line 2356 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 260 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2364 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 264 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2372 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 268 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2378 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 269 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2386 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 273 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2392 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 274 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2400 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 278 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2408 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 282 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2416 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 286 "src/maths_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2424 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 290 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2432 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 294 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", *(yyvsp[0]._text));}
#line 2438 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 296 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2444 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 297 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2450 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 298 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2456 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 299 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2462 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 300 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2468 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 301 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2474 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 303 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2480 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 304 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}
#line 2488 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 308 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2494 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 309 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2502 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 313 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2510 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 317 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}
#line 2518 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 321 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2524 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 322 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2532 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 326 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2540 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 330 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2546 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 331 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","<<", branches, branch_notes);}
#line 2554 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 335 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION",">>", branches, branch_notes);}
#line 2562 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 339 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2568 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 340 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2576 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 344 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2584 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 348 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2592 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 352 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2600 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 356 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2606 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 357 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2614 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 361 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2622 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 365 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2628 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 366 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","", branches, branch_notes);}
#line 2636 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 370 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2642 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 371 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","", branches, branch_notes);}
#line 2650 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 375 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2656 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 376 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","", branches, branch_notes);}
#line 2664 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 380 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2670 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 381 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","", branches, branch_notes);}
#line 2678 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 385 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2684 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 386 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","", branches, branch_notes);}
#line 2692 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 390 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2698 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 391 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2706 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 395 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2712 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 396 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2720 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 400 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2726 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 401 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2732 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 402 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2738 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 403 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2744 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 404 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2750 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 405 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2756 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 406 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2762 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 407 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2768 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 408 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2774 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 409 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2780 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 410 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2786 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 412 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2792 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 414 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2798 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 415 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2806 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 419 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2814 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 423 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2822 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 427 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2828 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 428 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2836 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 432 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2842 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 433 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2850 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 437 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2856 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 438 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2864 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 442 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2870 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 443 "src/maths_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2878 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 447 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2884 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 448 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2892 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 452 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2898 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 453 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2904 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 454 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2910 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 455 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2916 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 456 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2922 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 458 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2928 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 459 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2934 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 460 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2940 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 461 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2946 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 462 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2952 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 463 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2958 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 464 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2964 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 465 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2970 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 466 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2976 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 467 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2982 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 468 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2988 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 469 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2994 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 471 "src/maths_parser.y" /* yacc.c:1646  */
    {                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3002 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 475 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3010 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 479 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3018 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 483 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", *(yyvsp[0]._text));}
#line 3024 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 484 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", *(yyvsp[0]._text));}
#line 3030 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 486 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3036 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 487 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}
#line 3044 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 491 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}
#line 3052 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 495 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3058 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 497 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3066 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 501 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3072 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 503 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3080 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 507 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3086 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 508 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}
#line 3094 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 512 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 3100 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 513 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3108 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 517 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3116 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 521 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3124 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 525 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3132 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 529 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3140 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 533 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM",*(yyvsp[0]._text));}
#line 3146 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 535 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3152 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 536 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3160 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 540 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3166 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 541 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR","", branches, branch_notes);}
#line 3174 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 545 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3180 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 547 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER",*(yyvsp[0]._text));}
#line 3186 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 548 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER",*(yyvsp[0]._text));}
#line 3192 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 550 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3198 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 551 "src/maths_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATOR","", branches, branch_notes);}
#line 3206 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 555 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3212 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 557 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3218 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 559 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3226 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 563 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3234 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 567 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3242 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 571 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3250 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 575 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3258 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 579 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3264 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 580 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3272 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 584 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3280 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 588 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3288 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 592 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3294 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 594 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3300 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 595 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3308 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 599 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3314 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 600 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","ELIPSIS"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_TYPE_LIST","", branches, branch_notes);}
#line 3322 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 604 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ELIPSIS","...");}
#line 3328 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 606 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3334 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 607 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3342 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 611 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3350 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 615 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3356 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 617 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3364 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 621 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3370 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 622 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER_LIST","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("IDENTIFIER_LIST","", branches, branch_notes);}
#line 3378 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 626 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3384 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 628 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3390 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 629 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 3398 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 633 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3404 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 635 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3412 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 639 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3418 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 641 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3424 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 643 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3432 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 647 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3440 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 651 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3448 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 655 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3454 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 657 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3462 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 661 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3470 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 665 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3478 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 669 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3484 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 671 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text));}
#line 3490 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 673 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3496 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 675 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3504 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 679 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3512 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 683 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3518 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 684 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 3526 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3530 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 691 "src/maths_parser.y" /* yacc.c:1906  */


const ast_node *g_root;

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
