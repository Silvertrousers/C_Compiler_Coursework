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
#define YYLAST   1636

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  391

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
       0,    73,    73,    75,    76,    78,    79,    81,    82,    83,
      84,    86,    87,    88,    89,    90,    91,    93,    94,    95,
      97,    99,   100,   101,   102,   104,   105,   107,   108,   110,
     111,   113,   114,   115,   117,   118,   119,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     135,   136,   137,   138,   139,   141,   142,   144,   145,   146,
     147,   149,   150,   153,   154,   155,   156,   157,   158,   159,
     160,   162,   163,   165,   166,   167,   168,   170,   171,   173,
     175,   176,   177,   178,   179,   180,   182,   183,   185,   186,
     187,   188,   190,   191,   192,   194,   195,   196,   198,   199,
     200,   201,   202,   204,   205,   206,   208,   209,   211,   212,
     214,   215,   217,   218,   220,   221,   223,   224,   226,   227,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   241,   243,   244,   246,   247,   249,   250,   251,   252,
     253,   254,   256,   257,   259,   260,   262,   263,   264,   265,
     266,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   281,   282,   283,   285,   286,   288,   289,
     291,   293,   294,   295,   296,   298,   299,   301,   302,   303,
     305,   306,   307,   309,   311,   312,   314,   315,   317,   319,
     320,   322,   323,   325,   326,   327,   328,   329,   330,   331,
     334,   335,   336,   337,   339,   341,   342,   344,   345,   347,
     349,   350,   352,   353,   354,   356,   357,   359,   361,   362,
     364,   365,   366,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   378,   380,   381,   382,   384,   385
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
  "FUNCTION_DECLARATION", "STATEMENT", "LABELED_STATEMENT", "IDENTIFIER",
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
  "PARAMETER_TYPE_LIST", "ELIPSIS", "PARAMETER_LIST",
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

