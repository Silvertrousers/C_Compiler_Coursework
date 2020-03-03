%code requires{
  #include "./ast.hpp"

  #include <cassert>

  extern const ast_node *g_root;

  int yylex(void);
  void yyerror(const char *);
}

%union{
  ast_node* nodePtr;
  std::string* _text;
}

%token T_AUTO T_BREAK T_CHAR T_CONST T_CONTINUE T_DEFAULT T_DO T_DOUBLE
%token T_ELSE T_EXTERN T_FLOAT T_FOR T_GOTO T_IF T_INT T_LONG T_REGISTER T_RETURN
%token T_SHORT T_SIGNED T_SIZEOF
%token T_TYPEDEF T_VOID T_WHILE
%token T_TIMES T_PLUS T_MINUS T_EXPONENT T_DECREMENT T_INCREMENT
%token T_LESS_THAN T_GREATER_THAN T_EQUALS T_AND T_OR T_BITWISE_NOT T_LOGICAL_NOT
%token T_AND_AND T_OR_OR
%token T_LEFT_SHIFT_EQUALS T_RIGHT_SHIFT_EQUALS T_NOT_EQUALS_EQUALS T_EQUALS_EQUALS
%token T_PLUS_EQUALS T_MINUS_EQUALS T_TIMES_EQUALS
%token T_LESS_THAN_OR_EQUAL_TO T_GREATER_THAN_OR_EQUAL_TO
%token T_AND_EQUALS T_OR_EQUALS T_XOR_EQUALS
%token T_ARROW T_RIGHT_SHIFT T_LEFT_SHIFT
%token T_COMMA T_DOT T_COLON T_SEMICOLON T_QUESTION
%token T_LBRACKET T_RBRACKET T_LSQ_BRACKET T_RSQ_BRACKET T_RCURLY_BRACKET T_LCURLY_BRACKET
%token T_EMPTY_BRACKETS T_ECURLY_BRACKETS T_ESQ_BRACKETS
%token T_DEC_INT T_OCTAL_INT T_IDENTIFIER T_STRING
%token T_CUSTOM_TYPE

%type<nodePtr> PROGRAM TRANSLATION_UNIT EXTERNAL_DECLARATION FUNCTION_DECLARATION STATEMENT LABELED_STATEMENT JUMP_STATEMENT COMPOUND_STATEMENT PRIMARY_EXPRESSION ITERATION_STATEMENT
%type<nodePtr> POSTFIX_EXPRESSION ARGUMENT_EXPRESSION_LIST UNARY_EXPRESSION UNARY_OPERATOR STATEMENT_LIST EXPRESSION_STATEMENT SELECTION_STATEMENT
%type<nodePtr> MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION CAST_EXPRESSION
%type<nodePtr> AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_AND_EXPRESSION LOGICAL_OR_EXPRESSION
%type<nodePtr> CONDITIONAL_EXPRESSION ASSIGNMENT_EXPRESSION ASSIGNMENT_OPERATOR CONSTANT_EXPRESSION EXPR CONSTANT
%type<nodePtr> DECLARATION DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST INIT_DECLARATOR STORAGE_CLASS_SPECIFIER TYPE_SPECIFIER DECLARATION_LIST
%type<nodePtr> SPECIFIER_QUALIFIER_LIST
%type<nodePtr> DECLARATOR DIRECT_DECLARATOR  PARAMETER_TYPE_LIST PARAMETER_LIST PARAMETER_DECLARATION
%type<nodePtr> IDENTIFIER_LIST TYPE_NAME ABSTRACT_DECLARATOR DIRECT_ABSTRACT_DECLARATOR TYPEDEF_NAME INITIALIZER INITIALIZER_LIST
%type<nodePtr> SIZE_OF GOTO RETURN FOR WHILE DO IF ELSE IDENTIFIER ELIPSIS


