/* Ler 20 elementos numéricos reais para uma matriz A, considerando que esta matriz tenha o tamanho de quatro linhas por cinco colunas.*/
#include <stdio.h>
int main(void){
	float a[4][5];
	printf("\n--- Leitura padrão de Matriz ---\n");
	for (int i = 0; i < 4; i++){ // Em C, os valores fisicamente mais próximos um do outro na memória são as colunas da matriz.
		for (int j = 0; j < 5; j++){ // Dessa forma, percorremos primeiro as colunas de cada linha antes de passar para a próxima.
			printf("Insira o valor para a %da. coluna da %da. linha: ", j+1, i+1);
			scanf("%d", &a[i][j]);
		}
		printf("\n------\n");
	}

	printf("\n--- Saída de Dados ---\n");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++){
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}	
	}
	return 0;
}
