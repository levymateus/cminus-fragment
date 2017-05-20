cminus: cminus.l cminus.y cminus.h
			bison -d cminus.y
			flex -o cminus.lex.c cminus.l
			gcc -o cminus cminus.c cminus.tab.c cminus.lex.c -lfl -lm -w
			@echo Parser pronto ...
