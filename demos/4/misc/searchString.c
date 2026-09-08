/* Pesquisa */
#include <stdio.h>
#include <string.h>

int main(void){
	int i, acha;
	char nomes[10][40], pesq[40], resp;

	/* Entrada de dados */
	for (i = 0; i < 10; i++){
		printf("Digite o %2do. nome: ", i+1);
		fgets(nomes[i], 40, stdin);
		nomes[i][strcspn(nomes[i], "\n")] = '\0';
	}

	/* Processamento da pesquisa enquanto resp = S */
	resp = 'S';
	while (resp == 'S' || resp == 's'){
		printf("Entre o nome a ser pesquisado: ");
		fgets(pesq, 40, stdin);
		pesq[strcspn(pesq, "\n")] = '\0';
		i = 0;
		acha = 0;
		while (i < 10 && acha == 0){
			if (strcmp(pesq, nomes[i]) == 0) acha = 1; 
			else i++;
		}

		if (acha == 1) {
			printf("%s foi localizado na posição %d", pesq, i+1); 
		} else { 
			printf("%s não foi localizado", pesq);
		}

		printf("\n\nContinua? [S] - SIM / [N] - NÃO + <Enter>: ");
		resp = getchar();
		while (getchar() != '\n'); // Limpa a sujeira do ENTER registrado no buffer 
	}
	return 0;
}
