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
#line 1 "src/maths_parser.y" /* yacc.c:1909  */

  #include "./ast.hpp"
  #include "./symbol_table.hpp"
  #include <cassert>

  extern ast_node *g_root;
  extern symbol_table *table;
  int yylex(void);
  void yyerror(const char *);

#line 55 "src/maths_parser.tab.hpp" /* yacc.c:1909  */

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
    T_EQUALS = 269,
    T_EQUALS_EQUALS = 270,
    T_AND_AND = 271,
    T_OR_OR = 272,
    T_COMMA = 273,
    T_COLON = 274,
    T_SEMICOLON = 275,
    T_LBRACKET = 276,
    T_RBRACKET = 277,
    T_RCURLY_BRACKET = 278,
    T_LCURLY_BRACKET = 279,
    T_EMPTY_BRACKETS = 280,
    T_ECURLY_BRACKETS = 281,
    T_DEC_INT = 282,
    T_IDENTIFIER = 283,
    T_STRING = 284,
    T_EXPONENT = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "src/maths_parser.y" /* yacc.c:1909  */

  ast_node* nodePtr;
  std::string* _text;

#line 103 "src/maths_parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MATHS_PARSER_TAB_HPP_INCLUDED  */
