/* Ler oito elementos numéricos inteiros em um vetor a. Construir um vetor b com os elementos da a multiplicados por 3. */
#include <stdio.h>
int main(void){
	int a[8], b[8];
	printf("\n");
	for (int i = 0; i < 8; i++){
		printf("Escreva um valor para o elemento [%d] de A: ", i); 
		scanf("%d", &a[i]);
		b[i] = a[i] * 3;
	}

	printf("\nElementos de B\n");

	for (int i = 0; i < 8; i++){
		printf("B[%d] = %d\n", i, b[i]);
	}
	return 0;
}
