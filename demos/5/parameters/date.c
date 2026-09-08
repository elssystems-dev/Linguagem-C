/* Data calendário por extenso */

#include <stdio.h>
#include <stdlib.h>

/* argc - argument count 
 * se trata de quantos itens o seu programa receberá logo após a chamada do executável (ou seja, o argc padrão sempre é 1), estes quais servirão para identificação do argv.*/

/* argv - argument vector 
 * um array de strings (ponteiro de chars). Cada palavra que é digitada no terminal se torna um item deste array
 * reforçando a ideia anterior, o executável SEMPRE será o argv[0], o que incrementa a contagem em 1.*/

int main(int argc, char *argv[]){
	char mes_extenso[][10] = { // Matriz de strings: Limite de 10 caracteres
		"janeiro",
		"fevereiro",
		"março",
		"abril",
		"maio",
		"junho",
		"julho",
		"agosto",
		"setembro",
		"outubro",
		"novembro",
		"dezembro"
	}; // Não foi necessário definir o número de linhas nos colchetes por conta da própria declaração da variável atribuir uma quantidade de itens fixa

	int dia, mes, ano;

	if (argc == 4){ // força 4 elementos para continuar a execução
		dia = atoi(argv[1]); // atoi: ascii to integer: transforma os números que eram strings no terminal em int
		mes = atoi(argv[2]);
		ano = atoi(argv[3]);

		if (dia < 1 || dia > 31) printf("\nForneça dia entre 1 e 31.");
		else if (mes < 1 || mes > 12) printf("\nForneça mês entre 1 e 12.");
		else if (ano < 1000 || ano > 9999) printf("\nForneça ano entre 1000 e 9999.");
		else printf("\n%s de %s de %s", argv[1], mes_extenso[mes-1], argv[3]);
	} else {
		printf("\nIncorreto: data DD MM AAAA.");
	}
	return 0;
}
