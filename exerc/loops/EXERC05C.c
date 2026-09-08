#include <stdio.h>

int main(void){
    int n;
    println("Escolha um número para ver sua tabuada: "); scanf("%d", &n);
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d", n, i, (n * i));
    }
    return 0;
}