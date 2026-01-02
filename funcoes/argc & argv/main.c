#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    printf("%d", argc);

    for (int i = 0; i < sizeof(*argv) / sizeof(*argv[1]); i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    return EXIT_SUCCESS; // eh o valor 0, e precisa importar a stdlib.h
} 