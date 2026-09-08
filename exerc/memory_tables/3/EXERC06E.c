/* Ler dois vetores para elementos string:
 * O vetor A deve possuir 12 nomes femininos.
 * O vetor B deve possuir 11 nomes masculinos.
 * Construir um vetor C, sendo este a junção dos outros vetores, armazenando então 23 elementos. Apresentar em ordem crescente.*/
#include <stdio.h>
#include <string.h>
int main(void){
	char masc[11][40], fem[12][40], todos[23][40], aux[40];
	printf("\n--- Exibição de nomes ---\n");
	for (int i = 0; i < 11; i++){
		printf("[MASCULINO]: Digite o nome [%d] da lista: ", i+1); fgets(masc[i], 40, stdin);
		masc[i][strcspn(masc[i], "\n")] = '\0';
	}
	printf("\n---\n");
	for (int i = 0; i < 12; i++){
		printf("[FEMININO]: Digite o nome [%d] da lista: ", i+1); fgets(fem[i], 40, stdin);
		fem[i][strcspn(fem[i], "\n")] = '\0';
	}

	for (int i = 0; i < 11; i++){
		strcpy(todos[i], masc[i]);
	}

	for (int i = 0; i < 12; i++){
		strcpy(todos[i+11], fem[i]); 
	} 

	for (int i = 0; i < 22; i++){
		for (int j = i+1; j < 23; j++){
			if (strcmp(todos[i], todos[j]) > 0) {
				strcpy(aux, todos[i]);
				strcpy(todos[i], todos[j]);
				strcpy(todos[j], aux);
			}
		}
	}
	
	printf("\n--- Ordenação dos nomes ---\n");
	for (int i = 0; i < 23; i++){
		printf("[NOME %d]: %s\n", i+1, todos[i]); 
	}
	
	return 0;
}
