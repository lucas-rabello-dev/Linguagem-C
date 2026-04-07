#include <stdio.h> 

// precisa do break

int main() {

    int number = 10;

    int is_par = number % 2;

    switch (number) {
        case 0:
            printf("Eh par");
            break;
        default:
            printf("Eh impar");
            break;
    }

    return 0;
}