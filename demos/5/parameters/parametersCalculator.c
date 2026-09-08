/* Programa Calculadora */

#include <stdio.h>

float resultado, a, b;

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);

void entrada(void);
void saida(void);

float calculo(float x, float y, char operador);

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

float calculo(float x, float y, char operador) {
	float calculo;
	switch (operador){
		case '+' : calculo = x + y; break;
		case '-' : calculo = x - y; break;
		case '*' : calculo = x * y; break;
		case '/' : calculo = x / y; break;
	}
	return calculo;
}

int rotadicao(void){
	printf("\n\nRotina de Soma\n");
	printf("------------------\n\n");
	entrada();
	resultado = calculo(a, b, '+');
	saida();
	return 0;
}
int rotsubtracao(void){
	printf("\n\nRotina de Subtração\n");
	printf("------------------\n\n");
	entrada();
	resultado = calculo(a, b, '-');
	saida();
	return 0;
}
int rotmultiplicacao(void){
	printf("\n\nRotina de Multiplicação\n");
	printf("------------------\n\n");
	entrada();
	resultado = calculo(a, b, '*');
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
		resultado = calculo(a, b, '/');
		saida();
	}
	return 0;
}
