%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "maths_parser.tab.hpp"
%}

%%

[“][.]*[“]      { return T_STRING; }

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
[\[]            { return T_LSQ_BRACKET; }
[\]]            { return T_RSQ_BRACKET; }
[<]             { return T_LESS_THAN; }
[>]             { return T_GREATER_THAN; }
[=]             { return T_EQUALS; }
[&]             { return T_AND; }
[|]             { return T_OR; }
[~]             { return T_BITWISE_NOT; }
[\.]            { return T_DOT; }      //MIGHT WANT TO RELOCATE ONCE WE HAVE DECIMALS
[,]             { return T_COMMA; }
[:]             { return T_COLON; }
[\;]            { return T_SEMICOLON; }
[!]             { return T_LOGICAL_NOT; }

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
