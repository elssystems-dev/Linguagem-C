/* Programa Calculadora - ANSI */

#include <stdio.h>
#include "../headers/crt.h" // Sim, é possível referenciar arquivos com o uso de aspas duplas.
// O uso de '<>' indicará para o C buscar nas pastas padrão do sistema

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
		clear();
		position(1, 1); printf("Menu Principal");
		position(2, 1); printf("--------------");
		position(4, 1); printf("1 - Adição");
		position(5, 1); printf("2 - Subtração");
		position(6, 1); printf("3 - Multiplicação");
		position(7, 1); printf("4 - Divisão");
		position(8, 1); printf("5 - Fim do Programa");
		position(10, 1); printf("Escolha uma opção: ");
		scanf("%d", &opcao);
		switch (opcao){
			case 1: rotadicao(); break;
			case 2: rotsubtracao(); break;
			case 3: rotmultiplicacao(); break;
			case 4: rotdivisao(); break;
			case 5: position(13, 1); printf("Até mais!\n"); break;
			default: printf("Opção inválida - Tecle ENTER"); getchar(); getchar(); break;
		}

	}
	return 0;
}

void entrada(void){
	position(5, 1); printf("Entre um valor para A: "); scanf("%f", &a);
	position(6, 1); printf("Entre um valor para B: "); scanf("%f", &b);
	return;
}

void saida(void){
	position(9, 1); printf("\nO resultado entre A e B = %.2f\n", resultado);
	position(11, 1);
	printf("Tecle ENTER para acessar o menu: "); getchar(); getchar();
	return;
}

float calculo(float x, float y, char operador){
	float calculo;
	switch (operador){
		case '+': calculo = x + y; break;
		case '-': calculo = x - y; break;
		case '*': calculo = x * y; break;
		case '/': calculo = x / y; break;
	}
	return calculo;
}

int rotadicao(void){
	clear();
	position(1, 1); printf("Rotina de Soma");
	position(2, 1); printf("--------------");
	entrada();
	resultado = calculo(a, b, '+');
	saida();
	return 0;
}

int rotsubtracao(void){
	clear();
	position(1, 1); printf("Rotina de Subtração");
	position(2, 1); printf("--------------");
	entrada();
	resultado = calculo(a, b, '-');
	saida();
	return 0;
}

int rotmultiplicacao(void){
	clear();
	position(1, 1); printf("Rotina de Multiplicação");
	position(2, 1); printf("--------------");
	entrada();
	resultado = calculo(a, b, '*');
	saida();
	return 0;
}

int rotdivisao(void){
	clear();
	position(1, 1); printf("Rotina de Divisão");
	position(2, 1); printf("--------------");
	entrada();
	if (b == 0){
		position(9, 1); printf("Erro de divisão");
		position(11, 1);
		printf("\nTecle ENTER para acessar o menu: "); getchar(); getchar();
	} else {
		resultado = calculo(a, b, '/');
		saida();
	}
	return 0;
}
