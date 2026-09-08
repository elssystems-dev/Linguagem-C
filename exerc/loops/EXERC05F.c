#include <stdio.h>

int main(void) {
    printf("\nPotências de 3\n")
    int num = 3;
    for (int i = 1; i <= 9; i++) {
        printf("Potência [%d] = [%d]\n", i, num);
        num *= 3;
    }
    return 0;
}