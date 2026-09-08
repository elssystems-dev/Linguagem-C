/* Ler dez elementos do tipo string para um vetor A:
 * Construir um vetor B, onde os nomes estão invertidos.
 * Ex: O primeiro de A se torna o último de B.*/
#include <stdio.h>
#include <string.h>
int main(void){
	char a[10][40], b[10][40];
	printf("\n--- Inversão de Ordem ---\n");
	for (int i = 0; i < 10; i++){
		printf("[NOME %d] Insira: ", i+1); fgets(a[i], 40, stdin);
		strcpy(b[9-i], a[i]);
	}
	
	printf("\n--- Exibição da Inversão ---\n");
	for (int i = 0; i < 10; i++){
		printf("[NOME %d de B]: %s", i+1, b[i]);
	}
	return 0;
}

