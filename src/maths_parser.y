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

%type<nodePtr> PROGRAM TRANSLATION_UNIT EXTERNAL_DECLARATION FUNCTION_DECLARATION STATEMENT LABELED_STATEMENT JUMP_STATEMENT COMPOUND_STATEMENT PRIMARY_EXPRESSION IDENTIFIER
%type<nodePtr> POSTFIX_EXPRESSION ARGUMENT_EXPRESSION_LIST UNARY_EXPRESSION UNARY_OPERATOR ENUM ENUM_CONSTANT
%type<nodePtr> MULTIPLICATIVE_EXPRESSION ADDITIVE_EXPRESSION SHIFT_EXPRESSION RELATIONAL_EXPRESSION EQUALITY_EXPRESSION
%type<nodePtr> AND_EXPRESSION EXCLUSIVE_OR_EXPRESSION INCLUSIVE_OR_EXPRESSION LOGICAL_AND_EXPRESSION LOGICAL_OR_EXPRESSION
%type<nodePtr> CONDITIONAL_EXPRESSION ASSIGNMENT_EXPRESSION ASSIGNMENT_OPERATOR CONSTANT_EXPRESSION EXPR CONSTANT
%type<nodePtr> DECLARATION DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST INIT_DECLARATOR STORAGE_CLASS_SPECIFIER TYPE_SPECIFIER
%type<nodePtr> STRUCT_OR_UNION_SPECIFIER STRUCT_OR_UNION STRUCT_DECLARATION_LIST STRUCT_DECLARATION SPECIFIER_QUALIFIER_LIST
%type<nodePtr> STRUCT_DECLARATOR_LIST STRUCT_DECLARATOR ENUM_SPECIFIER ENUMERATOR_LIST ENUMERATOR TYPE_QUALIFIER
%type<nodePtr> DECLARATOR DIRECT_DECLARATOR POINTER TYPE_QUALIFIER_LIST PARAMETER_TYPE_LIST PARAMETER_LIST PARAMETER_DECLARATION DEREFERENCE
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

TRANSLATION_UNIT : EXTERNAL_DECLARATION {$$ = $1;}
                 | TRANSLATION_UNIT EXTERNAL_DECLARATION {$$ = new ast_node("TRANSLATION_UNIT","", std::vector<ast_node*>{$1, $2}, std::vector<std::string>{"TRANSLATION_UNIT", "EXTERNAL_DECLARATION"});}

EXTERNAL_DECLARATION : FUNCTION_DECLARATION {$$ = $1;}
                     | DECLARATION {$$ = new ast_node("EXTERNAL_DECLARATION","", std::vector<ast_node*>{$1});}

FUNCTION_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT {$$ = new ast_node("FUNCTION_DECLARATION","", std::vector<ast_node*>{$1, $2, $3, $4}, std::vector<std::string>{"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"});}
                     | DECLARATION_SPECIFIERS DECLARATOR COMPOUND_STATEMENT {$$ = new ast_node("FUNCTION_DECLARATION","", std::vector<ast_node*>{$1, $2, NULL, $3}, std::vector<std::string>{"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"});}
                     | DECLARATOR DECLARATION_LIST COMPOUND_STATEMENT {$$ = new ast_node("TRANSLATION_UNIT","", std::vector<ast_node*>{NULL, $1, $2, $3}, std::vector<std::string>{"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"});}
                     | DECLARATOR COMPOUND_STATEMENT {$$ = new ast_node("TRANSLATION_UNIT","", std::vector<ast_node*>{NULL, $1, NULL, $2}, std::vector<std::string>{"DECLARATION_SPECIFIERS", "DECLARATOR", "DECLARATION_LIST", "COMPOUND_STATEMENT"});}

STATEMENT : LABELED_STATEMENT {$$ = $1;}
          | COMPOUND_STATEMENT {$$ = $1;}
          | EXPRESSION_STATEMENT {$$ = $1;}
          | SELECTION_STATEMENT {$$ = $1;}
          | ITERATION_STATEMENT {$$ = $1;}
          | JUMP_STATEMENT {$$ = $1;}

