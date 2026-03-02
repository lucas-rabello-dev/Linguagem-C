#include <stdio.h>


// struct basica
typedef struct {
    char nome[20];
    int idade;
    float saldo;
} Aluno;

Aluno init();

int main() {
    
    // uma array de structs
    // contem aqui uma array de 'Alunos'
    Aluno alunos[3];
    
    alunos[0] = init();
    
    printf("%s | %d | %.2f \n", alunos[0].nome, alunos[0].idade, alunos[0].saldo);
    
    
    return 0;
}

Aluno init() {
    // instanciando o aluno kkkk
    Aluno aluno = {
        .nome = "Isso eh um teste",
        .idade = 18,
        .saldo = 50.00f
    }; 
    
    return aluno;
}