/* [VAZIO]: Escreva um programa que utilize uma função para calcular a série de Fibonacci de N termos. O valor de N será fornecido pelo usuário. */
#include <stdio.h>
void fibonacci(int i);

int main(void){
	int i;
	printf("[FIBONACCI]: Insira uma posição para ver seu respectivo número: "); scanf("%d", &i);
	fibonacci(i);
	return 0;
}

void fibonacci(int i){
	if (i == 1) {
		printf("O número encontrado na posição 1 é: 0\n");
		return;
	} else if (i == 2) {
		printf("O número encontrado na posição 2 é: 1\n");
		return;
	};

	long long pre = 0, pos = 1, aux;
	for (int j = 2; j < i; j++){
			aux = pos;
			pos += pre;
			pre = aux;
	}
	printf("O número encontrado na posição %d é: %lld\n", i, pos);
	return;
}
