#include "cminus.tab.h"

/* interface com o lexer */
extern int yylineno;
extern void yyrestart();
extern int yyparse();
extern int yylex(void);
extern FILE * yyin; // yyin é do bison e é o ponteiro para arquivo usado em yyparse()
void yyerror(char *s, ...);

#define HASH_TABLE_SIZE 999 // tamanho da tabela hash 

/**
 * Ponteiro para tabela hash de simbolos.
 */
struct SYMBOL *symbol_hash_table;

enum NODE_TYPE{
	NT_DCL
};

struct AST {
	int node_type;
	struct AST *left;
  struct AST *right;
};

/**
	* Tabela de simbolos que podem ser variáveis ou funções.
	*
	*/
struct SYMBOL {
	int node_type;
	char* name; 
	union{
		int int_value;
		char char_value;
	};	
	struct AST *function;
	struct ARGUMENTS *arg_list;
};

/**
 * Nó de argumentos de função.
 **/
struct ARGUMENTS {
	struct SYMBOL *symbol;
	struct ARGUMENTS *next_arg;
};

struct SYMBOL_DCL {
	int node_type;
	struct SYMBOL *symbol;
};

struct INTCON_NUMBER {
	int node_type;
	int number;
};

typedef struct AST AST;
typedef struct INTCON_NUMBER INTCON_NUMBER;
typedef struct SYMBOL SYMBOL;
typedef struct ARGUMENTS ARGUMENTS;

/**
 * cria um nó do tipo NT_INTCON
 **/
AST *new_number ( int number );

/**
 * cria um AST
 **/
AST *new_ast (int node_type , AST *left , AST *right);

int evaluation(AST* ast);

AST* new_declaration(SYMBOL *symbol);