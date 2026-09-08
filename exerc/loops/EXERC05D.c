#include <stdio.h>

int main(void) {
    for (int i = 0; i < 200; i++) {
        if (i % 4 == 0) {
            printf("\nDivisível por 4: %d ", i);
        }
    }
    return 0;
}