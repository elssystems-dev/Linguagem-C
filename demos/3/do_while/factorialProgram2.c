#include <stdio.h>
int main(void) {
	int contador = 1, n;
	long fatorial = 1;
	printf("\nPrograma Fatorial\n");
	printf("Defina um número para calcular seu fatorial: "); scanf("%d", &n);
	do {
		fatorial *= contador;
		contador++;

	} while (contador <= n);
	printf("\nO fatorial de %d equivale a: %ld\n", n, fatorial);
	return 0;
}
