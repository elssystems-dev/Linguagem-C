/* Ler dois vetores A e B com 6 elementos numéricos reais. Construir uma matriz C com 6 linhas.
 * A primeira coluna de C deve ser formada pelos elementos de A multiplicados por 2.
 * A segunda coluna de C deve ser formada pelos elementos de B subtraídos por 5.
*/
#include <stdio.h>
int main(void){
	float a[6], b[6], c[6][2];

	printf("\n--- Entrada de Dados ---\n");
	for (int i = 0; i < 6; i++){
		printf("Insira a[%d]: ", i); scanf("%f", &a[i]);
		printf("Insira b[%d]: ", i); scanf("%f", &b[i]);
		c[i][0] = a[i] * 2;
		c[i][1] = b[i] - 5;
		printf("---\n");
	}

	printf("\n--- Resultados ---\n");
	for (int i = 0; i < 6; i++){
		printf("[LINHA %d]: %.2f | %.2f\n",i+1, c[i][0], c[i][1]);
	}

	return 0;
}
