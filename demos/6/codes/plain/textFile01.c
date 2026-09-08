/* Criação de arquivo texto */

#include <stdio.h>
int main(void){
	FILE *pont_arq; // Definição do ponteiro para o arquivo
	pont_arq = fopen("../text/arqTxt01.txt", "a");
	fclose(pont_arq);
	return 0;
}
