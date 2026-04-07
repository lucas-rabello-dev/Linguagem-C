#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char CPUname[20];
    int RAM;
    char GPUname[20];
    int sizeSSD;
}Computer;

Computer* initComputer();

int main() {
    
    // ponteiro basico
    long int a = 8932203429;
    long int* ptr = &a;
    
    // %ld -> long decimal -> long int
    // %p -> pointer -> especifico para ponteiros
    // nesse caso eh recomendavel fazer um cast para (void*) para garantir compatibilidade
    // void* nessa conversao seria tipo um ponteiro pra qualquer tipo
    // pique um generic kkkkk
    printf("Valor do ptr: %ld | Endereco que ele aponta: %p \n", *ptr, (void*)ptr);
    // tamanho do ponteiro
    // %zu -> usado para representar size_t
    printf("Tamanho do ptr: %zu \n", sizeof(ptr));
    
    return 0;
}
Computer* initComputer() {
    // alocando na heap um espaco suficiente para a struct 'Computer'
    Computer* computer = malloc(sizeof(Computer));
    
    *computer = (Computer){
        .CPUname = "i5 12 gen",
        .RAM = 16,
        .GPUname = "intel iris Xre",
        .sizeSSD = 512
    };
    
    return computer;
}