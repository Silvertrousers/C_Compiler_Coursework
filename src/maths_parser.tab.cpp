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
#define YYLAST   1612

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
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
     119,   120,   121,   123,   127,   131,   134,   136,   137,   141,
     142,   146,   147,   149,   153,   157,   161,   162,   163,   165,
     169,   173,   177,   181,   185,   189,   193,   197,   201,   205,
     206,   207,   209,   213,   214,   216,   220,   225,   226,   228,
     229,   230,   232,   236,   237,   240,   241,   245,   249,   253,
     257,   261,   265,   269,   270,   274,   275,   279,   283,   287,
     291,   295,   297,   298,   299,   300,   301,   302,   304,   305,
     309,   310,   314,   318,   322,   323,   327,   331,   332,   336,
     340,   341,   345,   349,   353,   357,   358,   362,   366,   367,
     371,   372,   376,   377,   381,   382,   386,   387,   391,   392,
     396,   397,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   413,   415,   416,   420,   424,   428,   429,
     433,   434,   438,   439,   443,   444,   448,   449,   453,   454,
     455,   456,   457,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   472,   476,   480,   484,   485,
     487,   488,   492,   496,   498,   502,   504,   508,   509,   513,
     514,   518,   522,   526,   530,   534,   536,   537,   541,   542,
     546,   548,   549,   551,   552,   556,   558,   560,   564,   568,
     572,   576,   581,   582,   586,   590,   594,   596,   597,   601,
     602,   606,   608,   609,   613,   617,   619,   623,   624,   628,
     630,   631,   635,   637,   641,   643,   645,   649,   653,   657,
     659,   663,   667,   671,   673,   675,   677,   681,   685,   686
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
  "CASE", "IDENTIFIER", "COMPOUND_STATEMENT", "DECLARATION_LIST",
  "STATEMENT_LIST", "EXPRESSION_STATEMENT", "SELECTION_STATEMENT",
  "SWITCH", "IF", "ELSE", "ITERATION_STATEMENT", "FOR", "WHILE", "DO",
  "JUMP_STATEMENT", "GOTO", "RETURN", "PRIMARY_EXPRESSION", "CONSTANT",
  "POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST", "UNARY_EXPRESSION",
  "SIZE_OF", "UNARY_OPERATOR", "CAST_EXPRESSION",
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

