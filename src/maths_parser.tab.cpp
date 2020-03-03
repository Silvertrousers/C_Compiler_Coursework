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
    T_CHAR = 260,
    T_CONST = 261,
    T_CONTINUE = 262,
    T_DEFAULT = 263,
    T_DO = 264,
    T_DOUBLE = 265,
    T_ELSE = 266,
    T_EXTERN = 267,
    T_FLOAT = 268,
    T_FOR = 269,
    T_GOTO = 270,
    T_IF = 271,
    T_INT = 272,
    T_LONG = 273,
    T_REGISTER = 274,
    T_RETURN = 275,
    T_SHORT = 276,
    T_SIGNED = 277,
    T_SIZEOF = 278,
    T_TYPEDEF = 279,
    T_VOID = 280,
    T_WHILE = 281,
    T_TIMES = 282,
    T_DIVIDE = 283,
    T_PLUS = 284,
    T_MINUS = 285,
    T_EXPONENT = 286,
    T_DECREMENT = 287,
    T_INCREMENT = 288,
    T_LESS_THAN = 289,
    T_GREATER_THAN = 290,
    T_EQUALS = 291,
    T_AND = 292,
    T_OR = 293,
    T_BITWISE_NOT = 294,
    T_LOGICAL_NOT = 295,
    T_AND_AND = 296,
    T_OR_OR = 297,
    T_MODULO_EQUALS = 298,
    T_LEFT_SHIFT_EQUALS = 299,
    T_RIGHT_SHIFT_EQUALS = 300,
    T_NOT_EQUALS_EQUALS = 301,
    T_EQUALS_EQUALS = 302,
    T_PLUS_EQUALS = 303,
    T_MINUS_EQUALS = 304,
    T_TIMES_EQUALS = 305,
    T_DIVIDE_EQUALS = 306,
    T_LESS_THAN_OR_EQUAL_TO = 307,
    T_GREATER_THAN_OR_EQUAL_TO = 308,
    T_AND_EQUALS = 309,
    T_OR_EQUALS = 310,
    T_XOR_EQUALS = 311,
    T_ARROW = 312,
    T_RIGHT_SHIFT = 313,
    T_LEFT_SHIFT = 314,
    T_MODULO = 315,
    T_COMMA = 316,
    T_DOT = 317,
    T_COLON = 318,
    T_SEMICOLON = 319,
    T_QUESTION = 320,
    T_LBRACKET = 321,
    T_RBRACKET = 322,
    T_LSQ_BRACKET = 323,
    T_RSQ_BRACKET = 324,
    T_RCURLY_BRACKET = 325,
    T_LCURLY_BRACKET = 326,
    T_EMPTY_BRACKETS = 327,
    T_ECURLY_BRACKETS = 328,
    T_ESQ_BRACKETS = 329,
    T_DEC_INT = 330,
    T_OCTAL_INT = 331,
    T_IDENTIFIER = 332,
    T_STRING = 333,
    T_CUSTOM_TYPE = 334
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "src/maths_parser.y" /* yacc.c:355  */

  ast_node* nodePtr;
  std::string* _text;

