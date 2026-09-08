/* Escrever um programa que seja capaz de ler os cinco valores armazenados anteriormente.
 * Depois de obtidos na memória RAM e transferidos em outro vetor, realize a soma dos elementos de índice ímpar (1, 3)*/

#include <stdio.h>

int main(void){
	int a[5], soma = 0;
	FILE *p;

	printf("\n--- Leitura de Vetor ---\n");

	printf("Tentando ler arquivo...\n");
	p = fopen("files/intVector1.dat", "rb");

	if (p == NULL){
		printf("Erro: Impossível encontrar o arquivo.\n");
		printf("Rode o executável no mesmo diretório do código fonte!\n");
		return 1;
	}

	fread(a, sizeof(a), 1, p);
	printf("\nLeitura realizada com sucesso!");

	printf("\n\n--- Soma dos índices ímpares ---\n");
	for (int i = 0; i < 5; i++){
		if ((i % 2) != 0) soma += a[i]; 
	}

	printf("A soma dos números resultou em: %d\n", soma);
	fclose(p);

	return 0;
}
