/* Ler 20 elementos numéricos inteiros para um vetor a e construir um vetor b com valores espelhados.
 * Ex: A[0] = b[19], b[18] = a[1]*/
#include <stdio.h>
int main(void){
	int a[20], b[20];

	printf("\n--- Espelhando vetores ---\n");

	for (int i = 0; i < 20; i++) {
		printf("Insira A[%2d]: ", i);
		scanf("%d", &a[i]);
		b[(20 - 1) - i] = a[i];
	}

	printf("\n--- Resultado do Espelhamento ---\n\n");
	for (int i = 0; i < 20; i++){
		printf("A[%2d] = %6d | B[%2d] = %6d\n", i, a[i], i, b[i]);
	}
	return 0;
}
