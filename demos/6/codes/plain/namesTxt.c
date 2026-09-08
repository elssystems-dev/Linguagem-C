/* Programa: Nomes em um arquivo texto */

#include <stdio.h>
#include "../../../5/external/headers/crt.h"

char nome[41];
FILE *ponteiro;
void criar(void);
void cadastrar(void);
void exibir(void);

int main(void){
	int opcao = 0;
	while (opcao != 4){
		clear();
		position(1, 33); printf("Menu Principal");
		position(2, 33); printf("--------------");
		position(5, 33); printf("1 ....... Cria arquivo");
		position(6, 33); printf("2 .. Cadastra registro");
		position(7, 33); printf("3 .... Exibe registros");
		position(8, 33); printf("4 ................ Fim");
		position(11, 33); printf("Escolha a sua opção: ");
		scanf("%d", &opcao);
		while (getchar() != '\n');
		if (opcao != 4){
			switch(opcao){
				case 1 : criar(); break;
				case 2 : cadastrar(); break;
				case 3 : exibir(); break;
				default : printf("Opção inválida - Tecle ENTER"); getchar(); break;
			}
		}
	}
	return 0;
}

void criar(void){
	clear();
	position(1,31); printf("Criação de Arquivo");
	ponteiro = fopen("../../text/namesTxt.dat", "w");
	position(12,31); printf("Arquivo foi criado");
	fclose(ponteiro);
	position(24,25); printf("Tecle ENTER para voltar ao menu");
	getchar();
	return; 
}

void cadastrar(void){
	clear();
	position(1,27); printf("Cadastro de Registro");
	ponteiro = fopen("../../text/nomestxt.dat", "a");
	position(5,10);
	printf("Entre um Nome ou ENTER para voltar ao menu ..: ");
	scanf(" %[^\n]", nome);
	fputs(nome, ponteiro);
	fputs("\n", ponteiro);
	fclose(ponteiro);
	getchar();
	return;
}

void exibir(void){
	int linha = 5;
	clear();
	position(1, 27); printf("Apresentação de Registros");
	ponteiro = fopen("../../text/nomestxt.dat", "r");
	while (fgets(nome, 40, ponteiro) != NULL){
		position(linha, 5);
		printf("%s", nome);
		linha++;
	}
	fclose(ponteiro);
	position(24, 25); printf("Tecle ENTER para voltar ao menu");
	getchar();
	return;
}
