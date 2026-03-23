#include <stdio.h>
#include "include/libs.h"


int main(void) {
    
    char sign = '+';

    int num1 = 10;
    int num2 = 10;

    switch (sign) {
        case '+':
            printf("%d \n", sum(num1, num2));
            break;
        case '-':
            printf("%d \n", sub(num1, num2));
            break;
        case '/':
            printf("%d \n", div(num1, num2));
            break;
        case '*':
            printf("%d \n", mult(num1, num2));
            break;
    }

    return 0;
}
