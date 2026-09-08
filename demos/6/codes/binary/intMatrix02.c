/* Arquivo com Matriz */

#include <stdio.h>

int main(void){
	int a[10];
	FILE *ponteiro;
	ponteiro = fopen("../../text/intMatrix.dbc", "rb");
	fread(a, sizeof(a), 1, ponteiro);
	for (int i = 0; i < 10; i++){
		printf("O elemento [%d] equivale a: %d\n", i+1, a[i]);
	}
	fclose(ponteiro);
	return 0;
}
