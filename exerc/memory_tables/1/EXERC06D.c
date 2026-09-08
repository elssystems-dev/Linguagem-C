/* Ler dois vetores A e B com 20 elementos numéricos inteiros, sendo cada elemento de C a subtração dos elementos de A e B. */
#include <stdio.h>
int main(void){
	int a[20], b[20], c[20];

	printf("\n\nSubtração entre vetores\nSubtraia o vetor A com B");
	for (int i = 0; i < 20; i++){
		printf("\nDigite o valor %d de A: ", i); scanf("%d", &a[i]);
		printf("Digite o valor %d de B: ", i); scanf("%d", &b[i]);
		c[i] = a[i] - b[i];
	}
	printf("\n-------------------\n");

	for (int i = 0; i < 20; i++){
		printf("A subtração entre os elementos [%d] é %d\n", i, c[i]);
	}

	return 0;
}
