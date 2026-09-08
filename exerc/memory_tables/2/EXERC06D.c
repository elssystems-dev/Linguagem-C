/* Ler um vetor A com cinco elementos numéricos inteiros. Construir uma matriz B de cinco linhas e três colunas. 
 * A primeira coluna de B será formada pelos elementos da matriz A somados com 5.
 * A segunda coluna pelo valor do cálculo da fatorial de cada elemento correspondente da matriz A
 * A terceira coluna pelos quadrados dos elementos correspondentes da matriz A.
*/
#include <stdio.h>
int main(void){
	long long a[5], b[5][3]; // Cálculos de fatorial e quadrado podem ser massivos.
	
	printf("\n--- Soma 5, Calcula Fatorial e Eleva ao Quadrado ---\n");
	for (int i = 0; i < 5; i++){
		printf("Digite o elemento [%d]: ", i+1); scanf("%lld", &a[i]);

		// Dados simples (Sem processamento profundo)
		b[i][0] = a[i] + 5;
		b[i][2] = a[i] * a[i];

		// Processamento do Fatorial
		long long temp = 1; // Para auxiliar o cálculo de fatorial (deve ser resetado a cada iteração)

		for (long long j = a[i]; j > 1; j--){
			temp *= j;
		}
		b[i][1] = temp;
	}

	printf("\n--- Saída de Dados ---\n");

	for (int i = 0; i < 5; i++){
		printf("[LINHA %d] Resultados: %lld | %lld | %lld\n", i+1, b[i][0], b[i][1], b[i][2]);
	}

	return 0;
}
