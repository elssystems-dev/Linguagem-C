/* Programa Calculadora */

#include <stdio.h>

float resultado, a, b; // Variáveis globais (manipuláveis em todas as funções)

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);

void entrada(void); // Funções "void" - permitem escrever apenas "return" no final, invés de return 0; em uma função do tipo int como o main.
void saida(void);

int main(void){
	int opcao = 0;
	while (opcao != 5){
		printf("\n\nMenu Principal\n");
		printf("------------------\n\n");
		printf("1 - Adição\n");
		printf("2 - Subtração\n");
		printf("3 - Multiplicação\n");
		printf("4 - Divisão\n");
		printf("5 - Fim do Programa\n\n");
		printf("Escola uma opção: "); scanf("%d", &opcao);
		switch (opcao){
			case 1 : rotadicao(); break;
			case 2 : rotsubtracao(); break;
			case 3 : rotmultiplicacao(); break;
			case 4 : rotdivisao(); break;
			case 5 : printf("\nAté mais!\n"); break;
			default : printf("Opção inválida - Tecle ENTER: ");
				  getchar(); getchar();
				  break;
		}
	}
	return 0;
}

/* Refinamento sucessivo: Percebe-se que nas demonstrações anteriores, as funções de cálculo repetiam-se na mesma coisa: Ler os valores de entrada e retorná-los
 * Ao separar estas dependências, o código fica mais limpo e mais modular.*/
void entrada(void) {
	printf("Entre um valor para A: "); scanf("%f", &a);
	printf("Entre um valor para B: "); scanf("%f", &b);
	return;
}

void saida(void) {
	printf("\nO resultado entre A e B = %.2f\n", resultado);
	printf("\nTecle ENTER para acessar o menu: ");
	getchar(); getchar();
	return;
}

int rotadicao(void){
	printf("\n\nRotina de Soma\n");
	printf("------------------\n\n");
	entrada();
	resultado = a + b;
	saida();
	return 0;
}
int rotsubtracao(void){
	printf("\n\nRotina de Subtração\n");
	printf("------------------\n\n");
	entrada();
	resultado = a - b;
	saida();
	return 0;
}
int rotmultiplicacao(void){
	printf("\n\nRotina de Multiplicação\n");
	printf("------------------\n\n");
	entrada();
	resultado = a * b;
	saida();
	return 0;


}
int rotdivisao(void){
	printf("\n\nRotina de Divisão\n");
	printf("------------------\n\n");
	entrada();
	if (b == 0) {
		printf("\nErro de divisão\n");
		printf("\nTecle ENTER para acessar o menu: ");
		getchar(); getchar();
	} else {
		resultado = a / b;
		saida();
	}
	return 0;
}
