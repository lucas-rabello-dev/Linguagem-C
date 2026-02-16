// uma struct dentro de outra struct
#include <stdio.h>

typedef struct Data {
  int dia, mes, ano;
} Data;

typedef struct Compra {
  char nomeProduto[30];
  double valor;
  // criacao e edicao serao do tipo 'Data' que tem 3 caracteristicas, que sao
  // dados do tipo int ou seja eh um dado que armazena outros dados
  Data criacao, edicao;
} Compra;

typedef struct Sla {
    int a;
    struct {
        int nao;
    };
    
    // usando uma struct ja definida
    Compra compra;
    
}Sla;

int main() {
  Data dataCriacao = {.dia = 1, .mes = 3, .ano = 2000};

  Data dataEdicao = {.dia = 2, .mes = 2, .ano = 2000};

  Compra compra = {
    .nomeProduto = "sei la",
    .valor = 111.99,
    .criacao = dataCriacao,
    .edicao = dataEdicao
  };

  printf("%d \n", compra.criacao.dia);
  
  
  return 0;
}
