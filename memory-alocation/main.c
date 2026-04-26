#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int sla; // 4 bytes
    char texto[16]; // 16 bytes
} Teste; // total de 20 bytes

void UsingCALLOC();

void AlocVetor();

void UsingRealloc();

void matriz();

void matriz2();

int main() {
    
    // alocando um int (4 bytes) e o endereco dessa memoria alocada fica em ptr (que eh o retorno da funcao)
    int* ptr = malloc(sizeof(int));
    
    // escrevendo na memoria acessando ela pelo ponteiro
    *ptr = 10;
    
    printf("Size of pointer (int): %zu \n", sizeof(*ptr));
    
    // liberar a memoria alocada usando o free()
    free(ptr);
    
    // alocando um espaco equivalente a struct
    Teste* teste = malloc(sizeof(Teste));
    
    printf("Size of pointer (Teste): %zu bytes\n", sizeof(*teste));
    
    //liberando a memoria
    free(teste);
    
    UsingCALLOC();
    
    AlocVetor();

    UsingRealloc();

    matriz();

    matriz2();
    
    return 0;
}

void UsingCALLOC() {
    // calloc recebe dois parametros
    // o primeiro eh a quantidade de valores que vao ser alocados
    // o segundo eh o tamanho de um deles
    // exemplo:
    int *teste = calloc(10, sizeof(int));
    // estamos alocando 10 numeros inteiros
    // o tamanho do ponteiro eh de 8 bytes (x86_64), porem ele aponta para o inicio dos 40 bytes alocados
    // calloc tambem inicializa todos os bytes com 0
    // diferente de malloc que inicializa com valor lixo (sao dados que mesmo alocados nao foram limpos indo para 0)
    
    free(teste);
}
// alocando um vetor dinamico
void AlocVetor() {
    // 10 -> numero de "casas" do vetor
    // 4 -> tamanho do tipo do int
    int *vetor = malloc(10 * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memoria! \n");
        return;
    }
    
    // imprimindo o conteudo do vetor
    for (int i = 0; i < 10; i++) {
        // *(vetor + i) -> aritimetica de ponteiros nos possibilita fazer somas e subtracoes com ponteiros
        // array[i] eh um sugar sintax disso
        // eh uma forma de percorrer um array
        printf("%d ", *(vetor + i));
    }
   printf("\n");
}

void UsingRealloc() {
    // a funcao realloc() NAO aumenta o tamanho de um vetor/array
    // esse *vet eh um ponteiro para o inicio do vetor 
    int *vet, size;

    printf("Enter the size of an array: ");
    scanf("%d", &size);

    vet = malloc(size * sizeof(int));

    if (vet == NULL) {
        printf("error in malloc");
        return;
    }

    for (int i = 0; i < size; i++) {
        *(vet + i) = i; // aritimetica de ponteiros, adicionando valores dentro desse vetor
    }
    printf("vetor de tamanho: %d \n", size);


    // mostrando os valores do vetor
    for (int i = 0; i < size; i++) {
        printf("%d ", *(vet + i));
    }
    printf("\n");
    // parametros: ponteiro inicial para o array, tamanho em bytes desse array 
    // e a funcao retorna um ponteiro
    vet = realloc(vet, size * sizeof(int));
    if (vet == NULL) {
        printf("Erro ao usar a funcao realoc \n");
        return;
    }
    // uma forma de usar o realloc, porem tratando um erro caso exista

    int *new_ptr = realloc(vet, 10);
    if (new_ptr == NULL) {
        printf("Erro ao alocar memoria usando o realloc (2 time) \n");
        return;
    }
    // se nao der erro, mudamos os valores do primeiro ptr para o valor novo no qual o realloc "gerou"
    vet = new_ptr;
    size = 10;
    // se a alocacao falhar evitamos de perder o endereco do primeiro ponteiro!
}

// memory leak
void matriz() {
    // ponteiro para ponteiro
    int **matriz = malloc(4 * sizeof(int*));

    if (matriz == NULL) {
        printf("Erro ao alocar memoria (matriz)\n");
        return;
    } 
    for (int i = 0; i < 4; i++) {
        // ou tbm *(matriz + i) = 
        matriz[i] = malloc(3 * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria (matriz-2)\n");
            return;
        }
    }
    // i represenda a coluna, j representa a linha
    // adicionando valores na matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            // ou *(*(matriz + i) + j) = 
            matriz[i][j] = 1; // todas vao ter o valor 1
        }
    }
    // mostrando os dados
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) { free(matriz[i]); } // liberando os elementos dentro da matriz
    printf("\n");

    free(matriz);
}

#define colunas 4 
#define linhas 3
void matriz2() {
   // um array de ponteiros
   int **mat = (int **)malloc(linhas *sizeof(int*));
   // pra cada poneiro dentro do array, alocamos um numero de int(s)
   for (int i = 0; i < linhas; i++) {
       mat[i] = (int *)malloc(colunas * sizeof(int));
   }
   // tem esse exemplo que eh o melhor:
   int *mat2 = malloc(linhas * colunas * sizeof(int));

   int value = colunas * 2 + 1; // na segunda coluna o primeiro elemento

   printf("%d", mat2[value]);

   free(mat2);
   free(mat);
}
