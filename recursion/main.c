#include <stdio.h>

// funcoes recursivas | procedimentos recursivos
// procedimentos -> "funcoes" sem retorno
// funcoes -> retorna alguma coisa

// procedimento
void Incremento(int limite);

int main() {
    Incremento(10);
    return 0;
}

void Incremento(int limite) {
    int numero = 0;
    if (numero == limite) {
        printf("numero: %d \n", numero);
        return;
    }
    numero++;
    Incremento(limite);
}