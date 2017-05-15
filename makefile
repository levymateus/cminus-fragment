cminus: cminus.l cminus.y cminus.h cminus.c
			bison -d cminus.y
			flex -o cminus.lex.c cminus.l
			gcc -o cminus cminus.tab.c cminus.lex.c cminus.c -lfl -lm
			@echo Parser pronto ...
