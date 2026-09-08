/* [RETORNO]: Escreva um programa que utilize uma função para calcular a série de Fibonacci de N termos. O valor de N será fornecido pelo usuário. */
#include <stdio.h>
long long fibonacci(int i);

int main(void){
	int i;
	printf("[FIBONACCI]: Insira uma posição para ver seu respectivo número: "); scanf("%d", &i);
	long long num = fibonacci(i);
	printf("O número encontrado na posição %d é: %lld\n", i, num);
	return 0;
}

long long fibonacci(int i){
	if (i == 1) return 0; 
	else if (i == 2) return 1;

	long long pre = 0, pos = 1, aux;
	for (int j = 2; j < i; j++){
			aux = pos;
			pos += pre;
			pre = aux;
	}
	return pos;
}
