/* [VAZIO]: Elaborar um programa que possua uma função que permita apresentar o somatório dos N (1+2+3+4+5+...+N) primeiros numeros inteiros. N será um input do usuário. */

#include <stdio.h>
void prog_arit(int n);
	
int main(void){
	int num;
	printf("[PA]: Digite um número: "); scanf("%d", &num);
	prog_arit(num);
	return 0;
}

void prog_arit(int n){
	int calc = ((1+n) * n) / 2;
	printf("A soma dos termos equivale a %d\n", calc);
	return;
}
