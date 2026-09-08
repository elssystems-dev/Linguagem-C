/* Leitura de um arquivo texto */

#include <stdio.h>

int main(void){
	FILE *pont_arq;
	char palavra[20];
	pont_arq = fopen("../text/arqTxt01.txt", "r");
	fscanf(pont_arq, "%s", palavra);
	printf("Palavra = %s\n", palavra);
	fclose(pont_arq);
	return 0;
}
