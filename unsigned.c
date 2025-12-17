#include <stdio.h>

int main() {

    //numeros sem sinal e usamos o operador %u 
    unsigned int number = 10;
    unsigned int num = -10; // se fosse for imprimir ele provavelmente vai retornar um número completamente errado
    
    printf("%u", number);

    return 0;
}