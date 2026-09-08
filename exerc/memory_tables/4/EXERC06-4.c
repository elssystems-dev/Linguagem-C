/*  Efetuar o cadastro de dez registros para uma agenda de endereços, nomes e telefones.
 *  Através de um menu de seleção, permitir que o programa realize:
 *  - O cadastro de todos os dados;
 *  - A classificação dos dados;
 *  - Pesquisa por nomes com a apresentação de todos os dados
 *  - A listagem total apenas dos nomes.
 */
#include <stdio.h>
#include <string.h>
int main(void){
	char menuOpcao, subOpcao, nomePesquisa[100];
	int cadastrou = 0, confirmado = 0;
	struct perfil_pessoa {
		char nome[100];
		char endereco[100];
		char telefone[20];
	};

	struct perfil_pessoa registros[10];
	struct perfil_pessoa temp; // Para o processamento de ordenação futuro
	
	do {
		printf("\n_______________________\n");
		printf("|  MENU DE REGISTROS  |\n");
		printf("| 1 - Cadastrar todos |\n");
		printf("| 2 - Classificação   |\n");
		printf("| 3 - Pesquisar nome  |\n");
		printf("| 4 - Listar nomes    |\n");
		printf("| X - Sair            |\n");
		printf("|_____________________|\n");
		printf("| R: "); scanf(" %c", &menuOpcao);
				while (getchar() != '\n');

		if (menuOpcao == '1'){
			printf("\n--- Cadastrar todos ---\n");
			if (cadastrou) {
				printf("O cadastro geral já foi realizado. Escolha se deseja sobreescrever TODOS os valores [S/N]: ");
				scanf(" %c", &subOpcao);
				while (getchar() != '\n');
				if (subOpcao != 's' || subOpcao == 'S') {
					printf("Cancelando a sobreescrita do cadastro...");
					continue;
				}
			}
			for (int i = 0; i < 10; i++){
				printf("[REGISTRO %d] - Insira o NOME ...: ", i+1); fgets(registros[i].nome, 100, stdin);
				registros[i].nome[strcspn(registros[i].nome, "\n")] = '\0';
				printf("[REGISTRO %d] - Insira o ENDEREÇO: ", i+1); fgets(registros[i].endereco, 100, stdin);
				registros[i].endereco[strcspn(registros[i].endereco, "\n")] = '\0';
				printf("[REGISTRO %d] - Insira o TELEFONE: ", i+1); fgets(registros[i].telefone, 20, stdin);
				registros[i].telefone[strcspn(registros[i].telefone, "\n")] = '\0';
				printf("|-----------|\n");
			}
			printf("\nRegistros finalizados! Vá para a seção 2 para ordenar os registros ou para confirmar se já estiverem.\n");
			cadastrou = 1;
			confirmado = 0;
		} else if (menuOpcao == '2') {
			printf("\n--- Classificação ---\n");
			if (confirmado) {
				printf("\nSeus registros já foram ordenados!\n"); 
				continue;
			}
			printf("Seus registros estão sendo confirmados e/ou ordenados...\n");
			for (int i = 0; i < 9; i++){
				for (int j = i+1; j < 10; j++){
					if (strcmp(registros[i].nome, registros[j].nome) > 0){
						temp = registros[i];
						registros[i] = registros[j];
						registros[j] = temp;
					}
				}
			}
				printf("\n--- ORDENAÇÃO CONCLUÍDA! ---\n");
				confirmado = 1;
		}
		else if (menuOpcao == '3') {
			printf("\n--- Pesquisar Nome ---\n");
			printf("Digite o nome a ser pesquisado: "); fgets(nomePesquisa, 100, stdin);
			nomePesquisa[strcspn(nomePesquisa, "\n")] = '\0';
			for (int i = 0; i < 10; i++){
				if (strcmp(registros[i].nome, nomePesquisa) == 0){
					printf("NOME ENCONTRADO! Posição: %d", i+1);
				}
			}
		} else if (menuOpcao == '4') {
			printf("\n--- Listagem de Nomes ---\n");
			printf("[ORDENAÇÃO CONFIRMADA: "); if (confirmado) printf("VERDADEIRO]\n"); else printf("FALSO]\n");
			for (int i = 0; i < 10; i++){
				printf("[REGISTRO %d] Nome: %s\n", i+1, registros[i].nome);
			}
		}
		else if (menuOpcao == 'x' || menuOpcao == 'X') printf("\nEntendido. Obrigado por utilizar!\n");
		else printf("\nDigite alguma das opções acima para validar sua resposta.\n");
	} while (menuOpcao != 'x' && menuOpcao != 'X');
	return 0;
}
