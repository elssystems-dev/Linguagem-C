/* Leitura, ordenação e escrita */
#include <stdio.h>
#include <string.h>
int main(void){
	char nome[10][40], x[40];
	printf("Listagem de nomes\n\n");

	/* Entrada de dados */
	for (int i = 0; i < 10; i++){
		printf("Digite o %2do. nome: ", i+1);
		fgets(nome[i], 40, stdin);
	}

	/* Ordenação de Strings */
	for (int i = 0; i < 9; i++){
		for (int j = i + 1; j < 10; j++) {
			if (strcmp(nome[i], nome[j]) > 0){
				strcpy(x, nome[i]);
				strcpy(nome[i], nome[j]);
				strcpy(nome[j], x);
			}
		}
	}

	/* Apresentação dos nomes */

	printf("\n");
	for (int i = 0; i < 10; i++){
		printf("Nome %2d: %s", i+1, nome[i]);
	}

	printf("\n");

	return 0;
}
