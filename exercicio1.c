#include <stdio.h>


int main() {

    int a = 10;
    int b = 20;
    int copia;

    printf("Valor de a: %d | Valor de b: %d \n", a, b);

    copia = a;

    a = b;
    b = copia;

    printf("Valores trocados a: %d | b: %d \n", a, b);

    return 0;
}