// usando long
// ele pode ser usado para numeros inteiros e decimais

#include <stdio.h>

int main() {

    int a = 1; // 4 bytes 

    // o long é usado antes do tipo pois ele suporta decimal e int
    long int b = 1.0; // 8 bytes

    long double c = 1.0; // 16 bytes

    long long int d = 1; // 8 bytes
    // o valor de d ser igual o b é por que exite um espaço mínimo em que os tipos podem ocupar dependendo do OS e da arquititura da CPU
    // no meu caso é no linux e arch = x86-64

    // não funciona por que dois long só funciona para inteiros
    // long long double e = 1.9;

    printf("Valor em bytes de a: %d \n", sizeof(a));
    printf("Valor de b: %d \n", sizeof(b));
    printf("Valor de c: %d \n", sizeof(c));
    printf("Valor de d: %d \n", sizeof(d));

    // para imprimir os valores 
    // %lld -> long long decimal
    // %lli -> long long int
    // é mesma coisa mas vamos usar mais o %lld para inteiros

    // %Lf -> para long decimais

    // %ld -> para long int

    printf("%Lf \n", c);


    return 0;
}