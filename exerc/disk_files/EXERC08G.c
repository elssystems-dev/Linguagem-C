/* Obter oito valores reais para os vetores A e B.
 * Os dados de A devem ser gravados em um arquivo chamado arq1.dbc
 * Os dados de B devem ser gravados em um arquivo chamado arq2.dbc
 * Perceba que é necessário trabalhar com os dois simultâneamente 
 */

#include <stdio.h>

int main(void){
	// Para manipular arquivos simultâneamente, é necessário criar novos ponteiros.
	float a[8], b[8];
	FILE *p1, *p2;

	p1 = fopen("files/arq1.dbc", "wb");
	p2 = fopen("files/arq2.dbc", "wb");

	if (p1 == NULL || p2 == NULL){
		printf("Erro: Verifique se 'files/' existe.");
		return 1;
	}
	
	printf("\n--- Gravação de Dados ---\n");
	for (int i = 0; i < 8; i++){
		printf("[Vetor A] (%d) - Insira valor: ", i+1);
		scanf("%f", &a[i]); while(getchar() != '\n');
		printf("Inserindo registro...\n\n");
		fwrite(&a[i], sizeof(float), 1, p1);

		printf("[Vetor B] (%d) - Insira valor: ", i+1);
		scanf("%f", &b[i]); while(getchar() != '\n');
		printf("Inserindo registro...\n\n");
		fwrite(&b[i], sizeof(float), 1, p2);
	}

	printf("Sucesso!\n");
	fclose(p1); fclose(p2);
	return 0;
}
