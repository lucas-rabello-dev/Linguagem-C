#include <stdio.h>

int main() {

    // usando getchar() -> pega um único caractere kkk
    // char confirm;

    // printf("Enter [y/n]:");
    // confirm = getchar(); // -> essa função retorna um numero inteiro 
    // printf("%c \n", confirm); // inprime o caractere
    // printf("%d \n", confirm); // imprime o seu valor decimal com base na ASCII table

    // usando getc() 
    // char confirm2;
    // printf("Enter [y/n]:");
    // confirm2 = getc(stdin); // retorna um int tbm e é usado para quando queremos ler de uma fonte diferente (ex: arquivos)
    // stdin -> entrada padrão (para ler o teclado)
    // se fosse um arquivo iriamos passa ele como parametro
    // printf("%c \n", confirm2);

    // Explicando o fget() por que não preciso fazer exemplos
    // ela é ESPECIFICA para ler ARQUIVOS ou do BUFFER DO TECLADO
    // usando stdin tbm
    
    // lendo vários valores do teclado usando scanf()

    // variaveis para cada "argumento"

    // printf(pedindo 3 informações);
    // scanf("%d%f%c");
    // voce poderia digitar um int, float e um char


    // limpando o buffer do teclado usando getchar()
    // o getchar() é usado para capturar um caractere de espaço (' ')
    // coisa que atrapalha muito

    char sla[30];
    fgets(sla, sizeof(sla), stdin);
    printf("%s", sla);


    return 0;
}