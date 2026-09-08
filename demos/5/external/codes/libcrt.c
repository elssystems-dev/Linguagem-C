/* Código da biblioteca CRT */

#include <stdio.h>

/* Função: Limpa Tela */
void clear(void){
	printf("\033[2J");
	return;
}

/* Função: Posiciona Cursor */
void position(int line, int row){
	printf("\033[%d;%dH", line, row);
	return;
}

/* Função: Limpa Linha a partir da posição do cursor */
void clearline(void){
	printf("\033[K");
	return;
}