%type<_text> T_AUTO T_BREAK T_CHAR T_CONST T_CONTINUE T_DEFAULT T_DO T_DOUBLE
%type<_text> T_ELSE T_EXTERN T_FLOAT T_FOR T_GOTO T_IF T_INT T_LONG T_REGISTER T_RETURN
%type<_text> T_SHORT T_SIGNED T_SIZEOF
%type<_text> T_TYPEDEF T_UNION T_UNSIGNED T_VOID T_WHILE
%type<_text> T_TIMES  T_PLUS T_MINUS T_EXPONENT T_DECREMENT T_INCREMENT
%type<_text> T_LESS_THAN T_GREATER_THAN T_EQUALS T_AND T_OR T_BITWISE_NOT T_LOGICAL_NOT
%type<_text> T_AND_AND T_OR_OR
%type<_text> T_LEFT_SHIFT_EQUALS T_RIGHT_SHIFT_EQUALS T_NOT_EQUALS_EQUALS T_EQUALS_EQUALS
%type<_text> T_PLUS_EQUALS T_MINUS_EQUALS T_TIMES_EQUALS
%type<_text> T_LESS_THAN_OR_EQUAL_TO T_GREATER_THAN_OR_EQUAL_TO
%type<_text> T_AND_EQUALS T_OR_EQUALS T_XOR_EQUALS
%type<_text> T_ARROW T_RIGHT_SHIFT T_LEFT_SHIFT
%type<_text> T_COMMA T_DOT T_COLON T_SEMICOLON T_QUESTION
%type<_text> T_LBRACKET T_RBRACKET T_LSQ_BRACKET T_RSQ_BRACKET T_RCURLY_BRACKET T_LCURLY_BRACKET
%type<_text> T_EMPTY_BRACKETS T_ECURLY_BRACKETS T_ESQ_BRACKETS
%type<_text> T_DEC_INT T_OCTAL_INT T_IDENTIFIER T_STRING
%type<_text> T_CUSTOM_TYPE

%left T_PLUS T_MINUS
%left T_TIMES
%right T_EXPONENT
%precedence T_IF
%precedence T_ELSE

%start PROGRAM

%%
PROGRAM : TRANSLATION_UNIT { g_root = $1; }

TRANSLATION_UNIT : EXTERNAL_DECLARATION {$$ = $1;}
                 | TRANSLATION_UNIT EXTERNAL_DECLARATION { std::vector<ast_node*> branches = {$1, $2};
                                                           std::vector<std::string> branch_notes = {"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"};
                                                           fprintf(stderr,"hihihihih");
                                                           $$ = new ast_node("TRANSLATION_UNIT","", branches, branch_notes);}

EXTERNAL_DECLARATION : FUNCTION_DECLARATION {$$ = $1;}
                     | DECLARATION {$$ = $1; }


FUNCTION_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT { std::vector<ast_node*> branches = {$1, $2, $3, $4};
                                                                                               std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                               $$ = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}

                     | DECLARATION_SPECIFIERS DECLARATOR COMPOUND_STATEMENT {   std::vector<ast_node*> branches = {$1, $2, NULL, $3};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                $$ = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}

                     | DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT {         std::vector<ast_node*> branches = {NULL, $1, $2, $3};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                $$ = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}

                     | DECLARATOR COMPOUND_STATEMENT {                          std::vector<ast_node*> branches = {NULL, $1,NULL, $2};
                                                                                std::vector<std::string> branch_notes = {"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"};
                                                                                $$ = new ast_node("FUNCTION_DECLARATION","", branches, branch_notes);}

STATEMENT : LABELED_STATEMENT {$$ = $1;}
          | COMPOUND_STATEMENT {$$ = $1;}
          | EXPRESSION_STATEMENT {$$ = $1;}
          | SELECTION_STATEMENT {$$ = $1;}
          | ITERATION_STATEMENT {$$ = $1;}
          | JUMP_STATEMENT {$$ = $1;}

LABELED_STATEMENT : IDENTIFIER T_COLON STATEMENT {                              std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"IDENTIFIER", "STATEMENT"};
                                                                                $$ = new ast_node("LABELED_STATEMENT","", branches, branch_notes);}


