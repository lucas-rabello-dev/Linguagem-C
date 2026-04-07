#include <stdio.h>
// disponivel a partir do C99 | gcc apartir do 4.5
#include <stdbool.h>


int main() {

    bool ativo = true;
    bool ativo2 = false;
    printf("Bem simples, precisa importar a lib e ver a versao do compilador \n");


    // exemplo de bool sem a lib 
    // no C "antigo" o bool era tratado com 1 e 0
    printf("10 < 3 | retorno -> %d \n", 10 < 3); // retorna 0 pois e false
    printf("20 > 9 | retorno -> %d \n", 20 > 9); // retorna 1 pois e true

    // brincando 
    if (90 > 10) {
        printf("true \n");
        return 0;
    }
    printf("false \n");

    return 0;
} 