#line 205 "src/maths_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "src/maths_parser.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1019

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

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
      75,    76,    77,    78,    79
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    76,    77,    82,    83,    86,    90,    94,
      98,   102,   103,   104,   105,   106,   107,   109,   114,   118,
     122,   125,   127,   128,   132,   133,   137,   138,   140,   144,
     148,   149,   151,   155,   159,   163,   167,   171,   175,   179,
     183,   187,   191,   192,   193,   195,   196,   197,   201,   207,
     209,   210,   211,   213,   217,   218,   221,   222,   226,   230,
     234,   238,   242,   246,   247,   251,   252,   256,   260,   264,
     268,   272,   274,   275,   276,   277,   278,   279,   281,   282,
     286,   287,   291,   295,   299,   300,   304,   308,   309,   313,
     317,   318,   322,   326,   330,   334,   335,   339,   343,   344,
     348,   349,   353,   354,   358,   359,   363,   364,   368,   369,
     373,   374,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   390,   392,   393,   397,   401,   405,   406,
     410,   411,   416,   417,   421,   422,   426,   429,   430,   436,
     438,   442,   445,   447,   449,   453,   457,   461,   465,   470,
     471,   475,   477,   478,   482,   486,   488,   492,   493,   497,
     499,   500,   504,   506,   508,   512,   516,   520,   522,   526,
     530,   534,   538,   540,   544,   548,   549
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_AUTO", "T_BREAK", "T_CHAR", "T_CONST",
  "T_CONTINUE", "T_DEFAULT", "T_DO", "T_DOUBLE", "T_ELSE", "T_EXTERN",
  "T_FLOAT", "T_FOR", "T_GOTO", "T_IF", "T_INT", "T_LONG", "T_REGISTER",
  "T_RETURN", "T_SHORT", "T_SIGNED", "T_SIZEOF", "T_TYPEDEF", "T_VOID",
  "T_WHILE", "T_TIMES", "T_DIVIDE", "T_PLUS", "T_MINUS", "T_EXPONENT",
  "T_DECREMENT", "T_INCREMENT", "T_LESS_THAN", "T_GREATER_THAN",
  "T_EQUALS", "T_AND", "T_OR", "T_BITWISE_NOT", "T_LOGICAL_NOT",
  "T_AND_AND", "T_OR_OR", "T_MODULO_EQUALS", "T_LEFT_SHIFT_EQUALS",
  "T_RIGHT_SHIFT_EQUALS", "T_NOT_EQUALS_EQUALS", "T_EQUALS_EQUALS",
  "T_PLUS_EQUALS", "T_MINUS_EQUALS", "T_TIMES_EQUALS", "T_DIVIDE_EQUALS",
  "T_LESS_THAN_OR_EQUAL_TO", "T_GREATER_THAN_OR_EQUAL_TO", "T_AND_EQUALS",
  "T_OR_EQUALS", "T_XOR_EQUALS", "T_ARROW", "T_RIGHT_SHIFT",
  "T_LEFT_SHIFT", "T_MODULO", "T_COMMA", "T_DOT", "T_COLON", "T_SEMICOLON",
  "T_QUESTION", "T_LBRACKET", "T_RBRACKET", "T_LSQ_BRACKET",
  "T_RSQ_BRACKET", "T_RCURLY_BRACKET", "T_LCURLY_BRACKET",
  "T_EMPTY_BRACKETS", "T_ECURLY_BRACKETS", "T_ESQ_BRACKETS", "T_DEC_INT",
  "T_OCTAL_INT", "T_IDENTIFIER", "T_STRING", "T_CUSTOM_TYPE", "$accept",
  "PROGRAM", "TRANSLATION_UNIT", "EXTERNAL_DECLARATION",
  "FUNCTION_DECLARATION", "STATEMENT", "LABELED_STATEMENT",
  "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "IF", "ELSE",
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
  "SPECIFIER_QUALIFIER_LIST", "DECLARATOR", "DIRECT_DECLARATOR",
  "PARAMETER_TYPE_LIST", "ELIPSIS", "PARAMETER_LIST",
  "PARAMETER_DECLARATION", "IDENTIFIER_LIST", "IDENTIFIER", "TYPE_NAME",
  "ABSTRACT_DECLARATOR", "DIRECT_ABSTRACT_DECLARATOR", "INITIALIZER",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

