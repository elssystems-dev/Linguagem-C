/* Cria e grava frases */

#include <stdio.h>

int main(void){
	FILE *pont_arq;
	char resp, frase[81];
	resp = 's';
	pont_arq = fopen("../text/frase2.txt", "w");
	while (resp == 's' || resp == 'S'){
		printf("\n\nDigite uma frase qualquer\n\n");
		fgets(frase, 81, stdin);
		fputs(frase, pont_arq);
		printf("\nDeseja continuar (S/N)? ");
		scanf(" %c", &resp);
	}
	fclose(pont_arq);
	return 0;
}
