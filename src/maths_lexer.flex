%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "maths_parser.tab.hpp"
%}

%%

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
[\^]            { return T_EXPONENT; }
[-]             { return T_MINUS; }

[(]             { return T_LBRACKET; }
[)]             { return T_RBRACKET; }

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
