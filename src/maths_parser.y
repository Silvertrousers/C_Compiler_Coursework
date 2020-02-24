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
%token T_TIMES T_DIVIDE T_PLUS T_MINUS T_EXPONENT T_DECREMENT T_INCREMENT
%token T_LESS_THAN T_GREATER_THAN T_EQUALS T_AND T_OR T_BITWISE_NOT T_LOGICAL_NOT
%token T_AND_AND T_OR_OR
%token T_MODULO_EQUALS T_LEFT_SHIFT_EQUALS T_RIGHT_SHIFT_EQUALS T_NOT_EQUALS_EQUALS T_EQUALS_EQUALS
%token T_PLUS_EQUALS T_MINUS_EQUALS T_TIMES_EQUALS T_DIVIDE_EQUALS
%token T_LESS_THAN_OR_EQUAL_TO T_GREATER_THAN_OR_EQUAL_TO
%token T_AND_EQUALS T_OR_EQUALS T_XOR_EQUALS
%token T_ARROW T_RIGHT_SHIFT T_LEFT_SHIFT
%token T_MODULO T_COMMA T_DOT T_COLON T_SEMICOLON T_QUESTION
%token T_LBRACKET T_RBRACKET T_LSQ_BRACKET T_RSQ_BRACKET T_RCURLY_BRACKET T_LCURLY_BRACKET
%token T_EMPTY_BRACKETS
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
                   | POSTFIX_EXPRESSION T_EMPTY_BRACKETS
                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET
                   | POSTFIX_EXPRESSION T_DOT T_IDENTIFIER
                   | POSTFIX_EXPRESSION T_ARROW T_IDENTIFIER
                   | POSTFIX_EXPRESSION T_INCREMENT {fprintf(stderr, "Increment ");}
                   | POSTFIX_EXPRESSION T_DECREMENT

ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION
                         | ARGUMENT_EXPRESSION_LIST T_COMMA ASSIGNMENT_EXPRESSION

UNARY_EXPRESSION : POSTFIX_EXPRESSION {fprintf(stderr, "Unary ");}
                 | T_INCREMENT UNARY_EXPRESSION {fprintf(stderr, "Unary ");}
                 | T_DECREMENT UNARY_EXPRESSION {fprintf(stderr, "Unary ");}
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
                 | SHIFT_EXPRESSION T_LEFT_SHIFT ADDITIVE_EXPRESSION
                 | SHIFT_EXPRESSION T_RIGHT_SHIFT ADDITIVE_EXPRESSION

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_LESS_THAN SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_GREATER_THAN SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_LESS_THAN_OR_EQUAL_TO SHIFT_EXPRESSION
                      | RELATIONAL_EXPRESSION T_GREATER_THAN_OR_EQUAL_TO SHIFT_EXPRESSION
EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION
                    | EQUALITY_EXPRESSION T_EQUALS_EQUALS RELATIONAL_EXPRESSION
                    | EQUALITY_EXPRESSION T_NOT_EQUALS_EQUALS RELATIONAL_EXPRESSION

AND_EXPRESSION : EQUALITY_EXPRESSION
               | AND_EXPRESSION T_AND EQUALITY_EXPRESSION

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION
                        | EXCLUSIVE_OR_EXPRESSION T_EXPONENT AND_EXPRESSION

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION
                        | INCLUSIVE_OR_EXPRESSION T_OR EXCLUSIVE_OR_EXPRESSION

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION
                       | LOGICAL_AND_EXPRESSION T_AND_AND INCLUSIVE_OR_EXPRESSION

LOGICAL_OR_EXPRESSION  : LOGICAL_AND_EXPRESSION
                       | LOGICAL_OR_EXPRESSION T_OR_OR LOGICAL_AND_EXPRESSION

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION
                       | LOGICAL_OR_EXPRESSION T_QUESTION EXPR T_COLON CONDITIONAL_EXPRESSION

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION {fprintf(stderr, "AssignmentExpressed ");}
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION {fprintf(stderr, "ActualAssignment ");}

ASSIGNMENT_OPERATOR : T_EQUALS {fprintf(stderr, "Equals ");} | T_TIMES_EQUALS {fprintf(stderr, "Timesequals ");} | T_DIVIDE_EQUALS | T_MODULO_EQUALS
                    | T_PLUS_EQUALS | T_MINUS_EQUALS
                    | T_LEFT_SHIFT_EQUALS | T_RIGHT_SHIFT_EQUALS
                    | T_AND_EQUALS | T_XOR_EQUALS | T_OR_EQUALS

EXPR : ASSIGNMENT_EXPRESSION {fprintf(stderr, "ExpressionFound! ");}| EXPR T_COMMA ASSIGNMENT_EXPRESSION


