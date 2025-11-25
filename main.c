#include <stdio.h>

int main() {

    // usando getchar() -> pega um único caractere kkk
    char confirm;

    printf("Enter [y/n]:");
    confirm = getchar(); // -> essa função retorna um numero inteiro 
    printf("%c \n", confirm);

    return 0;
}