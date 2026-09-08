#include <stdio.h>
#include <string.h>
#include "../../../5/external/headers/crt.h"

struct reg_aluno {
	int matricula;
	char nome[31];
	float notas[4];
};

struct reg_aluno aluno;

FILE *arquivoAluno;
int numMatricula;
char resp;
char sistema[29] = "Programa de Cadastro Escolar";

void line(void);
void center(int linha, const char *mensagem);
void clearline(void);
void tela(void);
void mostradados(void);
int pesquisa(int numero);
int cadastra(void);
int consultar(void);

int main(void){
	// Verifica se o arquivo existe. Se não, cria. 
	char opcao;
	if ((arquivoAluno = fopen("../../text/student.dat", "rb+")) == NULL) {
		arquivoAluno = fopen("../../text/student.dat", "wb+");
		fwrite(&aluno, sizeof(struct reg_aluno), 1, arquivoAluno);	    }
	do {
		clear();
		line();
		center(2, sistema);
		center(3, "Menu de Opções\n");
		line();
		position(9, 26); printf("Cadastrar ..........: [1]");
		position(11, 26); printf("Consultar ........: [2]");
		position(13, 26); printf("Finalizar ........: [3]");
		position(17, 26); printf("Entre com a opção: --> ");
		scanf("%c", &opcao); while(getchar() != '\n');
		switch (opcao) {
			case '1': cadastra(); break;
			case '2': consultar(); break; 
		};
	} while (opcao != '3');
	fclose(arquivoAluno);
	position(23, 1);
	return 0;
}

void line(void) {
	for (int posicao = 0; posicao < 80; posicao++) printf("-");
	return;
}

void center(int linha, const char *mensagem){
	int coluna;
	coluna = ((80 - strlen(mensagem)) / 2);
	position(linha, coluna);
	printf(mensagem);
	return;
}

void tela(void) {
	position(10, 18); clearline();
	position(11, 18); clearline();
	position(12, 18); clearline();
	position(13, 18); clearline();
	position(14, 18); clearline();
	position(15, 18); clearline();
	position(10, 1); printf("Matrícula ...: ");
	position(11, 1); printf("Nome ........: ");
	position(12, 1); printf("1a Nota .....: ");
	position(13, 1); printf("2a Nota .....: ");
	position(14, 1); printf("3a Nota .....: ");
	position(15, 1); printf("4a Nota .....: ");
	return;
}

// Mostra os dados quando da consulta ou tentativa de cadastro

void mostradados(void){
	position(10, 18); printf("%d", numMatricula);
	position(11, 18); printf("%s", aluno.nome);
	for (int i = 0; i < 4; i++){
		position(12 + i, 18);
		printf("%5.2f", aluno.notas[i]);
	}
	return;
}

// Rotina de Pesquisa

int pesquisa(int numero){
	int achou = 0;
	rewind(arquivoAluno);
	while(fread(&aluno, sizeof(struct reg_aluno), 1, arquivoAluno) == 1) {
		if (numero == aluno.matricula) {
			achou = 1;
			break;
		}
	} 	
	return achou;
}

// Rotinas de controle do programa principal


/* Cadastramento dos dados*/
int cadastra(void){
	clear();
	line();
	center(2, sistema);
	center(3, "Módulo de Cadastramento\n");
	line();
	position(6, 1); printf("Digite os dados abaixo:");
	do {
		position(22, 1); clearline();
		position(23, 1); clearline();
		printf("Digite [0] para voltar ao menu");
		tela();
		position(10, 18); scanf("%d", &numMatricula);
		while (getchar() != '\n');
		if (numMatricula != 0) {
			if (pesquisa(numMatricula) == 1) {
				// Apresenta os dados caso exista no arquivo
				mostradados();
				position(22, 1); printf("Este registro já existe");
				position(23, 1);
				printf("Digite ENTER para nova tentativa");
				getchar();
			} else {
				// Localiza posição para gravar registro
				fseek(arquivoAluno, 0, SEEK_END);

				// Grava registro
			
				position(11, 18);
				fgets(aluno.nome, 31, stdin);
				aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
				for (int i = 0; i < 4; i++){
					position(12 + i, 18);
					scanf("%f", &aluno.notas[i]);
					while (getchar() != '\n');
				}
				aluno.matricula = numMatricula;
				fwrite(&aluno, sizeof(struct reg_aluno), 1, arquivoAluno);
				fflush(arquivoAluno);
				position(23, 1);
				printf("Digite ENTER para novo cadastro");
				getchar();
			}
		}
	} while (numMatricula != 0);
	return 0;
}

// Consulta dos dados

int consultar(void){
	clear();
	line();
	center(2, sistema);
	center(3, "Módulo de Consulta\n");
	line();
	position(6, 1); printf("Digite o número de matrícula: ");
	do {
		position(22, 1); clearline();
		position(23, 1); clearline();
		printf("Digite [0] para voltar ao menu");
		tela();
		position(10, 18); scanf("%d", &numMatricula);
		while(getchar() != '\n');
		position(23, 1); clearline();
		if (numMatricula != 0) {
			if (pesquisa(numMatricula) == 1){
				// Apresenta os dados caso exista no arquivo
				mostradados();
				position(23, 1);
				printf("Digite ENTER para nova tentativa");
				getchar();
			} else {
				position(22, 1);
				printf("Este registro não está cadastrado");
				position(23, 1);
				printf("Digite ENTER para nova tentativa");
				getchar();
			}
		}
	} while (numMatricula != 0);
	return 0;
}
