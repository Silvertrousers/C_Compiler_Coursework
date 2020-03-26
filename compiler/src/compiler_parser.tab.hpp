/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 1 "src/compiler_parser.y" /* yacc.c:1909  */

  #include "./ast.hpp"

  #include <string>
  #include <cmath>
  #include <cassert>

  extern ast_node *g_root;

  int yylex(void);
  void yyerror(const char *);

#line 57 "src/compiler_parser.tab.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_EQUALS = 258,
    T_MODULO_EQUALS = 259,
    T_LEFT_SHIFT_EQUALS = 260,
    T_RIGHT_SHIFT_EQUALS = 261,
    T_PLUS_EQUALS = 262,
    T_MINUS_EQUALS = 263,
    T_TIMES_EQUALS = 264,
    T_DIVIDE_EQUALS = 265,
    T_AND_EQUALS = 266,
    T_OR_EQUALS = 267,
    T_XOR_EQUALS = 268,
    T_LBRACKET = 269,
    T_RBRACKET = 270,
    T_LSQ_BRACKET = 271,
    T_RSQ_BRACKET = 272,
    T_RCURLY_BRACKET = 273,
    T_LCURLY_BRACKET = 274,
    T_LOGICAL_NOT = 275,
    T_BITWISE_NOT = 276,
    T_INCREMENT = 277,
    T_DECREMENT = 278,
    T_EQUALS_EQUALS = 279,
    T_NOT_EQUALS_EQUALS = 280,
    T_LESS_THAN_OR_EQUAL_TO = 281,
    T_GREATER_THAN_OR_EQUAL_TO = 282,
    T_PLUS = 283,
    T_MINUS = 284,
    T_RIGHT_SHIFT = 285,
    T_LEFT_SHIFT = 286,
    T_LESS_THAN = 287,
    T_GREATER_THAN = 288,
    T_AND = 289,
    T_OR = 290,
    T_AND_AND = 291,
    T_OR_OR = 292,
    T_DIVIDE = 293,
    T_TIMES = 294,
    T_MODULO = 295,
    T_EXPONENT = 296,
    T_AUTO = 297,
    T_BREAK = 298,
    T_CASE = 299,
    T_CHAR = 300,
    T_CONTINUE = 301,
    T_DEFAULT = 302,
    T_DO = 303,
    T_DOUBLE = 304,
    T_ELSE = 305,
    T_ENUM = 306,
    T_EXTERN = 307,
    T_FLOAT = 308,
    T_FOR = 309,
    T_IF = 310,
    T_INT = 311,
    T_LONG = 312,
    T_REGISTER = 313,
    T_RETURN = 314,
    T_SHORT = 315,
    T_SIGNED = 316,
    T_SIZEOF = 317,
    T_STATIC = 318,
    T_STRUCT = 319,
    T_SWITCH = 320,
    T_TYPEDEF = 321,
    T_UNSIGNED = 322,
    T_VOID = 323,
    T_VOLATILE = 324,
    T_WHILE = 325,
    T_ARROW = 326,
    T_COMMA = 327,
    T_DOT = 328,
    T_COLON = 329,
    T_SEMICOLON = 330,
    T_QUESTION = 331,
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
#line 14 "src/compiler_parser.y" /* yacc.c:1909  */

  ast_node* nodePtr;
  std::string* _text;

#line 164 "src/compiler_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_COMPILER_PARSER_TAB_HPP_INCLUDED  */
