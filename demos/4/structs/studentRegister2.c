/* Leitura e escruta de uma estrutura */
#include <stdio.h>
int main(void){

	struct cad_aluno {
		char nome[41];
		float notas[4];
	};

	struct cad_aluno aluno;
	printf("\nCadastro de aluno\n\n");
	printf("Informe o nome .........: "); fgets(aluno.nome, 41, stdin);
	for (int i = 0; i < 4; i++){
		printf("Informe a %da. nota: ", i+1);
		scanf("%f", &aluno.notas[i]);
	}

	printf("\n");

	
	printf("Nome .....: %s", aluno.nome);
	for (int i = 0; i < 4; i++){
		printf("Nota %d ...: %6.2f\n", i+1, aluno.notas[i]);
	}
	return 0;
}
