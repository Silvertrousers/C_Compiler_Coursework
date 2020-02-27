%code requires{
  #include "ast.hpp"

  #include <cassert>

  extern const ast_node *g_root;

  int yylex(void);
  void yyerror(const char *);
}

%union{
  ast_node* nodePtr;
  std::string* _text;
}

%token T_AUTO T_BREAK T_CASE T_CHAR T_CONST T_CONTINUE T_DEFAULT T_DO T_DOUBLE
%token T_ELSE T_ENUM T_EXTERN T_FLOAT T_FOR T_GOTO T_IF T_INT T_LONG T_REGISTER T_RETURN
%token T_SHORT T_SIGNED T_SIZEOF T_STATIC T_STRUCT T_SWITCH
%token T_TYPEDEF T_UNION T_UNSIGNED T_VOID T_VOLATILE T_WHILE
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
%token T_EMPTY_BRACKETS T_ECURLY_BRACKETS T_ESQ_BRACKETS
%token T_DEC_INT T_OCTAL_INT T_IDENTIFIER T_STRING T_ENUM_CONSTANT
%token T_DEREFERENCE T_CUSTOM_TYPE

%type<nodePtr> PROGRAM TRANSLATION_UNIT EXTERNAL_DECLARATION FUNCTION_DECLARATION STATEMENT LABELED_STATEMENT JUMP_STATEMENT COMPOUND_STATEMENT PRIMARY_EXPRESSION
%type<nodePtr> POSTFIX_EXPRESSION ARGUMENT_EXPRESSION_LIST UNARY_EXPRESSION UNARY_OPERATOR
%type<nodePtr> MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION
%type<nodePtr> AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_AND_EXPRESSION LOGICAL_OR_EXPRESSION
%type<nodePtr> CONDITIONAL_EXPRESSION ASSIGNMENT_EXPRESSION ASSIGNMENT_OPERATOR CONSTANT_EXPRESSION EXPR CONSTANT
%type<nodePtr> DECLARATION DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST INIT_DECLARATOR STORAGE_CLASS_SPECIFIER TYPE_SPECIFIER
%type<nodePtr> STRUCT_OR_UNION_SPECIFIER STRUCT_OR_UNION STRUCT_DECLARATION_LIST STRUCT_DECLARATION SPECIFIER_QUALIFIER_LIST
%type<nodePtr> STRUCT_DECLARATOR_LIST STRUCT_DECLARATOR ENUM_SPECIFIER ENUMERATOR_LIST ENUMERATOR TYPE_QUALIFIER
%type<nodePtr> DECLARATOR DIRECT_DECLARATOR POINTER TYPE_QUALIFIER_LIST PARAMETER_TYPE_LIST PARAMETER_LIST PARAMETER_DECLARATION
%type<nodePtr> IDENTIFIER_LIST TYPE_NAME ABSTRACT_DECLARATOR DIRECT_ABSTRACT_DECLARATOR TYPEDEF_NAME INITIALIZER INITIALIZER_LIST


%type<_text> T_AUTO T_BREAK T_CASE T_CHAR T_CONST T_CONTINUE T_DEFAULT T_DO T_DOUBLE
%type<_text> T_ELSE T_ENUM T_EXTERN T_FLOAT T_FOR T_GOTO T_IF T_INT T_LONG T_REGISTER T_RETURN
%type<_text> T_SHORT T_SIGNED T_SIZEOF T_STATIC T_STRUCT T_SWITCH
%type<_text> T_TYPEDEF T_UNION T_UNSIGNED T_VOID T_VOLATILE T_WHILE
%type<_text> T_TIMES T_DIVIDE T_PLUS T_MINUS T_EXPONENT T_DECREMENT T_INCREMENT
%type<_text> T_LESS_THAN T_GREATER_THAN T_EQUALS T_AND T_OR T_BITWISE_NOT T_LOGICAL_NOT
%type<_text> T_AND_AND T_OR_OR
%type<_text> T_MODULO_EQUALS T_LEFT_SHIFT_EQUALS T_RIGHT_SHIFT_EQUALS T_NOT_EQUALS_EQUALS T_EQUALS_EQUALS
%type<_text> T_PLUS_EQUALS T_MINUS_EQUALS T_TIMES_EQUALS T_DIVIDE_EQUALS
%type<_text> T_LESS_THAN_OR_EQUAL_TO T_GREATER_THAN_OR_EQUAL_TO
%type<_text> T_AND_EQUALS T_OR_EQUALS T_XOR_EQUALS
%type<_text> T_ARROW T_RIGHT_SHIFT T_LEFT_SHIFT
%type<_text> T_MODULO T_COMMA T_DOT T_COLON T_SEMICOLON T_QUESTION
%type<_text> T_LBRACKET T_RBRACKET T_LSQ_BRACKET T_RSQ_BRACKET T_RCURLY_BRACKET T_LCURLY_BRACKET
%type<_text> T_EMPTY_BRACKETS T_ECURLY_BRACKETS T_ESQ_BRACKETS
%type<_text> T_DEC_INT T_OCTAL_INT T_IDENTIFIER T_STRING T_ENUM_CONSTANT
%type<_text> T_DEREFERENCE T_CUSTOM_TYPE

