/*
 * Declaracoes pra uma calculadora avancada
 */

/* interface com o lexer */
extern int yylineno;
extern void yyrestart();
extern int yyparse();
extern int yylex(void);
extern FILE * yyin;
void yyerror(char *s, ...);

/* tabela de simbolos */
struct symbol{ //um nome de variavel 
  char *name; 
  double value;
  struct ast *func; //stmt para funcao
  struct symlist *syms; //lista de argumentos
};

/*tabela de simbolos de tamanho fixo*/
#define NHASH 9997
struct symbol symtab[NHASH];

struct symbol *lookup(char *);

/*lista de simbolos, para uma lista de argumentos */
struct symlist{
  struct symbol *sym;
  struct symlist *next;
};

struct symlist *newsymlist(struct symbol *sym, struct symlist *next);
void symlistfree(struct symlist *sl);

/* tipos de nos
∗ + − /
* 0−7 operadores de comparacao , 04 igual , 02 menor que , 01 maior que
* L expressao ou lista de comandos
* I comando IF
* W comando WHILE
* N symbol de referencia
* = atribuicao
* S lista de simbolos
* F chamada de funcao pre−definida
* C chamada de funcao def. p/ usuario
*/

// funcoes definidas
enum bifs{ B_sqrt, B_exp, B_log, B_print };

/* nos na AST */
/* todos tem o "nodetype inicial em comum */

struct ast{
  int nodetype;
  struct ast *l;
  struct ast *r;
};

struct fncall{ //funcoes pre-definidas
  int nodetype; //tipo F
  struct ast *l;
  enum bifs functype;
};

struct ufncall{ //funcoes usuario
  int nodetype; //tipo C
  struct ast *l; //lista de argumentos
  struct symbol *s;
};

struct flow{
  int nodetype;
  struct ast *cond; //condicao
  struct ast *tl; //ramo then ou list do
  struct ast *el; // ramo opcional else
};

struct numval{
  int nodetype;
  double number;
};

struct symref{
  int nodetype;
  struct symbol *s;
};

struct symasgn{
  int nodetype;
  struct symbol *s;
  struct ast *v;
};

/* construcao da AST */

struct ast *newast(int nodetype, struct ast *l, struct ast *r);
struct ast *newcmp(int cmptype, struct ast *l, struct ast *r);
struct ast *newfunc(int functype, struct ast *l);
struct ast *newcall(struct symbol *s, struct ast *l);
struct ast *newref(struct symbol *s);
struct ast *newasgn(struct symbol *s, struct ast *v);
struct ast *newnum(double d);
struct ast *newflow(int nodetype, struct ast *cond, struct ast *tl, struct ast *tr);

//definicao de uma funcao
void dodef(struct symbol *name, struct symlist *syms, struct ast *stmts);

//avaliacao
double eval(struct ast *);

//deletar e liberar
void treefree(struct ast *);

