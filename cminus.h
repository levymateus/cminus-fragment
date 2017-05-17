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
