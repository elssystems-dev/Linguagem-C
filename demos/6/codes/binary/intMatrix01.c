/* Matriz com Arquivo */

#include <stdio.h>

int main(void){
	int a[10];
	FILE *ponteiro;
	ponteiro = fopen("../../text/intMatrix.dbc", "wb");
	for (int i = 0; i < 10; i++){
		printf("Digite o elemento [%d]: ", i+1);
		scanf(" %d", &a[i]);
	}
	fwrite(a, sizeof(a), 1, ponteiro);
	// buffer, tamanho, itens, ponteiro arquivo
	// size(of) retorna o tamanho em bytes da expressão indicada.
	// cada int equivale a 4 bytes, portanto o tamanho da será 40 bytes.
	fclose(ponteiro);
	return 0;
}