/*

DECLARATION : DECLARATION_SPECIFIERS | DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST

DECLARATION_SPECIFIERS : STORAGE_CLASS_SPECIFIER
                       | STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS
                       | TYPE_SPECIFIER
                       | TYPE_SPECIFIER DECLARATION_SPECIFIERS
                       | TYPE_QUALIFIER
                       | TYPE_QUALIFIER DECLARATION_SPECIFIERS

INIT_DECLARATOR_LIST : INIT_DECLARATOR
                     | INIT_DECLARATOR_LIST T_COMMA INIT_DECLARATOR

INIT_DECLARATOR : DECLARATOR
                | DECLARATOR T_EQUALS INITIALIZER

STORAGE_CLASS_SPECIFIER : TYPEDEF | EXTERN | STATIC | AUTO | REGISTER

TYPE_SPECIFIER : VOID | CHAR | SHORT | INT | LONG | FLOAT | DOUBLE | SIGNED | UNSIGNED
               | STRUCT_OR_UNION_SPECIFIER
               | ENUM_SPECIFIER
               | TYPEDEF_NAME

STRUCT_OR_UNION_SPECIFIER : STRUCT_OR_UNION T_IDENTIFIER
                          | STRUCT_OR_UNION T_LCURLY_BRACKET STRUCT_DECLARATION_LIST T_RCURLY_BRACKET
                          | STRUCT_OR_UNION T_IDENTIFIER T_LCURLY_BRACKET STRUCT_DECLARATION_LIST T_RCURLY_BRACKET
STRUCT_OR_UNION : T_STRUCT | T_UNION

STRUCT_DECLARATION_LIST : STRUCT_DECLARATION
                        | STRUCT_DECLARATION_LIST STRUCT_DECLARATION

STRUCT_DECLARATION : SPECIFIER_QUALIFIER_LIST STRUCT_DECLARATOR_LIST

SPECIFIER_QUALIFIER_LIST : TYPE_SPECIFIER
                         | TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST
                         | TYPE_QUALIFIER
                         | TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST

STRUCT_DECLARATOR_LIST : STRUCT_DECLARATOR
                       | STRUCT_DECLARATOR_LIST T_COMMA STRUCT_DECLARATOR

STRUCT_DECLARATOR : DECLARATOR
                  | DECLARATOR T_COLON CONSTANT_EXPRESSION
                  | T_COLON CONSTANT_EXPRESSION

ENUM_SPECIFIER : T_ENUM T_IDENTIFIER
               | T_ENUM T_IDENTIFIER T_LCURLY_BRACKET ENUMERATOR_LIST T_RCURLY_BRACKET
               | T_ENUM T_LCURLY_BRACKET ENUMERATOR_LIST T_RCURLY_BRACKET

ENUMERATOR_LIST : ENUMERATOR
                | ENUMERATOR_LIST T_COMMA ENUMERATOR

ENUMERATOR : ENUMERATION_CONSTANT
           | ENUMERATION_CONSTANT T_EQUALS CONSTANT_EXPRESSION

TYPE_QUALIFIER : T_CONST | T_VOLATILE

DECLARATOR : DIRECT_DECLARATOR
           | POINTER DIRECT_DECLARATOR

DIRECT_DECLARATOR : T_IDENTIFIER
                  | T_LBRACKET DECLARATOR T_RBRACKET
                  | DIRECT_DECLARATOR T_LSQ_BRACKET T_RSQ_BRACKET
                  | DIRECT_DECLARATOR T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET
                  | DIRECT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET
                  | DIRECT_DECLARATOR T_LBRACKET T_RBRACKET
                  | DIRECT_DECLARATOR T_LBRACKET IDENTIFIER_LIST T_RBRACKET

THE TIMES TOKEN HERE SHOULD BE REPLACED WITH A T_DEREFERENCE token
POINTER : T_TIMES
        | T_TIMES TYPE_QUALIFIER_LIST
        | T_TIMES POINTER
        | T_TIMES TYPE_QUALIFIER_LIST POINTER

TYPE_QUALIFIER_LIST : TYPE_QUALIFIER
                    | TYPE_QUALIFIER_LIST TYPE_QUALIFIER

PARAMETER_TYPE_LIST : PARAMETER_LIST
                    | PARAMETER_LIST T_COMMA T_DOT T_DOT T_DOT

PARAMETER_LIST : PARAMETER_DECLARATION
               | PARAMETER_LIST T_COMMA PARAMETER_DECLARATION

PARAMETER_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR
                      | DECLARATION_SPECIFIERS
                      | DECLARATION_SPECIFIERS ABSTRACT_DECLARATOR

IDENTIFIER_LIST : T_IDENTIFIER
                | IDENTIFIER_LIST T_COMMA T_IDENTIFIER

TYPE_NAME : SPECIFIER_QUALIFIER_LIST
          | SPECIFIER_QUALIFIER_LIST ABSTRACT_DECLARATOR

ABSTRACT_DECLARATOR : POINTER
                    | POINTER DIRECT_ABSTRACT_DECLARATOR
                    | DIRECT_ABSTRACT_DECLARATOR

DIRECT_ABSTRACT_DECLARATOR : T_LBRACKET ABSTRACT_DECLARATOR T_RBRACKET
                           | DIRECT_ABSTRACT_DECLARATOR T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET
                           | T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET
                           | DIRECT_ABSTRACT_DECLARATOR T_LSQ_BRACKET T_RSQ_BRACKET
                           | T_LSQ_BRACKET T_RSQ_BRACKET
                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET
                           | T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET
                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET T_RBRACKET
                           | T_LBRACKET T_RBRACKET

TYPEDEF_NAME : T_IDENTIFIER

INITIALIZER : ASSIGNMENT_EXPRESSION
            | T_LCURLY_BRACKET INITIALIZER_LIST T_RCURLY_BRACKET
            | T_LCURLY_BRACKET INITIALIZER_LIST T_COMMA T_RCURLY_BRACKET

INITIALIZER_LIST : INITIALIZER
                 | INITIALIZER_LIST T_COMMA INITIALIZER
*/
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
