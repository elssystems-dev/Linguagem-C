/* Leitura e escrita de uma estrutura */
#include <stdio.h>
int main(void){
	struct cad_aluno {
		char nome[40];
		float nota1;
		float nota2;
		float nota3;
		float nota4;
	};

	struct cad_aluno aluno;

	printf("\nCadastro de Aluno\n\n");
	printf("Informe o nome .........: "); fgets(aluno.nome, 40, stdin);

	printf("Informe a 1a nota ......: "); scanf("%f", &aluno.nota1);
	printf("Informe a 2a nota ......: "); scanf("%f", &aluno.nota2);
	printf("Informe a 3a nota ......: "); scanf("%f", &aluno.nota3);
	printf("Informe a 4a nota ......: "); scanf("%f", &aluno.nota4);

	printf("\n");

	printf("Nome .......: %s\n", aluno.nome);

	printf("Nota 1 .....: %6.2f\n", aluno.nota1);
	printf("Nota 2 .....: %6.2f\n", aluno.nota2);
	printf("Nota 3 .....: %6.2f\n", aluno.nota3);
	printf("Nota 4 .....: %6.2f\n", aluno.nota4);
	return 0;
}
