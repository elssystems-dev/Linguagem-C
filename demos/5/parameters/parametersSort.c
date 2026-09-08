/* Passagem de parâmetros por referência */

#include <stdio.h>

int troca(int *a, int *b); // Ponteiros (variáveis indicadas pelo asterisco que apontam no endereço de memória de algo)

int main(void){
	int vetor[9];
	printf("\n\nOrdenação de vetor\n\n");

	/* Entrada de Dados */
	for (int i =0; i < 9; i++){
		printf("Entre o %d. elemento: ", i+1);
		scanf("%d", &vetor[i]);
	}

	/* Ordenação do Vetor */
	for (int i = 0; i < 8; i++)
		for (int j = i+1; j < 9; j++)
			troca(&vetor[i], &vetor[j]);
	
	printf("\n");

	/* Apresentação do vetor ordenado */
	for (int i = 0; i < 9; i++) printf("Agora o %do. elemento é: %d\n", i+1, vetor[i]);

	printf("Digite ENTER para finalizar: "); getchar(); getchar();
	return 0;
}

/* Questionamento: Por que utilizar ponteiros?
 * A resposta é mais simples do que parece, e se dá justamente para a função de troca conseguir manipular o vetor que está dentro da função main()
 * Sem isso, o escopo da variável não permitiria essa alteração, se tornando então a única alternativa limpa de modificar os dados internos.
 * Na função main, utiliza o caracter '&' para apontar ao endereço da variável, e a partir disso:
 * - Os parâmetros int *a, int *b da função de troca utilizam-se do asterisco '*' para indicar que aquela será uma variável que guardará endereços. (ponteiro)
 * - No corpo da função, acessar algum desses valores novamente através do asterisco, obtém-se o valor contido dentro do endereço..
 */

int troca (int *a, int *b){
	/* Definição dos ponteiros que receberão os valores dos vetores */
	int x;
	if (*a > *b){
		x = *a;
		*a = *b;
		*b = x;
	}
	return 0;
}
