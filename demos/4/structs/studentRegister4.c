/* Leitura, ordenação e escrita */
#include <stdio.h>
#include <string.h>

int main(void){
	
	struct cad_aluno{
		char nome[40];
		float notas[4];
	};

	struct cad_aluno alunos[8], temp;
	float nota_aluno;
	printf("\n\nCadastro de aluno\n\n");

	/* Entrada de Dados */
	for (int i = 0; i < 8; i++){
		printf("Informe o nome do %do. aluno ..: ", i+1);
		fgets(alunos[i].nome, 40, stdin);
		for (int j = 0; j < 4; j++){
			printf("Informe a %da. nota: ..: ", j+1);
			scanf("%f", &nota_aluno);
			alunos[i].notas[j] = nota_aluno;
		}
		while (getchar() != '\n');
		printf("\n");
	}

	/* Classificação dos Dados */
	for (int i = 0; i < 7; i++){
		for (int j = i+1; j < 8; j++){
			if (strcmp(alunos[i].nome, alunos[j].nome) > 0){
				temp = alunos[i];
				alunos[i] = alunos[j];
				alunos[j] = temp;
			}
		}
	}

	/* Saída dos Dados */
	for (int i = 0; i < 8; i++){
		printf("\nNome .......: "); puts(alunos[i].nome);
		for (int j = 0; j < 4; j++) {
			printf("Nota %da ...: %6.2f\n", i+1, alunos[i].notas[j]);
		}
	
	}
	printf("\n");
	return 0;
}
