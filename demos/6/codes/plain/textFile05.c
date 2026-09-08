/* Le frase caractere a caractere */
#include <stdio.h>
int main(void){
	FILE *pont_arq;
	char letra;
	pont_arq = fopen("../text/frase.txt", "r");
 	printf("\n\nFrase = ");
 	while((letra = fgetc(pont_arq)) != EOF) printf("%c", letra);
	printf("\n");
 	fclose(pont_arq);
 	return 0;
}
