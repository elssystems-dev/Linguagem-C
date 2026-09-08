/* Pede dados pessoais - fgets() */
#include <stdio.h>
int main(void){
	char nome[20], sbNome[20];
	printf("Informe seu nome ..........: "); fgets(nome, 20, stdin);
	printf("Informe seu sobrenome .....: "); fgets(sbNome, 20, stdin);
	printf("Seja bem vindo, %s %s\n\n", nome, sbNome);
	return 0;
}
/* Problema: fgets() também captura o \n do enter, fazendo a linha de nome e sobrenome se separarem. */
