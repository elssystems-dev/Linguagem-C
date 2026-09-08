/* Desenvolva um programa que, considerando o cadastro de uma agenda com dez endereços, nomes e telefones, crie um programa utilizando funções e menu que efetue:
 * - Cadastro dos dados (todos os 10)
 * - A consulta dos dados por Nome
 * - A alteração de dados com erro (consulta por nome)
 * - Remoção de dados cadastrados (consulta por nome)
 * - Listagem geral de todos os nomes cadastrados.
 */

#include <stdio.h>
#include <string.h>

struct contato {		
	char nome[100];
	char endereco[100];
	char telefone[20];	
};

char menu(int cadastrou);
int cadastro(struct contato agenda[]);
void consulta(struct contato agenda[]);
void alteracao(struct contato agenda[]);
void remocao(struct contato agenda[]);
void listagem(struct contato agenda[]);

int main(void){
	struct contato agenda[10];
	int continuar = 1, fezCadastro = 0;
	char opcao;
	do {	
		opcao = menu(fezCadastro);
		if (opcao >= '2' && opcao <= '5' && !fezCadastro){
			printf("Você não fez o cadastro ainda... Por isso, esta categoria está bloqueada.\n");
			printf("ENTER para continuar: "); while (getchar() != '\n');
			continue;
		}
		switch (opcao){
			case '1' : fezCadastro = cadastro(agenda); break;
			case '2' : consulta(agenda); break;
			case '3' : alteracao(agenda); break;
			case '4' : remocao(agenda); break;
			case '5' : listagem(agenda); break;
			case 'X' : 
			case 'x' : continuar = 0; break;
			default  : 
				   printf("Digite corretamente alguma opção.\n"); 
				   printf("ENTER para continuar: "); while (getchar() != '\n');
				   break;
		}
	} while (continuar != 0);
	printf("Até mais!\n");
	return 0;
}

char menu(int cadastrou){
	int opcao = 1; // Padrão para acessar Cadastro Geral
	if (!cadastrou) {
		printf(".____________________________________.\n");
		printf("|                                    |\n");
		printf("|         AGENDA DE USUÁRIOS         |\n");
		printf("|____________________________________|\n");
		printf("|                                    |\n");
		printf("| 1 - Cadastro Geral                 |\n");   
		printf("| 2 - Consulta por nome (Bloqueado)  |\n");
		printf("| 3 - Alteração por nome (Bloqueado) |\n");
		printf("| 4 - Remoção por nome (Bloqueado)   |\n");
		printf("| 5 - Listar todos (Bloqueado)       |\n");
		printf("| X - Sair                           |\n");
		printf("|____________________________________|\n");
	} else { 
		printf(".____________________________________.\n");
		printf("|                                    |\n");
		printf("|         AGENDA DE USUÁRIOS         |\n");
		printf("|____________________________________|\n");
		printf("|                                    |\n");
		printf("| 1 - Cadastro Geral                 |\n");   
		printf("| 2 - Consulta por nome              |\n");
		printf("| 3 - Alteração por nome             |\n");
		printf("| 4 - Remoção por nome               |\n");
		printf("| 5 - Listar todos                   |\n");
		printf("| X - Sair                           |\n");
		printf("|____________________________________|\n");
	}
	printf("Digite sua opção: "); scanf(" %c", &opcao);
	getchar();
	return opcao;
}

int cadastro(struct contato agenda[]){
	for (int i = 0; i < 10; i++){	
		printf("._____________________________________.\n");
		printf("|                                     |\n");
		printf("          CONTATO NÚMERO %d            \n", i+1);
		printf("|_____________________________________|\n");
		printf("[''] Insira o nome: "); fgets(agenda[i].nome, 100, stdin); agenda[i].nome[strcspn(agenda[i].nome, "\n")] = '\0';
		printf("[@] Insira o endereço: "); fgets(agenda[i].endereco, 100, stdin); agenda[i].endereco[strcspn(agenda[i].endereco, "\n")] = '\0';
		printf("[() Insira o telefone: "); fgets(agenda[i].telefone, 20, stdin);  agenda[i].telefone[strcspn(agenda[i].telefone, "\n")] = '\0';
	}
	printf("\nCadastro Geral concluído!");
	printf("\nAVISO: Ao acessar esta opção novamente, todos os seus registros existentes serão reescritos.");
	printf("\nENTER para continuar: "); while (getchar() != '\n');
	return 1;
}

