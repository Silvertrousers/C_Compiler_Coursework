%code requires{
  #include "./ast.hpp"

  #include <string>
  #include <cmath>
  #include <cassert>

  extern ast_node *g_root;

  int yylex(void);
  void yyerror(const char *);
}

%union{
  ast_node* nodePtr;
  std::string* _text;
}
%right T_EQUALS T_MODULO_EQUALS T_LEFT_SHIFT_EQUALS T_RIGHT_SHIFT_EQUALS T_PLUS_EQUALS T_MINUS_EQUALS T_TIMES_EQUALS T_DIVIDE_EQUALS T_AND_EQUALS T_OR_EQUALS T_XOR_EQUALS

%right T_LBRACKET T_RBRACKET T_LSQ_BRACKET T_RSQ_BRACKET T_RCURLY_BRACKET T_LCURLY_BRACKET
%precedence T_LOGICAL_NOT T_BITWISE_NOT T_INCREMENT T_DECREMENT
%precedence T_EQUALS_EQUALS T_NOT_EQUALS_EQUALS T_LESS_THAN_OR_EQUAL_TO T_GREATER_THAN_OR_EQUAL_TO
%precedence T_PLUS T_MINUS T_RIGHT_SHIFT T_LEFT_SHIFT T_LESS_THAN T_GREATER_THAN T_AND T_OR   T_AND_AND T_OR_OR
%left T_DIVIDE T_TIMES T_MODULO
%left T_EXPONENT

%token T_AUTO T_BREAK T_CASE T_CHAR T_CONTINUE T_DEFAULT T_DO T_DOUBLE
%token T_ELSE T_ENUM T_EXTERN T_FLOAT T_FOR  T_IF T_INT T_LONG T_REGISTER T_RETURN
%token T_SHORT T_SIGNED T_SIZEOF T_STATIC T_STRUCT T_SWITCH
%token T_TYPEDEF T_UNSIGNED T_VOID T_VOLATILE T_WHILE


%token T_ARROW
%token  T_COMMA T_DOT T_COLON T_SEMICOLON T_QUESTION

%token T_EMPTY_BRACKETS T_ECURLY_BRACKETS T_ESQ_BRACKETS
%token T_IDENTIFIER T_STRING
%token T_DEC_INT
%token T_OCTAL_INT
%token T_HEX_INT
%token T_NORM_FLOAT
%token T_EXP_FLOAT
%token T_DEREFERENCE T_CUSTOM_TYPE T_ENUM_CONSTANT

%type<nodePtr> PROGRAM TRANSLATION_UNIT EXTERNAL_DECLARATION FUNCTION_DECLARATION STATEMENT LABELED_STATEMENT JUMP_STATEMENT COMPOUND_STATEMENT PRIMARY_EXPRESSION ITERATION_STATEMENT
%type<nodePtr> POSTFIX_EXPRESSION ARGUMENT_EXPRESSION_LIST UNARY_EXPRESSION UNARY_OPERATOR STATEMENT_LIST EXPRESSION_STATEMENT SELECTION_STATEMENT
%type<nodePtr> MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION CAST_EXPRESSION
%type<nodePtr> AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_AND_EXPRESSION LOGICAL_OR_EXPRESSION
%type<nodePtr> CONDITIONAL_EXPRESSION ASSIGNMENT_EXPRESSION ASSIGNMENT_OPERATOR CONSTANT_EXPRESSION EXPR CONSTANT
%type<nodePtr> DECLARATION DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST INIT_DECLARATOR STORAGE_CLASS_SPECIFIER TYPE_SPECIFIER DECLARATION_LIST
%type<nodePtr> STRUCT_OR_UNION_SPECIFIER STRUCT_OR_UNION STRUCT_DECLARATION_LIST STRUCT_DECLARATION SPECIFIER_QUALIFIER_LIST
%type<nodePtr> STRUCT_DECLARATOR_LIST STRUCT_DECLARATOR ENUM_SPECIFIER ENUMERATOR_LIST ENUMERATOR TYPE_QUALIFIER
%type<nodePtr> DECLARATOR DIRECT_DECLARATOR POINTER TYPE_QUALIFIER_LIST PARAMETER_TYPE_LIST PARAMETER_LIST PARAMETER_DECLARATION
%type<nodePtr> IDENTIFIER_LIST TYPE_NAME ABSTRACT_DECLARATOR DIRECT_ABSTRACT_DECLARATOR TYPEDEF_NAME INITIALIZER INITIALIZER_LIST
%type<nodePtr> SIZE_OF RETURN FOR WHILE DO SWITCH IF ELSE IDENTIFIER ENUM ENUM_CONSTANT DEREFERENCE ELIPSIS CASE DEFAULT F_DECLARATION_LIST F_DECLARATION


