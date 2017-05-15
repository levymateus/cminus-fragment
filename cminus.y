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
%token <s> ID CHARCON STRINGCON
%token <fn> FUNC
%token DIGIT
%token TYPE EXTERN VOID RETURN
%token EOL
%token IF ELSE WHILE FOR LOGICAL_OP

%nonassoc <fn> RELOP
%right '='
%left '+' '-'
%left '*' '/'

%type <a>	expr stmt list exprlist 

%start prog

%%

prog: 
| dcl ';' 
| func
;

dcl: TYPE var_decl var_dcl_list 															{ printf("\t->dcl\n"); }
| EXTERN TYPE ID '(' param_types ')' param_types_list 			{ printf("\t->dcl\n"); }
| EXTERN VOID ID '(' param_types ')' param_types_list 		{ printf("\t->dcl\n"); }
| VOID ID '(' param_types ')' param_types_list 							{ printf("\t->dcl\n"); }
| TYPE ID '(' param_types ')' param_types_list 								{ printf("\t->dcl\n"); }
;

var_dcl_list: /*vazio*/
| var_decl ',' var_dcl_list
;

param_types_list: 
| ID '(' param_types ')' ',' param_types_list
;

var_decl: 
| ID 
| ID '[' INTCON ']'
;

param_types: VOID
| TYPE ID '[' ']' paramlist
| TYPE ID paramlist 
; 

func: TYPE ID '(' param_types ')' '{' funclist '}' { printf("func\n"); }
;

funclist: TYPE var_decl var_dcl_list ';' stmt ;

paramlist:
| ',' TYPE ID paramlist 
| ',' TYPE ID '[' ']' paramlist
;

stmt: 
| IF '(' expr ')' list  
| IF '(' expr ')' list ELSE list 
| WHILE '(' expr ')' list { printf("stmt while . . .\n"); }
| FOR '(' assg ';' expr ';' assg ')' list 
| RETURN ';'
| RETURN expr ';' { printf("stmt return\n"); }; 
| assg ';'
| expr 
;

list: /*vazio*/ 
| stmt ';' list 
;

expr: expr RELOP expr 
| expr '+' expr { printf("soma\n"); }
| expr '-' expr { printf("sub\n"); }
| expr '*' expr { printf("mult\n"); }
| expr '/' expr { printf("div\n"); }
| '(' expr ')' 	
| FUNC '(' exprlist ')' 
| ID '(' exprlist ')' 
| ID
| INTCON 
| CHARCON
| STRINGCON
;

exprlist: expr 
| expr ',' exprlist 
;

assg: ID '=' expr { printf("assg\n"); }
| ID '[' expr ']' '=' expr { printf("assg\n"); }
;

