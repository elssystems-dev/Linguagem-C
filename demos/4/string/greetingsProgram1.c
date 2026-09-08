/* Pede dados pessoais */
#include <stdio.h>
int main(void) {
	char nome[10], sbNome[15];
	printf("Informe seu nome .........: "); scanf("%s", nome);
	printf("Informe seu sobrenome ....: "); scanf("%s", sbNome);
	printf("Seja bem vindo, %s %s\n\n", nome, sbNome);
	return 0;
}
