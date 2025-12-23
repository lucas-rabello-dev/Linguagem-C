#include <stdio.h>


int main() {
    // linhas e colunas
    int matriz[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    // size_t -> eh um tipo de dado inteiro sem sinal usado para representar o tamanho do objeto em bytes 

    size_t size_line = sizeof(matriz) / sizeof(matriz[0]);

    size_t size_columns = sizeof(matriz[0]) / sizeof(matriz[0][0]);


    for (int i = 0; i < size_line; i++) {
        for (int j = 0; j < size_columns; j++) {
            printf("%d \n", matriz[i][j]);
        }
    }


    return 0;
}