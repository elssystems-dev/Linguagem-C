/* Dados pessoais com scanf() formatado com %[] */
#include <stdio.h>
int main(void){
	char nome[40];
	printf("Entre o nome completo: "); scanf("%39[^\n]", nome);
	printf("Olá, %s\n", nome); 
	return 0;
}

/* Possibilidades do código de formato %[]
 * %10[0-9] - Define a entrada de até dez caracteres representados por uma sequência numérica
 * %[^\f\n\r\t\v] - Define a entrada de qualquer caracteres menos os indicados
 * %5[a-z] - Indica a entrada de até cinco caracteres que sejam apenas minúsculos
 * %35[A-Z] - Determina a entrada de até 35 caracteres que sejam apenas maiúsculos
 * %25[A-Z a-z] - Determina a entrada de até 25 caracteres que sejam apenas maiúsculos ou minúsculos e o caracter espaço.
 */
