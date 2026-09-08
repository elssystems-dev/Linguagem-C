#include <stdio.h>

int main(void) {
    int numero, soma;
    soma = 0;    
    numero = 1;
    for (; numero < 100; numero++) {
        soma += numero;
        printf("Soma %d = %d\n", numero, soma);
    }
    return 0;
}