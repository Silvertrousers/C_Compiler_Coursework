%option noyywrap

%{

extern "C" int fileno(FILE *stream);

#include "maths_parser.tab.hpp"
%}

%%

["][^"]*["]     { return T_STRING; }

auto            { return T_AUTO; }
break           { return T_BREAK; }
case            { return T_CASE; }
char            { return T_CHAR; }
const           { return T_CONST; }
continue        { return T_CONTINUE; }
default         { return T_DEFAULT; }
do              { return T_DO; }
double          { return T_DOUBLE; }
else            { return T_ELSE; }
enum            { return T_ENUM; }
extern          { return T_EXTERN; }
float           { return T_FLOAT; }
for             { return T_FOR; }
goto            { return T_GOTO; }
if              { return T_IF; }
int             { return T_INT; }
long            { return T_LONG; }
register        { return T_REGISTER; }
return          { return T_RETURN; }
short           { return T_SHORT; }
signed          { return T_SIGNED; }
sizeof          { return T_SIZEOF; }
static          { return T_STATIC; }
struct          { return T_STRUCT; }
switch          { return T_SWITCH; }
typedef         { return T_TYPEDEF; }
union           { return T_UNION; }
unsigned        { return T_UNSIGNED; }
void            { return T_VOID; }
volatile        { return T_VOLATILE; }
while           { return T_WHILE; }

[%][=]          {return T_MODULO_EQUALS; }
[<][<][=]       {return T_LEFT_SHIFT_EQUALS;}
[>][>][=]       {return T_RIGHT_SHIFT_EQUALS;}
[!][=]          { return T_NOT_EQUALS_EQUALS; }
[=][=]          { return T_EQUALS_EQUALS; }
[-][=]          { return T_MINUS_EQUALS; }
[*][=]          { return T_TIMES_EQUALS; }
[/][=]          { return T_DIVIDE_EQUALS; }
[<][=]          { return T_LESS_THAN_OR_EQUAL_TO; }
[>][=]          { return T_GREATER_THAN_OR_EQUAL_TO; }
[&][=]          { return T_AND_EQUALS; }
[|][=]          { return T_OR_EQUALS; }
[\^][=]          { return T_XOR_EQUALS; }
[-][>]          { return T_ARROW; }
[*]             { return T_TIMES; }
[/]             { return T_DIVIDE; }
[+]             { return T_PLUS; }
[+][+]            { return T_INCREMENT; }
[+][=]          { return T_PLUS_EQUALS; }
[\^]            { return T_EXPONENT; }
[-][-]          { return T_DECREMENT; }
[-]             { return T_MINUS; }
[(][)]          { return T_EMPTY_BRACKETS; }
[(]             { return T_LBRACKET; }
[)]             { return T_RBRACKET; }
[\[][\]]        { return T_ESQ_BRACKETS; }
[\[]            { return T_LSQ_BRACKET; }
[\]]            { return T_RSQ_BRACKET; }
[\{][\}]        { return T_ECURLY_BRACKETS; }
[\{]            { return T_LCURLY_BRACKET; }
[\}]            { return T_RCURLY_BRACKET; }
[<][<]          { return T_LEFT_SHIFT; }
[<]             { return T_LESS_THAN; }
[>][>]          { return T_RIGHT_SHIFT; }
[>]             { return T_GREATER_THAN; }
[\=]            { return T_EQUALS; }

[&][&]          { return T_AND_AND; }
[&]             { return T_AND; }
[|][|]          { return T_OR_OR; }
[|]             { return T_OR; }
[~]             { return T_BITWISE_NOT; }
[\.]            { return T_DOT; }
[,]             { return T_COMMA; }
[:]             { return T_COLON; }
[\;]            { return T_SEMICOLON; }
[!]             { return T_LOGICAL_NOT; }
[\%]             { return T_MODULO; }
[\?]            { return T_QUESTION; }

[1-9][0-9]* { yylval._text=new std::string(yytext); return T_DEC_INT; }
[0][0-7]*   { yylval._text=new std::string(yytext); return T_OCTAL_INT; }
[a-zA-Z_][a-zA-Z0-9_]*          { yylval._text=new std::string(yytext); return T_IDENTIFIER; }

[ \t\r\n]+		{;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
