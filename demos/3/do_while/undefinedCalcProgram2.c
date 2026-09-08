#include <stdio.h>
int main(void) {
	int a, b, r, resp = 1;
	do {
		printf("\nEntre um valor para A: "); scanf("%d", &a);
		printf("Entre um valor para B: "); scanf("%d", &b);
		r = a + b;
		printf("O resultado corresponde a: %d", r);
		printf("\n\nDeseja continuar?");
		printf("\nTecle [1] para SIM / [2] para NÃO\nR: ");
		scanf("%d", &resp);
	} while (resp == 1);
	return 0;
}
