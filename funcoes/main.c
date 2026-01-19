#include <stdio.h>
int sum(int a, int b);
int LenStr(char str[]);

int main () {
    sum(2, 2);
    printf("%d \n", LenStr("sim"));
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int LenStr(char str[]) {
    int size = 0;
    // enquanto o caractere da string for diferente de zero...
    while (str[size] != '\0') {
        size++;
    }
    return size;
}