#define YYPACT_NINF -168

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-168)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      73,  -168,  -168,  -168,    -7,  -168,    35,    73,  -168,  -168,
    -168,    -1,   142,   142,   157,    55,  -168,   -16,  -168,  -168,
    -168,    82,  -168,   140,  -168,  -168,   402,  -168,  -168,   157,
    -168,    -1,    22,   870,  -168,  -168,  -168,    -7,  -168,   612,
    -168,   157,    -9,    18,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,   926,   926,  -168,  -168,  -168,  -168,    85,
    -168,  -168,  -168,  -168,  -168,  -168,   327,   467,  -168,  -168,
      20,  -168,    25,    40,   597,  -168,   627,  -168,  -168,   -14,
     325,   941,   870,  -168,    -3,   115,   126,   120,   147,    79,
      89,   118,   129,   -20,  -168,  -168,   107,   138,  -168,  -168,
     167,     3,   141,   159,  -168,    42,  -168,  -168,  -168,   163,
    -168,  -168,   612,  -168,  -168,  -168,  -168,  -168,   870,  -168,
    -168,    91,    36,   172,   184,  -168,   532,  -168,  -168,   870,
     683,   870,   238,  -168,   207,  -168,  -168,   189,   870,   870,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,   870,    85,  -168,  -168,   870,   870,   870,   870,
     870,   870,   870,   870,   870,   870,   870,   870,   870,   870,
     870,   870,   870,   870,   870,   870,  -168,   597,    64,   870,
    -168,  -168,  -168,  -168,   182,  -168,    16,   189,  -168,  -168,
    -168,   -34,  -168,  -168,   123,  -168,   870,  -168,   108,   698,
     215,   131,   211,  -168,  -168,   149,  -168,    31,  -168,   224,
    -168,  -168,  -168,    -3,    -3,   115,   115,   126,   126,   126,
     126,   120,   120,   147,    79,    89,   118,   129,    70,  -168,
    -168,   235,   236,   219,   142,   870,  -168,  -168,   242,  -168,
    -168,  -168,   230,  -168,  -168,   597,   713,   221,   769,   597,
     870,   870,  -168,  -168,  -168,   870,  -168,  -168,  -168,   260,
     259,   267,  -168,  -168,   319,   597,   162,   784,   799,   223,
    -168,   170,  -168,  -168,  -168,  -168,  -168,  -168,   597,  -168,
     597,   597,   180,   597,   191,   855,   269,  -168,  -168,  -168,
     597,  -168,   597,   597,   194,  -168,  -168,  -168,  -168,   597,
    -168
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   138,   136,   137,     0,   159,     0,     2,     3,     5,
       6,     0,   128,   130,     0,   141,   142,     0,     1,     4,
     126,     0,   132,   134,   129,   131,     0,    21,    10,     0,
      22,     0,     0,     0,   147,   144,   143,     0,   127,     0,
       8,     0,     0,     0,    44,    42,    30,    49,    71,    43,
      73,    74,    75,     0,     0,    72,    76,    77,    27,     0,
      54,    55,    52,    24,    11,    12,     0,     0,    13,    14,
       0,    15,     0,     0,     0,    16,     0,    56,    51,    65,
      78,     0,     0,    80,    84,    87,    90,    95,    98,   100,
     102,   104,   106,   108,   110,   124,     0,    50,     9,    23,
     134,   155,     0,   149,   152,     0,   157,    78,   123,     0,
      50,   133,     0,   172,   135,     7,    46,    45,     0,    67,
      66,     0,   139,   160,     0,    20,     0,    19,    25,     0,
       0,     0,     0,    48,     0,    62,    61,     0,     0,     0,
      58,   112,   115,   118,   119,   116,   117,   113,   114,   120,
     122,   121,     0,     0,    69,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
     171,   167,   154,   156,   162,   146,     0,     0,   148,   145,
     175,     0,    53,   140,     0,   161,     0,    18,     0,     0,
       0,     0,     0,    47,    60,     0,    63,     0,   111,     0,
      81,    82,    83,    85,    86,    89,    88,    91,    92,    93,
      94,    97,    96,    99,   101,   103,   105,   107,     0,   125,
      17,     0,     0,     0,     0,     0,   170,   166,     0,   150,
     153,   158,     0,   173,    79,     0,     0,     0,     0,     0,
       0,     0,    59,    57,    70,     0,   169,   163,   165,     0,
       0,     0,   174,   176,    28,     0,     0,     0,     0,     0,
      32,     0,    64,   109,   168,   164,   151,    31,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    29,    38,    39,
       0,    40,     0,     0,     0,    33,    35,    36,    37,     0,
      34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,   328,  -168,   -66,  -168,    15,   263,   271,
    -168,  -168,  -168,  -168,  -168,  -168,   206,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,   153,  -168,  -168,   -62,    83,   133,
     109,   130,   171,   169,   174,   176,   173,  -168,   -30,   -33,
    -168,  -167,   -46,    21,     2,  -168,   305,  -168,   -49,   233,
      12,  -168,   -15,  -168,  -168,   177,  -168,     0,   205,   -59,
    -168,  -107,  -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    63,    64,    65,    29,    67,
      68,    69,    70,   278,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   205,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
     152,   109,    96,    30,    31,    21,    22,    12,    13,   123,
      14,    15,   231,   239,   103,   104,   105,   110,   124,   232,
     184,   114,   191
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      16,   128,    11,   108,    16,   190,   113,    16,   132,    11,
     122,    16,   233,   121,    24,    25,    17,   102,   135,   136,
     155,    10,   173,    23,   156,   157,    97,   242,    10,    28,
     134,    16,   106,     1,   101,    18,   243,    16,    40,     1,
       2,     3,   183,   100,    98,   174,     2,     3,   137,   100,
      99,    36,   138,     1,   139,   116,   115,   158,   140,     4,
     128,     3,    99,    20,   195,     4,    97,    97,   260,   178,
       5,   179,   121,   122,    97,   180,     5,   181,   238,   113,
       5,     1,   117,   198,   200,   201,   129,    99,     2,     3,
       1,   130,   175,   207,   210,   211,   212,     2,     3,     5,
     253,    16,     1,   187,   122,   206,   131,   121,    48,   188,
       3,   230,    50,   182,    51,    52,   169,    53,    54,   208,
     170,    32,    55,    33,    56,    57,    97,    34,   228,    35,
     178,   175,   179,   255,   244,   263,   180,   204,   181,     4,
       1,     5,   229,    37,   159,   160,    38,     2,     3,   108,
       5,    59,   175,   247,   163,   164,   171,     1,   192,     1,
      60,    61,     5,    62,     2,     3,     2,     3,   175,   175,
     172,   176,   165,   166,     1,   245,    39,    97,    16,   264,
     101,     2,     3,   270,   161,   162,   107,   241,   101,   194,
      17,   179,   175,   167,   168,   180,   101,   181,   249,   279,
     266,   177,   269,    39,   271,   108,   119,   120,   185,   113,
     251,    26,   287,    27,   288,   289,   252,   291,   272,   259,
     186,   282,   284,   175,   296,   273,   297,   298,    26,   280,
      27,   175,   189,   300,   154,   107,   101,   286,   194,   294,
     179,   175,   213,   214,   180,    97,   181,   290,   234,    97,
     235,   196,   175,    48,   236,   175,   237,    50,   292,    51,
      52,   299,    53,    54,    49,    97,     5,    55,   175,    56,
      57,   203,   217,   218,   219,   220,   175,   250,    97,   248,
      97,    97,   175,    97,   175,   267,    41,   285,   258,    66,
      97,   254,    97,    97,   215,   216,    59,   221,   222,    97,
     262,   112,   256,   257,   261,    60,    61,     5,    62,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   274,   275,   276,
     277,    42,   107,   295,    43,    19,    44,   126,   202,   224,
     223,    45,   111,    46,     1,   225,   227,    47,   226,   107,
      48,     2,     3,    49,    50,   193,    51,    52,   209,    53,
      54,   141,     0,   240,    55,     0,    56,    57,   142,   143,
     144,     0,     0,   145,   146,   147,   148,     0,     0,   149,
     150,   151,     0,     0,     0,     0,     0,     0,   107,     0,
       0,    58,     0,    59,     0,     0,     0,   125,    26,     0,
      27,     0,    60,    61,     5,    62,    42,     0,   107,    43,
       0,    44,     0,     0,     0,     0,    45,     0,    46,     1,
       0,     0,    47,     0,     0,    48,     2,     3,    49,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,    55,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,    59,     0,
       0,    42,     0,    26,    43,    27,    44,    60,    61,     5,
      62,    45,     0,    46,     0,     0,     0,    47,     0,     0,
      48,     0,     0,    49,    50,     0,    51,    52,     0,    53,
      54,     0,     0,     0,    55,     0,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    59,     0,     0,    42,   127,    26,    43,
      27,    44,    60,    61,     5,    62,    45,     0,    46,     0,
       0,     0,    47,     0,     0,    48,     0,     0,    49,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,    55,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,    59,     0,
       0,    42,   197,    26,    43,    27,    44,    60,    61,     5,
      62,    45,     0,    46,     0,     0,     0,    47,     0,     0,
      48,     0,     0,    49,    50,     0,    51,    52,     0,    53,
      54,     0,     0,     0,    55,    48,    56,    57,     0,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,    55,
      48,    56,    57,     0,    50,     0,    51,    52,     0,    53,
      54,    58,     0,    59,    55,     0,    56,    57,    26,     0,
      27,     0,    60,    61,     5,    62,     0,     0,    59,     0,
       0,     0,     0,   112,     0,     0,     0,    60,    61,     5,
      62,   133,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     5,    62,    48,     0,     0,     0,
      50,     0,    51,    52,     0,    53,    54,     0,     0,     0,
      55,    48,    56,    57,     0,    50,     0,    51,    52,     0,
      53,    54,     0,     0,     0,    55,    48,    56,    57,     0,
      50,     0,    51,    52,     0,    53,    54,   199,     0,    59,
      55,     0,    56,    57,     0,     0,     0,     0,    60,    61,
       5,    62,   246,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    61,     5,    62,     0,     0,    59,
     265,     0,     0,     0,     0,     0,     0,     0,    60,    61,
       5,    62,    48,     0,     0,     0,    50,     0,    51,    52,
       0,    53,    54,     0,     0,     0,    55,    48,    56,    57,
       0,    50,     0,    51,    52,     0,    53,    54,     0,     0,
       0,    55,    48,    56,    57,     0,    50,     0,    51,    52,
       0,    53,    54,   268,     0,    59,    55,     0,    56,    57,
       0,     0,     0,     0,    60,    61,     5,    62,     0,     0,
      59,   281,     0,     0,     0,     0,     0,     0,     0,    60,
      61,     5,    62,     0,     0,    59,   283,     0,     0,     0,
       0,     0,     0,     0,    60,    61,     5,    62,    48,     0,
       0,     0,    50,     0,    51,    52,     0,    53,    54,     0,
       0,     0,    55,    48,    56,    57,     0,    50,     0,    51,
      52,     0,    53,    54,     0,     0,     0,    55,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,   293,     0,     0,     0,     0,     0,     0,     0,
      60,    61,     5,    62,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     5,    62,    48,
       0,     0,     0,    50,     0,    51,    52,     0,    53,    54,
       0,     0,     0,    55,    48,    56,    57,     0,    50,     0,
      51,    52,     0,    53,    54,     0,     0,     0,    55,     0,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     5,    62,     0,     0,   153,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     5,    62
};