COMPOUND_STATEMENT : T_LCURLY_BRACKET DECLARATION_LIST STATEMENT_LIST T_RCURLY_BRACKET {  std::vector<ast_node*> branches = {$2, $3};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          $$ = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}

                   | T_LCURLY_BRACKET STATEMENT_LIST T_RCURLY_BRACKET {                   std::vector<ast_node*> branches = {NULL, $2};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          $$ = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}

                   | T_LCURLY_BRACKET DECLARATION_LIST T_RCURLY_BRACKET {                 std::vector<ast_node*> branches = {$2, NULL};
                                                                                          std::vector<std::string> branch_notes = {"DECLARATION_LIST", "STATEMENT_LIST"};
                                                                                          $$ = new ast_node("COMPOUND_STATEMENT","", branches, branch_notes);}
                   | T_ECURLY_BRACKETS {$$ = new ast_node("COMPOUND_STATEMENT","");}

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

IF : T_IF {$$ = new ast_node("T_IF", *$1);}
ELSE : T_ELSE {$$ = new ast_node("T_ELSE", *$1);}

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

FOR : T_FOR {$$ = new ast_node("T_FOR", *$1);}
WHILE : T_WHILE {$$ = new ast_node("T_WHILE", *$1);}
DO : T_DO {$$ = new ast_node("T_DO", *$1);}

JUMP_STATEMENT : T_CONTINUE T_SEMICOLON {$$ = new ast_node("JUMP_STATEMENT", *$1);}
               | T_BREAK T_SEMICOLON {$$ = new ast_node("JUMP_STATEMENT", *$1);}
               | RETURN EXPR T_SEMICOLON {                                      std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                $$ = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}

               | RETURN T_SEMICOLON {                                           std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"RETURN", "EXPR"};
                                                                                $$ = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}



RETURN : T_RETURN {$$ = new ast_node("RETURN", *$1);}

PRIMARY_EXPRESSION : IDENTIFIER { $$ = $1; }
                   | CONSTANT {$$ = $1;}
                   | T_STRING {$$ = new ast_node("PRIMARY_EXPRESSION", *$1);}

                   | T_LBRACKET EXPR T_RBRACKET {                               std::vector<ast_node*> branches = {$2};
                                                                                std::vector<std::string> branch_notes = {"EXPR"};
                                                                                $$ = new ast_node("JUMP_STATEMENT","", branches, branch_notes);}

CONSTANT : T_DEC_INT   {$$ = new ast_node("CONSTANT", *$1); }
         | T_OCTAL_INT {$$ = new ast_node("CONSTANT", *$1); }


POSTFIX_EXPRESSION : PRIMARY_EXPRESSION { $$  = $1;}
                   | POSTFIX_EXPRESSION T_LSQ_BRACKET EXPR T_RSQ_BRACKET {      std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "EXPR"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_EMPTY_BRACKETS {                      std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET { std::vector<ast_node*> branches = {$1, $3};
                                                                                         std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                         $$ = new ast_node("POSTFIX_EXPRESSION","", branches, branch_notes);}

                   | POSTFIX_EXPRESSION T_DOT IDENTIFIER {                      std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST"};
                                                                                $$ = new ast_node("POSTFIX_EXPRESSION",".", branches, branch_notes);}

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

SIZE_OF : T_SIZEOF { $$ = new ast_node("SIZE_OF", *$1);}

UNARY_OPERATOR : T_AND { $$ = new ast_node("UNARY_OPERATOR",*$1);}
               | T_TIMES { $$ = new ast_node("UNARY_OPERATOR",*$1);}
               | T_PLUS { $$ = new ast_node("UNARY_OPERATOR",*$1);}
               | T_MINUS { $$ = new ast_node("UNARY_OPERATOR",*$1);}
               | T_BITWISE_NOT { $$ = new ast_node("UNARY_OPERATOR",*$1);}
               | T_LOGICAL_NOT { $$ = new ast_node("UNARY_OPERATOR",*$1);}

CAST_EXPRESSION : UNARY_EXPRESSION { $$  = $1;}
                | T_LBRACKET TYPE_NAME T_RBRACKET CAST_EXPRESSION {             std::vector<ast_node*> branches = {$2, $4};
                                                                                std::vector<std::string> branch_notes = {"TYPE_NAME","CAST_EXPRESSION"};
                                                                                $$ = new ast_node("MULTIPLICATIVE_EXPRESSION","", branches, branch_notes);}

MULTIPLICATIVE_EXPRESSION : CAST_EXPRESSION { $$  = $1;}
                          | MULTIPLICATIVE_EXPRESSION T_TIMES CAST_EXPRESSION { std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"MULTIPLICATIVE_EXPRESSION","CAST_EXPRESSION"};
                                                                                $$ = new ast_node("MULTIPLICATIVE_EXPRESSION","*", branches, branch_notes);}

ADDITIVE_EXPRESSION : MULTIPLICATIVE_EXPRESSION { $$  = $1;}
                    | ADDITIVE_EXPRESSION T_PLUS MULTIPLICATIVE_EXPRESSION {    std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                $$ = new ast_node("ADDITIVE_EXPRESSION","+", branches, branch_notes);}

                    | ADDITIVE_EXPRESSION T_MINUS MULTIPLICATIVE_EXPRESSION {   std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"ADDITIVE_EXPRESSION","MULTIPLICATIVE_EXPRESSION"};
                                                                                $$ = new ast_node("ADDITIVE_EXPRESSION","-", branches, branch_notes);}

