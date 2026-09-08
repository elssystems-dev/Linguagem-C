/* Ler duas matrizes a e b com cinco linhas e três colunas cada uma ([5][3]). Construir uma matriz c de mesma dimensão, a qual é formada pela soma dos elementos a e b. */
#include <stdio.h>
int main(void){
	int a[5][3], b[5][3], c[5][3];
	printf("\n--- Soma com Matrizes ---\n");
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 3; j++){
			printf("Insira o valor para A[%d][%d]: ", i, j); scanf("%d", &a[i][j]);
			printf("Insira o valor para B[%d][%d]: ", i, j); scanf("%d", &b[i][j]);
			c[i][j] = a[i][j] + b[i][j];
		}
		printf("\n");
	}
	
	printf("\n--- Resultados ---\n");
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 3; j++){
			printf("Resultado de c[%d][%d]: %d\n", i, j, c[i][j]);
		}
	}
	return 0;
}