#define YYPACT_NINF -253

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-253)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     661,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,
     -27,  -253,  -253,  -253,    28,   661,  -253,  -253,  -253,  -253,
      42,   867,   867,  -253,    -8,  -253,     5,   867,   763,   250,
     -58,    12,  -253,   -63,  -253,  -253,  -253,   176,  -253,   692,
    -253,  -253,   976,   -46,   -33,    17,  -253,   474,  -253,  -253,
     763,  -253,    42,   794,  1481,  -253,  -253,   250,  -253,  -253,
      12,  -253,   -27,  -253,  1200,  -253,   763,   976,   287,  -253,
      85,   976,   976,  -253,     9,  -253,    41,   -33,    38,  1481,
      43,    75,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  1498,  1498,  -253,  -253,  -253,  -253,   895,
    -253,  -253,  -253,  -253,  -253,    79,  -253,   387,  1006,  -253,
    -253,    86,    98,  -253,   105,   109,  1172,  -253,   119,  1252,
    -253,  -253,   104,   284,  1550,  1481,  -253,    30,   174,    56,
      64,   179,   225,   219,   217,   255,     3,  -253,  -253,   178,
    -253,  -253,   264,  -253,    55,   238,   254,  -253,    72,  -253,
    -253,  -253,   267,  -253,  -253,  -253,  1200,  -253,  -253,  -253,
    -253,  -253,  -253,  1481,   258,  -253,   260,  -253,   940,   -33,
    -253,  1481,    13,  -253,   274,  -253,  1172,  1481,  -253,  -253,
      80,   276,   279,  1172,  -253,  1089,  -253,  -253,  1481,  1481,
    1269,  1481,   315,   294,  -253,   206,  -253,  -253,   119,   119,
    1481,  1481,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  -253,  1481,   895,  -253,  -253,  1481,  1481,
    1481,  1481,  1481,  1481,  1481,  1481,  1481,  1481,  1481,  1481,
    1481,  1481,  1481,  1481,  1481,  1481,  1481,  1481,  -253,   558,
    1481,  -253,  -253,  -253,   118,  -253,   277,  -253,   834,   119,
    -253,  -253,  -253,    34,  -253,    85,  1481,  -253,  -253,  -253,
    -253,  1172,  -253,  -253,   589,   305,  -253,  1481,  -253,  -253,
      92,   113,  1321,   213,   122,   293,  -253,  -253,  -253,  -253,
     127,  -253,   -55,  -253,   297,  -253,  -253,  -253,    30,    30,
     174,   174,    56,    56,    56,    56,    64,    64,   179,   225,
     219,   217,   255,   212,  -253,   299,   300,   292,   277,   867,
    1481,  -253,  -253,   307,  -253,  -253,  -253,  1186,  -253,  -253,
    -253,  -253,  -253,  1172,  1172,  1335,   218,  1387,  1172,  1481,
    1481,  -253,  -253,  -253,  1481,  -253,  -253,  -253,   303,   309,
     314,  -253,  -253,  -253,   376,  1172,   132,  1401,  1415,   240,
    -253,   163,  -253,  -253,  -253,  -253,  -253,  -253,  1172,  -253,
    1172,  1172,   167,  1172,   197,  1467,   327,  -253,  -253,  -253,
    1172,  -253,  1172,  1172,   198,  -253,  -253,  -253,  -253,  1172,
    -253
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   149,   152,   189,   157,   183,   147,   156,   154,   155,
     150,   153,   158,   148,   166,   146,   167,   159,   151,   190,
       0,    20,   204,   232,     0,     2,     3,     5,   193,     6,
       0,   136,   138,   160,     0,   161,     0,   140,     0,   191,
       0,   200,   162,     0,     1,     4,   134,     0,   142,   144,
     137,   139,     0,   163,     0,   180,   141,     0,    24,    10,
       0,    25,     0,     0,     0,   198,   195,   192,   205,   202,
     201,   194,     0,   135,     0,     8,     0,   171,     0,   168,
       0,   173,     0,   188,     0,   184,   186,     0,     0,     0,
       0,     0,    49,    47,    55,    35,    56,    79,    34,    48,
      81,    82,    83,     0,     0,    80,    84,    85,    30,     0,
      61,    62,    59,    27,    11,    57,    12,     0,     0,    13,
      14,     0,     0,    15,     0,     0,     0,    16,     0,     0,
      63,    58,    73,    86,     0,     0,    88,    92,    95,    98,
     103,   106,   108,   110,   112,   114,   116,   118,   132,     0,
       9,    26,   144,   215,   213,     0,   207,   210,     0,    57,
      86,   131,     0,   206,   203,   143,     0,   233,   145,     7,
     172,   164,   169,     0,   170,   175,   177,   174,     0,     0,
     182,     0,     0,    52,     0,    51,     0,     0,    75,    74,
       0,   218,     0,     0,    23,     0,    22,    28,     0,     0,
       0,     0,     0,     0,    54,     0,    70,    69,     0,     0,
       0,     0,    65,   120,   123,   126,   127,   124,   125,   121,
     122,   128,   130,   129,     0,     0,    77,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,   231,   227,   212,   220,   214,   222,   197,     0,     0,
     199,   196,   236,     0,   179,     0,     0,   165,   185,   187,
     181,     0,    19,    60,     0,   220,   219,     0,    17,    21,
       0,     0,     0,     0,     0,     0,    50,    53,    68,    67,
       0,    71,     0,   119,     0,    89,    90,    91,    93,    94,
      97,    96,    99,   100,   101,   102,   105,   104,   107,   109,
     111,   113,   115,     0,   133,     0,     0,     0,   221,     0,
       0,   230,   226,     0,   208,   211,   216,     0,   234,   176,
     178,    18,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    66,    64,    78,     0,   229,   223,   225,     0,     0,
       0,   235,   237,    33,    31,     0,     0,     0,     0,     0,
      37,     0,    72,   117,   228,   224,   209,    36,     0,    46,
       0,     0,     0,     0,     0,     0,     0,    32,    43,    44,
       0,    45,     0,     0,     0,    38,    40,    41,    42,     0,
      39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -253,  -253,  -253,   398,  -253,   -94,  -253,     0,    10,    18,
     312,  -253,  -253,  -253,  -253,  -253,  -253,  -253,   224,  -253,
    -253,  -253,  -253,  -253,  -253,  -253,  -253,   -15,  -253,  -253,
     -96,    60,    63,   125,    76,   189,   191,   188,   192,   193,
    -253,   -60,   -71,  -253,   -79,   -36,    21,     6,  -253,   365,
    -253,    27,  -253,  -253,   357,   -67,   -68,  -253,   175,  -253,
    -253,   354,   263,  -253,   -26,   -12,   -23,    -6,  -253,  -253,
     -62,  -253,  -253,   185,  -253,   220,  -149,  -252,  -253,  -159,
    -253
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,   113,   114,   159,   116,    60,
     118,   119,   120,   121,   122,   368,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   290,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   224,   162,   149,    61,    62,    47,    48,
      31,    32,    33,    34,    78,    79,    80,   174,   175,    35,
      36,    84,    85,    86,    37,    38,    39,    40,    41,    70,
     315,   324,   156,   157,   158,   192,   316,   256,    42,   168,
     263
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      28,   155,   318,   167,   161,   255,    30,   262,    43,   170,
     184,   172,    71,   177,   247,    68,    20,    67,    49,     3,
      28,    29,   342,   318,   197,    28,    81,    21,    44,   161,
      28,    30,   202,    82,    53,    69,    55,    50,    51,   227,
      28,   191,   276,    56,   163,    19,    29,    20,    59,   160,
     152,    81,    81,   245,    83,    81,    81,   115,    21,    75,
     152,    22,    28,   153,   164,   228,   229,    76,   176,   154,
     150,    52,    28,   190,   160,   117,   246,    21,   179,    77,
      28,   151,   179,    81,    54,   181,   169,   180,   188,   189,
      21,   270,   272,   205,   264,   167,    87,   151,   230,   278,
      22,   197,   269,   327,    77,    77,   235,   236,    77,    77,
     183,   172,   328,   161,    46,   185,    20,   115,   115,   226,
     160,   161,   233,   234,   237,   238,   115,    21,   203,   249,
      22,   250,   295,   296,   297,   251,    77,   252,   151,   291,
      21,   259,   253,    22,   206,   207,   186,   260,   254,   247,
     193,   190,    81,   293,    28,   273,   173,   191,   160,    20,
     198,   247,   280,   281,   283,   284,   160,   333,   352,   208,
      21,   317,   199,    22,   209,   292,   314,   331,   210,   200,
     211,   332,   247,   201,   212,   275,   115,   330,   334,   190,
     161,   247,   249,   115,   250,   115,   340,   338,   251,    81,
     252,   247,   341,    21,    21,    77,   161,   370,   288,   289,
     313,   231,   232,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,    67,   247,   239,   240,   160,   247,    43,   376,   353,
     354,   349,   380,   254,   360,    72,   336,   247,    73,    28,
     248,   160,    77,   176,    28,   154,   167,   348,   242,   326,
     161,   369,   160,   243,   154,    28,   247,   247,   275,   362,
     241,   115,   382,   389,   377,   247,   378,   379,   287,   381,
     154,   247,   247,   344,   363,   337,   386,   247,   387,   388,
     357,   298,   299,     2,     3,   390,   300,   301,     4,   356,
       5,   359,     7,   361,   244,   160,     8,     9,    74,   247,
      11,    12,   375,   257,    14,   306,   307,    16,    17,    18,
      19,   372,   374,   258,    63,   154,    64,   265,   213,   160,
      65,   266,    66,   115,   115,   214,   215,   216,   115,   384,
     217,   218,   219,   220,   261,   271,   221,   222,   223,    99,
     274,   319,   250,   320,   277,   115,   251,   321,   252,   322,
     302,   303,   304,   305,    22,   171,   286,   339,   115,   347,
     115,   115,   343,   115,   345,   346,    23,   350,   364,   274,
     115,   250,   115,   115,   366,   251,   365,   252,   367,   115,
       1,    88,    89,     2,     3,    90,    91,    92,     4,   385,
       5,     6,     7,    93,    94,    95,     8,     9,    10,    96,
      11,    12,    97,    13,    14,    98,    15,    16,    17,    18,
      19,    99,   100,    45,   101,   102,   285,   103,   104,   195,
     308,   310,   105,   309,   106,   107,   311,   165,   312,   178,
     329,   182,   268,   325,     0,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,   109,     0,     0,     0,   194,    57,     0,    58,     0,
     110,   111,    21,   112,     0,     0,    23,     1,    88,    89,
       2,     3,    90,    91,    92,     4,     0,     5,     6,     7,
      93,    94,    95,     8,     9,    10,    96,    11,    12,    97,
      13,    14,    98,    15,    16,    17,    18,    19,    99,   100,
       0,   101,   102,     0,   103,   104,     0,     0,     0,   105,
       0,   106,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,   109,     0,
       0,     0,     0,    57,     0,    58,     0,   110,   111,    21,
     112,     1,     0,    23,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,   250,     0,     0,     0,   251,     0,
     252,     0,     0,    21,     0,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274,     1,   250,     0,     2,     3,   251,
       0,   252,     4,     0,     5,     6,     7,    22,    23,     0,
       8,     9,    10,     0,    11,    12,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
       0,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     2,
       3,    57,     0,    58,     4,     0,     5,     6,     7,     0,
       0,    23,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       2,     3,    57,     0,    58,     4,     0,     5,     6,     7,
       0,     0,    23,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,    21,
       5,     6,     7,    23,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     2,     3,     0,   323,     0,     4,     0,     5,     0,
       7,     0,     0,     0,     8,     9,     0,     0,    11,    12,
      97,     0,    14,    23,     0,    16,    17,    18,    19,     0,
     100,     0,   101,   102,     0,   103,   104,     0,     0,     0,
     105,     0,   106,   107,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     0,     7,    23,     0,     0,     8,
       9,     0,     0,    11,    12,     0,     0,    14,     0,   109,
      16,    17,    18,    19,     0,     0,     0,     0,   110,   111,
      21,   112,     2,     3,    23,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     8,     9,     0,     0,    11,
      12,     0,     0,    14,     0,     0,    16,    17,    18,    19,
      88,    89,     0,     0,    90,    91,    92,     0,   267,     0,
       0,     0,    93,    94,    95,     0,     0,     0,    96,    23,
       0,    97,     0,     0,    98,     0,     0,     0,     0,     0,
      99,   100,     0,   101,   102,     0,   103,   104,     0,     0,
       0,   105,     0,   106,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,     0,
     109,     0,     0,     0,   196,    57,     0,    58,     0,   110,
     111,    21,   112,    88,    89,     0,     0,    90,    91,    92,
       0,     0,     0,     0,     0,    93,    94,    95,     0,     0,
       0,    96,     0,     0,    97,     0,     0,    98,     0,     0,
       0,     0,     0,    99,   100,     0,   101,   102,     0,   103,
     104,     0,     0,     0,   105,     0,   106,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,   109,     0,     0,     0,   279,    57,     0,
      58,     0,   110,   111,    21,   112,    88,    89,     0,     0,
      90,    91,    92,     0,     0,     0,     0,     0,    93,    94,
      95,     0,     0,     0,    96,     0,     0,    97,     0,     0,
      98,     0,     0,     0,     0,     0,    99,   100,     0,   101,
     102,    97,   103,   104,     0,     0,     0,   105,     0,   106,
     107,   100,     0,   101,   102,    97,   103,   104,     0,     0,
       0,   105,     0,   106,   107,   100,     0,   101,   102,     0,
     103,   104,     0,     0,   108,   105,   109,   106,   107,     0,
       0,    57,     0,    58,     0,   110,   111,    21,   112,     0,
     109,     0,     0,     0,   351,   166,     0,     0,     0,   110,
     111,    21,   112,     0,   109,     0,     0,    97,     0,   166,
       0,     0,     0,   110,   111,    21,   112,   100,     0,   101,
     102,     0,   103,   104,    97,     0,     0,   105,     0,   106,
     107,     0,     0,     0,   100,     0,   101,   102,     0,   103,
     104,     0,     0,     0,   105,     0,   106,   107,     0,     0,
       0,     0,     0,     0,   204,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,    21,   112,     0,
       0,   282,     0,   109,     0,     0,    97,     0,     0,     0,
       0,     0,   110,   111,    21,   112,   100,     0,   101,   102,
      97,   103,   104,     0,     0,     0,   105,     0,   106,   107,
     100,     0,   101,   102,     0,   103,   104,     0,     0,     0,
     105,     0,   106,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   335,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   111,    21,   112,     0,   109,
     355,     0,    97,     0,     0,     0,     0,     0,   110,   111,
      21,   112,   100,     0,   101,   102,    97,   103,   104,     0,
       0,     0,   105,     0,   106,   107,   100,     0,   101,   102,
      97,   103,   104,     0,     0,     0,   105,     0,   106,   107,
     100,     0,   101,   102,     0,   103,   104,     0,     0,   358,
     105,   109,   106,   107,     0,     0,     0,     0,     0,     0,
     110,   111,    21,   112,     0,   109,   371,     0,     0,     0,
       0,     0,     0,     0,   110,   111,    21,   112,     0,   109,
     373,     0,    97,     0,     0,     0,     0,     0,   110,   111,
      21,   112,   100,     0,   101,   102,    97,   103,   104,     0,
       0,     0,   105,     0,   106,   107,   100,     0,   101,   102,
       0,   103,   104,    97,     0,     0,   105,     0,   106,   107,
       0,     0,     0,   100,     0,   101,   102,     0,   103,   104,
       0,   109,   383,   105,     0,   106,   107,     0,     0,     0,
     110,   111,    21,   112,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   111,    21,   112,     0,     0,
       0,     0,   187,     0,     0,    97,     0,     0,     0,     0,
       0,   110,   111,    21,   112,   100,     0,   101,   102,     0,
     103,   104,     0,     0,     0,   105,     0,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,    21,   112
};

