/* [VAZIO]: Criar um programa que calcule e apresente o valor de uma prestação em atraso, utilizando a fórmula P = V + (V * (TX/100) * T) 
 * P - Prestação | V - Valor | TX - Taxa | T - Tempo
 */

#include <stdio.h>
void calc_atraso(float v, float tx, float t);

int main(void){
	float prestacao, valor, taxa, tempo;
	printf("\n!!! PRESTAÇÃO ATRASADA !!!\n");
	printf("Valor original : "); scanf("%f", &valor);
	printf("Taxa de atraso : "); scanf("%f", &taxa);
	printf("Tempo de atraso: "); scanf("%f", &tempo);
	calc_atraso(valor, taxa, tempo);
	return 0;
}

void calc_atraso(float v, float tx, float t){
	float p = v + (v * (tx/100) * t);
	printf("\nO valor dado o atraso se tornou %.2f\n", p);
	return;
}
