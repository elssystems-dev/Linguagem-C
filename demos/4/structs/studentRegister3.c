/* Leitura e escrita para 8 alunos */
#include <stdio.h>
int main(void){
	struct cad_aluno {
		char nome[41];
		float notas[4];
	};

	struct cad_aluno alunos[8]; // Uma lista de 8 alunos estruturados com um nome e quatro notas
	
	float nota_aluno;

	printf("\n\nCadastro de aluno\n\n");

	for (int i = 0; i < 8; i++){
		printf("Informe o nome do %do. Aluno ..: ", i+1);
		fgets(alunos[i].nome, 41, stdin);
		for (int j = 0; j < 4; j++){
			printf("Informe a %da. nota ...........: ", j+1);
			scanf("%f", &nota_aluno);
			alunos[i].notas[j] = nota_aluno;
		}

		while(getchar() != '\n');
		printf("\n");	
	}

	for (int i = 0; i < 8; i++){
		printf("ALUNO %d\n\n", i+1);
		printf("Nome ......: "); puts(alunos[i].nome);
		for (int j = 0; j < 4; j++){
			printf("%da. nota ..: %6.2f\n", j+1, alunos[i].notas[j]);
		}
		printf("\n");
	}	

	return 0;
}
