/* Escreve números ordenados */
#include <stdio.h>
int main(void){
	int numeros[5], temp;
	
	/* Entrada de dados */
	for (int i = 0; i < 5; i++){
		printf("Informe o %do. valor: ", i+1);
		scanf("%d", &numeros[i]);
	}

	/* Classificação */
	for (int i = 0; i < 4; i++){ // Percorre todos os números, exceto o último
		for (int j = i + 1; j < 5; j++){
			if (numeros[i] > numeros[j]){
				temp = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = temp;	
			}
		}
	}

	/* Saída de Dados */

	printf("\n\n");
	for (int i = 0; i < 5; i++){
		printf("Agora o %do. valor é: %3d\n", i+1, numeros[i]);
	}
	return 0;
}
