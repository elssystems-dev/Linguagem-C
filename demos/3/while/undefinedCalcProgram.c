#include <stdio.h>
int main(void){
	int A, B, R, RESP;
	RESP = 1;
	while (RESP == 1) {
		printf("\nEntre um valor para A: "); scanf("%d", &A);
		printf("Entre um valor para B: "); scanf("%d", &B);
		R = A + B;
		printf("O resultado corresponde a: %d", R);
		printf("\nDeseja continuar?");
		printf("\nTecle [1] para SIM / [2] para NÃO: ");
		scanf("%d", &RESP);
	}
	return 0;
}