static const yytype_int16 yycheck[] =
{
       0,    67,     0,    33,     4,   112,    39,     7,    74,     7,
      59,    11,   179,    59,    12,    13,     4,    32,    32,    33,
      82,     0,    42,    11,    27,    28,    26,    61,     7,    14,
      76,    31,    32,    17,    32,     0,    70,    37,    23,    17,
      24,    25,   101,    31,    29,    65,    24,    25,    62,    37,
      29,    67,    66,    17,    68,    64,    41,    60,    72,    66,
     126,    25,    41,    64,   123,    66,    66,    67,   235,    66,
      77,    68,   118,   122,    74,    72,    77,    74,    62,   112,
      77,    17,    64,   129,   130,   131,    66,    66,    24,    25,
      17,    66,    61,   139,   156,   157,   158,    24,    25,    77,
      69,   101,    17,    61,   153,   138,    66,   153,    23,    67,
      25,   177,    27,   101,    29,    30,    37,    32,    33,   152,
      31,    66,    37,    68,    39,    40,   126,    72,   174,    74,
      66,    61,    68,    63,   196,   242,    72,   137,    74,    66,
      17,    77,   175,    61,    29,    30,    64,    24,    25,   179,
      77,    66,    61,   199,    34,    35,    38,    17,    67,    17,
      75,    76,    77,    78,    24,    25,    24,    25,    61,    61,
      41,    64,    52,    53,    17,    67,    36,   177,   178,   245,
     178,    24,    25,   249,    58,    59,    33,   187,   186,    66,
     178,    68,    61,    46,    47,    72,   194,    74,    67,   265,
     246,    63,   248,    36,   250,   235,    53,    54,    67,   242,
      61,    71,   278,    73,   280,   281,    67,   283,   251,   234,
      61,   267,   268,    61,   290,   255,   292,   293,    71,    67,
      73,    61,    69,   299,    81,    82,   234,    67,    66,   285,
      68,    61,   159,   160,    72,   245,    74,    67,    66,   249,
      68,    67,    61,    23,    72,    61,    74,    27,    67,    29,
      30,    67,    32,    33,    26,   265,    77,    37,    61,    39,
      40,    64,   163,   164,   165,   166,    61,    66,   278,    64,
     280,   281,    61,   283,    61,    64,    23,    64,    69,    26,
     290,    67,   292,   293,   161,   162,    66,   167,   168,   299,
      70,    71,    67,    67,    62,    75,    76,    77,    78,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,    67,    69,    62,
      11,     4,   179,    64,     7,     7,     9,    66,   132,   170,
     169,    14,    37,    16,    17,   171,   173,    20,   172,   196,
      23,    24,    25,    26,    27,   122,    29,    30,   153,    32,
      33,    36,    -1,   186,    37,    -1,    39,    40,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    -1,    -1,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    64,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
      73,    -1,    75,    76,    77,    78,     4,    -1,   255,     7,
      -1,     9,    -1,    -1,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,    20,    -1,    -1,    23,    24,    25,    26,    27,
      -1,    29,    30,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      -1,     4,    -1,    71,     7,    73,     9,    75,    76,    77,
      78,    14,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    29,    30,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    66,    -1,    -1,     4,    70,    71,     7,
      73,     9,    75,    76,    77,    78,    14,    -1,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      -1,     4,    70,    71,     7,    73,     9,    75,    76,    77,
      78,    14,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    29,    30,    -1,    32,
      33,    -1,    -1,    -1,    37,    23,    39,    40,    -1,    27,
      -1,    29,    30,    -1,    32,    33,    -1,    -1,    -1,    37,
      23,    39,    40,    -1,    27,    -1,    29,    30,    -1,    32,
      33,    64,    -1,    66,    37,    -1,    39,    40,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    76,    77,
      78,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    23,    -1,    -1,    -1,
      27,    -1,    29,    30,    -1,    32,    33,    -1,    -1,    -1,
      37,    23,    39,    40,    -1,    27,    -1,    29,    30,    -1,
      32,    33,    -1,    -1,    -1,    37,    23,    39,    40,    -1,
      27,    -1,    29,    30,    -1,    32,    33,    64,    -1,    66,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    33,    -1,    -1,    -1,    37,    23,    39,    40,
      -1,    27,    -1,    29,    30,    -1,    32,    33,    -1,    -1,
      -1,    37,    23,    39,    40,    -1,    27,    -1,    29,    30,
      -1,    32,    33,    64,    -1,    66,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    23,    -1,
      -1,    -1,    27,    -1,    29,    30,    -1,    32,    33,    -1,
      -1,    -1,    37,    23,    39,    40,    -1,    27,    -1,    29,
      30,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    23,
      -1,    -1,    -1,    27,    -1,    29,    30,    -1,    32,    33,
      -1,    -1,    -1,    37,    23,    39,    40,    -1,    27,    -1,
      29,    30,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    24,    25,    66,    77,    81,    82,    83,    84,
     123,   124,   127,   128,   130,   131,   137,   130,     0,    83,
      64,   125,   126,   130,   124,   124,    71,    73,    87,    88,
     123,   124,    66,    68,    72,    74,    67,    61,    64,    36,
      87,    88,     4,     7,     9,    14,    16,    20,    23,    26,
      27,    29,    30,    32,    33,    37,    39,    40,    64,    66,
      75,    76,    78,    85,    86,    87,    88,    89,    90,    91,
      92,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   122,   137,    87,   123,
     130,   124,   132,   134,   135,   136,   137,   104,   118,   121,
     137,   126,    71,   119,   141,    87,    64,    64,    66,   104,
     104,   122,   128,   129,   138,    70,    89,    70,    85,    66,
      66,    66,    85,    64,   122,    32,    33,    62,    66,    68,
      72,    36,    43,    44,    45,    48,    49,    50,    51,    54,
      55,    56,   120,    66,   104,   107,    27,    28,    60,    29,
      30,    58,    59,    34,    35,    52,    53,    46,    47,    37,
      31,    38,    41,    42,    65,    61,    64,    63,    66,    68,
      72,    74,   130,   139,   140,    67,    61,    61,    67,    69,
     141,   142,    67,   129,    66,   139,    67,    70,   122,    64,
     122,   122,    96,    64,   137,   103,   119,   122,   119,   138,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   110,
     110,   111,   111,   112,   113,   114,   115,   116,   122,   119,
      85,   132,   139,   121,    66,    68,    72,    74,    62,   133,
     135,   137,    61,    70,   107,    67,    64,   122,    64,    67,
      66,    61,    67,    69,    67,    63,    67,    67,    69,   132,
     121,    62,    70,   141,    85,    67,   122,    64,    64,   122,
      85,   122,   119,   118,    67,    69,    62,    11,    93,    85,
      67,    67,   122,    67,   122,    64,    67,    85,    85,    85,
      67,    85,    67,    67,   122,    64,    85,    85,    85,    67,
      85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    82,    83,    83,    84,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    86,    87,    87,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    96,    97,    98,    98,    98,    98,    99,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   104,   104,   104,
     104,   105,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   111,   111,   111,   111,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   121,   122,   122,   123,   123,   124,   124,
     124,   124,   125,   125,   126,   126,   127,   128,   128,   129,
     129,   130,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     138,   138,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   142,   142
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     1,     1,     2,     1,     2,     2,     1,     5,     7,
       1,     1,     5,     7,     9,     8,     8,     8,     7,     7,
       7,     6,     1,     1,     1,     2,     2,     3,     2,     1,
       1,     1,     1,     3,     1,     1,     1,     4,     2,     4,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     1,     3,     2,     4,     4,     2,     4,     1,
       3,     3,     1,     3,     2,     1,     2,     1,     3,     1,
       1,     2,     1,     3,     4,     3,     2,     1,     4,     3,
       2,     1,     1,     3,     4,     1,     3
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
#line 74 "src/maths_parser.y" /* yacc.c:1646  */
    { g_root = (yyvsp[0].nodePtr); }
#line 1692 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1698 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 77 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           fprintf(stderr,"hihihihih");
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1707 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 82 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1713 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 83 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1719 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 86 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                               (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1727 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1735 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {NULL, (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1743 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 98 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr),NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1751 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 102 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1757 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 103 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1763 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 104 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1769 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 105 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1775 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 106 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1781 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1787 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 109 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1795 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 114 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1803 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 118 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1811 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 122 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 1819 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 125 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 1825 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 127 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1831 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 128 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 1839 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 132 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1845 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 133 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 1853 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 1859 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 138 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = NULL; }
#line 1865 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 140 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 1873 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 144 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 1881 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 148 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", *(yyvsp[0]._text));}
#line 1887 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", *(yyvsp[0]._text));}
#line 1893 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 151 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1901 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 155 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1909 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 159 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1917 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 163 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1925 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1933 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1941 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 175 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1949 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 179 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1957 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 183 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1965 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 187 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 1973 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 191 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", *(yyvsp[0]._text));}
#line 1979 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 192 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", *(yyvsp[0]._text));}
#line 1985 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 193 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", *(yyvsp[0]._text));}
#line 1991 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 195 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-1]._text));}
#line 1997 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 196 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-1]._text));}
#line 2003 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 197 "src/maths_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2011 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 201 "src/maths_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2019 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 207 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", *(yyvsp[0]._text));}
#line 2025 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 209 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2031 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 210 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2037 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 211 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2043 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 213 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2051 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 217 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2057 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 218 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2063 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 221 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2069 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 222 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2077 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 226 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2085 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 230 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2093 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 234 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION",".", branches, branch_notes);}
#line 2101 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 238 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2109 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 242 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2117 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 246 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2123 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 247 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2131 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 251 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2137 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 252 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2145 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 256 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2153 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 260 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2161 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 264 "src/maths_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2169 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 268 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2177 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", *(yyvsp[0]._text));}
#line 2183 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 274 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2189 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 275 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2195 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 276 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2201 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 277 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2207 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 278 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2213 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 279 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2219 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 281 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2225 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 282 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}
#line 2233 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 286 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2239 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 287 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2247 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 291 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2255 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 295 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}
#line 2263 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 299 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2269 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 300 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2277 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 304 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2285 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 308 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2291 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 309 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","<<", branches, branch_notes);}
#line 2299 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 313 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION",">>", branches, branch_notes);}
#line 2307 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 317 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2313 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 318 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2321 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 322 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2329 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 326 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2337 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 330 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2345 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 334 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2351 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 335 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2359 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 339 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2367 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 343 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2373 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 344 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","", branches, branch_notes);}
#line 2381 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 348 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2387 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 349 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","", branches, branch_notes);}
#line 2395 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 353 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2401 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 354 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","", branches, branch_notes);}
#line 2409 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 358 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2415 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 359 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","", branches, branch_notes);}
#line 2423 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 363 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2429 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 364 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","", branches, branch_notes);}
#line 2437 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 368 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2443 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 369 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2451 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 373 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2457 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 374 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2465 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 378 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2471 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 379 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2477 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 380 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2483 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 381 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2489 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 382 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2495 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 383 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2501 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 384 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2507 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 385 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2513 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 386 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2519 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 387 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2525 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 388 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2531 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 390 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2537 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 392 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2543 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 393 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2551 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 397 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2559 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 401 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2567 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 405 "src/maths_parser.y" /* yacc.c:1646  */
    { fprintf(stderr,"yoyooyoyoyoy"); (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2573 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 406 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2581 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 410 "src/maths_parser.y" /* yacc.c:1646  */
    { fprintf(stderr,"type spec"); (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2587 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 411 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2595 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 416 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2601 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 417 "src/maths_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2609 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 421 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2615 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 422 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2623 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 426 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2629 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 429 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2635 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 430 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2641 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 436 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2647 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 438 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 2655 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 442 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2661 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 445 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2667 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 447 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 2673 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 449 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}
#line 2681 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 453 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}
#line 2689 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 457 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}
#line 2697 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 461 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}
#line 2705 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 465 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}
#line 2713 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 470 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2719 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 471 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","ELIPSIS"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_TYPE_LIST","", branches, branch_notes);}
#line 2727 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 475 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ELIPSIS","...");}
#line 2733 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 477 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2739 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 478 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 2747 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 482 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 2755 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 486 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2761 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 488 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 2769 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 492 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2775 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 493 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER_LIST","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("IDENTIFIER_LIST","", branches, branch_notes);}
#line 2783 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 497 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 2789 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 499 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2795 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 500 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 2803 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 504 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2809 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 506 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 2815 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 508 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 2823 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 512 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 2831 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 516 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 2839 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 520 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 2845 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 522 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 2853 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 526 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 2861 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 530 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 2869 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 534 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 2875 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 538 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2881 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 540 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 2889 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 544 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 2897 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 548 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2903 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 549 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 2911 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2915 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 556 "src/maths_parser.y" /* yacc.c:1906  */


const ast_node *g_root;

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
