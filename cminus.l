/*
* Lexer para uma calculadora avancada
*reconhecimento de tokens 
*/

%option noyywrap nodefault yylineno

%{
#include"cminus.h"
#include"cminus.tab.h"
%}

%option warn noyywrap nodefault

/* expoente float */
EXP ([Ee][-+]?[0-9]+)
ch [!-~, ,\n,\0]?
stringcon [!-~, ]+

%%

"+" |
"-" |
"*" |
"/" |
"=" |
"," |
";" |
"{" |
"}" |
"["	|
"]"	|
"(" |
")" { return yytext[0];}

">" |
"<" |
"<>" |
"==" |
">=" |
"<=" {printf("<relop>\n"); return RELOP;}

"&&" |
"||" {return LOGICAL_OP;}

 /* palavras reservadas */
"if" { printf("<if>\n"); return IF;}
"else" { printf("<else>\n"); return ELSE;}
"while" { printf("<while>\n"); return WHILE;}
"for"		{ printf("<for>\n"); return FOR;}
"extern" { printf("<extern>\n"); return EXTERN; }
"void" { return VOID;}
"return" { printf("<return>\n"); return RETURN; }

"int" |
"char" { printf("<type>\n"); return TYPE;}

[a-zA-Z][a-zA-Z0-9\_]* { printf("<id>\n"); return ID;} //nomes
[0-9][0-9]*							{ printf("<intcon>\n"); return INTCON;}

[0-9]+"."[0-9]*{EXP}? | 
"."?[0-9]+{EXP}? { return DIGIT; }

"/*"(.)*"*/"	{ printf("<comment>\n"); }

[ \t] //ignora espaco em branco

\\\n { printf("c> ");} //ignora continuacao de linha

\n { printf("nova linha\n"); return EOL; }

. { yyerror("Caracter desconhecido %c\n", *yytext);}
%%
