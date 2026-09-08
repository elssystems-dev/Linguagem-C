/* Criar duas matrizes A e B 4x5 (20 elementos) e popular seus índices.
 * Construir matriz C com mesma dimensão que será a soma de elemento a elemento de A e B.
 * Gravar a matriz C em um arquivo binário, lendo os dados e transferindo os valores para uma matriz D que será então apresentada. 
 */

#include <stdio.h>

int main(void){
	int a[4][5], b[4][5]; // Entrada
	int c[4][5]; // Processamento / Gravação
	int d[4][5]; // Saída / Leitura
	
	FILE *p;

	printf("\n--- Leitura de Matrizes 4x5 ---\n");
	printf("Será um processo longo... Acomode-se.\n");
	printf("\n===[MATRIZ A]===\n");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++){
			printf("Digite VALOR %d: ", (i * 5) + j + 1);
			scanf("%d", &a[i][j]);
			while (getchar() != '\n');
		}
	}
	printf("\nConcluído. Iniciando segundo processo...\n");
	printf("\n===[MATRIZ B]===\n");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++){
			printf("Digite VALOR %d: ", (i * 5) + j + 1);
			scanf("%d", &b[i][j]);
			while (getchar() != '\n');
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\nLeitura finalizada. Salvando dados...");
	p = fopen("files/intMatrix1.dat", "wb+");

	if (p == NULL) {
		printf("\nErro. Verifique a pasta 'files' existe no diretório atual.\n");
		return 1;
	}

	fwrite(c, sizeof(c), 1, p);
	rewind(p);
	fread(d, sizeof(d), 1, p);

	printf("\nSalvamento completo. Apresentando dados de soma:\n\n");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++){
			printf("A[%d][%d] + B[%d][%d] = %d\n", i, j, i, j, d[i][j]);
		}
	}
	
	fclose(p);
	return 0;
}