SHIFT_EXPRESSION : ADDITIVE_EXPRESSION { $$  = $1;}

RELATIONAL_EXPRESSION : SHIFT_EXPRESSION { $$  = $1;}
                      | RELATIONAL_EXPRESSION T_LESS_THAN SHIFT_EXPRESSION {    std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"RELATIONAL_EXPRESSION","SHIFT_EXPRESSION"};
                                                                                $$ = new ast_node("RELATIONAL_EXPRESSION","<", branches, branch_notes);}

EQUALITY_EXPRESSION : RELATIONAL_EXPRESSION { $$  = $1;}
                    | EQUALITY_EXPRESSION T_EQUALS_EQUALS RELATIONAL_EXPRESSION {  std::vector<ast_node*> branches = {$1, $3};
                                                                                   std::vector<std::string> branch_notes = {"EQUALITY_EXPRESSION","RELATIONAL_EXPRESSION"};
                                                                                   $$ = new ast_node("EQUALITY_EXPRESSION","==", branches, branch_notes);}

AND_EXPRESSION : EQUALITY_EXPRESSION { $$  = $1;}

EXCLUSIVE_OR_EXPRESSION : AND_EXPRESSION { $$  = $1;}

INCLUSIVE_OR_EXPRESSION : EXCLUSIVE_OR_EXPRESSION { $$  = $1;}

LOGICAL_AND_EXPRESSION : INCLUSIVE_OR_EXPRESSION { $$  = $1;}
                       | LOGICAL_AND_EXPRESSION T_AND_AND INCLUSIVE_OR_EXPRESSION {     std::vector<ast_node*> branches = {$1, $3};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_AND_EXPRESSION","INCLUSIVE_OR_EXPRESSION"};
                                                                                        $$ = new ast_node("LOGICAL_AND_EXPRESSION","", branches, branch_notes);}

LOGICAL_OR_EXPRESSION  : LOGICAL_AND_EXPRESSION { $$  = $1;}
                       | LOGICAL_OR_EXPRESSION T_OR_OR LOGICAL_AND_EXPRESSION {         std::vector<ast_node*> branches = {$1, $3};
                                                                                        std::vector<std::string> branch_notes = {"LOGICAL_OR_EXPRESSION","LOGICAL_AND_EXPRESSION"};
                                                                                        $$ = new ast_node("LOGICAL_OR_EXPRESSION","", branches, branch_notes);}

CONDITIONAL_EXPRESSION : LOGICAL_OR_EXPRESSION { $$  = $1;}

ASSIGNMENT_EXPRESSION : CONDITIONAL_EXPRESSION { $$ = $1; }
                      | UNARY_EXPRESSION ASSIGNMENT_OPERATOR ASSIGNMENT_EXPRESSION {   std::vector<ast_node*> branches = {$1, $2, $3};
                                                                                       std::vector<std::string> branch_notes = {"UNARY_EXPRESSION","ASSIGNMENT_OPERATOR", "ASSIGNMENT_EXPRESSION"};
                                                                                       $$ = new ast_node("ASSIGNMENT_EXPRESSION","", branches, branch_notes);}

