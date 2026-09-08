#include <stdio.h>
int main(void) {
	int A, B, R, I;
	I = 1;
	while (I <= 5) {
		printf("\nEntre um valor para A: "); scanf("%d", &A);
		printf("Entre um valor para B: "); scanf("%d", &B);
		R = A + B;
		printf("O resultado corresponde a: %d\n", R);
		I = I + 1; // Ou I++;
	}
	return 0;	
}
