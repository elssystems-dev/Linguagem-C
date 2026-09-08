/* Pesquisa 2 */
#include <stdio.h>
int main(void){
	int numeros[5], i, acha, pesq;
	char resp;
	printf("\nPesquisa sequêncial de números\n\n");

	/* Entrada de Dados */
	for (i = 0; i < 5; i++){
		printf("Informe o %do. número: ", i+1);
		scanf("%d", &numeros[i]);
	}

	/* Processamento da pesquisa enquanto resp = 'S' */
	resp = 'S';
	while (resp == 'S' || resp == 's'){
		printf("\nEntre o número a ser pesquisado: ");
		scanf("%d", &pesq);
		i = 0;
		acha = 0;
		while (i < 5 && acha == 0){
			if (pesq == numeros[i]){
				acha = 1;
			} else {
				i++;
			}
		}
		if (acha == 1) {
			printf("%d foi localizado na posição %d", pesq, i+1);
		} else {
			printf("%d não foi localizado", pesq);
		}
		printf("\n\nContinua? [S] - Sim | [N] - Não + <Enter>: ");

		while (getchar() != '\n'); // Limpa o \n que sobrou do scanf anterior
		resp = getchar();
		while (getchar() != '\n'); // Limpa o \n após ler a resposta
		
	}
	return 0;
}
