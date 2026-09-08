/* Dados pessoais com fgets() e puts() */
#include <stdio.h>
int main(void){
	char nome[20], sbNome[20];
	puts("Informe seu nome ........:"); fgets(nome, 20, stdin);
	puts("Informe seu sobrenome ...:"); fgets(sbNome, 20, stdin);
	printf("Seja bem vindo, %s %s\n\n", nome, sbNome);
	return 0;
}
/* o puts() é um complemento da fgets, permitindo a impressão de um único string por vez, além de pular sozinha uma linha após a impressão de um string.*/

