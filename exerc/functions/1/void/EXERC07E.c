/* [VAZIO]: Desenvolva um programa que crie uma função para calcular o valor de uma potência de um número inteiro qualquer.
 * Ou seja, ao informar para a sub-rotina o valor da base e do expoente (ambos inteiros), deve ser apresentado o valor da potência calculada.
 * Ex: potencia(2, 3) deve retornar 8.
 */

#include <stdio.h>
void potencia(int b, int e);

int main(void){
	int base, expoente;
	printf("\n=== Calculadora de Potência ===\n");
	printf("Insira o valor da base: "); scanf("%d", &base);
	printf("Insira o valor do expoente: "); scanf("%d", &expoente);
	potencia(base, expoente);
	return 0;
}

void potencia(int b, int e){
	int calc = 1;
	for (int i = 0; i < e; i++){
		 calc *= b;
	}
	printf("\n%d^%d = %d\n", b, e, calc);
	return;
}
