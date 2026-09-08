/* Programa Calculadora */

#include <stdio.h>

float resultado, a, b; // Variáveis globais (manipuláveis em todas as funções)

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);

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

int rotadicao(void){
	printf("\n\nRotina de Soma\n");
	printf("------------------\n\n");
	printf("Entre um valor para A: "); scanf("%f", &a);
	printf("Entre um valor para B: "); scanf("%f", &b);
	resultado = a + b;
	printf("\nO resultado entre A e B = %.2f\n", resultado);
	printf("\nTecle ENTER para acessar o menu: ");
	getchar(); getchar();
	return 0;
}
int rotsubtracao(void){
	printf("\n\nRotina de Subtração\n");
	printf("------------------\n\n");
	printf("Entre um valor para A: "); scanf("%f", &a);
	printf("Entre um valor para B: "); scanf("%f", &b);
	resultado = a - b;
	printf("\nO resultado entre A e B = %.2f\n", resultado);
	printf("\nTecle ENTER para acessar o menu: ");
	getchar(); getchar();
	return 0;
}
int rotmultiplicacao(void){
	printf("\n\nRotina de Multiplicação\n");
	printf("------------------\n\n");
	printf("Entre um valor para A: "); scanf("%f", &a);
	printf("Entre um valor para B: "); scanf("%f", &b);
	resultado = a * b;
	printf("\nO resultado entre A e B = %.2f\n", resultado);
	printf("\nTecle ENTER para acessar o menu: ");
	getchar(); getchar();
	return 0;


}
int rotdivisao(void){
	printf("\n\nRotina de Divisão\n");
	printf("------------------\n\n");
	printf("Entre um valor para A: "); scanf("%f", &a);
	printf("Entre um valor para B: "); scanf("%f", &b);
	if (b == 0) {
		printf("\nErro de divisão\n");
	} else {
		resultado = a / b;
		printf("\nO resultado entre A e B = %.2f\n", resultado);
	}
	printf("\nTecle ENTER para acessar o menu: ");
	getchar(); getchar();
	return 0;
}
