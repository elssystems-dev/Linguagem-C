/* Ler cinco valores reais (float) em um vetor A, armazenando os dados em um arquivo binário após a leitura.*/

#include <stdio.h>

int main(void){
	float a[5];
	FILE *p;

	printf("\n=== Leitura de Float ===\n");
	for (int i = 0; i < 5; i++){
		printf("Digite valor Nº%d: ", i+1);
		scanf("%f", &a[i]);
		while (getchar() != '\n');
	}

	printf("\nRealizando salvamento...\n\n");
	p = fopen("files/floatVector1.dat", "wb");

	if (p == NULL) {
		printf("Erro: Verifique se 'files' existe.\n");
		return 1;
	}

	fwrite(a, sizeof(a), 1, p);
	printf("Processo finalizado. Até mais!\n");
	fclose(p);
	return 0;
}
