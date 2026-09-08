/* Fatorial sem retorno de valor */
#include <stdio.h>

void fatorial(int n);

int main(void){
	int limite;
	printf("Cálculo de fatorial\n\n");
	printf("Qual fatorial: ");
	scanf("%d", &limite);
	fatorial(limite);
	printf("\nTecle ENTER para finalizar: ");
	getchar(); getchar();
	return 0;
}

void fatorial(int n){
	int resultado = 1;
	for (int i = 1; i <= n; i++) resultado *= i;
	printf("\nFatorial de %d = %d\n", n, resultado);
	return;
}
