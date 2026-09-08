#include <stdio.h>
int main(void) {
	int contador, n;
	long fatorial = 1;
	printf("\nPrograma Fatorial\n");
	printf("Escolha o fatorial que deseja calcular: "); scanf("%d", &n);
	for (contador = 1; contador <= n; contador++){
		fatorial *= contador;
	}
	printf("\nO fatorial de %d equivale a: %ld\n", n, fatorial); 
	return 0;
}