LABELED_STATEMENT : IDENTIFIER T_COLON STATEMENT {$$ = new ast_node("LABELED_STATEMENT","", std::vector<ast_node*>{$1, $3}, std::vector<std::string>{"IDENTIFIER", "STATEMENT"});}
                  | T_CASE CONSTANT_EXPRESSION T_COLON STATEMENT {$$ = new ast_node("LABELED_STATEMENT","", std::vector<ast_node*>{$1, $2, $4}, std::vector<std::string>{"T_CASE", "CONSTANT_EXPRESSION", "STATEMENT"});}
                  | T_DEFAULT T_COLON STATEMENT {$$ = new ast_node("LABELED_STATEMENT","", std::vector<ast_node*>{$1, $3}, std::vector<std::string>{"T_DEFAULT", "STATEMENT"});}

IDENTIFIER : T_IDENTIFIER {$$ = new ast_node("IDENTIFIER", *$1);}

COMPOUND_STATEMENT : T_LCURLY_BRACKET DECLARATION_LIST STATEMENT_LIST T_RCURLY_BRACKET {$$ = new ast_node("COMPOUND_STATEMENT","", std::vector<ast_node*>{$2, $3}, std::vector<std::string>{"DECLARATION_LIST", "STATEMENT_LIST"});}
                   | T_LCURLY_BRACKET STATEMENT_LIST T_RCURLY_BRACKET {$$ = new ast_node("COMPOUND_STATEMENT","", std::vector<ast_node*>{NULL, $2}, std::vector<std::string>{"DECLARATION_LIST", "STATEMENT_LIST"});}
                   | T_LCURLY_BRACKET DECLARATION_LIST T_RCURLY_BRACKET {$$ = new ast_node("COMPOUND_STATEMENT","", std::vector<ast_node*>{$2, NULL}, std::vector<std::string>{"DECLARATION_LIST", "STATEMENT_LIST"});}
                   | T_ECURLY_BRACKETS {$$ = new ast_node("COMPOUND_STATEMENT","");}

DECLARATION_LIST : DECLARATION { $$ = $1; }
                 | DECLARATION_LIST DECLARATION {$$ = new ast_node("DECLARATION_LIST","", std::vector<ast_node*>{$1, $2}, std::vector<std::string>{"DECLARATION_LIST", "DECLARATION"});}

STATEMENT_LIST : STATEMENT { $$ = $1; }
               | STATEMENT_LIST STATEMENT {$$ = new ast_node("STATEMENT_LIST","", std::vector<ast_node*>{$1, $2}, std::vector<std::string>{"STATEMENT_LIST", "STATEMENT"});}

EXPRESSION_STATEMENT : EXPR T_SEMICOLON { $$ = $1; }
                     | T_SEMICOLON {$$ = new ast_node("EXPRESSION_STATEMENT", "")}