#define YYPACT_NINF -199

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-199)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     685,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
     135,  -199,  -199,  -199,    14,   685,  -199,  -199,  -199,  -199,
      15,   891,   891,  -199,   -58,  -199,   -18,   891,   787,   241,
     -59,    11,  -199,   -64,  -199,  -199,  -199,    21,  -199,   716,
    -199,  -199,   951,   -47,   -37,   -19,  -199,   498,  -199,  -199,
     787,  -199,    15,   818,  1457,  -199,  -199,   241,  -199,  -199,
      11,  -199,   135,  -199,  1176,  -199,   787,   951,   127,  -199,
      51,   951,   951,  -199,   -50,  -199,    29,   -37,    37,  -199,
      52,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  1474,  1474,  -199,  -199,  -199,  -199,   318,
    -199,  -199,  -199,  -199,  -199,     7,  1457,    17,  -199,   411,
     982,  -199,  -199,    63,    79,  -199,   130,   145,  1148,  -199,
     111,  1228,  -199,  -199,   160,   409,  1526,  1457,  -199,   -13,
     149,   232,    22,   292,    50,   173,   168,   180,   -21,  -199,
    -199,    72,  -199,  -199,   191,  -199,   468,   169,   189,  -199,
      60,  -199,  -199,  -199,   172,  -199,  -199,  -199,  1176,  -199,
    -199,  -199,  -199,  -199,  -199,  1457,   199,  -199,   201,  -199,
     919,   -37,  -199,  1457,    16,  -199,  -199,  1457,  -199,  -199,
      80,   240,   195,  1148,   212,  1148,  -199,  1065,  -199,  -199,
    1457,  1457,  1245,  1457,   261,   237,  -199,    93,  -199,  -199,
     111,   111,  1457,  1457,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,  1457,   318,  -199,  -199,
    1457,  1457,  1457,  1457,  1457,  1457,  1457,  1457,  1457,  1457,
    1457,  1457,  1457,  1457,  1457,  1457,  1457,  1457,  1457,  1457,
    -199,   582,  1457,  -199,  -199,  -199,   157,  -199,   307,  -199,
     858,   111,  -199,  -199,  -199,    23,  -199,    51,  1457,  -199,
    -199,  -199,  -199,  -199,   613,   314,  -199,  1457,  -199,  1148,
    -199,  -199,   138,   153,  1297,   122,   163,   228,  -199,  -199,
    -199,  -199,   177,  -199,   -53,  -199,   243,  -199,  -199,  -199,
     -13,   -13,   149,   149,   232,   232,   232,   232,    22,    22,
     292,    50,   173,   168,   180,    92,  -199,   255,   259,   267,
     307,   891,  1457,  -199,  -199,   282,  -199,  -199,  -199,  1162,
    -199,  -199,  -199,  -199,  -199,  1148,  1148,  1311,   152,  1363,
    1148,  1457,  1457,  -199,  -199,  -199,  1457,  -199,  -199,  -199,
     279,   283,   294,  -199,  -199,  -199,   357,  1148,   178,  1377,
    1391,   216,  -199,   200,  -199,  -199,  -199,  -199,  -199,  -199,
    1148,  -199,  1148,  1148,   218,  1148,   221,  1443,   299,  -199,
    -199,  -199,  1148,  -199,  1148,  1148,   257,  -199,  -199,  -199,
    -199,  1148,  -199
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   151,   154,   191,   159,   185,   149,   158,   156,   157,
     152,   155,   160,   150,   168,   148,   169,   161,   153,   192,
       0,    22,   206,   234,     0,     2,     3,     5,   195,     6,
       0,   138,   140,   162,     0,   163,     0,   142,     0,   193,
       0,   202,   164,     0,     1,     4,   136,     0,   144,   146,
     139,   141,     0,   165,     0,   182,   143,     0,    26,    10,
       0,    27,     0,     0,     0,   200,   197,   194,   207,   204,
     203,   196,     0,   137,     0,     8,     0,   173,     0,   170,
       0,   175,     0,   190,     0,   186,   188,     0,     0,    21,
       0,    20,    51,    49,    57,    37,    58,    81,    36,    50,
      83,    84,    85,     0,     0,    82,    86,    87,    32,     0,
      63,    64,    61,    29,    11,     0,     0,    59,    12,     0,
       0,    13,    14,     0,     0,    15,     0,     0,     0,    16,
       0,     0,    65,    60,    75,    88,     0,     0,    90,    94,
      97,   100,   105,   108,   110,   112,   114,   116,   118,   120,
     134,     0,     9,    28,   146,   217,   215,     0,   209,   212,
       0,    59,    88,   133,     0,   208,   205,   145,     0,   235,
     147,     7,   174,   166,   171,     0,   172,   177,   179,   176,
       0,     0,   184,     0,     0,    54,    53,     0,    77,    76,
       0,   220,     0,     0,     0,     0,    25,     0,    24,    30,
       0,     0,     0,     0,     0,     0,    56,     0,    72,    71,
       0,     0,     0,     0,    67,   122,   125,   128,   129,   126,
     127,   123,   124,   130,   132,   131,     0,     0,    79,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,   233,   229,   214,   222,   216,   224,   199,
       0,     0,   201,   198,   238,     0,   181,     0,     0,   167,
     187,   189,   183,    62,     0,   222,   221,     0,    19,     0,
      17,    23,     0,     0,     0,     0,     0,     0,    52,    55,
      70,    69,     0,    73,     0,   121,     0,    91,    92,    93,
      95,    96,    99,    98,   101,   102,   103,   104,   107,   106,
     109,   111,   113,   115,   117,     0,   135,     0,     0,     0,
     223,     0,     0,   232,   228,     0,   210,   213,   218,     0,
     236,   178,   180,    89,    18,     0,     0,     0,     0,     0,
       0,     0,     0,    68,    66,    80,     0,   231,   225,   227,
       0,     0,     0,   237,   239,    35,    33,     0,     0,     0,
       0,     0,    39,     0,    74,   119,   230,   226,   211,    38,
       0,    48,     0,     0,     0,     0,     0,     0,     0,    34,
      45,    46,     0,    47,     0,     0,     0,    40,    42,    43,
      44,     0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,  -199,  -199,   349,  -199,   -81,  -199,  -199,  -199,     0,
      10,    53,   274,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
     182,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,   -62,
    -199,  -199,  -134,   128,   132,   140,   156,   162,   151,   154,
     165,   159,  -199,   -60,   -23,  -199,  -104,   -96,     8,     6,
    -199,   328,  -199,   196,  -199,  -199,   326,   -69,   -28,  -199,
     142,  -199,  -199,   325,   266,  -199,   230,    46,   -39,   -24,
    -199,  -199,   -56,  -199,  -199,   190,  -199,   186,  -146,  -198,
    -199,  -163,  -199
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,   113,   114,   115,   116,   161,
     118,    60,   120,   121,   122,   123,   124,   370,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   292,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   226,   164,   151,    61,    62,
      47,    48,    31,    32,    33,    34,    78,    79,    80,   176,
     177,    35,    36,    84,    85,    86,    37,    38,    39,    40,
      41,    70,   317,   326,   158,   159,   160,   192,   318,   258,
      42,   170,   265
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      28,    67,   162,   229,   163,   264,    30,   157,    29,   174,
     257,    71,   194,   190,    44,    20,   249,    69,     3,   181,
      28,    52,   230,   231,   344,    28,    21,    21,   182,   247,
      28,    30,    82,    29,    53,   207,    55,    50,    51,   199,
      28,   188,   189,    56,    19,   276,   166,   204,    59,   172,
      83,   169,   248,   179,   162,   232,   163,   117,   320,    75,
      87,    54,    28,   155,   237,   238,    43,    21,   153,   156,
     152,   266,    28,   183,   228,   162,    49,   320,   193,   271,
      28,   191,   239,   240,   153,   181,   171,    46,   195,    20,
      72,   190,   329,    73,   272,   243,   297,   298,   299,    22,
      21,   330,    76,    22,   282,   283,   285,   286,   154,   185,
     119,   174,   278,   162,   280,   163,   199,   294,   154,   117,
     117,   162,   175,   163,   186,    20,   178,   153,   117,   261,
     205,   190,   256,     2,     3,   262,    21,   200,     4,    22,
       5,   249,     7,   333,   250,   169,     8,     9,   319,   249,
      11,    12,   315,   201,    14,   273,    28,    16,    17,    18,
      19,   249,   249,   346,   332,   289,   354,   275,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   233,   234,   338,   293,
     162,   249,   163,   117,   339,   117,    21,   117,   334,   191,
     208,   209,   255,   295,   202,   173,   162,   249,   163,    20,
     290,   291,   244,   335,   245,   162,    23,    67,   351,   203,
      21,   249,   249,    22,   359,   210,   316,   256,   336,   246,
     211,   251,   249,   252,   212,    74,   213,   253,   340,   254,
     214,   358,    21,   361,   259,   363,   342,   249,    77,   263,
     275,    28,   343,   372,   355,   356,    28,   156,   260,   362,
     162,   328,   163,   374,   376,   350,   156,    28,   267,   249,
     277,    68,   268,    77,    77,   378,   371,    77,    77,   117,
     156,   386,    81,   279,   162,   249,   365,   249,   377,   379,
     249,   380,   381,   382,   383,    99,   384,    43,   235,   236,
     165,   388,   341,   389,   390,    77,   169,    81,    81,   288,
     392,    81,    81,   178,   274,    63,   252,    64,   345,   364,
     253,    65,   254,    66,     2,     3,   249,   156,    22,     4,
     347,     5,   391,     7,   348,   117,   117,     8,     9,    81,
     117,    11,    12,    97,   349,    14,   241,   242,    16,    17,
      18,    19,   352,   100,   366,   101,   102,   117,   103,   104,
     367,   300,   301,   105,   368,   106,   107,   302,   303,   369,
     117,   387,   117,   117,    45,   117,    77,   304,   305,   306,
     307,   321,   117,   322,   117,   117,   287,   323,   274,   324,
     252,   117,   109,   197,   253,   311,   254,   308,   309,   312,
     167,   110,   111,    21,   112,   310,   314,    23,   180,   331,
      81,   313,   184,   296,     1,    88,    89,     2,     3,    90,
      91,    92,     4,    77,     5,     6,     7,    93,    94,    95,
       8,     9,    10,    96,    11,    12,    97,    13,    14,    98,
      15,    16,    17,    18,    19,    99,   100,   270,   101,   102,
     327,   103,   104,   215,     0,     0,   105,    81,   106,   107,
     216,   217,   218,     0,     0,   219,   220,   221,   222,     0,
       0,   223,   224,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,   109,     0,     0,     0,   196,
      57,     0,    58,     0,   110,   111,    21,   112,     0,     0,
      23,     1,    88,    89,     2,     3,    90,    91,    92,     4,
       0,     5,     6,     7,    93,    94,    95,     8,     9,    10,
      96,    11,    12,    97,    13,    14,    98,    15,    16,    17,
      18,    19,    99,   100,     0,   101,   102,     0,   103,   104,
       0,     0,   251,   105,   252,   106,   107,     0,   253,     0,
     254,     0,     0,    21,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,     0,   109,     0,     0,     0,     0,    57,     0,    58,
       0,   110,   111,    21,   112,     1,     0,    23,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
       0,    15,    16,    17,    18,    19,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   251,     0,   252,     0,
       0,     0,   253,     0,   254,     0,     0,    21,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,     1,   252,
       0,     2,     3,   253,     0,   254,     4,     0,     5,     6,
       7,    22,    23,     0,     8,     9,    10,     0,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     2,     3,    57,     0,    58,     4,     0,
       5,     6,     7,     0,     0,    23,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     2,     3,    57,     0,    58,     4,
       0,     5,     6,     7,     0,     0,    23,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,    21,     5,     6,     7,    23,     0,     0,
       8,     9,    10,     0,    11,    12,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     2,     3,     0,   325,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     8,     9,
       0,     0,    11,    12,     0,     0,    14,    23,     0,    16,
      17,    18,    19,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       8,     9,     0,     0,    11,    12,     0,     0,    14,     0,
      23,    16,    17,    18,    19,     0,    88,    89,     0,     0,
      90,    91,    92,     0,     0,     0,     0,   269,    93,    94,
      95,     0,     0,     0,    96,     0,     0,    97,    23,     0,
      98,     0,     0,     0,     0,     0,    99,   100,     0,   101,
     102,     0,   103,   104,     0,     0,     0,   105,     0,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,   109,     0,     0,     0,
     198,    57,     0,    58,     0,   110,   111,    21,   112,    88,
      89,     0,     0,    90,    91,    92,     0,     0,     0,     0,
       0,    93,    94,    95,     0,     0,     0,    96,     0,     0,
      97,     0,     0,    98,     0,     0,     0,     0,     0,    99,
     100,     0,   101,   102,     0,   103,   104,     0,     0,     0,
     105,     0,   106,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,   109,
       0,     0,     0,   281,    57,     0,    58,     0,   110,   111,
      21,   112,    88,    89,     0,     0,    90,    91,    92,     0,
       0,     0,     0,     0,    93,    94,    95,     0,     0,     0,
      96,     0,     0,    97,     0,     0,    98,     0,     0,     0,
       0,     0,    99,   100,     0,   101,   102,    97,   103,   104,
       0,     0,     0,   105,     0,   106,   107,   100,     0,   101,
     102,    97,   103,   104,     0,     0,     0,   105,     0,   106,
     107,   100,     0,   101,   102,     0,   103,   104,     0,     0,
     108,   105,   109,   106,   107,     0,     0,    57,     0,    58,
       0,   110,   111,    21,   112,     0,   109,     0,     0,     0,
     353,   168,     0,     0,     0,   110,   111,    21,   112,     0,
     109,     0,     0,    97,     0,   168,     0,     0,     0,   110,
     111,    21,   112,   100,     0,   101,   102,     0,   103,   104,
      97,     0,     0,   105,     0,   106,   107,     0,     0,     0,
     100,     0,   101,   102,     0,   103,   104,     0,     0,     0,
     105,     0,   106,   107,     0,     0,     0,     0,     0,     0,
     206,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,    21,   112,     0,     0,   284,     0,   109,
       0,     0,    97,     0,     0,     0,     0,     0,   110,   111,
      21,   112,   100,     0,   101,   102,    97,   103,   104,     0,
       0,     0,   105,     0,   106,   107,   100,     0,   101,   102,
       0,   103,   104,     0,     0,     0,   105,     0,   106,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   337,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,    21,   112,     0,   109,   357,     0,    97,     0,
       0,     0,     0,     0,   110,   111,    21,   112,   100,     0,
     101,   102,    97,   103,   104,     0,     0,     0,   105,     0,
     106,   107,   100,     0,   101,   102,    97,   103,   104,     0,
       0,     0,   105,     0,   106,   107,   100,     0,   101,   102,
       0,   103,   104,     0,     0,   360,   105,   109,   106,   107,
       0,     0,     0,     0,     0,     0,   110,   111,    21,   112,
       0,   109,   373,     0,     0,     0,     0,     0,     0,     0,
     110,   111,    21,   112,     0,   109,   375,     0,    97,     0,
       0,     0,     0,     0,   110,   111,    21,   112,   100,     0,
     101,   102,    97,   103,   104,     0,     0,     0,   105,     0,
     106,   107,   100,     0,   101,   102,     0,   103,   104,    97,
       0,     0,   105,     0,   106,   107,     0,     0,     0,   100,
       0,   101,   102,     0,   103,   104,     0,   109,   385,   105,
       0,   106,   107,     0,     0,     0,   110,   111,    21,   112,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,    21,   112,     0,     0,     0,     0,   187,     0,
       0,    97,     0,     0,     0,     0,     0,   110,   111,    21,
     112,   100,     0,   101,   102,     0,   103,   104,     0,     0,
       0,   105,     0,   106,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     111,    21,   112
};

