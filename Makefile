# Antes de usar fazer: cp Makefile1 Makefile

wordcount: main.o wcfuncs.o
	gcc main.o wcfuncs.o -o wordcount

main.o: main.c wcfuncs.h
	gcc -Wall -Wextra -Wpedantic -std=c99 -g -c -o main.o main.c

wcfuncs.o: wcfuncs.c wcfuncs.h
	gcc -Wall -Wextra -Wpedantic -std=c99 -g -c -o wcfuncs.o wcfuncs.c

clean:
	rm -f wordcount *.o
