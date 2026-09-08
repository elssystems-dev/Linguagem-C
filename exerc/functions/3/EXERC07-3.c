/* Desenvolver um programa que controle as notas bimestrais de até 18 alunos de uma sala de aula.
 * O programa deve calcular a média de cada aluno, e será considerado aprovado o que obtiver média igual ou superior a 7.
 * As notas atribuídas devem estar na escala de 1 a 10 (não forneça zero)
 * O programa deve executar as seguintes rotinas:
 * Cadastrar 18 alunos (pode ser menos) e suas notas.
 * Consultar alunos por nome (apresentar nome, notas e média)
 * Alterar os dados dos alunos cadastrados com erro
 * Listar as médias e os nomes dos alunos aprovados
 * Listar as médias e os nomes dos alunos reprovados
 */

#include <stdio.h>
#include <string.h>

struct aluno {
	char nome[100];
	float notas[4];
	float media;
};

char menu(int cadastrou);
int cadastro(struct aluno classe[], int *cadastros, int jaCadastrou);
void consulta(struct aluno classe[], int cadastrados);
void alteracao(struct aluno classe[], int cadastrados);
void listagem (struct aluno classe[], int cadastrados);

int main(void){
	struct aluno classe[18];
	int programa = 1;
	int fezCadastro = 0;
	int cadastrados = 0;
	char opcao;
	do {
		opcao = menu(fezCadastro);
		switch (opcao){
			case '1': fezCadastro = cadastro(classe, &cadastrados, fezCadastro); break;
			case '2': 
				  if (fezCadastro) consulta(classe, cadastrados); 
				  else printf("Opção [BLOQUEADA]. Cadastre alunos antes.\n\n");
				  break;
			case '3': 
				  if (fezCadastro) alteracao(classe, cadastrados); 
				  else printf("Opção [BLOQUEADA]. Cadastre alunos antes.\n\n");
				  break;
			case '4': 
				  if (fezCadastro) listagem(classe, cadastrados);
				  else printf("Opção [BLOQUEADA]. Cadastre alunos antes.\n\n");
				  break;
			case 'X': 
			case 'x': programa = 0; break;
		}
	} while (programa);
	return 0;
}

char menu(int cadastrou){
	char opcao;
	if (!cadastrou){
		printf("\n1 - Cadastrar alunos\n");
		printf("2 - Consultar alunos (Bloqueado)\n");
		printf("3 - Alterar alunos (Bloqueado)\n");
		printf("4 - Listar todos (Bloqueado)\n");
		printf("X - Sair\n");
	} else {
		printf("\n1 - Cadastrar alunos\n");
		printf("2 - Consultar alunos [NOME]\n");
		printf("3 - Alterar alunos [CÓDIGO]\n");
		printf("4 - Listar todos\n");
		printf("X - Sair\n");
	}
	printf("Digite sua opção: "); scanf(" %c", &opcao);
	while (getchar() != '\n');
	return opcao;
}

int cadastro(struct aluno classe[], int *cadastrados, int jaCadastrou){
	float nota, soma = 0;
	int num, alunos;
	printf("\nEscreva quantos alunos deseja cadastrar: "); scanf("%d", &num); while(getchar() != '\n');
	if (!jaCadastrou){
		if (num > 18 || num < 1) {
			printf("\nEscolha um número a partir de 1 a 18 para cadastrar.");
			return 0;
		}
		alunos = 0;
		*cadastrados = num;
	} else {
		if ((num + *cadastrados) > 18){
			printf("\nO limite de alunos foi excedido! Insira um valor menor.");
			return 0;
		}
		alunos = *cadastrados;
		*cadastrados += num;
	}
	for (int i = alunos; i < *cadastrados; i++){
		printf("\n=== CADASTRO: Aluno nº%d ===\n", i+1);
		printf("[NOME]: "); fgets(classe[i].nome, 100, stdin);
		classe[i].nome[strcspn(classe[i].nome, "\n")] = '\0';
		for (int j = 0; j < 4; j++){
			printf("[NOTA %d]: ", j+1); scanf("%f", &classe[i].notas[j]); while(getchar() != '\n');
			nota = classe[i].notas[j];
			if (nota < 1 || nota > 10){
				printf("Utilize a escala de notas 1 a 10.\n");
				j--; continue;
			}
			soma += nota;
		}
		classe[i].media = (soma / 4);
		soma = 0;
	}
	return 1;
}

void consulta(struct aluno classe[], int cadastrados){
	char consulta[100];
	int encontrados = 0;
	int index;
	printf("\nDigite o nome do aluno a ser consultado: \n"); fgets(consulta, 100, stdin);
	consulta[strcspn(consulta, "\n")] = '\0';
	for (int i = 0; i < cadastrados; i++){
		if (strcmp(classe[i].nome, consulta) == 0){
			encontrados++;
			printf("--- Encontrado N.%d ---\n", encontrados);
			printf("[CÓDIGO]: %d\n", i+1);
			printf("[NOME]: %s\n", consulta);
			printf("[NOTAS]: | "); for (int j = 0; j < 4; j++) printf("%.2f | ", classe[i].notas[j]); printf("\n");			
			printf("[MÉDIA]: %.2f\n", classe[i].media);
			printf("____________________\n");
		}
	}
	if (!encontrados) printf("\nNenhum aluno com este nome encontrado.\n");
	return;
}

void alteracao(struct aluno classe[], int cadastrados){
	int codigo;
	float soma = 0;
	printf("\nInsira o código do aluno: "); scanf("%d", &codigo);
	while (getchar() != '\n');
	if (codigo > 18 || codigo < 1) {
		printf("Por favor, selecione uma faixa de código entre 1 a 18.\n");
		return;
	} else if (codigo > cadastrados) {
		printf("Este código ainda não foi cadastrado!");
		return;
	}
	printf("\n==== MODO ALTERAÇÃO ====\n");
	printf("[NOVO NOME]: "); fgets(classe[codigo-1].nome, 100, stdin);
	classe[codigo-1].nome[strcspn(classe[codigo-1].nome, "\n")] = '\0';
	printf("[NOVAS NOTAS]: ");
	for (int i = 0; i < 4; i++){
		printf("\n[NOTA %d]: ", i+1); scanf("%f", &classe[codigo-1].notas[i]);
		if (classe[codigo-1].notas[i] < 1 || classe[codigo-1].notas[i] > 10) {
			printf("Insira uma nota entre 1 a 10.");
			i--;
			continue;
		}
		soma += classe[codigo-1].notas[i];
		while (getchar() != '\n');
	}
	classe[codigo-1].media = (soma / 4);
	return;
}

void listagem(struct aluno classe[], int cadastrados){
	printf("\n==== LISTA DE ALUNOS ====\n");
	for (int i = 0; i < cadastrados; i++) {
			printf("[CÓDIGO]: %d\n", i+1);
			printf("[NOME]: %s\n", classe[i].nome);
			printf("[NOTAS]: | "); for (int j = 0; j < 4; j++) printf("%.2f | ", classe[i].notas[j]); printf("\n");
			printf("[MÉDIA]: %.2f\n", classe[i].media);
			printf("[STATUS]: "); 
			if (classe[i].media >= 7) printf("APROVADO!");
			else printf("REPROVADO.");
			printf("\n----------------------\n");
	}
	return;
}

