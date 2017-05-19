//Funcoes auxiliares para a calculadora avancada

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include "cminus.h"

static unsigned to_hash(char* symbol){
	assert(symbol!=NULL);
	unsigned int hash = 0;
	unsigned int c = 5;
	size_t i = 0;

	while(symbol[i] != '\0'){
		hash = symbol[i]^9;
		i++;
	}

	return hash;
}

SYMBOL* lookup(char *symbol){
	printf("lookup\n");
	assert(symbol!=NULL);
	unsigned int index = to_hash(symbol) % HASH_TABLE_SIZE;
	SYMBOL *sp = &symbol_hash_table[index];
  int scount = HASH_TABLE_SIZE;
  int i = 0;

  printf("index=%d\n", index);

  while(scount >= 0){
    if(sp->name && !strcasecmp(sp->name, symbol))
      return sp;

    if(!sp->name){ //nova entrada na TS
    	printf("nova entrada na ts\n");
      sp->name = strdup(symbol);

      if(sp->node_type == INTCON){
      	sp->int_value = 0;
      }
      if(sp->node_type == CHARCON){
      	// charcon
      }
      sp->function = NULL;
      sp->symbol_list = NULL;
      return sp;
    }

    if(++sp >= symbol_hash_table+HASH_TABLE_SIZE)
      sp = symbol_hash_table; //tenta prox entrada

    scount--;

  }
  yyerror("overflow na tab de simbolos\n");
  abort(); //tabela hash cheia
}

void printTable(){
	int i = 0; 
	for(i = 0; i < HASH_TABLE_SIZE; i++) 
		printf("[%d] %s\n", i, symbol_hash_table[i].name);
}

AST *new_number (int number){
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
	assert(left != NULL && right != NULL);
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
	assert(ast!=NULL);
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

SYMBOL_LIST *new_symbol_list(SYMBOL *symbol, SYMBOL_LIST *next){
	assert(symbol != NULL);
	SYMBOL_LIST *p = malloc(sizeof(SYMBOL_LIST));

	if(!p){
		yyerror("new_symbol_list: sem espaco na memoria\n");
		exit(0);
	}

	p->symbol = symbol;
	p->next = next;

	printf("symbol: %s\n", p->symbol->name);

	return (SYMBOL_LIST*) p;
}

AST* new_compare(int node_type, AST* left, AST* right){
	assert(left != NULL && right != NULL);
	AST* p = malloc(sizeof(AST));

	if(!p){
		yyerror("new_campare: sem espaco na memoria\n");
    exit(0);
	}

	p->node_type = node_type;
	p->left = left;
	p->right = right;

	return (AST*) p;
}

AST* new_ref(SYMBOL *symbol){
	assert(symbol!=NULL);
	SYMBOL_REF *p = malloc(sizeof(SYMBOL_REF));

	if(!p){
		yyerror("new_ref: sem espaco na memoria\n");
		exit(0);
	}

	p->node_type = NT_REF;
	p->symbol = symbol;

	return (AST*) p;
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