void consulta(struct contato agenda[]){
	char consultado[100];
	int encontrou = 0;
	printf("._____________________________________.\n");
	printf("|                                     |\n");
	printf("|           CONSULTA p/ NOME          |\n");
	printf("|_____________________________________|\n");
	printf("Digite o nome a ser consultado: "); fgets(consultado, 100, stdin); consultado[strcspn(consultado, "\n")] = '\0';
	for (int i = 0; i < 10; i++){
		if (strcmp(agenda[i].nome, consultado) == 0){ // strcmp é case sensitive, portanto pode haver discrepância entre tamanho de letra.
			encontrou = 1;
			printf("[POSIÇÃO]: %d\n", i+1);
			printf("[NOME]: %s\n", consultado);
			printf("[ENDEREÇO]: %s\n", agenda[i].endereco);
			printf("[TELEFONE]: %s\n", agenda[i].telefone);
			printf("_________________________________\n\n");
		}
	}
	if (!encontrou)	printf("\nNenhum contato com este nome encontrado!\n");
	printf("ENTER para continuar: "); while (getchar() != '\n');
	return;
}

void alteracao(struct contato agenda[]){
	char alterado[100];
	int alterados = 0;
	int encontrou = 0;
	int posicao;
	printf(".______________________________________.\n");
	printf("|                                      |\n");
	printf("|          ALTERAÇÃO p/ NOME           |\n");
	printf("|                                      |\n");
	printf("| DICA: Para posições com nomes vazios |\n");
	printf("|	    pressione ENTER            |\n");
	printf("|______________________________________|\n");
	printf("Digite o nome a ser alterado: "); fgets(alterado, 100, stdin); alterado[strcspn(alterado, "\n")] = '\0';
	for (int i = 0; i < 10; i++){
		if (strcmp(agenda[i].nome, alterado) == 0){
			alterados++;
			if (alterados == 1) posicao = i;
		}
	}

	if (alterados > 0) encontrou = 1;
	else {
		printf("\nNenhum contato com este nome encontrado!\n");
		printf("ENTER para voltar ao menu: "); while (getchar() != '\n');
		return;
	}

	if (alterados > 1) {
		for (;;) { // Loop infinito
			printf("\nMúltiplos contatos com o mesmo nome! Digite a posição que deseja alterar: "); scanf("%d", &posicao); getchar();
			posicao--;
			if (strcmp(agenda[posicao].nome, alterado) == 0) break; 
			else printf("\nPosição inválida! Digite a correta.\n"); continue;
		}
	}

	char opcaoAlterar;
	printf("._____________________________________.\n");
	printf("|                                     |\n");
	printf("|        OPÇÕES DE ALTERAÇÃO          |\n");
	printf("|                                     |\n");
	printf("|  1 - Nome                           |\n");
	printf("|  2 - Endereço                       |\n");
	printf("|  3 - Telefone                       |\n");
	printf("|  4 - Tudo                           |\n");
	printf("|  X - Cancelar                       |\n");
	printf("|_____________________________________|\n");
	printf("Selecione sua escolha: "); scanf(" %c", &opcaoAlterar); getchar();
	switch (opcaoAlterar){
		case '1' : 
			printf("[NOVO NOME] ...: "); fgets(agenda[posicao].nome, 100, stdin); 
			agenda[posicao].nome[strcspn(agenda[posicao].nome, "\n")] = '\0';
			break;
		case '2' : 
			printf("[NOVO ENDEREÇO] ..: "); fgets(agenda[posicao].endereco, 100, stdin); 
			agenda[posicao].endereco[strcspn(agenda[posicao].endereco, "\n")] = '\0';
			break;
		case '3' :
			printf("[NOVO TELEFONE]: "); fgets(agenda[posicao].telefone, 20, stdin); 
			agenda[posicao].telefone[strcspn(agenda[posicao].telefone, "\n")] = '\0';
			break;
		case '4' :
			printf("[NOVO NOME] ...: "); fgets(agenda[posicao].nome, 100, stdin); 
			agenda[posicao].nome[strcspn(agenda[posicao].nome, "\n")] = '\0';
			printf("[NOVO ENDEREÇO] ..: "); fgets(agenda[posicao].endereco, 100, stdin); 
			agenda[posicao].endereco[strcspn(agenda[posicao].endereco, "\n")] = '\0';
			printf("[NOVO TELEFONE]: "); fgets(agenda[posicao].telefone, 20, stdin); 
			agenda[posicao].telefone[strcspn(agenda[posicao].telefone, "\n")] = '\0';
			break;
		case 'X' :
		case 'x' :
			printf("\nCancelando operação...\n");
			break;
		default :
			printf("\nAbortando: Erro de digitação.\n");
			break;
	}
	printf("\nFim do procedimento!\n");
	printf("ENTER para voltar ao menu: "); while (getchar() != '\n');
	return;
}

