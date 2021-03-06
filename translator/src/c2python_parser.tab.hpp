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

#ifndef YY_YY_SRC_C2PYTHON_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_C2PYTHON_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/c2python_parser.y" /* yacc.c:1909  */

  #include "./c2python_ast.hpp"
  #include "./c2python_symbol_table.hpp"
  #include <cassert>

  extern c2python_ast_node *g_root;
  extern c2python_symbol_table *table;
  int yylex(void);
  void yyerror(const char *);

#line 55 "src/c2python_parser.tab.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_ELSE = 258,
    T_IF = 259,
    T_INT = 260,
    T_RETURN = 261,
    T_TYPEDEF = 262,
    T_VOID = 263,
    T_WHILE = 264,
    T_TIMES = 265,
    T_PLUS = 266,
    T_MINUS = 267,
    T_LESS_THAN = 268,
    T_GREATER_THAN = 269,
    T_GREATER_THAN_OR_EQUAL_TO = 270,
    T_LESS_THAN_OR_EQUAL_TO = 271,
    T_EQUALS = 272,
    T_NOT_EQUALS_EQUALS = 273,
    T_EQUALS_EQUALS = 274,
    T_AND_AND = 275,
    T_OR_OR = 276,
    T_COMMA = 277,
    T_COLON = 278,
    T_SEMICOLON = 279,
    T_LBRACKET = 280,
    T_RBRACKET = 281,
    T_RCURLY_BRACKET = 282,
    T_LCURLY_BRACKET = 283,
    T_EMPTY_BRACKETS = 284,
    T_ECURLY_BRACKETS = 285,
    T_DEC_INT = 286,
    T_IDENTIFIER = 287,
    T_STRING = 288,
    T_TIMES_EQUALS = 289,
    T_DIVIDE_EQUALS = 290,
    T_MODULO_EQUALS = 291,
    T_PLUS_EQUALS = 292,
    T_AND_EQUALS = 293,
    T_XOR_EQUALS = 294,
    T_OR_EQUALS = 295,
    T_MINUS_EQUALS = 296,
    T_LEFT_SHIFT_EQUALS = 297,
    T_RIGHT_SHIFT_EQUALS = 298,
    T_EXPONENT = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "src/c2python_parser.y" /* yacc.c:1909  */

  c2python_ast_node* nodePtr;
  std::string* _text;

#line 117 "src/c2python_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C2PYTHON_PARSER_TAB_HPP_INCLUDED  */
