#include <stdio.h>


int main() {
    
    
    // ponteiro basico
    long int a = 8932203429;
    long int* ptr = &a;
    
    // %ld -> long decimal -> long int
    // %p -> pointer -> especifico para ponteiros
    // nesse caso eh recomendavel fazer um cast para (void*) para garantir compatibilidade
    // void* nessa conversao seria tipo um ponteiro pra qualquer tipo
    // pique um generic kkkkk
    printf("Valor do ptr: %ld | Endereco que ele aponta: %p", *ptr, (void*)ptr);
    
    
    return 0;
}