/* Ler 12 elementos do tipo string para um vetor A que representem nomes. Colocar os nomes em ordem decrescentes e apresentá-los de forma ordenada.*/
#include <stdio.h>
#include <string.h>
int main(void){
	char nomes[12][40];
	char temp[40];

	printf("\n--- Inserção de Nomes ---\n");
	for (int i = 0; i < 12; i++){
		printf("Digite o %do. nome: ", i+1); fgets(nomes[i], 40, stdin);
	}

	/* Ordenação dos dados */
	for (int i = 0; i < 11; i++){
		for (int j = i+1; j < 12; j++){
			if (strcmp(nomes[i], nomes[j]) < 0) {
				strcpy(temp, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], temp);
			}
		}
	}

	printf("\n--- Ordem Decrescente ---\n");
	for (int i = 0; i < 12; i++){
		printf("Nome [%d]: %s", i+1, nomes[i]);
	}
	return 0;
}
