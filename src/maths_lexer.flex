%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "maths_parser.tab.hpp"
%}

%%

["][^"]*["]      { return T_STRING; }

char            { return T_CHAR; }
double          { return T_DOUBLE; }
else            { return T_ELSE; }
float           { return T_FLOAT; }
for             { return T_FOR; }
if              { return T_IF; }
int             { return T_INT; }
long            { return T_LONG; }
return          { return T_RETURN; }
while           { return T_WHILE; }

[*]             { return T_TIMES; }
[/]             { return T_DIVIDE; }
[+]             { return T_PLUS; }
[+][+]          { return T_INCREMENT}
[\^]            { return T_EXPONENT; }
[-]             { return T_MINUS; }
[-][-]          { return T_DECREMENT}
[(]             { return T_LBRACKET; }
[)]             { return T_RBRACKET; }
[\[]            { return T_LSQ_BRACKET; }
[\]]            { return T_RSQ_BRACKET; }
[\{]            { return T_LCURLY_BRACKET; }
[\}]            { return T_RCURLY_BRACKET; }
[<]             { return T_LESS_THAN; }
[<][<]          { return T_LEFT_SHIFT; }
[>]             { return T_GREATER_THAN; }
[>][>]          { return T_RIGHT_SHIFT; }
[\=]            { return T_EQUALS; }
[%][=]          {return T_MODULO_EQUALS; }
[<][<][=]       {return T_LEFT_SHIFT_EQUALS;}
[>][>][=]       {return T_RIGHT_SHIFT_EQUALS;}
[!][=]          { return T_NOT_EQUALS_EQUALS; }
[=][=]          { return T_EQUALS_EQUALS; }
[+][=]          { return T_PLUS_EQUALS; }
[-][=]          { return T_MINUS_EQUALS; }
[*][=]          { return T_TIMES_EQUALS; }
[/][=]          { return T_DIVIDE_EQUALS; }
[<][=]          { return T_LESS_THAN_OR_EQUAL_TO; }
[>][=]          { return T_GREATER_THAN_OR_EQUAL_TO; }
[&][=]          { return T_AND_EQUALS; }
[|][=]          { return T_OR_EQUALS; }
[^][=]          { return T_XOR_EQUALS; }
[-][>]          { return T_ARROW; }

[&]             { return T_AND; }
[&][&]
[|]             { return T_OR; }
[|][|]
[~]             { return T_BITWISE_NOT; }
[\.]            { return T_DOT; }
[,]             { return T_COMMA; }
[:]             { return T_COLON; }
[\;]            { return T_SEMICOLON; }
[!]             { return T_LOGICAL_NOT; }
[\%]             { return T_MODULO; }
[\?]            { return T_QUESTION; }

[1-9][0-9]* { yylval.number=strtod(yytext, 0); return T_DEC_INT; }
[0][0-7]*   { yylval.number=strtod(yytext, 0); return T_OCTAL_INT; }
[a-zA-Z_][a-zA-Z0-9_]*          { yylval.string=new std::string(yytext); return T_IDENTIFIER; }

[ \t\r\n]+		{;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
