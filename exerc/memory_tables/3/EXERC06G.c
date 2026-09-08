/* Ler 18 elementos numéricos reais de um vetor A:
 * Construir um vetor B com os mesmos elementos de A, porém somados por 2. 
 * Montar o sistema de pesquisa para procurar e apresentar os valores armazenados em B.
 * Eduardo OBS: Para contornar o problema do exercício anterior, irei usar a abordagem de pesquisa por índice neste, não por valor.*/
#include <stdio.h>
int main(void){
	float a[18], b[18];
	int indice = 1;
	char opcao = 's';
	
	printf("\n--- Cálculo com Float ---\n");
	for (int i = 0; i < 18; i++){
		printf("Insira o valor %d para A: ", i+1); scanf("%f", &a[i]);
		b[i] = a[i] + 2;
	}
	
	printf("\n--- Pesquisa ---");
	while (opcao == 's' || opcao == 'S'){
		printf("\nDigite o índice que deseja procurar no vetor B: "); scanf("%d", &indice);
	       	if (indice < 1 || indice > 18){
			printf("Posição inválida! Tente algo entre 1 e 18.");
		} else {
			printf("O número na posição %d é %.2f", indice, b[indice-1]); // Truque clássico de subtrair por 1 para acessar o índice real
		}
		printf("\n\n--- CONTINUAR ---\n");
		printf("[S/N]: "); scanf(" %c", &opcao);
	}
	return 0;
}
