/* Ler 16 elementos numéricos reais para uma matriz A que seja 4x4, apresentando somente os valores existentes na diagonal principal da matriz A*/
#include <stdio.h>
/* Pensamentos de Eduardo: 
 * Por se tratar da diagonal principal, a ideia é exibir o a primeira coluna da primeira linha, a segunda coluna da segunda linha...
 * Ok, este é o padrão. Exibir o valor de A sempre que o índice i e j forem iguais.
 * OBS: Por i e j SEREM iguais, no laço de exibição não será necessário aninhar j*/
int main(void){
	float a[4][4];
	printf("\n--- Apresenta diagonal ---\n");
	for (int i = 0; i < 4; i++){
		for (int j= 0 ; j < 4; j++){
			printf("Digite o valor [%d][%d] de A: ", i, j); scanf("%f", &a[i][j]);
		}
	}

	printf("\n--- Exibição da Diagonal ---\n");
	for (int i = 0; i < 4; i++){
		printf("Diagonal detectada: A[%d][%d].\n", i, i);
		printf("Seu respectivo valor é: %.2f", a[i][i]);
	}

	return 0;
}
