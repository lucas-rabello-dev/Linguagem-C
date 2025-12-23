#include <stdio.h>


void exercise();

int main() {

    int numbers[] = {0, 1, 2};

    // 4 bytes * 3 elements = 12 | 4 bytes
    // 12 / 4 = 3 
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    exercise();


    return 0;
}


void exercise() {

    // int arr[5]; -> isso nao gera {0, 0, 0, 0, 0}
    int arr[5] = {0}; // -> isso sim
    // o C zera o resto automaticamente

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        printf("Enter a number: ");
        // tratando caracteres ASCII
        // scanf(%d) -> espera um inteiro, quando recebe um int ele retorna 1 e caso ao contrario ele retorna 0
        // se eu digitar 's' ele vai retornar 0 e vai cair no if
        if (scanf("%d", &arr[i]) != 1) {
            printf("Only numbers!\n");
            return;
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

}