%type<_text> T_AUTO T_BREAK T_CASE T_CHAR T_CONTINUE T_DEFAULT T_DO T_DOUBLE
%type<_text> T_ELSE T_ENUM T_EXTERN T_FLOAT T_FOR T_IF T_INT T_LONG T_REGISTER T_RETURN
%type<_text> T_SHORT T_SIGNED T_SIZEOF T_STATIC T_STRUCT T_SWITCH
%type<_text> T_TYPEDEF T_UNSIGNED T_VOID T_VOLATILE T_WHILE
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
%type<_text> T_DEC_INT T_OCTAL_INT T_HEX_INT T_IDENTIFIER T_STRING T_ENUM_CONSTANT
%type<_text> T_DEREFERENCE T_CUSTOM_TYPE




%start PROGRAM

%%
PROGRAM : TRANSLATION_UNIT { g_root = $1; }

TRANSLATION_UNIT : EXTERNAL_DECLARATION {$$ = $1;}
                 | TRANSLATION_UNIT EXTERNAL_DECLARATION { std::vector<ast_node*> branches = {$1, $2};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           $$ = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}

EXTERNAL_DECLARATION : FUNCTION_DECLARATION {$$ = $1;}
                     | DECLARATION {$$ = $1; }


FUNCTION_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR COMPOUND_STATEMENT {   std::vector<ast_node*> branches = {$1, $2, $3};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "COMPOUND_STATEMENT"};
                                                                                $$ = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}

                     | DECLARATOR COMPOUND_STATEMENT {                          std::vector<ast_node*> branches = {NULL, $1, $2};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "COMPOUND_STATEMENT"};
                                                                                $$ = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}

FN_DECL_WITH_ARGS :

STATEMENT : LABELED_STATEMENT {$$ = $1;}
          | COMPOUND_STATEMENT {                                                std::vector<ast_node*> branches = {$1};
                                                                                std::vector<std::string> branch_notes = {"COMPOUND_STATEMENT"};
                                                                                $$ = new ast_node("STATEMENT","", branches, branch_notes);}

          | EXPRESSION_STATEMENT {$$ = $1;}
          | SELECTION_STATEMENT {$$ = $1;}
          | ITERATION_STATEMENT {$$ = $1;}
          | JUMP_STATEMENT {$$ = $1;}

LABELED_STATEMENT : IDENTIFIER T_COLON STATEMENT {                              std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                $$ = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}

                  | CASE CONSTANT_EXPRESSION T_COLON STATEMENT {                std::vector<ast_node*> branches = {$1, $2, $4};
                                                                                std::vector<std::string> branch_notes = {"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"};
                                                                                $$ = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}

                  | DEFAULT T_COLON STATEMENT {                                 std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"T_DEFAULT", "STATEMENT"};
                                                                                $$ = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}

DEFAULT : T_DEFAULT {$$ = new ast_node("DEFAULT", "default");}
CASE : T_CASE {$$ = new ast_node("CASE", "case");}

