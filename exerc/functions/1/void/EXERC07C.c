/* Ler dois vetores A e B com 10 elementos inteiros cada:
 * Construir C, sendo esta a junção dos dois outros.
 * Desta forma, C deve ter o dobro de elementos.
 * Condições:
 * Neste exercício, deve ser criada uma função para cada tarefa do programa, ou seja, quatro sub-rotinas:
 * 1, 2 - Leitura dos vetores
 * 3 - Junção
 * 4 - Apresentação dos dados
 * main() deve chamar essas rotinas definidas.*/

#include <stdio.h>

void inputA(int a[]);
void inputB(int b[]);
void merge(int a[], int b[], int c[]);
void mostra(int c[]);

int main(void){
	int a[10], b[10], c[20];
	inputA(a);
	inputB(b);
	merge(a, b, c);
	mostra(c);
	return 0;
}

void inputA(int a[]){
	printf("\n=== VETOR A ===\n");
	for (int i = 0; i < 10; i++){
		printf("Insira valor %d: ", i); scanf("%d", &a[i]);
	}
}

void inputB(int b[]){
	printf("\n===VETOR B ===\n");
	for (int i = 0; i < 10; i++){
		printf("Insira valor %d: ", i); scanf("%d", &b[i]);
	}
	return;
}

void merge(int a[], int b[], int c[]){
	for (int i = 0; i < 10; i++){
		c[i] = a[i];
		c[10+i] = b[i];
	}
	return;
}

void mostra(int c[]){
	printf("\n=== RESULTADOS ===\n");
	for (int i = 0; i < 20; i++){
		printf("[VETOR C]: Valor %d = %d\n", i, c[i]);
	}
	return;
}
