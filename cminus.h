#include "cminus.tab.h"

/* interface com o lexer */
extern int yylineno;
extern char* yytext;
extern void yyrestart();
extern int yyparse();
extern int yylex(void);
extern FILE * yyin; // yyin é do bison e é o ponteiro para arquivo usado em yyparse()
void yyerror(char *s, ...);

#define HASH_TABLE_SIZE 999 // tamanho da tabela hash 

enum NODE_TYPE{
	NT_DCL 				= 1000, 
	NT_FUNC_CALL 	= 1001, 
	NT_REF,
	PRINT
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
	int int_value;	
	struct AST *function;
	struct SYMBOL_LIST *symbol_list;
};


/**
 * Nó de argumentos de função.
 **/
struct SYMBOL_LIST {
	struct SYMBOL *symbol;
	struct SYMBOL_LIST *next;
};

/**
 * Ponteiro para tabela hash de simbolos.
 */
struct SYMBOL symbol_hash_table[HASH_TABLE_SIZE];

/**
 * Usadado para declaração de variáveis
 */
struct SYMBOL_REF {
	int node_type;
	struct SYMBOL *symbol;
};

/**
 * Struct para chamada de função
 **/
struct FUNC_CALL{ //funcoes usuario
  int node_type; //tipo C
  struct AST *ast; //lista de argumentos
  struct SYMBOL *symbol;
};

/**
 * Struct para numeros iteiros
 */
struct INTCON_NUMBER {
	int node_type;
	int number;
};

struct FLOW {
	int node_type;
	struct AST* cond; //<! condição
	struct AST* then; //<! ramo THEN ou list
	struct AST* el; //<! ramo opcional ELSE
	struct AST* atb;
};
struct SYMASG{
  int nodetype;
  struct SYMBOL *symbol;
  struct AST *valor;
};


typedef struct AST AST;
typedef struct INTCON_NUMBER INTCON_NUMBER;
typedef struct SYMBOL SYMBOL;
typedef struct SYMBOL_LIST SYMBOL_LIST;
typedef struct SYMBOL_REF SYMBOL_REF;
typedef struct FUNC_CALL FUNC_CALL;
typedef struct FLOW FLOW;
typedef struct SYMASG SYMASG;
/**
 * cria um nó do tipo NT_INTCON
 **/
AST *new_number (int number);

/**
 * cria uma AST
 **/
AST *new_ast (int node_type , AST *left , AST *right);

/**
 * Caminha sobre a arvore realizando as operações logicas aritméticas.
 **/
int evaluation(AST* ast);

/**
 * Cria uma nova lista de variáveis e funções.
 *
 **/
SYMBOL_LIST *new_symbol_list(SYMBOL *symbol, SYMBOL_LIST *next);

/**
 * Novo símbolo de referencia, variavel.
 **/
AST* new_ref(SYMBOL *symbol);

/**
 * Chamada para uma função. 
 */
AST* new_call(SYMBOL *symbol, AST* ast);

/**
 *
 */
AST *newasgn(SYMBOL *s , AST *v);

/**
 * Guarda na tabela hash. 
 * Ocorre erro em caso de colisão de mapeamento de nome
 **/
SYMBOL* lookup(char *symbol);

/**
 * Fluxo condicional, laço while, for etc . . .
 */
AST *new_flow(int node_type, AST *cond, AST *tl, AST *tr, AST *atb);


AST *new_flow2(int node_type, AST *assg1, AST *cond, AST *assg2, AST* tl);

// imprime a tabela
void printTable();