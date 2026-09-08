#include <stdio.h>

int main (void) {
    int temp, valorAnterior = 0, valorProximo = 1;
    for (int i = 0; i < 15; i++) {
        printf("FIBONACCI [%d] = %d\n", i, valorAnterior);
        temp = valorProximo;
        valorProximo = valorProximo + valorAnterior;
        valorAnterior = temp;
    }
    return 0;
}
