#include <math.h>
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

/*
Faça um algoritmo para ler as três notas de um aluno em uma disciplina e exibe a sua
média ponderada (as notas tem pesos respectivos de 1, 2 e 3).
*/
void maiorNota();

/*
    Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule
    e mostre:
    a) a idade dessa pessoa em anos;
    b) a idade dessa pessoa em meses;
    c) a idade dessa pessoa em dias;
    d) a idade dessa pessoa em semanas.
*/
void idadePessoa(int anoNascimento, int anoAtual);

/*
João Felipe recebeu seu salário de R$ 1200,00 (líquido) e precisa pagar duas contas C1
e C2. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta,
mais o percentual de 1/30 avos por dia de atraso (1% ao mês). Faça um algoritmo que lê
o valor de cada uma das contas e quantos dias estão atrasadas. Calcule e mostre o valor
de cada conta paga e quanto restará do salário do João Felipe.
*/
void JoaoSeLascou_kkkk();



int main() {
    // celcius_to_fahrenheit(100);
    // info_funcionario();
    // maiorNota();
    // idadePessoa(2008, 2026);
    JoaoSeLascou_kkkk();
    
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

void maiorNota() {
    
    int nota1, nota2, nota3;
    printf("Digite 3 notas sequencialmente: ");
    scanf("%d%d%d", &nota1, &nota2, &nota3);
    
    // fiz esses macros pra entender, mesmo que seja feio fazer isso
    #define peso1 1.0
    #define peso2 2.0
    #define peso3 3.0
    
    double result = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
    
    printf("Media ponderada: %.2lf \n", result);
}

void idadePessoa(int anoNascimento, int anoAtual) {
    int idadeEmAnos = anoAtual - anoNascimento;
    printf("a) %d \n", idadeEmAnos);
    
    int idadeEmMeses = idadeEmAnos * 12;
    printf("b) %d \n", idadeEmMeses);
    
    int idadeEmDias = idadeEmMeses * 365;
    printf("c) %d \n", idadeEmDias);
    
    float idadeEmSemanas = idadeEmAnos * 52.1786;
    printf("d) %f \n", idadeEmSemanas);
}

void JoaoSeLascou_kkkk() {
    float salario = 1200.00;
    float C1, C2;
    int diasAtrasados;
    
    printf("Digite o valor a pagar da conta 1: ");
    scanf("%f", &C1);

    printf("Digite o valor a pagar da conta 2: ");
    scanf("%f", &C2);
    
    printf("Quantos dias de atraso: ");
    scanf("%d", &diasAtrasados);
    
    // calculando o 2% default
    C1 += 2 * C1 / 100;
    C2 += 2 * C2 / 100;
    // 1/30/100 == 3000
    C1 += C1 * diasAtrasados / 3000;
    C2 += C2 * diasAtrasados / 3000;
    
    salario -= C1;
    salario -= C2;
    
    printf("Voce vai ter que pagar: \nConta 1: %f \nConta 2: %f \nO seu salario ficou: %f", C1, C2, salario);
}