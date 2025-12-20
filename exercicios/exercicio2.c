// sem variével auxiliar
#include <stdio.h>


int main() {

    int a = 30;
    int b = 20;

    printf("Valores normais: %d | %d \n", a, b);

    a = a + b; // a = 50 | a é igual a soma dos dois valores
    b = a - b; // 50 - 20 = b | b = 30
    a = a - b; // 50 - 20 = a 


    printf("Valores mudados: %d | %d \n", a, b);

    return 0;
}