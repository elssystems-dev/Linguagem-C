/* Criar um programa que leia arq1.dbc e arq2.dbc e transferir, respectivamente, seus oito elementos para os vetores X e Y. 
 * Construir um vetor Z que será a soma de X e Y. 
 * Apresentar os dados de todos os vetores.
*/

#include <stdio.h>

int main(void){
	float x[8], y[8], z[8];
	FILE *p1, *p2;

	printf("\n=== Extração de Dados Float 2.0 ===\n");
	p1 = fopen("files/arq1.dbc", "rb");
	p2 = fopen("files/arq2.dbc", "rb");

	if (p1 == NULL || p2 == NULL ){
		printf("\nErro. 'files/' pode não existir no diretório atual.\n");
		return 1;
	}

	fread(x, sizeof(x), 1, p1); // arq1.dbc
	fread(y, sizeof(y), 1, p2); // arq2.dbc
	printf("Carregamento concluído. Processando novo vetor...\n\n");
	
	printf("___________________________________________");
	for (int i = 0; i < 8; i++) {
		z[i] = x[i] + y[i];
		printf("\n| [%d] | X = %5.2f | Y = %5.2f | Z = %5.2f |", i, x[i], y[i], z[i]);
	}
	printf("\n-------------------------------------------\n");

	fclose(p1); fclose(p2);
	return 0;
}
