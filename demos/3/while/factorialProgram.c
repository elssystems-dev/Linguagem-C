#include <stdio.h>
int main(void){
	int contador, n;
	long fatorial = 1;
	contador = 1;
	printf("\nPrograma de Fatorial\n");
	printf("\nEscolha um número para calcular fatorial: \n"); scanf("%d", &n);
	while (contador <= n) {
		fatorial *= contador;
		contador++;
	}
	printf("\nFatorial de %d equivale a %ld\n", n, fatorial); // 'ld' como 'long digit', suportando calcular até 20!, sendo 64 bits padrão (long long para windows)
	return 0;
}