COMPOUND_STATEMENT : T_LCURLY_BRACKET DECLARATION_LIST STATEMENT_LIST T_RCURLY_BRACKET {  std::vector<ast_node*> branches = {$2, $3};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          $$ = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}

                   | T_LCURLY_BRACKET STATEMENT_LIST T_RCURLY_BRACKET {                   std::vector<ast_node*> branches = {NULL, $2};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          $$ = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}

                   | T_LCURLY_BRACKET DECLARATION_LIST T_RCURLY_BRACKET {                 std::vector<ast_node*> branches = {$2, NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          $$ = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}

                   | T_LCURLY_BRACKET T_RCURLY_BRACKET {std::vector<ast_node*> branches = {NULL, NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          $$ = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}

DECLARATION_LIST : DECLARATION { $$ = $1; }
                 | DECLARATION_LIST DECLARATION {                               std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_LIST", "DECLARATION"};
                                                                                $$ = new ast_node("DECLARATION_LIST","", branches, branch_notes);}

STATEMENT_LIST : STATEMENT { $$ = $1; }
               | STATEMENT_LIST STATEMENT {                                     std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"STATEMENT_LIST", "STATEMENT"};
                                                                                $$ = new ast_node("STATEMENT_LIST","", branches, branch_notes);}

EXPRESSION_STATEMENT : EXPR T_SEMICOLON { $$ = $1;}
                     | T_SEMICOLON { $$ = NULL; }

SELECTION_STATEMENT : IF T_LBRACKET EXPR T_RBRACKET STATEMENT {                 std::vector<ast_node*> branches = {$1, $3, $5, NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                $$ = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}

                    | IF T_LBRACKET EXPR T_RBRACKET STATEMENT ELSE STATEMENT {  std::vector<ast_node*> branches = {$1, $3, $5, $6, $7};
                                                                                std::vector<std::string> branch_notes = {"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                $$ = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}

                    | SWITCH T_LBRACKET EXPR T_RBRACKET STATEMENT {             std::vector<ast_node*> branches = {$1, $3, $5, NULL, NULL};
                                                                                std::vector<std::string> branch_notes = {"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"};
                                                                                $$ = new ast_node("SELECTION_STATEMENT","", branches, branch_notes);}

SWITCH : T_SWITCH {$$ = new ast_node("T_SWITCH", "switch");}
IF : T_IF {$$ = new ast_node("T_IF", "if");}
ELSE : T_ELSE {$$ = new ast_node("T_ELSE", "else" );}

ITERATION_STATEMENT : WHILE T_LBRACKET EXPR T_RBRACKET STATEMENT {              std::vector<ast_node*> branches = {$1, $3, NULL, NULL, NULL, $5};
                                                                                std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | DO STATEMENT WHILE T_LBRACKET EXPR T_RBRACKET T_SEMICOLON { std::vector<ast_node*> branches = {$3, $5, NULL, NULL, $1, $2};
                                                                                  std::vector<std::string> branch_notes = {"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"};
                                                                                  $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | FOR T_LBRACKET EXPR T_SEMICOLON EXPR T_SEMICOLON EXPR T_RBRACKET STATEMENT { std::vector<ast_node*> branches = {$1, $3, $5, $7, $9};
                                                                                                   std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                                   $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | FOR T_LBRACKET T_SEMICOLON EXPR T_SEMICOLON EXPR T_RBRACKET STATEMENT { std::vector<ast_node*> branches = {$1, NULL, $4, $6, $8};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | FOR T_LBRACKET EXPR T_SEMICOLON T_SEMICOLON EXPR T_RBRACKET STATEMENT { std::vector<ast_node*> branches = {$1, $3, NULL, $6, $8};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | FOR T_LBRACKET EXPR T_SEMICOLON EXPR T_SEMICOLON T_RBRACKET STATEMENT { std::vector<ast_node*> branches = {$1, $3, $5, NULL, $8};
                                                                                              std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                              $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | FOR T_LBRACKET T_SEMICOLON T_SEMICOLON EXPR T_RBRACKET STATEMENT { std::vector<ast_node*> branches = {$1, NULL, NULL, $5, $7};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | FOR T_LBRACKET T_SEMICOLON EXPR T_SEMICOLON T_RBRACKET STATEMENT { std::vector<ast_node*> branches = {$1, NULL, $4, NULL, $7};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | FOR T_LBRACKET EXPR T_SEMICOLON T_SEMICOLON T_RBRACKET STATEMENT { std::vector<ast_node*> branches = {$1, $3, NULL, NULL, $7};
                                                                                         std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                         $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

                    | FOR T_LBRACKET T_SEMICOLON T_SEMICOLON T_RBRACKET STATEMENT { std::vector<ast_node*> branches = {$1, NULL, NULL, NULL, $6};
                                                                                    std::vector<std::string> branch_notes = {"T_FOR", "EXPR", "EXPR", "EXPR", "STATEMENT"};
                                                                                    $$ = new ast_node("ITERATION_STATEMENT","", branches, branch_notes);}

FOR : T_FOR {$$ = new ast_node("T_FOR", "for");}
WHILE : T_WHILE {$$ = new ast_node("T_WHILE", "while");}
DO : T_DO {$$ = new ast_node("T_DO", "do");}

JUMP_STATEMENT : T_CONTINUE T_SEMICOLON {$$ = new ast_node("JUMP_STATEMENT", "continue");}
               | T_BREAK T_SEMICOLON {$$ = new ast_node("JUMP_STATEMENT", "break");}

               | RETURN EXPR T_SEMICOLON {                                      std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                $$ = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}

               | RETURN T_SEMICOLON {                                           std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                $$ = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}



RETURN : T_RETURN {$$ = new ast_node("RETURN", "return");}

PRIMARY_EXPRESSION : T_LBRACKET EXPR T_RBRACKET {                               std::vector<ast_node*> branches = {$2};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                $$ = new ast_node("PRIMARY_EXPRESSION","", branches, branch_notes);}
                   | IDENTIFIER { $$ = $1; }
                   | CONSTANT {$$ = $1;}
                   | T_STRING {$$ = new ast_node("PRIMARY_EXPRESSION", *$1);}


CONSTANT : T_DEC_INT   {$$ = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*$1)))); }
         | T_OCTAL_INT {$$ = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*$1, 0, 8)))); }
         | T_HEX_INT    {$$ = new ast_node("CONSTANT", std::to_string((int)round(std::stoi(*$1)))); }



POSTFIX_EXPRESSION : PRIMARY_EXPRESSION { $$  = $1;}
                   | POSTFIX_EXPRESSION T_LSQ_BRACKET EXPR T_RSQ_BRACKET {      std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION","array_indexing", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_EMPTY_BRACKETS {                      std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION","fn_call", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET { std::vector<ast_node*> branches = {$1, $3};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         $$ = new ast_node("POSTFIX_EXPRESSION","fn_call", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_DOT IDENTIFIER {                      std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION","struct member access", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_ARROW IDENTIFIER {                    std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "IDENTIFIER"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION","->", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_INCREMENT {                           std::vector<ast_node*> branches = {$1};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION","++", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_DECREMENT {                           std::vector<ast_node*> branches = {$1};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION","--", branches, branch_notes);}

ARGUMENT_EXPRESSION_LIST : ASSIGNMENT_EXPRESSION { $$  = $1;}
                         | ARGUMENT_EXPRESSION_LIST T_COMMA ASSIGNMENT_EXPRESSION {   std::vector<ast_node*> branches = {$1, $3};
                                                                                      std::vector<std::string> branch_notes = {"ARGUMENT_EXPRESSION_LIST", "ASSIGNMENT_EXPRESSION"};
                                                                                      $$ = new ast_node("ARGUMENT_EXPRESSION_LIST","", branches, branch_notes);}

UNARY_EXPRESSION : POSTFIX_EXPRESSION { $$  = $1;}
                 | T_INCREMENT UNARY_EXPRESSION {                               std::vector<ast_node*> branches = {$2};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                $$ = new ast_node("UNARY_EXPRESSION","++", branches, branch_notes);}

                 | T_DECREMENT UNARY_EXPRESSION {                               std::vector<ast_node*> branches = {$2};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR"};
                                                                                $$ = new ast_node("UNARY_EXPRESSION","--", branches, branch_notes);}

                 | UNARY_OPERATOR CAST_EXPRESSION {                             std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"UNARY_OPERATOR","CAST_EXPRESSION"};
                                                                                $$ = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}

                 | SIZE_OF UNARY_EXPRESSION {                                   std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","UNARY_EXPRESSION"};
                                                                                $$ = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}

                 | SIZE_OF T_LBRACKET TYPE_NAME T_RBRACKET {                    std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"SIZE_OF","TYPE_NAME"};
                                                                                $$ = new ast_node("UNARY_EXPRESSION","", branches, branch_notes);}

SIZE_OF : T_SIZEOF { $$ = new ast_node("SIZE_OF", "size_of");}

UNARY_OPERATOR : T_AND { $$ = new ast_node("UNARY_OPERATOR","and");}
               | T_TIMES { $$ = new ast_node("UNARY_OPERATOR","times");}
               | T_PLUS { $$ = new ast_node("UNARY_OPERATOR","plus");}
               | T_MINUS { $$ = new ast_node("UNARY_OPERATOR","minus");}
               | T_BITWISE_NOT { $$ = new ast_node("UNARY_OPERATOR","bitwise_not");}
               | T_LOGICAL_NOT { $$ = new ast_node("UNARY_OPERATOR","logical_not");}

CAST_EXPRESSION : UNARY_EXPRESSION { $$  = $1;}
                | T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPRESSION {             std::vector<ast_node*> branches = {$2, $4};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                $$ = new ast_node("CAST_EXPRESSION","", branches, branch_notes);}

MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION { $$  = $1;}
                          | MULTIPLICATIVE_EXPRESSION T_TIMES CAST_EXPRESSION { std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                $$ = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}

                          | MULTIPLICATIVE_EXPRESSION T_DIVIDE CAST_EXPRESSION {std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                $$ = new ast_node("MULTIPLICATIVE_EXPRESSION","/", branches, branch_notes);}

                          | MULTIPLICATIVE_EXPRESSION T_MODULO CAST_EXPRESSION {std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                $$ = new ast_node("MULTIPLICATIVE_EXPRESSION","%", branches, branch_notes);}

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION { $$  = $1;}
                    | ADDITIVE_EXPRESSION T_PLUS MULTIPLICATIVE_EXPRESSION {    std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                $$ = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}

                    | ADDITIVE_EXPRESSION T_MINUS MULTIPLICATIVE_EXPRESSION {   std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                $$ = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}

SHIFT_EXPRESSION : ADDITIVE_EXPRESSION { $$  = $1;}
                 | SHIFT_EXPRESSION T_LEFT_SHIFT ADDITIVE_EXPRESSION {          std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                $$ = new ast_node("SHIFT_EXPRESSION","<<", branches, branch_notes);}

                 | SHIFT_EXPRESSION T_RIGHT_SHIFT ADDITIVE_EXPRESSION {         std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"SHIFT_EXPRESSION","ADDITIVE_EXPRESSION"};
                                                                                $$ = new ast_node("SHIFT_EXPRESSION",">>", branches, branch_notes);}

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION { $$  = $1;}
                      | RELATIONAL_EXPRESSION T_LESS_THAN SHIFT_EXPRESSION {    std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                $$ = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}

                      | RELATIONAL_EXPRESSION T_GREATER_THAN SHIFT_EXPRESSION { std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                $$ = new ast_node("RELATIONAL_EXPRESSION",">", branches, branch_notes);}

                      | RELATIONAL_EXPRESSION T_LESS_THAN_OR_EQUAL_TO SHIFT_EXPRESSION {    std::vector<ast_node*> branches = {$1, $3};
                                                                                            std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                            $$ = new ast_node("RELATIONAL_EXPRESSION","<=", branches, branch_notes);}

                      | RELATIONAL_EXPRESSION T_GREATER_THAN_OR_EQUAL_TO SHIFT_EXPRESSION {    std::vector<ast_node*> branches = {$1, $3};
                                                                                               std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                               $$ = new ast_node("RELATIONAL_EXPRESSION",">=", branches, branch_notes);}

EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION { $$  = $1;}
                    | EQUALITY_EXPRESSION T_EQUALS_EQUALS RELATIONAL_EXPRESSION {  std::vector<ast_node*> branches = {$1, $3};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   $$ = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}

                    | EQUALITY_EXPRESSION T_NOT_EQUALS_EQUALS RELATIONAL_EXPRESSION {  std::vector<ast_node*> branches = {$1, $3};
                                                                                       std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                       $$ = new ast_node("EQUALITY_EXPRESSION","!=", branches, branch_notes);}

AND_EXPRESSION : EQUALITY_EXPRESSION { $$  = $1;}
               | AND_EXPRESSION T_AND EQUALITY_EXPRESSION {                     std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"AND_EXPRESSION","EQUALITY_EXPRESSION"};
                                                                                $$ = new ast_node("AND_EXPRESSION","&", branches, branch_notes);}

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION { $$  = $1;}
                        | EXCLUSIVE_OR_EXPRESSION T_EXPONENT AND_EXPRESSION {   std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"EXCLUSIVE_OR_EXPRESSION","AND_EXPRESSION"};
                                                                                $$ = new ast_node("EXCLUSIVE_OR_EXPRESSION","^", branches, branch_notes);}

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION { $$  = $1;}
                        | INCLUSIVE_OR_EXPRESSION T_OR EXCLUSIVE_OR_EXPRESSION {std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"INCLUSIVE_OR_EXPRESSION","EXCLUSIVE_OR_EXPRESSION"};
                                                                                $$ = new ast_node("INCLUSIVE_OR_EXPRESSION","|", branches, branch_notes);}

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION { $$  = $1;}
                       | LOGICAL_AND_EXPRESSION T_AND_AND INCLUSIVE_OR_EXPRESSION {     std::vector<ast_node*> branches = {$1, $3};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        $$ = new ast_node("LOGICAL_AND_EXPRESSION","&&", branches, branch_notes);}

LOGICAL_OR_EXPRESSION  : LOGICAL_AND_EXPRESSION { $$  = $1;}
                       | LOGICAL_OR_EXPRESSION T_OR_OR LOGICAL_AND_EXPRESSION {         std::vector<ast_node*> branches = {$1, $3};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        $$ = new ast_node("LOGICAL_OR_EXPRESSION","||", branches, branch_notes);}

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION { $$  = $1;}
                       | LOGICAL_OR_EXPRESSION T_QUESTION EXPR T_COLON CONDITIONAL_EXPRESSION {   std::vector<ast_node*> branches = {$1, $3, $5};
                                                                                                  std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","EXPR", "CONDITIONAL_EXPRESSION"};
                                                                                                  $$ = new ast_node("CONDITIONAL_EXPRESSION","", branches, branch_notes);}

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION { $$ = $1; }
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION {   std::vector<ast_node*> branches = {$1, $2, $3};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       $$ = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}

ASSIGNMENT_OPERATOR : T_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "=");}
                    | T_TIMES_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "*=");}
                    | T_DIVIDE_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "/=");}
                    | T_MODULO_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "%=");}
                    | T_PLUS_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "+=");}
                    | T_MINUS_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "-=");}
                    | T_LEFT_SHIFT_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "<<=");}
                    | T_RIGHT_SHIFT_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", ">>=");}
                    | T_AND_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "&=");}
                    | T_XOR_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "^=");}
                    | T_OR_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", "|=");}

