/* Ler 20 elementos numéricos reais para um vetor A:
 * Construir um vetor B com os elementos de A, porém elevados ao cubo.
 * Apresentar os valores de B por meio de saída controlada (pesquisa)
 * Eduardo OBS: O exercício original pedia pelo tipo float, mas para lidar com comparação de igualdade entre esses valores é desnecessariamente complicado sem math.h*/
#include <stdio.h>
int main(void){
	int a[20], b[20];
	int numeroPesquisa;
	printf("\n--- Cálculo do Cubo ---\n");
	for (int i = 0; i < 20; i++){
		printf("[VETOR A] - Digite o valor %d: ", i); scanf("%d", &a[i]);
		b[i] = a[i] * a[i] * a[i];
	}
	
	printf("\n--- Sistema de Pesquisa ---\n");
	char opcao = 'S';
	int achou = 0, indice;
	while (opcao == 'S' || opcao == 's'){
		printf("Digite o elemento que deseja pesquisar: "); scanf("%d", &numeroPesquisa);
		for (int i = 0; i < 20; i++){
			if (numeroPesquisa == b[i]){
				achou = 1;
				indice = i;
				break;
			}
		}
		if (achou) printf("\nO número %d foi encontrado na posição %d de B.\n", numeroPesquisa, indice);
		else printf("O número pesquisado não foi encontrado...\n");
		achou = 0;

		printf("\n--- CONTINUAR ---\n");
		printf("[S] - Sim | [N] - Não\n"); 
		printf("R: "); scanf(" %c", &opcao);
	}
	return 0;
}
