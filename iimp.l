%option noyywrap

%{

#include <stdio.h>
#include <string.h>
#include "iimp.tab.h"


%}

var [A-Za-z][A-Za-z0-9]*
num [1-9][0-9]*

%%


if            { return If; }
then          { return Th; }
else          { return El; }
while         { return Wh; }
do            { return Do; }
:=            { return Af; }
skip          { return Sk; }
"+"           { return Pl; }
"-"           { return Mo; }
"*"           { return Mu; }
"\n"          { return Rt; }
";"           { return Se; }

{num}         { yylval.val = atoi(yytext); return I; }
{var}         { yylval.id = yytext; return V; }
.             { return (int) yytext[0]; }

%%
