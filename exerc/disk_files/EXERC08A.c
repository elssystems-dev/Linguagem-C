/* Ler cinco valores inteiros em um vetor A.
 * Após a leitura, os dados devem ser armazenados em um arquivo binário.
 */

#include <stdio.h>

int main(void){
	int a[5];
	FILE *p;
	
	printf("\n--- Obtenção de Inteiros ---\n");
	for (int i=0; i<5; i++){
		printf("[VALOR %d]: ", i+1); scanf("%d", &a[i]);
		while (getchar() != '\n');
	}

	printf("\n--- Revisão da Lista ---\n");
	for (int i=0; i<5; i++){
		printf("| A[%d] = %d |\n", i, a[i]);
	}

	printf("\nSalvando...\n");
	p = fopen("files/intVector1.dat", "wb");

	if (p == NULL){
		printf("Erro: Não foi possível criar/abrir o arquivo.\n");
		printf("Certifique-se de que a pasta 'files/' existe no diretório atual.\n");
		return 1;
	}

	fwrite(a, sizeof(a), 1, p);

	printf("\nSalvo com êxito!\n");
	fclose(p);

	return 0;
}
