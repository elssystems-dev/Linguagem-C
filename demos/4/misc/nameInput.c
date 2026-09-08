/* Leitura e escrita de 10 nomes */
#include <stdio.h>
int main(void){
	char nome[10][40]; // Mistura os conceitos aprendidos, dado a natureza da intenção de armazenar strings (vetor de caracteres) em outro vetor, se transformando em uma matriz.
	printf("\n\nListagem de Nomes\n\n");

	/* Entrada de dados */
	for (int i = 0; i < 10; i++){
		printf("Digite o %2do. nome: ", i+1);
		if (fgets(nome[i], sizeof(nome[i]), stdin)) {
			int j = 0;
			while (nome[i][j] != '\0') {
				if (nome[i][j] == '\n') {
					nome[i][j] = '\0';
					break;
				}
				j++;
			}		
		}
	}

	/* Apresentação dos nomes */
	
	printf("\n");

	for (int i = 0; i < 10; i++){
		printf("Nome: %2d --> %s\n", i+1, nome[i]);
	}

	return 0;
}

/* fgets() lê a linha inteira, incluindo o '\n' quando há espaço.
 * Esse caractere é removido manualmente para evitar que apareça na string.
 * 
 * fflush(stdin) não deve ser usado para limpar o teclado em C padrão,
 * pois seu comportamento é indefinido.
*/
