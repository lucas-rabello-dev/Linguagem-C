#include <stdio.h>


// usando o operador short
// ele só pode ser atribuido a tipos inteiros

int main() {

    int num = 10; // 4 bytes
    short num2 = 10; // 2 bytes

    printf("Sem short: %d | Com short: %d", sizeof(num), sizeof(num2));


    return 0;
}