CONSTANT_EXPRESSION : CONDITIONAL_EXPRESSION { $$ = $1; }

EXPR : ASSIGNMENT_EXPRESSION { $$ = $1; }
     | EXPR T_COMMA ASSIGNMENT_EXPRESSION {                                     std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"EXPR","ASSIGNMENT_EXPRESSION"};
                                                                                $$ = new ast_node("EXPR","", branches, branch_notes);}


DECLARATION : DECLARATION_SPECIFIERS T_SEMICOLON {                              std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                $$ = new ast_node("DECLARATION","", branches, branch_notes);}

            | DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST T_SEMICOLON {         std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","INIT_DECLARATOR_LIST"};
                                                                                $$ = new ast_node("DECLARATION","", branches, branch_notes);}

DECLARATION_SPECIFIERS : STORAGE_CLASS_SPECIFIER { $$ = $1; }
                       | STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS {       std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                $$ = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}

                       | TYPE_SPECIFIER { $$ = $1; }
                       | TYPE_SPECIFIER DECLARATION_SPECIFIERS {                std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                $$ = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}

                       | TYPE_QUALIFIER { $$ = $1; }
                       | TYPE_QUALIFIER DECLARATION_SPECIFIERS {                std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","DECLARATION_SPECIFIERS"};
                                                                                $$ = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}

