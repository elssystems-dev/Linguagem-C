#include <stdio.h>
int main(void){
	int i;
	for (i = 1; i <= 10; i++) {
		printf("I = %2d\n", i); // O número 2 antes de 'd' define a largura mínima de caracteres.
		// Isso significa que os números ficarão alinhados perfeitamente neste caso, onde o maior número possui dois dígitos
	}
	return 0;
}
