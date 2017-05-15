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
//ch [ $-7BN{ix,E_z1Sv4]9h.b<u&c a*oD!nXKGLZq0VT'kH)m\OFA@CJUdw8Y~=l:sP6%try(;W)|5f#`!j/M{I²e?pQ3}gR>+} ]
ch [!-~, ,\n,\0]?
stringcon [!-~, ]+

%%

{ch} { return CHARCON; }
{stringcon} { return STRINGCON; }

"+" |
"-" |
"*" |
"/" |
"=" |
"," |
";" |
"{" |
"}" |
"(" |
")" { return yytext[0];}

">" |
"<" |
"<>" |
"==" |
">=" |
"<=" {printf("relop\n"); return RELOP;}

"&&" |
"||" {return LOGICAL_OP;}

 /* palavras reservadas */
"if" { printf("reserved 'if'\n"); return IF;}
"else" { printf("reserved 'else'\n"); return ELSE;}
"while" { printf("reserved 'while'\n"); return WHILE;}
"for"		{ printf("reserved 'for'\n"); return FOR;}
"extern" { printf("reserved 'extern'\n"); return EXTERN; }
"void" {return VOID;}
"return" { printf("reserved 'return'\n"); return RETURN; }
"int" |
"char" { printf("type\n"); return TYPE;}

[a-zA-Z][a-zA-Z0-9\_]* { printf("id\n"); return ID;} //nomes
[0-9][0-9]*							{ printf("intcon\n"); return INTCON;}

[0-9]+"."[0-9]*{EXP}? | 
"."?[0-9]+{EXP}? { return DIGIT; }

"/*"(.)*"*/"	{ printf("comment\n"); }

[ \t] //ignora espaco em branco

\\\n {printf("c> ");} //ignora continuacao de linha

\n { return EOL; }

. { yyerror("Caracter desconhecido %c\n", *yytext);}
%%