SELECTION_STATEMENT : T_IF T_LBRACKET EXPR T_RBRACKET STATEMENT {$$ = new ast_node("SELECTION_STATEMENT","", std::vector<ast_node*>{$1, $3, $5, NULL, NULL}, std::vector<std::string>{"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"});}
                    | T_IF T_LBRACKET EXPR T_RBRACKET STATEMENT T_ELSE STATEMENT {$$ = new ast_node("SELECTION_STATEMENT","", std::vector<ast_node*>{$1, $3, $5, $6, $7}, std::vector<std::string>{"T_IF", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"});}
                    | T_SWITCH T_LBRACKET EXPR T_RBRACKET STATEMENT {$$ = new ast_node("SELECTION_STATEMENT","", std::vector<ast_node*>{$1, $3, $5, NULL, NULL}, std::vector<std::string>{"T_SWITCH", "EXPR", "STATEMENT", "T_ELSE", "STATEMENT"});}

ITERATION_STATEMENT : T_WHILE T_LBRACKET EXPR T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, $3, NULL, NULL, NULL, $5}, std::vector<std::string>{"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_DO STATEMENT T_WHILE T_LBRACKET EXPR T_RBRACKET T_SEMICOLON {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$3, $5, NULL, NULL, $1, $2}, std::vector<std::string>{"T_WHILE", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_FOR T_LBRACKET EXPR T_SEMICOLON EXPR T_SEMICOLON EXPR T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, $3, $5, $7, NULL, $9}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_FOR T_LBRACKET T_SEMICOLON EXPR T_SEMICOLON EXPR T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, NULL, $4, $6, NULL, $8}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_FOR T_LBRACKET EXPR T_SEMICOLON T_SEMICOLON EXPR T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, $3, NULL, $6, NULL, $8}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_FOR T_LBRACKET EXPR T_SEMICOLON EXPR T_SEMICOLON T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, $3, $5, NULL, NULL, $8}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_FOR T_LBRACKET T_SEMICOLON T_SEMICOLON EXPR T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, NULL, NULL, $5, NULL, $7}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_FOR T_LBRACKET T_SEMICOLON EXPR T_SEMICOLON T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, NULL, $4, NULL, NULL, $7}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_FOR T_LBRACKET EXPR T_SEMICOLON T_SEMICOLON T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, $3, NULL, NULL, NULL, $7}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}
                    | T_FOR T_LBRACKET T_SEMICOLON T_SEMICOLON T_RBRACKET STATEMENT {$$ = new ast_node("ITERATION_STATEMENT","", std::vector<ast_node*>{$1, NULL, NULL, NULL, NULL, $6}, std::vector<std::string>{"T_FOR", "EXPR", "EXPR", "EXPR", "T_DO", "STATEMENT"});}

JUMP_STATEMENT : T_GOTO IDENTIFIER T_SEMICOLON {$$ = new ast_node("JUMP_STATEMENT","", std::vector<ast_node*>{$1, $2}, std::vector<std::string>{"T_GOTO", "IDENTIFIER"});}
               | T_CONTINUE T_SEMICOLON {$$ = $1;}
               | T_BREAK T_SEMICOLON {$$ = $1;}
               | T_RETURN EXPR T_SEMICOLON {$$ = new ast_node("JUMP_STATEMENT","", std::vector<ast_node*>{$1, $2}, std::vector<std::string>{"T_RETURN", "EXPR"});}
               | T_RETURN T_SEMICOLON {$$ = $1;}

PRIMARY_EXPRESSION : IDENTIFIER {$$ = $1}
                   | CONSTANT {$$ = new ast_node("PRIMARY_EXPRESSION","", std::vector<ast_node*>{$1}, std::vector<std::string>{"CONSTANT"});}
                   | T_STRING {$$ = new ast_node("PRIMARY_EXPRESSION",*$1);}
                   | T_LBRACKET EXPR T_RBRACKET {$$ = $2;}

CONSTANT : T_DEC_INT   {$$ = new ast_node("CONSTANT", *$1); }
         | T_OCTAL_INT {$$ = new ast_node("CONSTANT", *$1); }


POSTFIX_EXPRESSION : PRIMARY_EXPRESSION
                   | POSTFIX_EXPRESSION T_LSQ_BRACKET EXPR T_RSQ_BRACKET
                   | POSTFIX_EXPRESSION T_EMPTY_BRACKETS
                   | POSTFIX_EXPRESSION T_LBRACKET ARGUMENT_EXPRESSION_LIST T_RBRACKET
                   | POSTFIX_EXPRESSION T_DOT IDENTIFIER
                   | POSTFIX_EXPRESSION T_ARROW IDENTIFIER
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

CONSTANT_EXPRESSION   : CONDITIONAL_EXPRESSION { $$ = $1; }

EXPR : ASSIGNMENT_EXPRESSION {fprintf(stderr, "ExpressionFound! ");}
     | EXPR T_COMMA ASSIGNMENT_EXPRESSION

DECLARATION : DECLARATION_SPECIFIERS T_SEMICOLON | DECLARATION_SPECIFIERS INIT_DECLARATOR_LIST T_SEMICOLON

DECLARATION_SPECIFIERS : STORAGE_CLASS_SPECIFIER { $$ = $1; }
                       | STORAGE_CLASS_SPECIFIER DECLARATION_SPECIFIERS
                       | TYPE_SPECIFIER { $$ = $1; }
                       | TYPE_SPECIFIER DECLARATION_SPECIFIERS
                       | TYPE_QUALIFIER { $$ = $1; }
                       | TYPE_QUALIFIER DECLARATION_SPECIFIERS

INIT_DECLARATOR_LIST : INIT_DECLARATOR { $$ = $1; }
                     | INIT_DECLARATOR_LIST T_COMMA INIT_DECLARATOR {$$ = new ast_node("INIT_DECLARATOR_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"INIT_DECLARATOR_LIST","INIT_DECLARATOR"});}

INIT_DECLARATOR : DECLARATOR { $$ = $1; }
                | DECLARATOR T_EQUALS INITIALIZER {$$ = new ast_node("INIT_DECLARATOR","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"DECLARATOR","INITIALIZER"});}

STORAGE_CLASS_SPECIFIER : T_TYPEDEF { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", *$1);}
                        | T_EXTERN { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", *$1);}
                        | T_STATIC { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", *$1);}
                        | T_AUTO { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", *$1);}
                        | T_REGISTER { $$ = new ast_node("STORAGE_CLASS_SPECIFIER", *$1);}

TYPE_SPECIFIER : T_VOID { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_CHAR { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_SHORT { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_INT { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_LONG { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_FLOAT { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_DOUBLE { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_SIGNED { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | T_UNSIGNED { $$ = new ast_node("TYPE_SPECIFIER", *$1);}
               | STRUCT_OR_UNION_SPECIFIER { $$ = $1; }
               | ENUM_SPECIFIER { $$ = $1; }
               | TYPEDEF_NAME { $$ = $1; }

STRUCT_OR_UNION_SPECIFIER : STRUCT_OR_UNION IDENTIFIER {$$ = new ast_node("STRUCT_OR_UNION_SPECIFIER","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"STRUCT_OR_UNION","IDENTIFIER"});}
                          | STRUCT_OR_UNION T_LCURLY_BRACKET STRUCT_DECLARATION_LIST T_RCURLY_BRACKET {$$ = new ast_node("STRUCT_OR_UNION_SPECIFIER","",std::vector<ast_node*>{$1, NULL, $4},std::vector<std::string>{"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"});}
                          | STRUCT_OR_UNION IDENTIFIER T_LCURLY_BRACKET STRUCT_DECLARATION_LIST T_RCURLY_BRACKET {$$ = new ast_node("STRUCT_OR_UNION_SPECIFIER","",std::vector<ast_node*>{$1, $2, $4},std::vector<std::string>{"STRUCT_OR_UNION", "IDENTIFIER", "STRUCT_DECLARATION_LIST"});}

STRUCT_OR_UNION : T_STRUCT { $$ = new ast_node("STRUCT_OR_UNION", *$1);}
                | T_UNION  { $$ = new ast_node("STRUCT_OR_UNION", *$1);}

STRUCT_DECLARATION_LIST : STRUCT_DECLARATION {$$ = $1;}
                        | STRUCT_DECLARATION_LIST STRUCT_DECLARATION {$$ = new ast_node("STRUCT_DECLARATION_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"STRUCT_DECLARATION_LIST","STRUCT_DECLARATION"});}

STRUCT_DECLARATION : SPECIFIER_QUALIFIER_LIST STRUCT_DECLARATOR_LIST {$$ = new ast_node("STRUCT_DECLARATION","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"SPECIFIER_QUALIFIER_LIST","STRUCT_DECLARATOR_LIST"});}

SPECIFIER_QUALIFIER_LIST : TYPE_SPECIFIER { $$ = $1; }
                         | TYPE_SPECIFIER SPECIFIER_QUALIFIER_LIST {$$ = new ast_node("SPECIFIER_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"TYPE_SPECIFIER","SPECIFIER_QUALIFIER_LIST"});}
                         | TYPE_QUALIFIER { $$ = $1; }
                         | TYPE_QUALIFIER SPECIFIER_QUALIFIER_LIST {$$ = new ast_node("SPECIFIER_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"TYPE_QUALIFIER","SPECIFIER_QUALIFIER_LIST"});}

STRUCT_DECLARATOR_LIST : STRUCT_DECLARATOR {$$ = $1;}
                       | STRUCT_DECLARATOR_LIST T_COMMA STRUCT_DECLARATOR {$$ = new ast_node("STRUCT_DECLARATOR_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"STRUCT_DECLARATOR_LIST","STRUCT_DECLARATOR"});}

STRUCT_DECLARATOR : DECLARATOR { $$  =$1; }
                  | DECLARATOR T_COLON CONSTANT_EXPRESSION  {$$ = new ast_node("STRUCT_DECLARATOR","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"DECLARATOR","CONSTANT_EXPRESSION"});}
                  | T_COLON CONSTANT_EXPRESSION  {$$ = new ast_node("STRUCT_DECLARATOR","",std::vector<ast_node*>{NULL, $2},std::vector<std::string>{"DECLARATOR","CONSTANT_EXPRESSION"});}

ENUM_SPECIFIER : ENUM IDENTIFIER                                                   {$$ = new ast_node("ENUMERATOR_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"ENUM","IDENTIFIER"});}
               | ENUM IDENTIFIER T_LCURLY_BRACKET ENUMERATOR_LIST T_RCURLY_BRACKET {$$ = new ast_node("ENUMERATOR_LIST","",std::vector<ast_node*>{$1,$2, $3},std::vector<std::string>{"ENUM","IDENTIFIER","ENUMERATOR_LIST"});}
               | ENUM T_LCURLY_BRACKET ENUMERATOR_LIST T_RCURLY_BRACKET            {$$ = new ast_node("ENUMERATOR_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"ENUM","ENUMERATOR_LIST"});}

ENUM : T_ENUM { $$ = new ast_node("ENUM",*$1);}

ENUMERATOR_LIST : ENUMERATOR {$$ = $1;}
                | ENUMERATOR_LIST T_COMMA ENUMERATOR {$$ = new ast_node("ENUMERATOR_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"ENUMERATOR_LIST","ENUMERATOR"});}

ENUMERATOR : ENUM_CONSTANT { $$ = $1;}
           | ENUM_CONSTANT T_EQUALS CONSTANT_EXPRESSION {$$ = new ast_node("ENUMERATOR","Note: branches[0] = branches[1]",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"ENUM_CONSTANT","CONSTANT_EXPRESSION"});}

ENUM_CONSTANT : T_ENUM_CONSTANT { $$ = new ast_node("ENUMERATOR",*$1);}

TYPE_QUALIFIER : T_CONST { $$ = new ast_node("TYPE_QUALIFIER",*$1);}
               | T_VOLATILE { $$ = new ast_node("TYPE_QUALIFIER",*$1);}

DECLARATOR : DIRECT_DECLARATOR { $$ = $1; }
           | POINTER DIRECT_DECLARATOR {$$ = new ast_node("DECLARATOR","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"POINTER","DIRECT_DECLARATOR"});}

DIRECT_DECLARATOR : IDENTIFIER {$$ = $1; }
                  | T_LBRACKET DECLARATOR T_RBRACKET {$$ = $2;}
                  | DIRECT_DECLARATOR T_ESQ_BRACKETS {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, NULL},std::vector<std::string>{"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"});}
                  | DIRECT_DECLARATOR T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"DIRECT_DECLARATOR","CONSTANT_EXPRESSION"});}
                  | DIRECT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"DIRECT_DECLARATOR","PARAMETER_TYPE_LIST"});}
                  | DIRECT_DECLARATOR T_EMPTY_BRACKETS                          {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, NULL},std::vector<std::string>{"DIRECT_DECLARATOR","IDENTIFIER_LIST"});}
                  | DIRECT_DECLARATOR T_LBRACKET IDENTIFIER_LIST T_RBRACKET     {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"DIRECT_DECLARATOR","IDENTIFIER_LIST"});}

/*THE TIMES TOKEN HERE SHOULD BE REPLACED WITH A T_DEREFERENCE token*/
POINTER : DEREFERENCE {$$ = $1;}
        | DEREFERENCE TYPE_QUALIFIER_LIST {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"DEREFERENCE","TYPE_QUALIFIER_LIST"});}
        | DEREFERENCE POINTER             {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"DEREFERENCE","POINTER"});}
        | DEREFERENCE TYPE_QUALIFIER_LIST POINTER {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $2, $3},std::vector<std::string>{"DEREFERENCE","TYPE_QUALIFIER_LIST", "POINTER"});}

DEREFERENCE : T_DEREFERENCE = { $$ = new ast_node("DEREFERENCE","");}

TYPE_QUALIFIER_LIST : TYPE_QUALIFIER { $$ = $1; }
                    | TYPE_QUALIFIER_LIST TYPE_QUALIFIER {$$ = new ast_node("TYPE_QUALIFIER_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"TYPE_QUALIFIER_LIST","TYPE_QUALIFIER"});}

PARAMETER_TYPE_LIST : PARAMETER_LIST { $$ = $1; }
                    | PARAMETER_LIST T_COMMA ELIPSIS  {$$ = new ast_node("PARAMETER_TYPE_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"PARAMETER_LIST","PARAMETER_DECLARATION"});}

ELIPSIS : T_DOT T_DOT T_DOT {$$ = new ast_node("ELIPSIS","...");}

PARAMETER_LIST : PARAMETER_DECLARATION { $$ = $1; }
               | PARAMETER_LIST T_COMMA PARAMETER_DECLARATION {$$ = new ast_node("PARAMETER_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"PARAMETER_LIST","PARAMETER_DECLARATION"});}

PARAMETER_DECLARATION : DECLARATION_SPECIFIERS DECLARATOR {$$ = new ast_node("PARAMETER_DECLARATION","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"DECLARATION_SPECIFIERS","DECLARATOR"});}
                      | DECLARATION_SPECIFIERS { $$ = $1; }
                      | DECLARATION_SPECIFIERS ABSTRACT_DECLARATOR {$$ = new ast_node("PARAMETER_DECLARATION","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"DECLARATION_SPECIFIERS","ABSTRACT_DECLARATOR"});}

IDENTIFIER_LIST : IDENTIFIER { $$ = $1; }
                | IDENTIFIER_LIST T_COMMA IDENTIFIER  {$$ = new ast_node("IDENTIFIER_LIST","",std::vector<ast_node*>{$1, $3},std::vector<std::string>{"IDENTIFIER_LIST","IDENTIFIER"});}

IDENTIFIER : T_IDENTIFIER {$$ = new ast_node("IDENTIFIER",*$1);}

TYPE_NAME : SPECIFIER_QUALIFIER_LIST { $$ = $1; }
          | SPECIFIER_QUALIFIER_LIST ABSTRACT_DECLARATOR {$$ = new ast_node("TYPE_NAME","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"SPECIFIER_QUALIFIER_LIST","ABSTRACT_DECLARATOR"});}

ABSTRACT_DECLARATOR : POINTER { $$ = $1; }
                    | POINTER DIRECT_ABSTRACT_DECLARATOR {$$ = new ast_node("ABSTRACT_DECLARATOR","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"POINTER","DIRECT_ABSTRACT_DECLARATOR"});}
                    | DIRECT_ABSTRACT_DECLARATOR  { $$ = $1; }

DIRECT_ABSTRACT_DECLARATOR : T_LBRACKET ABSTRACT_DECLARATOR T_RBRACKET { $$ = $2; }
                           | DIRECT_ABSTRACT_DECLARATOR T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"});}
                           | T_LSQ_BRACKET CONSTANT_EXPRESSION T_RSQ_BRACKET {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{NULL, $2},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"});}
                           | DIRECT_ABSTRACT_DECLARATOR T_ESQ_BRACKETS {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{$1, NULL},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","CONSTANT_EXPRESSION"});}
                           | T_ESQ_BRACKETS {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}
                           | DIRECT_ABSTRACT_DECLARATOR T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"});}
                           | T_LBRACKET PARAMETER_TYPE_LIST T_RBRACKET {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{NULL, $2},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"});}
                           | DIRECT_ABSTRACT_DECLARATOR T_EMPTY_BRACKETS {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","",std::vector<ast_node*>{$1, NULL},std::vector<std::string>{"DIRECT_ABSTRACT_DECLARATOR","PARAMETER_TYPE_LIST"});}
                           | T_EMPTY_BRACKETS {$$ = new ast_node("DIRECT_ABSTRACT_DECLARATOR","");}

TYPEDEF_NAME : T_CUSTOM_TYPE {$$ = new ast_node("TYPEDEF_NAME",*$1,std::vector<ast_node*>{},std::vector<std::string>{});}

INITIALIZER : ASSIGNMENT_EXPRESSION { $$ = $1; }
            | T_LCURLY_BRACKET INITIALIZER_LIST T_RCURLY_BRACKET {$$ = new ast_node("INITIALIZER","",std::vector<ast_node*>{$2},std::vector<std::string>{"INITIALIZER_LIST"});}
            | T_LCURLY_BRACKET INITIALIZER_LIST T_COMMA T_RCURLY_BRACKET {$$ = new ast_node("INITIALIZER","",std::vector<ast_node*>{$2},std::vector<std::string>{"INITIALIZER_LIST"});}

INITIALIZER_LIST : INITIALIZER {$$ = $1;}
                 | INITIALIZER_LIST T_COMMA INITIALIZER {$$ = new ast_node("INITIALIZER_LIST","",std::vector<ast_node*>{$1, $2},std::vector<std::string>{"INITIALIZER_LIST","INITIALIZER"});}




%%

const ast_node *g_root;

const ast_node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
