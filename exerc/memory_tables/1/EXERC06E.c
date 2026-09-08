/* Ler dois vetores A e B com dez elementos numéricos inteiros cada uma. Construir um vetor C, sendo a junção das anteriores. Assim, C deve possuir o dobro de elementos. */
#include <stdio.h>
int main(void){
	int a[10], b[10], c[20]; // Formas mais dinâmicas de fazer isso seria com o malloc() ou com #define, assuntos para outro momento.
	for (int i = 0; i < 10; i++){
		printf("Defina o elemento [%d] de A: ", i); scanf("%d", &a[i]);
		printf("Defina o elemento [%d] de B: ", i); scanf("%d", &b[i]);
		c[i] = a[i];
		c[i+10] = b[i];
	}

	printf("\n");

	for (int i = 0; i < 20; i++){
		printf("Elemento [%d] de C: %d\n", i, c[i]);
	}
}
