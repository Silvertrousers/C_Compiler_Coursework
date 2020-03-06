%option noyywrap

%{

extern "C" int fileno(FILE *stream);

#include "maths_parser.tab.hpp"
%}

%%

["][^"]*["]     { return T_STRING; }

else            { return T_ELSE; }
if              { return T_IF; }
int             { return T_INT; }
return          { return T_RETURN; }
void            { return T_VOID; }
while           { return T_WHILE; }

[=][=]          { return T_EQUALS_EQUALS; }
[!][=]          { return T_NOT_EQUALS_EQUALS; }
[*][=]          { return T_TIMES_EQUALS; }

[*]             { return T_TIMES; }
[+][=]          { return T_PLUS_EQUALS; }
[+]             { return T_PLUS; }
[-][=]          { return T_MINUS_EQUALS; }
[-]             { return T_MINUS; }
[/][=]          { return T_DIVIDE_EQUALS; }
[%][=]          { return T_MODULO_EQUALS; }
[&[=]          { return T_AND_EQUALS; }
[|][=]          { return T_OR_EQUALS; }
[\^][=]          { return T_XOR_EQUALS; }
[<][<][=]       { return T_LEFT_SHIFT_EQUALS; }
[>][>][=]       { return T_RIGHT_SHIFT_EQUALS; }
[(][)]          { return T_EMPTY_BRACKETS; }
[(]             { return T_LBRACKET; }
[)]             { return T_RBRACKET; }
[\{][\}]        { return T_ECURLY_BRACKETS; }
[\{]            { return T_LCURLY_BRACKET; }
[\}]            { return T_RCURLY_BRACKET; }
[<]             { return T_LESS_THAN; }
[<][=]             { return T_LESS_THAN_OR_EQUAL_TO; }
[>]             { return T_GREATER_THAN; }
[>][=]             { return T_GREATER_THAN_OR_EQUAL_TO; }
[\=]            { return T_EQUALS; }

[&][&]          { return T_AND_AND; }
[|][|]          { return T_OR_OR; }
[,]             { return T_COMMA; }
[:]             { return T_COLON; }
[\;]            { return T_SEMICOLON; }

[0-9]* { yylval._text=new std::string(yytext); return T_DEC_INT; }
[a-zA-Z_][a-zA-Z0-9_]*          { yylval._text=new std::string(yytext); return T_IDENTIFIER; }

[ \t\r\n]+		{;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
