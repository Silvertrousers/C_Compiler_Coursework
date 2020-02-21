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

%token T_CHAR T_DOUBLE T_ELSE T_FLOAT T_FOR T_IF T_INT T_LONG T_RETURN T_WHILE
%token T_TIMES T_DIVIDE T_PLUS T_MINUS T_EXPONENT
%token T_LESS_THAN T_GREATER_THAN T_EQUALS T_AND T_OR T_BITWISE_NOT T_LOGICAL_NOT
%token T_MODULO T_COMMA T_DOT T_COLON T_SEMICOLON T_QUESTION
%token T_LBRACKET T_RBRACKET T_LSQ_BRACKET T_RSQ_BRACKET
%token T_DEC_INT T_OCTAL_INT T_IDENTIFIER T_STRING

%type <expr> EXPR PRIMARY_EXPRESSION
%type <number> CONSTANT T_DEC_INT T_OCTAL_INT
%type <string> T_STRING T_IDENTIFIER

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

ROOT : EXPR { g_root = $1; fprintf(stderr, "Bye "); }
| EXPR ROOT {fprintf(stderr, "HiBye ");}
| ROOT EXPR {fprintf(stderr, "ByeHi ");}


PRIMARY_EXPRESSION : T_IDENTIFIER {fprintf(stderr, "Identifier ");}
             | CONSTANT {fprintf(stderr, "Constant ");}
             | T_STRING {fprintf(stderr, "String ");}
             | T_LBRACKET EXPR T_RBRACKET

CONSTANT : T_DEC_INT {$$ = $1; fprintf(stderr, "Int ");}/*ADD MORE AS WE ADD MORE CONTANT DEFINITIONS TO THE LEXER*/
         | T_OCTAL_INT {$$ = $1; }


POSTFIX_EXPRESSION : PRIMARY_EXPRESSION {fprintf(stderr, "Hi ");}
                   | POSTFIX_EXPRESSION T_LSQ_BRACKET EXPR T_RSQ_BRACKET
                   | POSTFIX_EXPRESSION T_LBRACKET T_RBRACKET
                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET
                   | POSTFIX_EXPRESSION T_DOT T_IDENTIFIER
                   | POSTFIX_EXPRESSION T_MINUS T_GREATER_THAN T_IDENTIFIER
                   | POSTFIX_EXPRESSION T_PLUS T_PLUS {fprintf(stderr, "Increment ");}
                   | POSTFIX_EXPRESSION T_MINUS T_MINUS

ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION
                         | ARGUMENT_EXPRESSION_LIST T_COMMA ASSIGNMENT_EXPRESSION

UNARY_EXPRESSION : POSTFIX_EXPRESSION {fprintf(stderr, "Unary ");}
                 | T_PLUS T_PLUS UNARY_EXPRESSION {fprintf(stderr, "Unary ");}
                 | T_MINUS T_MINUS UNARY_EXPRESSION {fprintf(stderr, "Unary ");}
                 | UNARY_OPERATOR CAST_EXPRESSION {fprintf(stderr, "UnaryOperator ");}
/*
                 | T_SIZEOF UNARY_EXPRESSION
                 | T_SIZEOF T_LBRACKET TYPE_NAME T_RBRACKET
*/
UNARY_OPERATOR : T_AND | T_TIMES | T_PLUS {fprintf(stderr, "Plus ");} | T_MINUS | T_BITWISE_NOT | T_LOGICAL_NOT

CAST_EXPRESSION : UNARY_EXPRESSION {fprintf(stderr, "Cast ");}
/*
| T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPRESSION
*/
MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION
                          | MULTIPLICATIVE_EXPRESSION T_TIMES CAST_EXPRESSION {fprintf(stderr, "Multiply ");}
                          | MULTIPLICATIVE_EXPRESSION T_DIVIDE CAST_EXPRESSION
                          | MULTIPLICATIVE_EXPRESSION T_MODULO CAST_EXPRESSION

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION
                    | ADDITIVE_EXPRESSION T_PLUS MULTIPLICATIVE_EXPRESSION {fprintf(stderr, "Add ");}
                    | ADDITIVE_EXPRESSION T_MINUS MULTIPLICATIVE_EXPRESSION

SHIFT_EXPRESSION : ADDITIVE_EXPRESSION
                 | SHIFT_EXPRESSION T_LESS_THAN T_LESS_THAN ADDITIVE_EXPRESSION
                 | SHIFT_EXPRESSION T_GREATER_THAN T_GREATER_THAN ADDITIVE_EXPRESSION

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_LESS_THAN SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_GREATER_THAN SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_LESS_THAN T_EQUALS SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_GREATER_THAN T_EQUALS SHIFT_EXPRESSION
EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION
                    | EQUALITY_EXPRESSION T_EQUALS T_EQUALS RELATIONAL_EXPRESSION
                    | EQUALITY_EXPRESSION T_LOGICAL_NOT T_EQUALS RELATIONAL_EXPRESSION

AND_EXPRESSION : EQUALITY_EXPRESSION
               | AND_EXPRESSION T_AND EQUALITY_EXPRESSION

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION
                        | EXCLUSIVE_OR_EXPRESSION T_EXPONENT AND_EXPRESSION

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION
                        | INCLUSIVE_OR_EXPRESSION T_OR EXCLUSIVE_OR_EXPRESSION

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION
                       | LOGICAL_AND_EXPRESSION T_AND T_AND INCLUSIVE_OR_EXPRESSION

LOGICAL_OR_EXPRESSION  : LOGICAL_AND_EXPRESSION
                       | LOGICAL_OR_EXPRESSION T_OR T_OR LOGICAL_AND_EXPRESSION

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION
                       | LOGICAL_OR_EXPRESSION T_QUESTION EXPR T_COLON CONDITIONAL_EXPRESSION

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION {fprintf(stderr, "AssignmentExpressed ");}
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION {fprintf(stderr, "ActualAssignment ");}

ASSIGNMENT_OPERATOR : T_EQUALS {fprintf(stderr, "Equals ");} | T_TIMES T_EQUALS {fprintf(stderr, "Timesequals ");} | T_DIVIDE T_EQUALS | T_MODULO T_EQUALS
                    | T_PLUS T_EQUALS | T_MINUS T_EQUALS
                    | T_LESS_THAN T_LESS_THAN T_EQUALS | T_GREATER_THAN T_GREATER_THAN T_EQUALS
                    | T_AND T_EQUALS | T_EXPONENT T_EQUALS | T_OR T_EQUALS

EXPR : ASSIGNMENT_EXPRESSION {fprintf(stderr, "ExpressionFound! ");}| EXPR T_COMMA ASSIGNMENT_EXPRESSION


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