%left T_PLUS T_MINUS
%left T_DIVIDE T_TIMES
%right T_EXPONENT

%start PROGRAM

%%
PROGRAM : TRANSLATION_UNIT { g_root = $1; }

TRANSLATION_UNIT : EXTERNAL_DECLARATION /*{$$ = new ast_node("TRANSLATION_UNIT","",std::vector<ast_node*>{$1});}*/
                 | TRANSLATION_UNIT EXTERNAL_DECLARATION /*{$$ = new ast_node("TRANSLATION_UNIT","", std::vector<ast_node*>{$1, $2});}*/

EXTERNAL_DECLARATION : FUNCTION_DECLARATION
                     | DECLARATION

FUNCTION_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT
                     | DECLARATION_SPECIFIERS DECLARATOR COMPOUND_STATEMENT
                     | DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT
                     | DECLARATOR COMPOUND_STATEMENT

STATEMENT : LABELED_STATEMENT
          | COMPOUND_STATEMENT {fprintf(stderr, "CompoundStatement ");}
          | EXPRESSION_STATEMENT {fprintf(stderr, "ExpressionStatement ");}
          | SELECTION_STATEMENT {fprintf(stderr, "SelectionStatement ");}
          | ITERATION_STATEMENT {fprintf(stderr, "IterationStatement ");}
          | JUMP_STATEMENT

LABELED_STATEMENT : T_IDENTIFIER T_COLON STATEMENT
                  | T_CASE CONSTANT_EXPRESSION T_COLON STATEMENT
                  | T_DEFAULT T_COLON STATEMENT

COMPOUND_STATEMENT : T_LCURLY_BRACKET DECLARATION_LIST STATEMENT_LIST T_RCURLY_BRACKET
                   | T_LCURLY_BRACKET STATEMENT_LIST T_RCURLY_BRACKET
                   | T_LCURLY_BRACKET DECLARATION_LIST T_RCURLY_BRACKET
                   | T_ECURLY_BRACKETS

DECLARATION_LIST : DECLARATION
                 | DECLARATION_LIST DECLARATION

STATEMENT_LIST : STATEMENT
               | STATEMENT_LIST STATEMENT

EXPRESSION_STATEMENT : EXPR T_SEMICOLON
                     | T_SEMICOLON

SELECTION_STATEMENT : T_IF T_LBRACKET EXPR T_RBRACKET STATEMENT
                    | T_IF T_LBRACKET EXPR T_RBRACKET STATEMENT T_ELSE STATEMENT
                    | T_SWITCH T_LBRACKET EXPR T_RBRACKET STATEMENT

ITERATION_STATEMENT : T_WHILE T_LBRACKET EXPR T_RBRACKET STATEMENT
                    | T_DO STATEMENT T_WHILE T_LBRACKET EXPR T_RBRACKET T_SEMICOLON
                    | T_FOR T_LBRACKET EXPR T_SEMICOLON EXPR T_SEMICOLON EXPR T_RBRACKET STATEMENT
                    | T_FOR T_LBRACKET T_SEMICOLON EXPR T_SEMICOLON EXPR T_RBRACKET STATEMENT
                    | T_FOR T_LBRACKET EXPR T_SEMICOLON T_SEMICOLON EXPR T_RBRACKET STATEMENT
                    | T_FOR T_LBRACKET EXPR T_SEMICOLON EXPR T_SEMICOLON T_RBRACKET STATEMENT
                    | T_FOR T_LBRACKET T_SEMICOLON T_SEMICOLON EXPR T_RBRACKET STATEMENT
                    | T_FOR T_LBRACKET T_SEMICOLON EXPR T_SEMICOLON T_RBRACKET STATEMENT
                    | T_FOR T_LBRACKET EXPR T_SEMICOLON T_SEMICOLON T_RBRACKET STATEMENT
                    | T_FOR T_LBRACKET T_SEMICOLON T_SEMICOLON T_RBRACKET STATEMENT

JUMP_STATEMENT : T_GOTO T_IDENTIFIER T_SEMICOLON
               | T_CONTINUE T_SEMICOLON
               | T_BREAK T_SEMICOLON
               | T_RETURN EXPR T_SEMICOLON
               | T_RETURN T_SEMICOLON

PRIMARY_EXPRESSION : T_IDENTIFIER /*{$$ = new ast_node("PRIMARY_EXPRESSION", *$1);}*/
                   | CONSTANT /*{$$ = new ast_node("PRIMARY_EXPRESSION","",std::vector<ast_node*>{$1});}*/
                   | T_STRING
                   | T_LBRACKET EXPR T_RBRACKET /*{$$ = new ast_node("PRIMARY_EXPRESSION","",std::vector<ast_node*>{$2});}*/

CONSTANT : T_DEC_INT   /*{$$ = new ast_node("CONSTANT", *$1); }*/
         | T_OCTAL_INT/* {$$ = new ast_node("CONSTANT", *$1); } */


