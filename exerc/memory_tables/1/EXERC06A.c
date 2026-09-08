/* 1. A) Ler e escrever dez elementos numéricos inteiros de um vetor a*/
#include <stdio.h>
int main(void){
	int a[10];
	for (int i = 0; i < 10; i++){
		printf("Atribua um valor para o elemento %d: ", i+1);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++){
		printf("Elemento [%d] equivale a %d\n", i+1, a[i]);
	}
	printf("\n");
	return 0;
}
