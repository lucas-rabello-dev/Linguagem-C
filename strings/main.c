#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {

    char sla[20];
        
    // lendo ate um " " (espaco)
    scanf("%s", sla); // nao utilizamos o & por que sla eh um ptr que aponta para uma regiao da memoria onde fica os bytes reservados
    // o scanf causa overflow, ele escreve a mais do que voce reservou
    // ele vai dar segmantation fault se isso acontecer
    
    printf("%s \n", sla); 
    
    // as funcoes de input estao na pasta /input 
    
    // descobrindo o tamanho de uma string
    char sla2[] = "teste eeeeee fjduhsfihiushnif jeufs";
    size_t tamanho = strlen(sla2);
    // %zu eh o especificador de formato correto para size_t (unsigned long)
    printf("%zu \n", tamanho);
    
    // concatenando duas strings
    // aqui ele vai concatenar sla + sla2
    // e o resultado vai ficar em sla
    strcat(sla, sla2);
    
    // printf("%s", sla); mostra o resultado
    
    // comparando duas strings
    // true retorna 0
    // false retorna -1
    int result = strcmp(sla, sla2);
    
    if (result == 0) {
        printf("Sao iguais \n");
    } else {
        printf("nao sao iguais \n");
    }
    
    // copiar uma string
    char nada[22];
    char alguma_coisa[11];
    // primeiro o destino e dps o que vai ser copiado
    strcpy(nada, alguma_coisa);
    
    // procurando caracteres em uma string com strchr e strrchr
    char sim[] = "sim";
    // isso retorna o endereco do caractere
    // se nao achar retorna NULL
    char *letra = strchr(sim, 's');
    
    // exemplo
    if (strchr(sim, '1') == NULL) {
        printf("Nao encontrou '1' na string \n");
    } else {
        printf("achou o '1' \n");
    }
    // o strrchr procura de tras pra frente na string ---------------------------------------------------------------
    
    // como encontrar uma substring com strstr()
    // exemplo: procurar por uma palavra
    // tbm retorna o endereco e NULL se nao achar
    // se voce printar vc vai ver que vai mostrar apartir do 'eh' em diante da string (como se ele cortasse)
    char *ponteiro_para_o_inicio_da_palavra_kkkk = strstr("isso eh um teste", "eh");
    
    
    // maiusculo / minusculo para caracteres
    
    char l = 's';
    // precisa do #include <ctype.h>
    l = toupper(l);
    l = tolower(l);
    
    // para strings strupr() strlwr()
    // AVISO -----------------------------------------------------------------
    // essas duas funcoes nao existem no compilador gcc
    // existe principalmente em MSVC (no windows)

    // no meu caso eu teria que implementar
    
    
    // dividir uma string em tokens strtok()
    
    // ele vai ler ate achar uma virgula e troca ela por um \0 (NULL char) e para de ler no NULL
    // dentro do while ele continua pelo NULL e assim por diante
    // dividindo assim a frase por \0 indicando o final de cada palavra
    char str[] = "um,dois,tres";
    
    char *token = strtok(str, ",");
    
    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
    return 0;
}