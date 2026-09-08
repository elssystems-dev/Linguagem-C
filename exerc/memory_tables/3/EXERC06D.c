/* Ler um vetor A com 12 elementos numéricos reais e colocar os elementos em ordem decrescente.
 * Depos ler um vetor B com 12 elementos numéricos inteiros e colocar os elementos em ordem decrescente.
 * Construir um vetor C, sendo cada elemento deste a soma dos de A e B. Colocar em ordem crescente o vetor C.*/
#include <stdio.h>
int main(void){
	float a[12], c[12], auxFloat;
	int b[12], auxInt;
	
	printf("\n--- Float + Int - Ordenados ---\n");
	for (int i = 0; i < 12; i++){
		printf("[FLOAT %d] - Insira valor para A: ", i+1); scanf("%f", &a[i]);
		printf("[INT %d] - Insira valor para B: ", i+1); scanf("%d", &b[i]);
		printf("---\n");
	}
	
	printf("\n[!] Ordenando A e B decrescentemente...\n");
	for (int i = 0; i < 11; i++){
		for (int j = i+1; j < 12; j++){
			if (a[i] < a[j]){
				auxFloat = a[i];
				a[i] = a[j];
				a[j] = auxFloat;
			}
			if (b[i] < b[j]){
				auxInt = b[i];
				b[i] = b[j];
				b[j] = auxInt;
			}
		}
	}

	printf("\n--- Apresentando C ---\n");
	for (int i = 0; i < 12; i++) c[i] = a[i] + b[i];
       	for (int i = 0; i < 11; i++){
		for (int j = i+1; j < 12; j++){
			if (c[i] > c[j]){
				auxFloat = c[i];
				c[i] = c[j];
				c[j] = auxFloat;
			}			
		}
	}
	for (int i = 0; i < 12; i++) printf("[VETOR C] - Número %d: %.2f\n", i+1, c[i]);

	return 0;
}
