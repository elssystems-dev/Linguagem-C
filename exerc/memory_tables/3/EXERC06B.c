/* Ler oito elementos numéricos inteiros para um vetor A. Construir um vetor B com os valores de A multiplicados por 5. Apresentar B em ordem crescente. 
 * Após a apresentação de todos de B, disponibilizar um recurso de pesquisa para que o usuário possa pesquisar os elementos de B*/
#include <stdio.h>
int main(void){
	int a[8], b[8];
	int temp, numPesq;
	char opcao = 'S';
	int achou = 0;

	printf("\n--- Processamento e Pesquisa Numérica ---\n");
	for (int i = 0; i < 8; i++){
		printf("Digite a[%d]: ", i); scanf("%d", &a[i]);
		b[i] = a[i] * 5;
	}
	printf("\n--- Multiplicados por 5 (p/ Crescente) ---\n");
	for (int i = 0; i < 7; i++){
		for (int j = i; j < 8; j++){
			if (b[i] > b[j]){
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for (int i = 0; i < 8; i++){
		printf("B[%d] = %d\n", i, b[i]);
	}
	printf("\n--- Sistema de Pesquisa ---");
	while (opcao == 'S' || opcao == 's'){
		printf("\nDigite o número que deseja pesquisar: "); scanf("%d", &numPesq);
		for (int i = 0; i < 8; i++){
			if (numPesq > b[7]) break;
			if (numPesq == b[i]) {
				printf("O número %d está na posição %d de B\n\n", b[i], i);
				achou = 1;
				break;
			}
		}
		if (!achou) printf("O valor não foi encontrado...\n\n");
		printf("Deseja continuar este processo? [S] - Sim || [N] - Não\nR: ");
		scanf(" %c", &opcao); 
	}
	return 0;
}
