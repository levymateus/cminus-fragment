/*
 * Parser para uma calculadora avancada
 */

%{
#include<stdio.h>
#include<stdlib.h>
#include"cminus.h"
%}

%union{
  struct ast *a;
  double d;
  struct symbol *s; //qual simbolo?
  struct symlist *sl;
  int fn; //qual funcao?
}

//declaracao de tokens

%token <d> INTCON
%token <s> ID  
%token <fn> FUNC
%token CHARCON STRINGCON
%token DIGIT
%token TYPE EXTERN VOID RETURN
%token EOL
%token IF ELSE WHILE FOR LOGICAL_OP

%nonassoc <fn> RELOP
%right '='
%left '+' '-'
%left '*' '/'

%type <a>	expr stmt exprlist 

%start prog

%%

prog: 
| dcl ';' EOL prog { printf("<dcl>\n"); }
| func EOL prog { printf("<func>\n"); }
;

dcl: TYPE var_decl var_dcl_list 															{ printf("<dcl>\n"); }
| EXTERN TYPE ID '(' param_types ')' param_types_list 			{ printf("<dcl>\n"); }
| EXTERN VOID ID '(' param_types ')' param_types_list 		{ printf("<dcl>\n"); }
| VOID ID '(' param_types ')' param_types_list 							{ printf("<dcl>\n"); }
| TYPE ID '(' param_types ')' param_types_list 								{ printf("<dcl>\n"); }
;

var_dcl_list: /*vazio*/
| ',' var_decl var_dcl_list { printf("<var_dcl_list>\n"); }
;

param_types_list: 
| ID '(' param_types ')' ',' param_types_list { printf("<param_types_list>\n"); }
;

var_decl: 
| ID { printf("<var_decl>\n"); }
| ID '[' INTCON ']' { printf("<var_decl>\n"); }
;

param_types: VOID { printf("<param_types>\n"); }
| TYPE ID '[' ']' paramlist { printf("<param_types>\n"); }
| TYPE ID paramlist { printf("<param_types>\n"); }
; 

func: TYPE ID '(' param_types ')' '{' funclist '}' { printf("<func>\n"); }
;

funclist: TYPE var_decl var_dcl_list ';' stmt { printf("<funclist>\n"); }
;

paramlist:
| ',' TYPE ID paramlist { printf("<paramlist>\n"); }
| ',' TYPE ID '[' ']' paramlist { printf("<paramlist>\n"); }
;

stmt: IF '(' expr ')' stmt  { printf("<stmt>\n"); }
| IF '(' expr ')' stmt ELSE stmt { printf("<stmt>\n"); }
| WHILE '(' expr ')' stmt { printf("<stmt>\n"); }
| FOR '(' assg ';' expr ';' assg ')' stmt { printf("<stmt>\n"); }
| RETURN ';' { printf("<stmt>\n"); }
| RETURN expr ';' { printf("<stmt>\n"); }
| assg ';' { printf("<stmt>\n"); }
| expr { printf("<stmt>\n"); }
;

expr: expr RELOP expr { printf("<relop>\n"); }
| expr LOGICAL_OP expr { printf("<logical_op>\n"); }
| expr '+' expr { printf("<add>\n"); }
| expr '-' expr { printf("<sub>\n"); }
| expr '*' expr { printf("<mult>\n"); }
| expr '/' expr { printf("<div>\n"); }
| '(' expr ')' 	{ printf("<expr>\n"); }
| ID '(' exprlist ')' { printf("<id> ( <exprlist> )\n"); }
| ID { printf("<id>\n"); }
| INTCON { printf("<intcon>\n"); }
| CHARCON { printf("<charcon>\n"); }
| STRINGCON { printf("<stringcon>\n"); }
;

exprlist: expr { printf("<exprlist>\n"); }
| expr ',' exprlist { printf("<exprlist>\n"); }
;

assg: ID '=' expr { printf("<assg>\n"); }
| ID '[' expr ']' '=' expr { printf("<assg>\n"); }
;

