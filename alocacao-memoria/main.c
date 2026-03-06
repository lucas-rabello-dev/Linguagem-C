#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int sla; // 4 bytes
    char texto[16]; // 16 bytes
} Teste; // total de 20 bytes

int main() {
    
    // alocando um int (4 bytes) e o endereco dessa memoria alocada fica em ptr (que eh o retorno da funcao)
    int* ptr = malloc(sizeof(int));
    
    // escrevendo na memoria acessando ela pelo ponteiro
    *ptr = 10;
    
    printf("Size of pointer (int): %zu \n", sizeof(*ptr));
    
    // liberar a memoria alocada usando o free()
    free(ptr);
    
    // alocando um espaco equivalente a struct
    Teste* teste = malloc(sizeof(Teste));
    
    printf("Size of pointer (Teste): %zu bytes\n", sizeof(*teste));
    
    //liberando a memoria
    free(teste);
    
    return 0;
}