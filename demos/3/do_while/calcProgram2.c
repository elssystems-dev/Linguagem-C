/* Looping do tipo Do...While */
#include <stdio.h>
int main(void) {
	int a, b, r, i = 1;
	do {
		printf("\nEntre um valor para A: "); scanf("%d", &a);
		printf("Entre um valor para B: "); scanf("%d", &b);
		r = a + b;
		printf("O resultado corresponde a: %d\n", r);
		i++;
	} while ( i <= 5);
	return 0;
}
