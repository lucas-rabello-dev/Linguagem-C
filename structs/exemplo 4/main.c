// Array bidimencional (matriz) de structs

#include <stdio.h>

typedef struct {
    char nome[20];
    int idade;
    float saldo;
}Aluno ;

Aluno init();

int main() {
    Aluno alunos[2][2];
    /*
        aluno[0][0] | aluno[0][1]
        aluno[1][0] | aluno[1][1]    
     */
    
    // retorna um aluno
    alunos[0][0] = init();
}

Aluno init() {
    Aluno aluno = {
        .nome = "Isso eh um teste 2",
        .idade = 21,
        .saldo = 20.00f
    }; 
    
    return aluno;
}