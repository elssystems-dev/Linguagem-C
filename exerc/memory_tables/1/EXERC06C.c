/* Ler um vetor a com 15 elementos numéricos inteiros. Construir um vetor b de mesmo tipo, sendo cada elemento de b a fatorial do elemento de A. */
#include <stdio.h>
int main(void){
	int a[15];
	long long b[15];
	long long fatorial = 1;

	printf("\n");
	
	for (int i = 0; i < 15; i++){
		printf("Defina o elemento [%d] para A: ", i);
		scanf("%d", &a[i]);
		for (int j = a[i]; j > 1; j--) {
			fatorial *= j;
		}
		b[i] = fatorial;
		fatorial = 1;
	}
	
	printf("\n");

	for (int i = 0; i < 15; i++) {
		printf("O elemento [%d] de B equivale a %lld\n", i, b[i]);
	}

	return 0;
}
