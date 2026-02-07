#include <stdio.h>
#include <string.h>

// declaracao

// struct atributo nome {
// code...
// } variaveis; 

// atributo -> foram introduzidos no c23 e sao opicionais
// variaveis -> sao nomes de variaveis que seram do tipo que voce esta criando, voce pode criar quantas quiser e separar elas por virgula

/*
Structs anonimas

struct {

} variavel;

essa struct nao tem nome (eh anonima) porem voce pode usar ela se definir a 'variavel'
*/

struct Pessoa {
    char nome[20];
    char cpf[15];
    int idade;
} pessoa1, pessoa2, pessoa3;

// typedef serve para criar um tipo novo e dar um apelido para ele
// struct Pessoa -> define uma struct com o nome 'Pessoa'
// o 'Pessoa' final eh o apelido que o typedef precisa

typedef struct Exemplo {
    // isso eh um exemplo de uma struct com o typedef
    int numero;
}Exemplo;


int main() {
    
    // 3 formas de inicializar uma struct
    
    struct Pessoa pessoa1 = {"lucas", "000.000.000-00", 88};
    
    struct Pessoa pessoa2 = {
        .nome = "outro cara",
        .cpf = "cpf aqui kkk",
        .idade = 22
    };
    
    
    struct Pessoa pessoa3; // inicializada
    // dando os valores
    strcpy(pessoa3.nome, "nome");
    strcpy(pessoa3.cpf, "cpf aqui");
    pessoa3.idade = 33;
    
    return 0;
}