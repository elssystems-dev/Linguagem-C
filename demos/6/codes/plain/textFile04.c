/* Cria e grava frase caractere a caractere */

#include <stdio.h>

int main(void){
	FILE *pont_arq;
	char letra;
	pont_arq = fopen("../text/frase.txt", "w");
	printf("\n\nEscreva a frase desejada\n\n");

	while ((letra = getchar()) != '\n')
	       putc(letra, pont_arq);
	fclose(pont_arq);	
	return 0;
}
