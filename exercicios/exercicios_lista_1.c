#include <stdio.h>

// Todos os algoritmos construídos devem ser do tipo sequencial. Sem utilizar seleção e repetição.

// conversao de celcius para fahrenheit
// C = 9 / 5 * F - 32
void celcius_to_fahrenheit(double valor_fahrenheit);

/* 
Escrever um algoritmo que lê o nome de um funcionário, o número de horas trabalhadas,
o valor que recebe por hora e o número de filhos. Com estas informações, calcular o
salário deste funcionário, sabendo que para cada filho, o funcionário recebe 3% a mais,
calculado sobre o salário bruto.
*/
void info_funcionario();

int main() {
    celcius_to_fahrenheit(100);
    info_funcionario();
    
    return 0;
}

void celcius_to_fahrenheit(double valor_fahrenheit) {
    double result = (valor_fahrenheit - 32) / (9.0 / 5.0);
    printf("%f \n", result);
}

void info_funcionario() {
    char nome[20];
    int horasTrabalhadas, numFilhos;
    double valorHora;
    
    printf("Digite o seu nome: ");
    // fgets(nome, sizeof(nome), stdin); isso le o \n
    scanf("%[^\n]", nome); // aqui ele vai ler ate encontrar o \n
    
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    
    printf("Digite o valor que voce recebe por hora: ");
    scanf("%lf", &valorHora);
    
    printf("Digite o numero de filhos: ");
    scanf("%d", &numFilhos);
    
    int numeroFinaisSemana = 8;
    
    int numHorasMES = (30 - 8) * horasTrabalhadas;
    
    double salario = numHorasMES * valorHora;
    
    double aumentoPorFilho = (3 * salario / 100) * numFilhos;
    
    double result = salario + aumentoPorFilho;
    
    printf("O salario de %s sera de: %lf \n", nome, result);
 
}
