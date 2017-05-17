//Funcoes auxiliares para a calculadora avancada

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include "cminus.h"

//funcoes em C para TS
//funcao hashing

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
