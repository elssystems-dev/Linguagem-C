/* Ler dois vetores: A com 5 elementos e B com 10 elementos do tipo int, e uma C com 15 elementos sendo a junção dos outros dois vetores. */
#include <stdio.h>
int main(void){
	int a[5], b[10], c[15];
	int aux;

	printf("\n\nJunção de Vetores com tamanhos diferentes\n\n");

	for (int i = 0; i < 5; i++){
		printf("Insira o valor para A[%d] e C[%d]: ", i, i);
		scanf("%d", &a[i]);
		c[i] = a[i];
	}

	for (int i = 0; i < 10; i++){
		printf("Insira o valor de B[%d] e C[%d]: ", i, i+5);
		scanf("%d", &b[i]);
		c[i+5] = b[i];
	}

	printf("\n--- Resultados ---\n");

	for (int i = 0; i < 15; i++) printf("C[%i] = %d\n", i, c[i]);

	return 0;
}
