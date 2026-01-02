#include <stdio.h>

int main() {

    char sla[20];
        
    // lendo ate um " " (espaco)
    scanf("%s", sla); // nao utilizamos o & por que sla eh um ptr que aponta para uma regiao da memoria onde fica os bytes reservados
    // o scanf causa overflow, ele escreve a mais do que voce reservou
    // ele vai dar segmantation fault se isso acontecer
    
    printf("%s \n", sla); 
    
    // lendo strings ate o \n
    

    return 0;
}