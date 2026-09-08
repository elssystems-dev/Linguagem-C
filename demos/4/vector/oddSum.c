/* Soma os elementos ímpares de um vetor */
#include <stdio.h>
int main(void){
	int a[5];
	int i, soma = 0;
	printf("\nSomatório de Elementos Ímpares\n\n");

       	/* Entrada de dados */
	for (int i = 0; i <= 4; i++) {
		printf("Informe um valor para o elemento nr. %2d: ", i);
		scanf("%d", &a[i]);
	}	
	
	/* Processamento elemento ímpar */
	for (int i = 0; i <= 4; i++) {
		if (a[i] % 2 != 0){
			soma += a[i];
		}
	}

	/* Saída de dados */
	printf("\nA soma dos elementos ímpares equivale a: %4d\n\n", soma);
	return 0;
}
