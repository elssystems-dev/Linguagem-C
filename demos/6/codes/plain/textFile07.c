/* Apresenta frases */

#include <stdio.h>

int main(void){
	FILE *pont_arq;
	char frase[81];
	pont_arq = fopen("../text/frase2.txt", "r");
	while (fgets(frase, 80, pont_arq) != NULL)
		printf("%s", frase);
	fclose(pont_arq);
	return 0;
}
