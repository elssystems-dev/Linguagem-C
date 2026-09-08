/* Ler 15 elementos inteiros de um vetor a e construir b como o quadrado dos elementos do anterior */

#include <stdio.h>

int main(void){
	long long a[15]; // O operador menor também necessita ser do tipo 'long long' para que o cálculo seja forçado a ser em 64 bits.
	long long b[15];
	printf("\n--- Eleva ao Quadrado ---\n");	

	for (int i = 0; i < 15; i++){
		printf("Insira o valor ...%2d: ", i+1);
		scanf("%d", &a[i]);
		b[i] = a[i] * a[i];
	}
	
	printf("\n--- Resultados ---\n");
	for (int i = 0; i < 15; i++) printf("\nB[%d] = %lld", i, b[i]);
	printf("\n");

	return 0;
}
