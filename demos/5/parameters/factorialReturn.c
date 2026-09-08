/* Fatorial sem retorno de valor */
#include <stdio.h>

int fatorial(int n);

int main(void){
	int limite;
	printf("Cálculo de fatorial\n\n");
	printf("Qual fatorial: ");
	scanf("%d", &limite);
	printf("\nFatorial de %d = %d\n", limite, fatorial(limite));
	printf("\nTecle ENTER para finalizar: ");
	getchar(); getchar();
	return 0;
}

int fatorial(int n){
	int resultado = 1;
	for (int i = 1; i <= n; i++) resultado *= i;
	return resultado;
}
