/* Grava palavra no arquivo texto */

#include <stdio.h>
int main(void){
	FILE *pont_arq;
	char palavra[20];
	pont_arq = fopen("../text/arqTxt01.txt", "w");

	printf("\n\nEscreva uma palavra: ");
	scanf("%s", palavra);

	fprintf(pont_arq, "%s", palavra);
	fclose(pont_arq);
	return 0;
}
