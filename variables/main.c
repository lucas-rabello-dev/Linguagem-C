#include <stdio.h>

int sim = 10; // variavel global

int main() {
    int nao = 9; // variavel local
    printf("%d \n", nao); // eu consigo acessar ela apenas dentro do escopo 'main'
    printf("%d \n", sim); // consigo acessar ela de qualquer lugar
    
    for (int i = 0; i < 10; i++) {
        printf("%d", i); // 'i' eh uma variavel de escopo
    }
    return 0;
}