static const yytype_int16 yycheck[] =
{
       0,    40,    64,   137,    64,   168,     0,    63,     0,    78,
     156,    75,   116,   109,     0,    74,    69,    41,     7,    69,
      20,    79,    35,    36,    77,    25,    85,    85,    78,    50,
      30,    25,    79,    25,    34,   131,    36,    31,    32,   120,
      40,   103,   104,    37,    33,   191,    70,   128,    38,    77,
      87,    74,    73,    81,   116,    68,   116,    57,   256,    49,
      79,    79,    62,    63,    42,    43,    20,    85,    60,    63,
      60,   175,    72,    44,   136,   137,    30,   275,    71,   183,
      80,   109,    60,    61,    76,    69,    76,    72,    71,    74,
      69,   187,    69,    72,    78,    45,   230,   231,   232,    88,
      85,    78,    49,    88,   200,   201,   202,   203,    62,    72,
      57,   180,   193,   175,   195,   175,   197,   213,    72,   119,
     120,   183,    71,   183,    72,    74,    80,   119,   128,    69,
     130,   227,   156,     6,     7,    75,    85,    74,    11,    88,
      13,    69,    15,   277,    72,   168,    19,    20,   252,    69,
      23,    24,   248,    74,    27,    75,   156,    30,    31,    32,
      33,    69,    69,    71,   268,    72,   329,   191,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,    37,    38,   284,   212,
     252,    69,   252,   193,    72,   195,    85,   197,   279,   227,
      40,    41,   156,   226,    74,    78,   268,    69,   268,    74,
     210,   211,    39,    75,    46,   277,    89,   256,   322,    74,
      85,    69,    69,    88,    72,    65,   249,   251,    75,    49,
      70,    74,    69,    76,    74,    44,    76,    80,    75,    82,
      80,   337,    85,   339,    75,   341,    69,    69,    52,    77,
     274,   251,    75,    75,   335,   336,   256,   251,    69,   340,
     322,   261,   322,   359,   360,   321,   260,   267,    69,    69,
      75,    41,    71,    77,    78,    75,   357,    81,    82,   279,
     274,   377,    52,    71,   346,    69,   346,    69,    72,   370,
      69,   372,   373,    75,   375,    34,    75,   251,    66,    67,
      70,   382,    74,   384,   385,   109,   329,    77,    78,    72,
     391,    81,    82,   267,    74,    74,    76,    76,    75,   342,
      80,    80,    82,    82,     6,     7,    69,   321,    88,    11,
      75,    13,    75,    15,    75,   335,   336,    19,    20,   109,
     340,    23,    24,    25,    77,    27,    54,    55,    30,    31,
      32,    33,    70,    35,    75,    37,    38,   357,    40,    41,
      77,   233,   234,    45,    70,    47,    48,   235,   236,    12,
     370,    72,   372,   373,    25,   375,   180,   237,   238,   239,
     240,    74,   382,    76,   384,   385,   204,    80,    74,    82,
      76,   391,    74,   119,    80,   244,    82,   241,   242,   245,
      72,    83,    84,    85,    86,   243,   247,    89,    82,   267,
     180,   246,    87,   227,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   227,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   181,    37,    38,
     260,    40,    41,    44,    -1,    -1,    45,   227,    47,    48,
      51,    52,    53,    -1,    -1,    56,    57,    58,    59,    -1,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    74,    45,    76,    47,    48,    -1,    80,    -1,
      82,    -1,    -1,    85,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    83,    84,    85,    86,     3,    -1,    89,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    -1,    -1,    85,    -1,    -1,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,     3,    76,
      -1,     6,     7,    80,    -1,    82,    11,    -1,    13,    14,
      15,    88,    89,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    30,    31,    32,    33,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    79,    -1,    81,    11,    -1,
      13,    14,    15,    -1,    -1,    89,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    79,    -1,    81,    11,
      -1,    13,    14,    15,    -1,    -1,    89,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    85,    13,    14,    15,    89,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,     6,     7,    -1,    70,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    89,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,
      89,    30,    31,    32,    33,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    78,    16,    17,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    89,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,     4,
       5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,     4,     5,    -1,    -1,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,
      22,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    37,    38,    25,    40,    41,
      -1,    -1,    -1,    45,    -1,    47,    48,    35,    -1,    37,
      38,    25,    40,    41,    -1,    -1,    -1,    45,    -1,    47,
      48,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      72,    45,    74,    47,    48,    -1,    -1,    79,    -1,    81,
      -1,    83,    84,    85,    86,    -1,    74,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    84,    85,    86,    -1,
      74,    -1,    -1,    25,    -1,    79,    -1,    -1,    -1,    83,
      84,    85,    86,    35,    -1,    37,    38,    -1,    40,    41,
      25,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    72,    -1,    74,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    35,    -1,    37,    38,    25,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    74,    75,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    35,    -1,
      37,    38,    25,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    48,    35,    -1,    37,    38,    25,    40,    41,    -1,
      -1,    -1,    45,    -1,    47,    48,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    72,    45,    74,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    74,    75,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    35,    -1,
      37,    38,    25,    40,    41,    -1,    -1,    -1,    45,    -1,
      47,    48,    35,    -1,    37,    38,    -1,    40,    41,    25,
      -1,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,    35,
      -1,    37,    38,    -1,    40,    41,    -1,    74,    75,    45,
      -1,    47,    48,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      74,    85,    88,    89,    91,    92,    93,    94,    99,   138,
     139,   142,   143,   144,   145,   151,   152,   156,   157,   158,
     159,   160,   170,   157,     0,    93,    72,   140,   141,   157,
     139,   139,    79,    99,    79,    99,   139,    79,    81,   100,
     101,   138,   139,    74,    76,    80,    82,   158,   156,   159,
     161,    75,    69,    72,    44,   100,   101,   143,   146,   147,
     148,   156,    79,    87,   153,   154,   155,    79,     4,     5,
       8,     9,    10,    16,    17,    18,    22,    25,    28,    34,
      35,    37,    38,    40,    41,    45,    47,    48,    72,    74,
      83,    84,    86,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   137,   100,   138,   157,    99,   139,   162,   164,   165,
     166,    99,   119,   133,   136,   156,   159,   141,    79,   134,
     171,   100,   148,    78,   147,    71,   149,   150,   157,   148,
     146,    69,    78,    44,   153,    72,    72,    74,   119,   119,
     137,   148,   167,    71,   136,    71,    78,   102,    78,    95,
      74,    74,    74,    74,    95,    99,    72,   137,    40,    41,
      65,    70,    74,    76,    80,    44,    51,    52,    53,    56,
      57,    58,    59,    62,    63,    64,   135,    74,   119,   122,
      35,    36,    68,    37,    38,    66,    67,    42,    43,    60,
      61,    54,    55,    45,    39,    46,    49,    50,    73,    69,
      72,    74,    76,    80,    82,   157,   159,   168,   169,    75,
      69,    69,    75,    77,   171,   172,   136,    69,    71,    78,
     154,   136,    78,    75,    74,   159,   168,    75,    95,    71,
      95,    78,   137,   137,    72,   137,   137,   110,    72,    72,
      99,    99,   118,   134,   137,   134,   167,   122,   122,   122,
     123,   123,   124,   124,   125,   125,   125,   125,   126,   126,
     127,   128,   129,   130,   131,   137,   134,   162,   168,   136,
     169,    74,    76,    80,    82,    70,   163,   165,    99,    69,
      78,   150,   136,   122,    95,    75,    75,    72,   137,    72,
      75,    74,    69,    75,    77,    75,    71,    75,    75,    77,
     162,   136,    70,    78,   171,    95,    95,    75,   137,    72,
      72,   137,    95,   137,   134,   133,    75,    77,    70,    12,
     107,    95,    75,    75,   137,    75,   137,    72,    75,    95,
      95,    95,    75,    95,    75,    75,   137,    72,    95,    95,
      95,    75,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    98,    99,   100,   100,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   105,   106,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   109,
     110,   111,   112,   112,   112,   112,   112,   113,   114,   115,
     115,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   120,   121,   121,   121,   121,   121,   121,   122,   122,
     123,   123,   123,   123,   124,   124,   124,   125,   125,   125,
     126,   126,   126,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   137,   137,   138,   138,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     142,   142,   142,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   144,   144,   144,   145,   145,
     146,   146,   147,   148,   148,   148,   148,   149,   149,   150,
     150,   150,   151,   151,   151,   152,   153,   153,   154,   154,
     155,   156,   156,   157,   157,   158,   158,   158,   158,   158,
     158,   158,   159,   159,   159,   159,   160,   161,   161,   162,
     162,   163,   164,   164,   165,   165,   165,   166,   166,    99,
     167,   167,   168,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   170,   171,   171,   171,   172,   172
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     1,     1,     4,     3,     3,     1,     1,     2,     1,
       2,     2,     1,     5,     7,     5,     1,     1,     1,     5,
       7,     9,     8,     8,     8,     7,     7,     7,     6,     1,
       1,     1,     3,     2,     2,     3,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     4,     2,     4,     3,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     5,     1,     1,
       1,     2,     2,     1,     2,     1,     2,     1,     3,     1,
       3,     2,     2,     5,     4,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     1,     3,     2,     4,     4,
       2,     4,     1,     2,     2,     3,     1,     1,     2,     1,
       3,     3,     1,     3,     2,     1,     2,     1,     3,     1,
       1,     2,     1,     2,     1,     3,     4,     3,     2,     1,
       4,     3,     2,     1,     1,     1,     3,     4,     1,     3
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
#line 1880 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1886 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           (yyval.nodePtr) = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}
#line 1894 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1900 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 1906 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                               (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1914 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 88 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1922 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {NULL, (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1930 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 96 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr),NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}
#line 1938 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 100 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1944 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 101 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1950 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1956 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1962 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 104 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1968 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 105 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 1974 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 107 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1982 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 111 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1990 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "src/maths_parser.y" /* yacc.c:1646  */
    {                                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}
#line 1998 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 119 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DEFAULT", *(yyvsp[0]._text));}
#line 2004 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 120 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CASE", *(yyvsp[0]._text));}
#line 2010 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 121 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER", *(yyvsp[0]._text));}
#line 2016 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 123 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2024 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 127 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2032 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 131 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          (yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
#line 2040 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 134 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("COMPOUND_STATEMENT","");}
#line 2046 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 136 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2052 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 137 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_LIST","", branches, branch_notes);}
#line 2060 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 141 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2066 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 142 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("STATEMENT_LIST","", branches, branch_notes);}
#line 2074 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 146 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 2080 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 149 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2088 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2096 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 157 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}
#line 2104 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_SWITCH", *(yyvsp[0]._text));}
#line 2110 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 162 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_IF", *(yyvsp[0]._text));}
#line 2116 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 163 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_ELSE", *(yyvsp[0]._text));}
#line 2122 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 165 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2130 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 169 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), NULL, NULL, (yyvsp[-6].nodePtr), (yyvsp[-5].nodePtr)};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2138 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 173 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-8].nodePtr), (yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2146 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), NULL, (yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2154 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 181 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2162 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 185 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-7].nodePtr), (yyvsp[-5].nodePtr), (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2170 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 189 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, NULL, (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2178 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 193 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), NULL, (yyvsp[-3].nodePtr), NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2186 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 197 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-6].nodePtr), (yyvsp[-4].nodePtr), NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2194 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 201 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-5].nodePtr), NULL, NULL, NULL, (yyvsp[0].nodePtr)};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    (yyval.nodePtr) = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}
#line 2202 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 205 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_FOR", *(yyvsp[0]._text));}
#line 2208 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 206 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_WHILE", *(yyvsp[0]._text));}
#line 2214 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 207 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("T_DO", *(yyvsp[0]._text));}
#line 2220 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 209 "src/maths_parser.y" /* yacc.c:1646  */
    {                                  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"GOTO", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2228 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 213 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-1]._text));}
