#include <stdio.h>
int main(void){
	float MD[8];
	float media, soma = 0;
	printf("\nCálculo de média escolar\n\n");
	for (int i = 0; i <= 7; i++) {
		printf("Informe a %da. nota: ", i + 1); scanf("%f", &MD[i]);
		soma += MD[i];
	}
	media = soma / 8;
	printf("\nA média do grupo equivale a: |%6.2f|\n\n", media);
	return 0;
}
