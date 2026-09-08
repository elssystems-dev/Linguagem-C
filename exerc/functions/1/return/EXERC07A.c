/* [RETORNO]: Elaborar um programa que possua uma função que permita apresentar o somatório dos N (1+2+3+4+5+...+N) primeiros numeros inteiros. N será um input do usuário. */

#include <stdio.h>
int prog_arit(int n);
	
int main(void){
	int num;
	printf("[PA]: Digite um número: "); scanf("%d", &num);
	int pa = prog_arit(num);
	printf("A soma dos termos equivale a %d\n", pa);
	return 0;
}

int prog_arit(int n){
	int calc = ((1+n) * n) / 2;
	return calc;
}
