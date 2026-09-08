/* Criar um programa que leia os valores reais armazenados anteriormente, apresentando-os em seguida.*/

#include <stdio.h>

int main(void){
	float a[5];
	FILE *p;

	printf("Obtendo dados de processos anteriores...");
	p = fopen("files/floatVector1.dat", "rb");
	
	if (p == NULL) {
		printf("\nArquivo não encontrado.\n\n");
		return 1;
	}

	fread(a, sizeof(a), 1, p);
	printf("\nDados obtidos:\n");
	for (int i = 0; i < 5; i++){
		printf("[%d]: %.2f\n", i+1, a[i]);
	}

	printf("\nFim de processo.\n");
	fclose(p);
	return 0;
}
