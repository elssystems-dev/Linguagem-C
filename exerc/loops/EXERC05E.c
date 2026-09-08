#include <stdio.h>
#include <math.h>

int main(void){
    for (int i = 15; i <= 180; i++){
        printf("Quadrado de %d = %.0f", i, pow(i, 2));
    }
    return 0;
}