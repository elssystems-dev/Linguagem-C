/* Ler nove elementos numéricos reais para uma matriz A de 3x3. Apresentar os valores da diagonal principal multiplicados por 2 e os demais por 3.*/
#include <stdio.h>
int main(void){
	float a[3][3];
	printf("\n--- Cálculo c/ Diagonal + Restante ---\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Insira valor para a[%d][%d]: ", i, j); scanf("%f", &a[i][j]);
		}
	}

	printf("\n--- Exibição dos dados ---\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (i == j) printf("[DIAGONAL] a[%d][%d]: %.2f\n", i, j, a[i][j] * 2);
			else printf("[RESTANTE] a[%d][%d]: %.2f\n", i, j, a[i][j] * 3);
		}
		printf("---\n");
	}

	return 0;
}