static const yytype_int16 yycheck[] =
{
       0,    63,   254,    74,    64,   154,     0,   166,    20,    77,
      89,    78,    75,    81,    69,    41,    74,    40,    30,     7,
      20,     0,    77,   275,   118,    25,    52,    85,     0,    89,
      30,    25,   126,    79,    34,    41,    36,    31,    32,   135,
      40,   109,   191,    37,    70,    33,    25,    74,    38,    64,
      62,    77,    78,    50,    87,    81,    82,    57,    85,    49,
      72,    88,    62,    63,    70,    35,    36,    49,    80,    63,
      60,    79,    72,   109,    89,    57,    73,    85,    69,    52,
      80,    60,    69,   109,    79,    44,    76,    78,   103,   104,
      85,    78,   186,   129,   173,   166,    79,    76,    68,   193,
      88,   195,   181,    69,    77,    78,    42,    43,    81,    82,
      72,   178,    78,   173,    72,    72,    74,   117,   118,   134,
     135,   181,    66,    67,    60,    61,   126,    85,   128,    74,
      88,    76,   228,   229,   230,    80,   109,    82,   117,   210,
      85,    69,   154,    88,    40,    41,    71,    75,   154,    69,
      71,   187,   178,   224,   154,    75,    71,   225,   173,    74,
      74,    69,   198,   199,   200,   201,   181,    75,   327,    65,
      85,   250,    74,    88,    70,   211,   247,   271,    74,    74,
      76,   277,    69,    74,    80,   191,   186,   266,    75,   225,
     250,    69,    74,   193,    76,   195,    69,    75,    80,   225,
      82,    69,    75,    85,    85,   178,   266,    75,   208,   209,
     246,    37,    38,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   254,    69,    54,    55,   250,    69,   249,    75,   333,
     334,   320,    75,   249,   338,    69,   282,    69,    72,   249,
      72,   266,   225,   265,   254,   249,   327,   319,    39,   259,
     320,   355,   277,    46,   258,   265,    69,    69,   274,   340,
      45,   271,    75,    75,   368,    69,   370,   371,    72,   373,
     274,    69,    69,    71,   344,    72,   380,    69,   382,   383,
      72,   231,   232,     6,     7,   389,   233,   234,    11,   335,
      13,   337,    15,   339,    49,   320,    19,    20,    44,    69,
      23,    24,    72,    75,    27,   239,   240,    30,    31,    32,
      33,   357,   358,    69,    74,   319,    76,    69,    44,   344,
      80,    71,    82,   333,   334,    51,    52,    53,   338,   375,
      56,    57,    58,    59,    77,    71,    62,    63,    64,    34,
      74,    74,    76,    76,    75,   355,    80,    80,    82,    82,
     235,   236,   237,   238,    88,    78,    72,    74,   368,    77,
     370,   371,    75,   373,    75,    75,    89,    70,    75,    74,
     380,    76,   382,   383,    70,    80,    77,    82,    12,   389,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    72,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    25,    37,    38,   202,    40,    41,   117,
     241,   243,    45,   242,    47,    48,   244,    72,   245,    82,
     265,    87,   179,   258,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    83,    84,    85,
      86,     3,    -1,    89,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,     3,    76,    -1,     6,     7,    80,
      -1,    82,    11,    -1,    13,    14,    15,    88,    89,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,
       7,    79,    -1,    81,    11,    -1,    13,    14,    15,    -1,
      -1,    89,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
       6,     7,    79,    -1,    81,    11,    -1,    13,    14,    15,
      -1,    -1,    89,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    85,
      13,    14,    15,    89,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,     6,     7,    -1,    70,    -1,    11,    -1,    13,    -1,
      15,    -1,    -1,    -1,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    89,    -1,    30,    31,    32,    33,    -1,
      35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    -1,    15,    89,    -1,    -1,    19,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,    74,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,     6,     7,    89,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    19,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    31,    32,    33,
       4,     5,    -1,    -1,     8,     9,    10,    -1,    78,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,    89,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    -1,    -1,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,
      38,    25,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    35,    -1,    37,    38,    25,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    48,    35,    -1,    37,    38,    -1,
      40,    41,    -1,    -1,    72,    45,    74,    47,    48,    -1,
      -1,    79,    -1,    81,    -1,    83,    84,    85,    86,    -1,
      74,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,
      84,    85,    86,    -1,    74,    -1,    -1,    25,    -1,    79,
      -1,    -1,    -1,    83,    84,    85,    86,    35,    -1,    37,
      38,    -1,    40,    41,    25,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,
      -1,    72,    -1,    74,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    35,    -1,    37,    38,
      25,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,    74,
      75,    -1,    25,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    35,    -1,    37,    38,    25,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,    35,    -1,    37,    38,
      25,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,    72,
      45,    74,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,    74,
      75,    -1,    25,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    35,    -1,    37,    38,    25,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,    35,    -1,    37,    38,
      -1,    40,    41,    25,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    74,    75,    45,    -1,    47,    48,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    35,    -1,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      74,    85,    88,    89,    91,    92,    93,    94,    97,   136,
     137,   140,   141,   142,   143,   149,   150,   154,   155,   156,
     157,   158,   168,   155,     0,    93,    72,   138,   139,   155,
     137,   137,    79,    97,    79,    97,   137,    79,    81,    98,
      99,   136,   137,    74,    76,    80,    82,   156,   154,   157,
     159,    75,    69,    72,    44,    98,    99,   141,   144,   145,
     146,   154,    79,    87,   151,   152,   153,    79,     4,     5,
       8,     9,    10,    16,    17,    18,    22,    25,    28,    34,
      35,    37,    38,    40,    41,    45,    47,    48,    72,    74,
      83,    84,    86,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   135,
      98,   136,   155,    97,   137,   160,   162,   163,   164,    97,
     117,   131,   134,   154,   157,   139,    79,   132,   169,    98,
     146,    78,   145,    71,   147,   148,   155,   146,   144,    69,
      78,    44,   151,    72,   134,    72,    71,    74,   117,   117,
     135,   146,   165,    71,    78,   100,    78,    95,    74,    74,
      74,    74,    95,    97,    72,   135,    40,    41,    65,    70,
      74,    76,    80,    44,    51,    52,    53,    56,    57,    58,
      59,    62,    63,    64,   133,    74,   117,   120,    35,    36,
      68,    37,    38,    66,    67,    42,    43,    60,    61,    54,
      55,    45,    39,    46,    49,    50,    73,    69,    72,    74,
      76,    80,    82,   155,   157,   166,   167,    75,    69,    69,
      75,    77,   169,   170,   134,    69,    71,    78,   152,   134,
      78,    71,    95,    75,    74,   157,   166,    75,    95,    78,
     135,   135,    72,   135,   135,   108,    72,    72,    97,    97,
     116,   132,   135,   132,   165,   120,   120,   120,   121,   121,
     122,   122,   123,   123,   123,   123,   124,   124,   125,   126,
     127,   128,   129,   135,   132,   160,   166,   134,   167,    74,
      76,    80,    82,    70,   161,   163,    97,    69,    78,   148,
     134,    95,   120,    75,    75,    72,   135,    72,    75,    74,
      69,    75,    77,    75,    71,    75,    75,    77,   160,   134,
      70,    78,   169,    95,    95,    75,   135,    72,    72,   135,
      95,   135,   132,   131,    75,    77,    70,    12,   105,    95,
      75,    75,   135,    75,   135,    72,    75,    95,    95,    95,
      75,    95,    75,    75,   135,    72,    95,    95,    95,    75,
      95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    98,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   103,   104,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   108,   109,
     110,   110,   110,   110,   110,   111,   112,   113,   113,   113,
     113,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   117,   117,   117,   117,   117,   117,   118,
     119,   119,   119,   119,   119,   119,   120,   120,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   135,   135,   136,   136,   137,   137,   137,   137,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   142,   143,   143,   144,   144,
     145,   146,   146,   146,   146,   147,   147,   148,   148,   148,
     149,   149,   149,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   155,   156,   156,   156,   156,   156,   156,   156,
     157,   157,   157,   157,   158,   159,   159,   160,   160,   161,
     162,   162,   163,   163,   163,   164,   164,    97,   165,   165,
     166,   166,   166,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   168,   169,   169,   169,   170,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     4,     3,     3,     1,     1,     2,     1,     2,     2,
       1,     5,     7,     5,     1,     1,     1,     5,     7,     9,
       8,     8,     8,     7,     7,     7,     6,     1,     1,     1,
       3,     2,     2,     3,     2,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     2,     4,     3,     3,     2,
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
       1,     2,     2,     3,     1,     1,     2,     1,     3,     3,
       1,     3,     2,     1,     2,     1,     3,     1,     1,     2,
       1,     2,     1,     3,     4,     3,     2,     1,     4,     3,
       2,     1,     1,     1,     3,     4,     1,     3
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
#line 1884 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1890 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"});}
#line 1896 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 78 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1902 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("EXTERNAL_DECLARATION","", std::vector<ast_node*>{(yyvsp[0].nodePtr)});}
#line 1908 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 81 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"});}
#line 1914 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 82 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)}, std::vector<std::string>{"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"});}
#line 1920 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 83 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", std::vector<ast_node*>{NULL, (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"});}
#line 1926 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 84 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", std::vector<ast_node*>{NULL, (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)}, std::vector<std::string>{"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"});}
#line 1932 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 86 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1938 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 87 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1944 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1950 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1956 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 90 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1962 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 91 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1968 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 93 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"IDENTIFIER", "STATEMENT"});}
#line 1974 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 94 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", std::vector<ast_node*>{(yyvsp[-3]._text), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"});}
#line 1980 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 95 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", std::vector<ast_node*>{(yyvsp[-2]._text), (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_DEFAULT", "STATEMENT"});}
#line 1986 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 97 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER", *(yyvsp[0]._text));}
#line 1992 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 99 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)}, std::vector<std::string>{"DECLARATION_LIST", "STATEMENT_LIST"});}
#line 1998 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 100 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", std::vector<ast_node*>{NULL, (yyvsp[-1].nodePtr)}, std::vector<std::string>{"DECLARATION_LIST", "STATEMENT_LIST"});}
#line 2004 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 101 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", std::vector<ast_node*>{(yyvsp[-1].nodePtr), NULL}, std::vector<std::string>{"DECLARATION_LIST", "STATEMENT_LIST"});}
#line 2010 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 102 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 2016 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 104 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2022 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 105 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DECLARATION_LIST","", std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"DECLARATION_LIST", "DECLARATION"});}
#line 2028 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2034 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STATEMENT_LIST","", std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"STATEMENT_LIST", "STATEMENT"});}
#line 2040 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 110 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 2046 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 111 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("EXPRESSION_STATEMENT", "")}
#line 2052 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 113 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL}, std::vector<std::string>{"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"});}
#line 2058 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 114 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"});}
#line 2064 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 115 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL}, std::vector<std::string>{"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"});}
#line 2070 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 117 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", *(yyvsp[0]._text));}
#line 2076 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 118 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", *(yyvsp[0]._text));}
#line 2082 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 119 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", *(yyvsp[0]._text));}
#line 2088 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 121 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
#line 2094 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 122 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)}, std::vector<std::string>{"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
#line 2100 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 123 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"});}
#line 2106 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 124 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"});}
#line 2112 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 125 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"});}
#line 2118 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 126 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"});}
#line 2124 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 127 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"});}
#line 2130 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 128 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"});}
#line 2136 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 129 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"});}
#line 2142 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 130 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"});}
#line 2148 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 131 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", *(yyvsp[0]._text));}
#line 2154 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 132 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", *(yyvsp[0]._text));}
#line 2160 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 133 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", *(yyvsp[0]._text));}
#line 2166 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-2].nodePtr));}
#line 2172 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-1]._text));}
#line 2178 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 137 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-1]._text));}
#line 2184 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "", std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"RETURN", "EXPR"});}
#line 2190 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", "",std::vector<ast_node*>{(yyvsp[-1].nodePtr), NULL},std::vector<std::string>{"RETURN", "EXPR"});}
#line 2196 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("GOTO", *(yyvsp[0]._text));}
#line 2202 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 142 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", *(yyvsp[0]._text));}
#line 2208 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2214 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2220 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2226 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr)});}
#line 2232 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2238 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 150 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2244 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 153 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2250 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 154 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"POSTFIX_EXPRESSION", "EXPR"});}
#line 2256 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 155 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), NULL},std::vector<std::string>{"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"});}
#line 2262 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 156 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"});}
#line 2268 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 157 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION",".",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"POSTFIX_EXPRESSION", "IDENTIFIER"});}
#line 2274 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 158 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"POSTFIX_EXPRESSION", "IDENTIFIER"});}
#line 2280 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 159 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++",std::vector<ast_node*>{(yyvsp[-1].nodePtr)},std::vector<std::string>{"POSTFIX_EXPRESSION"});}
#line 2286 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 160 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--",std::vector<ast_node*>{(yyvsp[-1].nodePtr)},std::vector<std::string>{"POSTFIX_EXPRESSION"});}
#line 2292 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 162 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2298 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 163 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr)},std::vector<std::string>{"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"});}
#line 2304 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 165 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2310 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 166 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++",std::vector<ast_node*>{(yyvsp[-1]._text)},std::vector<std::string>{"UNARY_OPERATOR"});}
#line 2316 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 167 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--",std::vector<ast_node*>{(yyvsp[-1]._text)},std::vector<std::string>{"UNARY_OPERATOR"});}
#line 2322 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 168 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"UNARY_OPERATOR","CAST_EXPRESSION"});}
#line 2328 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 170 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"SIZE_OF","UNARY_EXPRESSION"});}
#line 2334 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 171 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"SIZE_OF","TYPE_NAME"});}
#line 2340 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 173 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", *(yyvsp[0]._text));}
#line 2346 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 175 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2352 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 176 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2358 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 177 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2364 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 178 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2370 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 179 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2376 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 180 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2382 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 182 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2388 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 183 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"TYPE_NAME","CAST_EXPRESSION"});}
#line 2394 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 185 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2400 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"});}
#line 2406 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 187 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"});}
#line 2412 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 188 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","%",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"});}
#line 2418 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 190 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2424 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 191 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"});}
#line 2430 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 192 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"});}
#line 2436 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 194 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2442 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 195 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<<",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"});}
#line 2448 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 196 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">>",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"});}
#line 2454 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 198 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2460 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 199 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"});}
#line 2466 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 200 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"});}
#line 2472 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 201 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"});}
#line 2478 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 202 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"});}
#line 2484 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 204 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2490 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 205 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"});}
#line 2496 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 206 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"});}
#line 2502 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 208 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2508 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 209 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("AND_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"AND_EXPRESSION","EQUALITY_EXPRESSION"});}
#line 2514 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 211 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2520 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 212 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"});}
#line 2526 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 214 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2532 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 215 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"});}
#line 2538 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 217 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2544 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 218 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"});}
#line 2550 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 220 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2556 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 221 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"});}
#line 2562 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 223 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2568 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 224 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"});}
#line 2574 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 226 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2580 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 227 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"});}
#line 2586 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 229 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2592 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 230 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2598 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 231 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2604 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 232 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2610 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 233 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2616 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 234 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2622 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 235 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2628 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 236 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2634 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 237 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2640 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 238 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2646 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 239 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2652 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 241 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2658 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 243 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2664 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 244 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("EXPR","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"EXPR","ASSIGNMENT_EXPRESSION"});}
#line 2670 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 246 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DECLARATION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), NULL},std::vector<std::string>{"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"});}
#line 2676 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 247 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DECLARATION","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"});}
#line 2682 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 249 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2688 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 250 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"});}
#line 2694 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 251 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2700 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 252 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"});}
#line 2706 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 253 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2712 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 254 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"});}
#line 2718 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 256 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2724 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 257 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"INIT_DECLARATOR_LIST","INIT_DECLARATOR"});}
#line 2730 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 259 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2736 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 260 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("INIT_DECLARATOR","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"DECLARATOR","INITIALIZER"});}
#line 2742 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 262 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2748 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 263 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2754 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 264 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2760 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 265 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2766 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 266 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2772 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 268 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2778 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 269 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2784 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 270 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2790 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 271 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2796 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 272 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2802 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 273 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2808 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 274 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2814 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 275 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2820 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 276 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2826 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 277 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2832 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 278 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2838 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 279 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2844 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 281 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"STRUCT_OR_UNION","IDENTIFIER"});}
#line 2850 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 282 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), NULL, (yyvsp[0]._text)},std::vector<std::string>{"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"});}
#line 2856 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 283 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","",std::vector<ast_node*>{(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"});}
#line 2862 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 285 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", *(yyvsp[0]._text));}
#line 2868 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 286 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", *(yyvsp[0]._text));}
#line 2874 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 288 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2880 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 289 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"});}
#line 2886 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 291 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"});}
#line 2892 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 293 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2898 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 294 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"});}
#line 2904 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 295 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2910 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 296 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"});}
#line 2916 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 298 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2922 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 299 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1]._text)},std::vector<std::string>{"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"});}
#line 2928 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 301 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 2934 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 302 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1]._text)},std::vector<std::string>{"DECLARATOR","CONSTANT_EXPRESSION"});}
#line 2940 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 303 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","",std::vector<ast_node*>{NULL, (yyvsp[0].nodePtr)},std::vector<std::string>{"DECLARATOR","CONSTANT_EXPRESSION"});}
#line 2946 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 305 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"ENUM","IDENTIFIER"});}
#line 2952 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 306 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","",std::vector<ast_node*>{(yyvsp[-4].nodePtr),(yyvsp[-3].nodePtr), (yyvsp[-2]._text)},std::vector<std::string>{"ENUM","IDENTIFIER","ENUMERATOR_LIST"});}
#line 2958 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 307 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"ENUM","ENUMERATOR_LIST"});}
#line 2964 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 309 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM",*(yyvsp[0]._text));}
#line 2970 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 311 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2976 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 312 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"ENUMERATOR_LIST","ENUMERATOR"});}
#line 2982 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 314 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2988 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 315 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ENUMERATOR","Note: branches[0] = branches[1]",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1]._text)},std::vector<std::string>{"ENUM_CONSTANT","CONSTANT_EXPRESSION"});}
#line 2994 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 317 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3000 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 319 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER",*(yyvsp[0]._text));}
#line 3006 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 320 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER",*(yyvsp[0]._text));}
#line 3012 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 322 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3018 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 323 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DECLARATOR","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"POINTER","DIRECT_DECLARATOR"});}
#line 3024 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 325 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3030 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 326 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3036 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 327 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), NULL},std::vector<std::string>{"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"});}
#line 3042 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 328 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"});}
#line 3048 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 329 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"});}
#line 3054 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 330 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), NULL},std::vector<std::string>{"DIRECT_DECLARATOR","IDENTIFIER_LIST"});}
#line 3060 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 331 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)},std::vector<std::string>{"DIRECT_DECLARATOR","IDENTIFIER_LIST"});}
#line 3066 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 334 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3072 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 335 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"DEREFERENCE","TYPE_QUALIFIER_LIST"});}
#line 3078 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 336 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"DEREFERENCE","POINTER"});}
#line 3084 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 337 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"});}
#line 3090 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 339 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3096 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 341 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3102 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 342 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"});}
#line 3108 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 344 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3114 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 345 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PARAMETER_TYPE_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"PARAMETER_LIST","PARAMETER_DECLARATION"});}
#line 3120 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 347 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ELIPSIS","...");}
#line 3126 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 349 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3132 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 350 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PARAMETER_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"PARAMETER_LIST","PARAMETER_DECLARATION"});}
#line 3138 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 352 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"DECLARATION_SPECIFIERS","DECLARATOR"});}
#line 3144 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 353 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3150 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 354 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"});}
#line 3156 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 356 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3162 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 357 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"IDENTIFIER_LIST","IDENTIFIER"});}
#line 3168 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 359 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3174 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 361 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3180 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 362 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPE_NAME","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"});}
#line 3186 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 364 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3192 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 365 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)},std::vector<std::string>{"POINTER","DIRECT_ABSTRACT_DECLARATOR"});}
#line 3198 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 366 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3204 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 368 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3210 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 369 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-2]._text)},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"});}
#line 3216 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 370 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{NULL, (yyvsp[-1].nodePtr)},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"});}
#line 3222 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 371 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), NULL},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"});}
#line 3228 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 372 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3234 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 373 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{(yyvsp[-3].nodePtr), (yyvsp[-2]._text)},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"});}
#line 3240 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 374 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{NULL, (yyvsp[-1].nodePtr)},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"});}
#line 3246 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 375 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{(yyvsp[-1].nodePtr), NULL},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"});}
#line 3252 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 376 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3258 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 378 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text),std::vector<ast_node*>{},std::vector<std::string>{});}
#line 3264 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 380 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3270 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 381 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("INITIALIZER","",std::vector<ast_node*>{(yyvsp[-1].nodePtr)},std::vector<std::string>{"INITIALIZER_LIST"});}
#line 3276 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 382 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("INITIALIZER","",std::vector<ast_node*>{(yyvsp[-2].nodePtr)},std::vector<std::string>{"INITIALIZER_LIST"});}
#line 3282 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 384 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3288 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 385 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("INITIALIZER_LIST","",std::vector<ast_node*>{(yyvsp[-2].nodePtr), (yyvsp[-1]._text)},std::vector<std::string>{"INITIALIZER_LIST","INITIALIZER"});}
#line 3294 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3298 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 390 "src/maths_parser.y" /* yacc.c:1906  */


const ast_node *g_root;

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
