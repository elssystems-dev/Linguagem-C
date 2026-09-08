/* Programa Calculadora */

#include <stdio.h>

float resultado, a, b; // Variáveis globais (manipuláveis em todas as funções)

/* Definição inicial dos nomes das funções: Protótipos das funções a serem utilizadas no programa
 * Os protótipos de função fazem com que haja uma verificação mais detalhada dos tipos utilizados
 * Desta forma o compilador pode encontrar e apresentar quaisquer conversão de tipos inválidas
 * Estabelecer os protótipos é uma exigência do C moderno, mesmo quando o compilador não exige essa definição.
 * Resumindo: Os protótipos existem para o compilador saber de sua existência antes de sua definição completa
 * Isto é preferível do que simplesmente declarar as funções acima de main, dado a melhora da organização e legibilidade
 */

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
		if (opcao != 5){
			if (opcao == 1) {
				rotadicao();
			}
			if (opcao == 2) {
				rotsubtracao();
			}
			if (opcao == 3) {
				rotmultiplicacao();
			}
			if (opcao == 4) {
				rotdivisao();
			}
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
