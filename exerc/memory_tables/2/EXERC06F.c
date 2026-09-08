/* Ler duas matrizes A e B com valores reais com quatro linhas e quatro colunas cada. Construir uma matriz C com mesmo tamanho, formada pela subtração dos elementos da A pela B.*/
#include <stdio.h>
int main(void){
	float a[4][4], b[4][4], c[4][4];
	printf("\n--- Subtração entre coordenadas iguais ---\n");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			printf("Digite a coordenada [%d][%d] de A: ", i, j); scanf("%f", &a[i][j]);
			printf("Digite a coordenada [%d][%d] de B: ", i, j); scanf("%f", &b[i][j]);
			c[i][j] = a[i][j] - b[i][j];
		}
		printf("\n---\n");
	}

	printf("\n--- Resultados ---\n");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			printf("C[%d][%d] = %.2f\n", i, j, c[i][j]);
		}
	}
	return 0;
}