POSTFIX_EXPRESSION : PRIMARY_EXPRESSION
                   | POSTFIX_EXPRESSION T_LSQ_BRACKET EXPR T_RSQ_BRACKET
                   | POSTFIX_EXPRESSION T_EMPTY_BRACKETS
                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET
                   | POSTFIX_EXPRESSION T_DOT T_IDENTIFIER
                   | POSTFIX_EXPRESSION T_ARROW T_IDENTIFIER
                   | POSTFIX_EXPRESSION T_INCREMENT
                   | POSTFIX_EXPRESSION T_DECREMENT

ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION
                         | ARGUMENT_EXPRESSION_LIST T_COMMA ASSIGNMENT_EXPRESSION

UNARY_EXPRESSION : POSTFIX_EXPRESSION
                 | T_INCREMENT UNARY_EXPRESSION
                 | T_DECREMENT UNARY_EXPRESSION
                 | UNARY_OPERATOR CAST_EXPRESSION

                 | T_SIZEOF UNARY_EXPRESSION
                 | T_SIZEOF T_LBRACKET TYPE_NAME T_RBRACKET

UNARY_OPERATOR : T_AND | T_TIMES | T_PLUS| T_MINUS | T_BITWISE_NOT | T_LOGICAL_NOT

CAST_EXPRESSION : UNARY_EXPRESSION
| T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPRESSION

MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION
                          | MULTIPLICATIVE_EXPRESSION T_TIMES CAST_EXPRESSION
                          | MULTIPLICATIVE_EXPRESSION T_DIVIDE CAST_EXPRESSION
                          | MULTIPLICATIVE_EXPRESSION T_MODULO CAST_EXPRESSION

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION
                    | ADDITIVE_EXPRESSION T_PLUS MULTIPLICATIVE_EXPRESSION
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

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION

ASSIGNMENT_OPERATOR : T_EQUALS | T_TIMES_EQUALS | T_DIVIDE_EQUALS | T_MODULO_EQUALS
                    | T_PLUS_EQUALS | T_MINUS_EQUALS
                    | T_LEFT_SHIFT_EQUALS | T_RIGHT_SHIFT_EQUALS
                    | T_AND_EQUALS | T_XOR_EQUALS | T_OR_EQUALS

CONSTANT_EXPRESSION   : CONDITIONAL_EXPRESSION

EXPR : ASSIGNMENT_EXPRESSION {fprintf(stderr, "ExpressionFound! ");}
     | EXPR T_COMMA ASSIGNMENT_EXPRESSION

DECLARATION : DECLARATION_SPECIFIERS T_SEMICOLON | DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST T_SEMICOLON

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

STORAGE_CLASS_SPECIFIER : T_TYPEDEF | T_EXTERN | T_STATIC | T_AUTO | T_REGISTER

TYPE_SPECIFIER : T_VOID | T_CHAR | T_SHORT | T_INT
               | T_LONG | T_FLOAT | T_DOUBLE | T_SIGNED | T_UNSIGNED
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

ENUMERATOR : T_ENUM_CONSTANT
           | T_ENUM_CONSTANT T_EQUALS CONSTANT_EXPRESSION

TYPE_QUALIFIER : T_CONST | T_VOLATILE

DECLARATOR : DIRECT_DECLARATOR
           | POINTER DIRECT_DECLARATOR

DIRECT_DECLARATOR : T_IDENTIFIER
                  | T_LBRACKET DECLARATOR T_RBRACKET
                  | DIRECT_DECLARATOR T_ESQ_BRACKETS
                  | DIRECT_DECLARATOR T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET
                  | DIRECT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET
                  | DIRECT_DECLARATOR T_EMPTY_BRACKETS
                  | DIRECT_DECLARATOR T_LBRACKET IDENTIFIER_LIST T_RBRACKET

/*THE TIMES TOKEN HERE SHOULD BE REPLACED WITH A T_DEREFERENCE token*/
POINTER : T_DEREFERENCE
        | T_DEREFERENCE TYPE_QUALIFIER_LIST
        | T_DEREFERENCE POINTER
        | T_DEREFERENCE TYPE_QUALIFIER_LIST POINTER

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
                           | DIRECT_ABSTRACT_DECLARATOR T_ESQ_BRACKETS
                           | T_ESQ_BRACKETS
                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET
                           | T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET
                           | DIRECT_ABSTRACT_DECLARATOR T_EMPTY_BRACKETS
                           | T_EMPTY_BRACKETS

TYPEDEF_NAME : T_CUSTOM_TYPE

INITIALIZER : ASSIGNMENT_EXPRESSION
            | T_LCURLY_BRACKET INITIALIZER_LIST T_RCURLY_BRACKET
            | T_LCURLY_BRACKET INITIALIZER_LIST T_COMMA T_RCURLY_BRACKET

INITIALIZER_LIST : INITIALIZER
                 | INITIALIZER_LIST T_COMMA INITIALIZER




%%

const ast_node *g_root;

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