INIT_DECLARATOR_LIST : INIT_DECLARATOR { $$ = $1; }
                     | INIT_DECLARATOR_LIST T_COMMA INIT_DECLARATOR {           std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                $$ = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}

INIT_DECLARATOR : DECLARATOR {													std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                $$ = new ast_node("INIT_DECLARATOR","just a declarator", branches, branch_notes);}

                | DECLARATOR T_EQUALS INITIALIZER {                             std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                $$ = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}

STORAGE_CLASS_SPECIFIER : T_TYPEDEF { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", "typedef");}
                        | T_EXTERN { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", "extern");}
                        | T_STATIC { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", "static");}
                        | T_AUTO { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", "auto");}
                        | T_REGISTER { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", "register");}

TYPE_SPECIFIER : T_VOID { $$ = new ast_node("TYPE_SPECIFIER", "void");}
               | T_CHAR { $$ = new ast_node("TYPE_SPECIFIER", "char");}
               | T_SHORT { $$ = new ast_node("TYPE_SPECIFIER", "short");}
               | T_INT { $$ = new ast_node("TYPE_SPECIFIER", "int");}
               | T_LONG { $$ = new ast_node("TYPE_SPECIFIER", "long");}
               | T_FLOAT { $$ = new ast_node("TYPE_SPECIFIER", "float");}
               | T_DOUBLE { $$ = new ast_node("TYPE_SPECIFIER", "double");}
               | T_SIGNED { $$ = new ast_node("TYPE_SPECIFIER", "signed");}
               | T_UNSIGNED { $$ = new ast_node("TYPE_SPECIFIER", "unsigned");}
               | STRUCT_OR_UNION_SPECIFIER { $$ = $1; }
               | ENUM_SPECIFIER { $$ = $1; }
               | TYPEDEF_NAME { $$ = $1; }

STRUCT_OR_UNION_SPECIFIER : STRUCT_OR_UNION IDENTIFIER {                        std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_OR_UNION","IDENTIFIER"};
                                                                                $$ = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}

                          | STRUCT_OR_UNION T_LCURLY_BRACKET STRUCT_DECLARATION_LIST T_RCURLY_BRACKET {   std::vector<ast_node*> branches = {$1, NULL, $3};
                                                                                                          std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                          $$ = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}

                          | STRUCT_OR_UNION IDENTIFIER T_LCURLY_BRACKET STRUCT_DECLARATION_LIST T_RCURLY_BRACKET {  std::vector<ast_node*> branches = {$1, $2, $4};
                                                                                                                    std::vector<std::string> branch_notes = {"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"};
                                                                                                                    $$ = new ast_node("STRUCT_OR_UNION_SPECIFIER","", branches, branch_notes);}

STRUCT_OR_UNION : T_STRUCT { $$ = new ast_node("STRUCT_OR_UNION", "struct");}


STRUCT_DECLARATION_LIST : STRUCT_DECLARATION {$$ = $1;}
                        | STRUCT_DECLARATION_LIST STRUCT_DECLARATION {          std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"};
                                                                                $$ = new ast_node("STRUCT_DECLARATION_LIST","", branches, branch_notes);}

STRUCT_DECLARATION : SPECIFIER_QUALIFIER_LIST STRUCT_DECLARATOR_LIST {          std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"};
                                                                                $$ = new ast_node("STRUCT_DECLARATION","", branches, branch_notes);}

SPECIFIER_QUALIFIER_LIST : TYPE_SPECIFIER { $$ = $1; }

                         | TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST {            std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                $$ = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}

                         | TYPE_QUALIFIER { $$ = $1; }

                         | TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST {            std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                $$ = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}

STRUCT_DECLARATOR_LIST : STRUCT_DECLARATOR {$$ = $1;}
                       | STRUCT_DECLARATOR_LIST T_COMMA STRUCT_DECLARATOR {     std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"};
                                                                                $$ = new ast_node("STRUCT_DECLARATOR_LIST","", branches, branch_notes);}

STRUCT_DECLARATOR : DECLARATOR { $$  =$1; }
                  | DECLARATOR T_COLON CONSTANT_EXPRESSION  {                   std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                $$ = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}

                  | T_COLON CONSTANT_EXPRESSION  {                              std::vector<ast_node*> branches = {NULL, $2};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                $$ = new ast_node("STRUCT_DECLARATOR","", branches, branch_notes);}

ENUM_SPECIFIER : ENUM IDENTIFIER                 {                              std::vector<ast_node*> branches = {$1};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER"};
                                                                                $$ = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}

               | ENUM IDENTIFIER T_LCURLY_BRACKET ENUMERATOR_LIST T_RCURLY_BRACKET {  std::vector<ast_node*> branches = {$1, $2, $4};
                                                                                      std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                      $$ = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}

               | ENUM T_LCURLY_BRACKET ENUMERATOR_LIST T_RCURLY_BRACKET    {    std::vector<ast_node*> branches = {$1, NULL, $3};
                                                                                std::vector<std::string> branch_notes = {"ENUM","IDENTIFIER","ENUMERATOR_LIST"};
                                                                                $$ = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}

ENUM : T_ENUM { $$ = new ast_node("ENUM", "enum");}

ENUMERATOR_LIST : ENUMERATOR {$$ = $1;}
                | ENUMERATOR_LIST T_COMMA ENUMERATOR {                          std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"ENUMERATOR_LIST","ENUMERATOR"};
                                                                                $$ = new ast_node("ENUMERATOR_LIST","", branches, branch_notes);}

ENUMERATOR : ENUM_CONSTANT { $$ = $1;}
           | ENUM_CONSTANT T_EQUALS CONSTANT_EXPRESSION {                       std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"ENUM_CONSTANT","CONSTANT_EXPRESSION"};
                                                                                $$ = new ast_node("ENUMERATOR","", branches, branch_notes);}

ENUM_CONSTANT : T_ENUM_CONSTANT { $$ = new ast_node("ENUMERATOR",*$1);}

TYPE_QUALIFIER : T_VOLATILE { $$ = new ast_node("TYPE_QUALIFIER", "volatile");}

DECLARATOR : DIRECT_DECLARATOR { $$ = $1; }
           | POINTER DIRECT_DECLARATOR {                                        std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_DECLARATOR"};
                                                                                $$ = new ast_node("DECLARATOR","", branches, branch_notes);}

DIRECT_DECLARATOR : IDENTIFIER {$$ = $1; }

                  | T_LBRACKET DECLARATOR T_RBRACKET {$$ = $2;}

                  | DIRECT_DECLARATOR T_ESQ_BRACKETS {                          std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                $$ = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}

                  | DIRECT_DECLARATOR T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET {       std::vector<ast_node*> branches = {$1, $3};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              $$ = new ast_node("DIRECT_DECLARATOR","array_decl", branches, branch_notes);}

                  | DIRECT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {      std::vector<ast_node*> branches = {$1, $3};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       $$ = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}

                  | DIRECT_DECLARATOR T_EMPTY_BRACKETS                   {      std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                $$ = new ast_node("DIRECT_DECLARATOR","fn_dcl", branches, branch_notes);}


POINTER : DEREFERENCE {$$ = $1;}
        | DEREFERENCE TYPE_QUALIFIER_LIST {                                     std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST"};
                                                                                $$ = new ast_node("POINTER","", branches, branch_notes);}

        | DEREFERENCE POINTER             {                                     std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","POINTER"};
                                                                                $$ = new ast_node("POINTER","", branches, branch_notes);}

        | DEREFERENCE TYPE_QUALIFIER_LIST POINTER {                             std::vector<ast_node*> branches = {$1, $2, $3};
                                                                                std::vector<std::string> branch_notes = {"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"};
                                                                                $$ = new ast_node("POINTER","", branches, branch_notes);}

DEREFERENCE : T_DEREFERENCE { $$ = new ast_node("DEREFERENCE","");}

TYPE_QUALIFIER_LIST : TYPE_QUALIFIER { $$ = $1; }
                    | TYPE_QUALIFIER_LIST TYPE_QUALIFIER {                      std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"};
                                                                                $$ = new ast_node("TYPE_QUALIFIER_LIST","", branches, branch_notes);}

PARAMETER_TYPE_LIST : PARAMETER_LIST { $$ = $1; }
/*                    | PARAMETER_LIST T_COMMA ELIPSIS  {                         std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","ELIPSIS"};
                                                                                $$ = new ast_node("PARAMETER_TYPE_LIST","", branches, branch_notes);}
*/
ELIPSIS : T_DOT T_DOT T_DOT {$$ = new ast_node("ELIPSIS","...");}

PARAMETER_LIST : PARAMETER_DECLARATION { $$ = $1; }
               | PARAMETER_LIST T_COMMA PARAMETER_DECLARATION {                 std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","PARAMETER_DECLARATION"};
                                                                                $$ = new ast_node("PARAMETER_LIST","", branches, branch_notes);}

PARAMETER_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR {                     std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","DECLARATOR"};
                                                                                $$ = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}

                      | DECLARATION_SPECIFIERS { $$ = $1; }

                      | DECLARATION_SPECIFIERS ABSTRACT_DECLARATOR {            std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"};
                                                                                $$ = new ast_node("PARAMETER_DECLARATION","", branches, branch_notes);}

IDENTIFIER_LIST : IDENTIFIER { $$ = $1; }
                | IDENTIFIER_LIST T_COMMA IDENTIFIER  {                         std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER_LIST","IDENTIFIER"};
                                                                                $$ = new ast_node("IDENTIFIER_LIST","", branches, branch_notes);}

IDENTIFIER : T_IDENTIFIER {$$ = new ast_node("IDENTIFIER",*$1);}

TYPE_NAME : SPECIFIER_QUALIFIER_LIST { $$ = $1; }
          | SPECIFIER_QUALIFIER_LIST ABSTRACT_DECLARATOR {                      std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"};
                                                                                $$ = new ast_node("TYPE_NAME","", branches, branch_notes);}

ABSTRACT_DECLARATOR : POINTER { $$ = $1; }

                    | POINTER DIRECT_ABSTRACT_DECLARATOR {                      std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"POINTER","DIRECT_ABSTRACT_DECLARATOR"};
                                                                                $$ = new ast_node("ABSTRACT_DECLARATOR","", branches, branch_notes);}

                    | DIRECT_ABSTRACT_DECLARATOR  { $$ = $1; }

DIRECT_ABSTRACT_DECLARATOR : T_LBRACKET ABSTRACT_DECLARATOR T_RBRACKET { $$ = $2; }

                           | DIRECT_ABSTRACT_DECLARATOR T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET {    std::vector<ast_node*> branches = {$1, $3};
                                                                                                             std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                                             $$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}

                           | T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET {  std::vector<ast_node*> branches = {NULL, $2};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                $$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}

                           | DIRECT_ABSTRACT_DECLARATOR T_ESQ_BRACKETS {        std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                $$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}

                           | T_ESQ_BRACKETS                                     {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}

                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {   std::vector<ast_node*> branches = {$1, $3};
                                                                                                      std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                                      $$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}

                           | T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {        std::vector<ast_node*> branches = {NULL, $2};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                $$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}

                           | DIRECT_ABSTRACT_DECLARATOR T_EMPTY_BRACKETS {      std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                $$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","", branches, branch_notes);}

                           | T_EMPTY_BRACKETS                                   {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}

TYPEDEF_NAME : T_CUSTOM_TYPE {$$ = new ast_node("TYPEDEF_NAME",*$1);}

INITIALIZER : ASSIGNMENT_EXPRESSION { $$ = $1; }

            | T_LCURLY_BRACKET INITIALIZER_LIST T_RCURLY_BRACKET {              std::vector<ast_node*> branches = {$2};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                $$ = new ast_node("INITIALIZER","", branches, branch_notes);}

            | T_LCURLY_BRACKET INITIALIZER_LIST T_COMMA T_RCURLY_BRACKET {      std::vector<ast_node*> branches = {$2};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST"};
                                                                                $$ = new ast_node("INITIALIZER","", branches, branch_notes);}

INITIALIZER_LIST : INITIALIZER {$$ = $1;}
                 | INITIALIZER_LIST T_COMMA INITIALIZER {                       std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"INITIALIZER_LIST","INITIALIZER"};
                                                                                $$ = new ast_node("INITIALIZER_LIST","", branches, branch_notes);}




%%

ast_node *g_root;

ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
