//Funcoes auxiliares para a calculadora avancada

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include "cminus.h"

AST *new_number ( int number ){
	INTCON_NUMBER *p = malloc(sizeof(INTCON_NUMBER));

	if(!p){
		yyerror("new_number: sem espaco na memoria\n");
    exit(0);
	}

	p->node_type = INTCON;
	p->number = number;
	printf("type: %d number %d\n", p->node_type, p->number );
	return (AST*) p;
}

AST *new_ast (int node_type , AST *left , AST *right){
  AST *p = malloc(sizeof(AST));

  if (!p){
    yyerror("new_ast: sem espaco na memoria\n");
    exit(0);
  }

  p->node_type = node_type;
  p->left = left;
  p->right = right;

  return (AST*) p;
}

int evaluation(AST *ast){
	int value = 0;
	assert(ast!=NULL);

	if(!ast){
		yyerror("Erro: evaluation null\n");
		return 0;
	}

	switch(ast->node_type){
		case INTCON: return ((INTCON_NUMBER *) ast)->number;
		case ADD: return evaluation(ast->left) + evaluation(ast->right);
		case SUB: return evaluation(ast->left) - evaluation(ast->right);
		case MUL: return evaluation(ast->left) * evaluation(ast->right);
		case DIV: return evaluation(ast->left) / evaluation(ast->right);
		default: 
			printf("Erro interno: bad node %c\n", ast->node_type);
			break;
	}
	return value;
}

AST* new_declaration(SYMBOL *symbol){
	assert(symbol!=NULL);
	SYMBOL_DCL p = malloc(sizeof(SYMBOL_DCL));
	if(!p){
		yyerror("new_declaration: sem espaco na memoria\n");
    exit(0);
	}

	p->node_type = NT_DCL;
	p->symbol = symbol;

	return (AST*)p;
}

void yyerror(char *s, ...){
  va_list ap;
  va_start(ap, s);
  
  fprintf(stderr,"%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

int main(argc, argv)
int argc;
char **argv;
{
	
	yyin = fopen(argv[1], "r");

	printf("\n");

  return yyparse();
}
