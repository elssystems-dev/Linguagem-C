/* Ler duas matrizes A e B cada uma com uma dimensão para 7 linhas de números inteiros. Construir uma matriz c de sete linhas com duas dimensões. A primeira coluna deve ser formada pelos elementos de A e a segunda coluna deve ser formada pelos elementos de B.*/
#include <stdio.h>
int main(void){
	int a[7], b[7], c[7][2];

	printf("\n--- Merge de Arrays ---\n");
	for (int i = 0; i < 7; i++){
		printf("Insira os valor de a[%d]: ", i); scanf("%d", &a[i]);
		c[i][0] = a[i];
	 					
	}

	printf("\n");

	for (int i = 0; i < 7; i++){
		printf("Insira os valor de b[%d]: ", i); scanf("%d", &b[i]);
		c[i][1] = b[i];
	}

	printf("\n--- Resultados ---\n");
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 2; j++){
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}
	 					
	return 0;
}