#line 2234 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 214 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("JUMP_STATEMENT", *(yyvsp[-1]._text));}
#line 2240 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 216 "src/maths_parser.y" /* yacc.c:1646  */
    {                                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2248 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 220 "src/maths_parser.y" /* yacc.c:1646  */
    {                                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2256 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 225 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("GOTO", *(yyvsp[0]._text));}
#line 2262 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 226 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("RETURN", *(yyvsp[0]._text));}
#line 2268 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 228 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2274 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 229 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 2280 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 230 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("PRIMARY_EXPRESSION", *(yyvsp[0]._text));}
#line 2286 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}
#line 2294 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 236 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2300 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 237 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("CONSTANT", *(yyvsp[0]._text)); }
#line 2306 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 240 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2312 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 241 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2320 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 245 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2328 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 249 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}
#line 2336 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 253 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION",".", branches, branch_notes);}
#line 2344 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 257 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}
#line 2352 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 261 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}
#line 2360 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 265 "src/maths_parser.y" /* yacc.c:1646  */
    {                           std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}
#line 2368 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 269 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2374 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 270 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      (yyval.nodePtr) = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}
#line 2382 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 274 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2388 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 275 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}
#line 2396 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 279 "src/maths_parser.y" /* yacc.c:1646  */
    {                               std::vector<ast_node*> branches = {(yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}
#line 2404 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 283 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2412 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 287 "src/maths_parser.y" /* yacc.c:1646  */
    {                                   std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2420 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 291 "src/maths_parser.y" /* yacc.c:1646  */
    {                    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                (yyval.nodePtr) = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}
#line 2428 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 295 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("SIZE_OF", *(yyvsp[0]._text));}
#line 2434 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 297 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2440 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 298 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2446 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 299 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2452 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 300 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2458 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 301 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2464 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 302 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("UNARY_OPERATOR",*(yyvsp[0]._text));}
#line 2470 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 304 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2476 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 305 "src/maths_parser.y" /* yacc.c:1646  */
    {             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}
#line 2484 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 309 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2490 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 310 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}
#line 2498 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 314 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}
#line 2506 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 318 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}
#line 2514 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 322 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2520 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 323 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}
#line 2528 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 327 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}
#line 2536 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 331 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2542 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 332 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION","<<", branches, branch_notes);}
#line 2550 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 336 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ADDITIVE_EXPRESSION",">>", branches, branch_notes);}
#line 2558 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 340 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2564 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 341 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}
#line 2572 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 345 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}
#line 2580 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 349 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}
#line 2588 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 353 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               (yyval.nodePtr) = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}
#line 2596 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 357 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2602 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 358 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}
#line 2610 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 362 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}
#line 2618 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 366 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2624 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 367 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("AND_EXPRESSION","", branches, branch_notes);}
#line 2632 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 371 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2638 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 372 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXCLUSIVE_OR_EXPRESSION","", branches, branch_notes);}
#line 2646 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 376 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2652 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 377 "src/maths_parser.y" /* yacc.c:1646  */
    {std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("INCLUSIVE_OR_EXPRESSION","", branches, branch_notes);}
#line 2660 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 381 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2666 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 382 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_AND_EXPRESSION","", branches, branch_notes);}
#line 2674 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 386 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2680 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 387 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        (yyval.nodePtr) = new ast_node("LOGICAL_OR_EXPRESSION","", branches, branch_notes);}
#line 2688 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 391 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  = (yyvsp[0].nodePtr);}
#line 2694 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 392 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  (yyval.nodePtr) = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}
#line 2702 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 396 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2708 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 397 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       (yyval.nodePtr) = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}
#line 2716 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 401 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2722 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 402 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2728 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 403 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2734 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 404 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2740 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 405 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2746 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 406 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2752 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 407 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2758 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 408 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2764 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 409 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2770 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 410 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2776 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 411 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ASSIGNMENT_OPERATOR", *(yyvsp[0]._text));}
#line 2782 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 413 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2788 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 415 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2794 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 416 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("EXPR","", branches, branch_notes);}
#line 2802 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 420 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2810 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 424 "src/maths_parser.y" /* yacc.c:1646  */
    {         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION","", branches, branch_notes);}
#line 2818 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 428 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2824 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 429 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2832 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 433 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2838 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 434 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2846 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 438 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2852 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 439 "src/maths_parser.y" /* yacc.c:1646  */
    {                std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}
#line 2860 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 443 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2866 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 444 "src/maths_parser.y" /* yacc.c:1646  */
    {           std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}
#line 2874 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 448 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2880 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 449 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}
#line 2888 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 453 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2894 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 454 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2900 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 455 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2906 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 456 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2912 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 457 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STORAGE_CLASS_SPECIFIER", *(yyvsp[0]._text));}
#line 2918 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 459 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2924 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 460 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2930 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 461 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2936 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 462 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2942 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 463 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2948 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 464 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2954 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 465 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2960 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 466 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2966 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 467 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_SPECIFIER", *(yyvsp[0]._text));}
#line 2972 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 468 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2978 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 469 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2984 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 470 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 2990 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 472 "src/maths_parser.y" /* yacc.c:1646  */
    {                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 2998 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 476 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3006 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 480 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}
#line 3014 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 484 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", *(yyvsp[0]._text));}
#line 3020 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 485 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("STRUCT_OR_UNION", *(yyvsp[0]._text));}
#line 3026 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 487 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3032 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 488 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}
#line 3040 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 492 "src/maths_parser.y" /* yacc.c:1646  */
    {          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}
#line 3048 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 496 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3054 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 498 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3062 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 502 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3068 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 504 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}
#line 3076 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 508 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3082 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 509 "src/maths_parser.y" /* yacc.c:1646  */
    {     std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}
#line 3090 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 513 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr)  =(yyvsp[0].nodePtr); }
#line 3096 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 514 "src/maths_parser.y" /* yacc.c:1646  */
    {                   std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3104 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 518 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {NULL, (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}
#line 3112 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 522 "src/maths_parser.y" /* yacc.c:1646  */
    {                              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3120 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 526 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {(yyvsp[-4].nodePtr), (yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3128 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 530 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3136 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 534 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUM",*(yyvsp[0]._text));}
#line 3142 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 536 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3148 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 537 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}
#line 3156 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 541 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3162 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 542 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("ENUMERATOR","", branches, branch_notes);}
#line 3170 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 546 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("ENUMERATOR",*(yyvsp[0]._text));}
#line 3176 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 548 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER",*(yyvsp[0]._text));}
#line 3182 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 549 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER",*(yyvsp[0]._text));}
#line 3188 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 551 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3194 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 552 "src/maths_parser.y" /* yacc.c:1646  */
    {                                        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("DECLARATOR","", branches, branch_notes);}
#line 3202 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 556 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3208 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 558 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 3214 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 560 "src/maths_parser.y" /* yacc.c:1646  */
    {                          std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3222 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 564 "src/maths_parser.y" /* yacc.c:1646  */
    {       std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3230 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 568 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3238 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 572 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3246 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 576 "src/maths_parser.y" /* yacc.c:1646  */
    { std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3254 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 581 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3260 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 582 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3268 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 586 "src/maths_parser.y" /* yacc.c:1646  */
    {                                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3276 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 590 "src/maths_parser.y" /* yacc.c:1646  */
    {                             std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                (yyval.nodePtr) = new ast_node("POINTER","", branches, branch_notes);}
#line 3284 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 594 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = new ast_node("DEREFERENCE","");}
#line 3290 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 596 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3296 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 597 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}
#line 3304 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 601 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3310 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 602 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","ELIPSIS"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_TYPE_LIST","", branches, branch_notes);}
#line 3318 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 606 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("ELIPSIS","...");}
#line 3324 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 608 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3330 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 609 "src/maths_parser.y" /* yacc.c:1646  */
    {                 std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_LIST","", branches, branch_notes);}
#line 3338 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 613 "src/maths_parser.y" /* yacc.c:1646  */
    {                     std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3346 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 617 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3352 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 619 "src/maths_parser.y" /* yacc.c:1646  */
    {            std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}
#line 3360 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 623 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3366 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 624 "src/maths_parser.y" /* yacc.c:1646  */
    {                         std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER_LIST","IDENTIFIER"};
                                                                                (yyval.nodePtr) = new ast_node("IDENTIFIER_LIST","", branches, branch_notes);}
#line 3374 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 628 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("IDENTIFIER",*(yyvsp[0]._text));}
#line 3380 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 630 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3386 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 631 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("TYPE_NAME","", branches, branch_notes);}
#line 3394 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 635 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3400 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 637 "src/maths_parser.y" /* yacc.c:1646  */
    {                      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                (yyval.nodePtr) = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3408 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 641 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3414 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 643 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[-1].nodePtr); }
#line 3420 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 645 "src/maths_parser.y" /* yacc.c:1646  */
    {    std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3428 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 649 "src/maths_parser.y" /* yacc.c:1646  */
    {  std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3436 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 653 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3444 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 657 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3450 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 659 "src/maths_parser.y" /* yacc.c:1646  */
    {   std::vector<ast_node*> branches = {(yyvsp[-3].nodePtr), (yyvsp[-1].nodePtr)};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3458 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 663 "src/maths_parser.y" /* yacc.c:1646  */
    {        std::vector<ast_node*> branches = {NULL, (yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3466 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 667 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr), NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}
#line 3474 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 671 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
#line 3480 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 673 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = new ast_node("TYPEDEF_NAME",*(yyvsp[0]._text));}
#line 3486 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 675 "src/maths_parser.y" /* yacc.c:1646  */
    { (yyval.nodePtr) = (yyvsp[0].nodePtr); }
#line 3492 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 677 "src/maths_parser.y" /* yacc.c:1646  */
    {              std::vector<ast_node*> branches = {(yyvsp[-1].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3500 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 681 "src/maths_parser.y" /* yacc.c:1646  */
    {      std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER","", branches, branch_notes);}
#line 3508 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 685 "src/maths_parser.y" /* yacc.c:1646  */
    {(yyval.nodePtr) = (yyvsp[0].nodePtr);}
#line 3514 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 686 "src/maths_parser.y" /* yacc.c:1646  */
    {                       std::vector<ast_node*> branches = {(yyvsp[-2].nodePtr), (yyvsp[0].nodePtr)};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                (yyval.nodePtr) = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}
#line 3522 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3526 "src/maths_parser.tab.cpp" /* yacc.c:1646  */
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
#line 693 "src/maths_parser.y" /* yacc.c:1906  */


const ast_node *g_root;

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
