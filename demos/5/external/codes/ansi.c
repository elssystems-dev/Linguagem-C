/* Definição de Funções ANSI */

#include <stdio.h>

void clear(void);
void position(int line, int row);

/* Teste das Funções Definidas */

int main(void){
	clear();
	position(1, 23); // Escreve na linha 12 coluna 23
	printf("Teste de limpeza e Posicionamento");
	position(23, 1);
	return 0;
}

/* Função: Limpa Tela */
void clear(void){
	printf("\033[2J");
	return;
}

/* Função: Posiciona Cursor */
void position (int line, int row){
	printf("\033[%d;%dH", line, row);
	return;
}
