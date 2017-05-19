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

"=" |
"," |
";" |
"{" |
"}" |
"["	|
"]"	|
"(" |
")" { return yytext[0];} //simbolos terminais

"+" { return ADD; }
"-" { return SUB; }
"*" { return MUL; }
"/" { return DIV; }

">" { return GREATER_THAN; }
"<" { return LESSER_THAN; }
"<>" { return DIFFERENT; }
"==" { return EQUAL; }
">=" { return GREATER_THAN_EQUAL; }
"<=" { return LESSER_THAN_EQUAL; } // operadores de comparação

"&&" {return AND; } 
"||" {return OR;} // operadores lógicos

 /* palavras reservadas */
"if" 			{ printf("<if>\n"); return IF;}
"else" 		{ printf("<else>\n"); return ELSE;}
"while" 	{ printf("<while>\n"); return WHILE;}
"for"			{ printf("<for>\n"); return FOR;}
"extern"	{ printf("<extern>\n"); return EXTERN; }
"void" 		{ return VOID;}
"return" 	{ printf("<return>\n"); return RETURN; }

"int" |
"char" { printf("<type>\n"); return CHAR;} // tipos de variavel

[a-zA-Z][a-zA-Z0-9\_]* { 
	yylval.symbol = lookup(yytext); 
	printf("<id>\n"); 
	return ID;
} //nomes de variáveis e funcções

[0-9][0-9]*						 { yylval.intcon = atoi(yytext); printf("<intcon> %d\n", yylval.intcon ); return INTCON;}// numero inteiro

"/*"(.)*"*/"					 { printf("<comment>\n"); } // comentários

[ \t] //ignora espaco em branco

\\\n //ignora continuacao de linha

\n 										 { printf("nova linha\n"); return EOL; } // nova linha

. 										 { yyerror("Caracter desconhecido %c\n", *yytext);}
%%