void remocao(struct contato agenda[]){
	char removido[100];
	int removidos = 0;
	int encontrou = 0;
	int posicao;
	printf(".______________________________________.\n");
	printf("|                                      |\n");
	printf("|            REMOÇÃO p/ NOME           |\n");
	printf("|                                      |\n");
	printf("| DICA: Para posições com nomes vazios |\n");
	printf("|	    pressione ENTER            |\n");
	printf("|______________________________________|\n");
	printf("Digite o nome a ser removido: "); fgets(removido, 100, stdin); removido[strcspn(removido, "\n")] = '\0';
	for (int i = 0; i < 10; i++){
		if (strcmp(agenda[i].nome, removido) == 0){
			removidos++;
			if (removidos == 1) posicao = i;
		}
	}

	if (removidos > 0) encontrou = 1;
	else {
		printf("\nNenhum contato com este nome encontrado!\n");
		printf("ENTER para voltar ao menu: "); while (getchar() != '\n');
		return;
	}
	if (removidos > 1){
		for (;;) {
			printf("\nMúltiplos contatos com o mesmo nome! Digite a posição que deseja alterar: "); scanf("%d", &posicao); getchar();
			posicao--;
			if (strcmp(agenda[posicao].nome, removido) == 0) break; 
			else printf("\nPosição inválida! Digite a correta.\n"); continue;
		}
	}

	char opcaoRemover;
	printf("._____________________________________.\n");
	printf("|                                     |\n");
	printf("|         OPÇÕES DE REMOÇÃO           |\n");
	printf("|                                     |\n");
	printf("|  1 - Nome                           |\n");
	printf("|  2 - Endereço                       |\n");
	printf("|  3 - Telefone                       |\n");
	printf("|  4 - Tudo                           |\n");
	printf("|  X - Cancelar                       |\n");
	printf("|_____________________________________|\n");
	printf("Selecione sua escolha: "); scanf(" %c", &opcaoRemover); getchar();
	switch (opcaoRemover){
		case '1' : 
			agenda[posicao].nome[0] = '\0';
			break;
		case '2' : 
			agenda[posicao].endereco[0] = '\0';
			break;
		case '3' :
			agenda[posicao].telefone[0] = '\0';
			break;
		case '4' :
			agenda[posicao].nome[0] = '\0';
			agenda[posicao].endereco[0] = '\0';
			agenda[posicao].telefone[0] = '\0';
			break;
		case 'X' :
		case 'x' :
			printf("\nCancelando operação...\n");
			break;
		default :
			printf("\nAbortando: Erro de digitação.\n");
			break;
	}
	printf("\nFim do procedimento!\n");
	printf("ENTER para voltar ao menu: "); while (getchar() != '\n');
	return;
}

void listagem(struct contato agenda[]){
	printf("._____________________________________.\n");
	printf("|                                     |\n");
	printf("|         LISTAGEM DA AGENDA          |\n");
	printf("|_____________________________________|\n");
	for (int i = 0; i < 10; i++){
		printf("._____________________________________.\n");
		printf("|                                     |\n");
		printf("          CONTATO NÚMERO %d            \n", i+1);
		printf("|_____________________________________|\n");
		printf("[NOME]: %s\n", agenda[i].nome);
		printf("[ENDEREÇO]: %s\n", agenda[i].endereco);
		printf("[TELEFONE]: %s\n", agenda[i].telefone);
		printf("|_____________________________________|\n\n");
	}
	printf("ENTER para voltar ao menu: "); while (getchar() != '\n');
	return;
}
