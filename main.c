#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wcfuncs.h"

int lerPalavra(FILE *ficheiro){
	static char palavra [MAX];
	fscanf(ficheiro, "%s", palavra);
	puts(palavra);
	return 0;
}

int main (int argc, char **argv)
{
	FILE *ficheiro;
	*f = fopen("palavras.txt", 'r');
	lerPalavra(ficheiro);
	for (int i = 0; i < argc; i++)
	{
		printf("Parametro %d: %s\n", i, argv[i]);
	}



        return 0;
}

