%code requires{
  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  const Expression *expr;
  double number;
  std::string *string;
}

%token T_TIMES T_DIVIDE T_PLUS T_MINUS T_EXPONENT
%token T_LBRACKET T_RBRACKET
%token T_LOG T_EXP T_SQRT
%token T_NUMBER T_VARIABLE

%type <expr> EXPR TERM UNARY FACTOR
%type <number> T_NUMBER
%type <string> T_VARIABLE T_LOG T_EXP T_SQRT FUNCTION_NAME

%left T_PLUS T_MINUS
%left T_DIVIDE T_TIMES
%right T_EXPONENT

%start ROOT

%%

/* The TODO notes a are just a guide, and are non-exhaustive.
   The expectation is that you do each one, then compile and test.
   Testing should be done using patterns that target the specific
   feature; the testbench is there to make sure that you haven't
   broken anything while you added it.
*/

ROOT : PRIMARY_EXPRESSION { g_root = $1; }


PRIMARY_EXPRESSION : T_IDENTIFIER
             | CONSTANT
             |T_STRING
             |T_LBRACKET EXPRESSION T_RBRACKET

CONSTANT : T_DEC_INT /*ADD MORE AS WE ADD MORE CONTANT DEFINITIONS TO THE LEXER*/
         | T_OCTAL_INT

POSTFIX_EXPRESSION : PRIMARY_EXPRESSION
                   | POSTFIX_EXPRESSION T_LSQ_BRACKET EXPRESSION T_RSQ_BRACKET
                   | POSTFIX_EXPRESSION T_LBRACKET T_RBRACKET
                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET
                   | POSTFIX_EXPRESSION T_DOT T_IDENTIFIER
                   | POSTFIX_EXPRESSION T_MINUS T_GREATER_THAN T_IDENTIFIER
                   | POSTFIX_EXPRESSION T_PLUS T_PLUS
                   | POSTFIX_EXPRESSION T_MINUS T_MINUS

ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION
                         | ARGUMENT_EXPRESSION_LIST T_COMMA ASSIGNMENT_EXPRESSION

UNARY_EXPRESSION : POSTFIX_EXPRESSION
                 | T_PLUS T_PLUS UNARY_EXPRESSION
                 | T_MINUS T_MINUS UNARY_EXPRESSION
                 | UNARY_OPERATOR CAST_EXPRESSION
                /* | T_SIZEOF UNARY_EXPRESSION
                 | T_SIZEOF T_LBRACKET TYPE_NAME T_RBRACKET
                */
UNARY_OPERATOR : T_AND | T_TIMES | T_PLUS | T_MINUS | T_BITWISE_NOT | T_LOGICAL_NOT

CAST_EXPRESSION : UNARY_EXPRESSION | T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPRESSION

MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION
                          | MULTIPLICATIVE_EXPRESSION T_TIMES CAST_EXPRESSION
                          | MULTIPLICATIVE_EXPRESSION T_DIVIDE CAST_EXPRESSION
                          | MULTIPLICATIVE_EXPRESSION T_MODULO CAST_EXPRESSION

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION
                    | ADDITIVE_EXPRESSION T_PLUS MULTIPLICATIVE_EXPRESSION
                    | ADDITIVE_EXPRESSION T_MINUS MULTIPLICATIVE_EXPRESSION

SHIFT_EXPRESSION : ADDITIVE_EXPRESSION
                 | SHIFT_EXPRESSION T_LESS_THAN T_LESS_THAN ADDITIVE_EXPRESSION
                 | SHIFT_EXPRESSION T_GREATER_THAN T_GREATER_THAN ADDITIVE_EXPRESSION

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_LESS_THAN SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_GREATER_THAN SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_LESS_THAN T_EQUAL SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_GREATER_THAN T_EQUAL SHIFT_EXPRESSION
EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION
                    | EQUALITY_EXPRESSION T_EQUAL T_EQUAL RELATIONAL_EXPRESSION
                    | EQUALITY_EXPRESSION T_LOGICAL_NOT T_EQUAL RELATIONAL_EXPRESSION

AND_EXPRESSION : EQUALITY_EXPRESSION
               | AND_EXPRESSION T_AND EQUALITY Expression

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION
                        | EXCLUSIVE_OR_EXPRESSION T_EXPONENT AND_EXPRESSION

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION
                        | INCLUSIVE_OR_EXPRESSION T_OR EXCLUSIVE_OR_EXPRESSION

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION
                       | LOGICAL_AND_EXPRESSION T_AND T_AND INCLUSIVE_OR_EXPRESSION

LOGICAL_OR_EXPRESSION  : LOGICAL_AND_EXPRESSION
                       | LOGICAL_OR_EXPRESSION T_OR T_OR LOGICAL_AND_EXPRESSION

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION
                       | LOGICAL_OR_EXPRESSION T_QUESTION EXPRESSION T_COLON CONDITIONAL_EXPRESSION

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION

ASSIGNMENT_OPERATOR : T_EQUAL | T_TIMES T_EQUAL | T_DIVIDE T_EQUAL | T_MODULO T_EQUAL
                    | T_PLUS T_EQUAL | T_MINUS T_EQUAL
                    | T_LESS_THAN T_LESS_THAN T_EQUAL | T_GREATER_THAN T_GREATHER_THAN T_EQUAL 
                    | T_AND T_EQUAL | T_EXPONENT T_EQUAL | T_OR T_EQUAL

EXPR : ASSIGNMENT_EXPRESSION | EXPR T_COMMA ASSIGNMENT_EXPRESSION

/*CONSTANT_EXPRESSION: CONDITIONAL_EXPRESSION*/


/*
TERM           { $$ = $1; }
     | EXPR T_MINUS TERM              {$$ = new SubOperator($1, $3); }
     | EXPR T_PLUS TERM               {$$ = new AddOperator($1, $3); }

TERM : UNARY                         { $$ = $1; }
     | TERM T_TIMES UNARY            { $$ = new MulOperator($1, $3); }
     | TERM T_DIVIDE UNARY           { $$ = new DivOperator($1, $3); }

UNARY : FACTOR        { $$ = $1; }
      | T_MINUS FACTOR {$$ = new NegOperator($2); }

FACTOR : T_NUMBER           {$$ = new Number( $1 ); }
       | T_VARIABLE         {$$ = new Variable( *$1 );}
       | T_LBRACKET EXPR T_RBRACKET { $$ = $2; }
       | FACTOR T_EXPONENT UNARY         { $$ = new ExpOperator($1, $3); }
       | T_LOG T_LBRACKET EXPR T_RBRACKET  {$$ = new LogFunction($3); }
       | T_EXP T_LBRACKET EXPR T_RBRACKET  {$$ = new ExpFunction($3); }
       | T_SQRT T_LBRACKET EXPR T_RBRACKET {$$ = new SqrtFunction($3); }


*/
%%

const Expression *g_root; // Definition of variable (to match declaration earlier)

const Expression *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
