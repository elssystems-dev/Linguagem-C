/* Ler um vetor A com 15 elementos numéricos inteiros. Construir uma matriz B realizando o cálculo fatorial dos elementos de A, e apresentar os valores ordenados de forma crescente.*/
#include <stdio.h>
int main(void){
	int a[15];
	long long b[15], aux, temp = 1;

	printf("\n--- Fatoriais Ordenados ---\n");
	for (int i = 0; i < 15; i++){
		printf("[VALOR %d] Digite: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < 15; i++){
		for (int j = a[i]; j > 1; j--){
			temp *= j;
		}
		b[i] = temp;
		temp = 1;
	}

	printf("\n--- Ordenação dos Resultados ---\n");
	for (int i = 0; i < 14; i++){
		for (int j = i+1; j < 15; j++){
			if (b[i] > b[j]){
				aux = b[i];
				b[i] = b[j];
				b[j] = aux;
			}
		}
	}
	for (int i = 0; i < 15; i++){
		printf("[VALOR ORDENADO %d]: %lld\n", i+1, b[i]);
	}
	return 0;
}
