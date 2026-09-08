#include <stdio.h>
int main(void){
	int a, b, r, i;
	for (i = 1; i <= 5; i++){
		printf("\nEntre um valor para A: "); scanf("%d", &a);
		printf("Entre um valor para B: "); scanf("%d", &b);
		r = a + b;
		printf("O resultado corresponde a: %d\n", r);
	}
	return 0;
}
