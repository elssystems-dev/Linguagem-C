#include <stdio.h>
int main (void){
	int a[10], b[10];
	printf("\n\nCálculo com checagem do índice do vetor\n\n");

	/* Entrada de dados */
	for (int i = 0; i <= 9; i++) {
		printf("Informe um valor para o elemento nr. %2d: ", i); scanf("%d", &a[i]);
	}

	/* Processamento par ou ímpar */
	for (int i = 0; i <= 9; i++) {
		if (i % 2 == 0) {
			b[i] = a[i] * 5;
		} else {
			b[i] = a[i] + 5;
		}
	}

	/* Apresentação dos vetores */
	for (int i = 0; i <= 9; i++){
		printf("\na[%2d] = %2d | b[%2d] = %2d", i + 1, a[i], i + 1, b[i]);
	}
	printf("\n");
	return 0;
}