ASSIGNMENT_OPERATOR : T_EQUALS { $$ = new ast_node("ASSIGNMENT_OPERATOR", *$1);}
                    
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

DECLARATION_SPECIFIERS : STORAGE_CLASS_SPECIFIER { fprintf(stderr,"yoyooyoyoyoy"); $$ = $1; }
                       | STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS {       std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"STORAGE_CLASS_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                $$ = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}

                       | TYPE_SPECIFIER { fprintf(stderr,"type spec"); $$ = $1; }
                       | TYPE_SPECIFIER DECLARATION_SPECIFIERS {                std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","DECLARATION_SPECIFIERS"};
                                                                                $$ = new ast_node("DECLARATION_SPECIFIERS","", branches, branch_notes);}


INIT_DECLARATOR_LIST : INIT_DECLARATOR { $$ = $1; }
                     | INIT_DECLARATOR_LIST T_COMMA INIT_DECLARATOR {           std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"INIT_DECLARATOR_LIST","INIT_DECLARATOR"};
                                                                                $$ = new ast_node("INIT_DECLARATOR_LIST","", branches, branch_notes);}

INIT_DECLARATOR : DECLARATOR { $$ = $1; }
                | DECLARATOR T_EQUALS INITIALIZER {                             std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"DECLARATOR","INITIALIZER"};
                                                                                $$ = new ast_node("INIT_DECLARATOR","", branches, branch_notes);}

STORAGE_CLASS_SPECIFIER : T_TYPEDEF { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", *$1);}


TYPE_SPECIFIER : T_VOID { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_INT { $$ = new ast_node("TYPE_SPECIFIER", *$1);}





SPECIFIER_QUALIFIER_LIST : TYPE_SPECIFIER { $$ = $1; }

                         | TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST {            std::vector<ast_node*> branches = {$1, $2};
                                                                                std::vector<std::string> branch_notes = {"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"};
                                                                                $$ = new ast_node("SPECIFIER_QUALIFIER_LIST","", branches, branch_notes);}

DECLARATOR : DIRECT_DECLARATOR { $$ = $1; }


DIRECT_DECLARATOR : IDENTIFIER {$$ = $1; }

                  | T_LBRACKET DECLARATOR T_RBRACKET {$$ = $2;}

                  | DIRECT_DECLARATOR T_ESQ_BRACKETS {                          std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                $$ = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}

                  | DIRECT_DECLARATOR T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET {       std::vector<ast_node*> branches = {$1, $3};
                                                                                              std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"};
                                                                                              $$ = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}

                  | DIRECT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {      std::vector<ast_node*> branches = {$1, $3};
                                                                                       std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"};
                                                                                       $$ = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}

                  | DIRECT_DECLARATOR T_EMPTY_BRACKETS                   {      std::vector<ast_node*> branches = {$1, NULL};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                $$ = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}

                  | DIRECT_DECLARATOR T_LBRACKET IDENTIFIER_LIST T_RBRACKET   { std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"DIRECT_DECLARATOR","IDENTIFIER_LIST"};
                                                                                $$ = new ast_node("DIRECT_DECLARATOR","", branches, branch_notes);}


PARAMETER_TYPE_LIST : PARAMETER_LIST { $$ = $1; }
                    | PARAMETER_LIST T_COMMA ELIPSIS  {                         std::vector<ast_node*> branches = {$1, $3};
                                                                                std::vector<std::string> branch_notes = {"PARAMETER_LIST","ELIPSIS"};
                                                                                $$ = new ast_node("PARAMETER_TYPE_LIST","", branches, branch_notes);}

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

ABSTRACT_DECLARATOR : DIRECT_ABSTRACT_DECLARATOR  { $$ = $1; }

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

                           | T_ESQ_BRACKETS {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}

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

const ast_node *g_root;

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
