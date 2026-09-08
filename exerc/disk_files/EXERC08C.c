/* Ler dez valores inteiros para um Vetor A.
 * Construir um vetor B, sendo cada elemento de B o quadrado do elemento de A, e gravar B em um arquivo.
 * Por fim, transferir os dados gravados no arquivo para a vetor C e apresentá-los a partir de C.*/

#include <stdio.h>

int main(void){
	int a[10];
	long long b[10], c[10];
	FILE *p;

	printf("\n--- Cálculo de Quadrados ---\n");
	for (int i = 0; i < 10; i++){
		printf("Insira valor Nº%d: ", i+1); scanf("%d", &a[i]);
		while (getchar() != '\n');
		b[i] = a[i] * a[i];
	}
	
	printf("\nSalvando...\n\n");
	p = fopen("files/intVector2.dat", "wb+");

	if (p == NULL) {
		printf("Erro: Arquivo não encontrado.\n");
		printf("Verifique se 'files/' existe.\n");
		return 1;
	}

	fwrite(b, sizeof(b), 1, p);
	rewind(p); // Obrigatório: Volta a ler desde o começo novamente
	fread(c, sizeof(c), 1, p);

	printf("Salvo com sucesso! Apresentando dados...\n");

	for (int i = 0; i < 10; i++){
		printf("RESULTADO [%d]: %lld\n", i+1, c[i]);
	}

	fclose(p);
	return 0;
}
