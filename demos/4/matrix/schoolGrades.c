/* Cálculo de Média de 8 alunos com 4 notas */
#include <stdio.h>
int main(void){
	float matriz[8][4], numero;
	printf("\nLeitura e apresentação de notas\n");

	/* Entrada das notas */
	for (int i = 0; i < 8; i++){
		printf("\nInforme as notas do %do. aluno: \n\n", i+1);
		for (int j = 0; j < 4; j++){
			printf("Nota %d: ", j+1);
			scanf("%f", &numero);
			matriz[i][j] = numero;
		}
	}

	/* Saída das notas */
	for (int i = 0; i < 8; i++){
		printf("\nAs notas do aluno %d são: \n\n", i+1);
		for (int j = 0; j < 4; j++){
			printf("Nota %d: %5.2f\n", j+1, matriz[i][j]);
		}
	}
	printf("\n");
	return 0;
}
