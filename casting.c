#include <stdio.h>

int main() {

    float a = 19.89f;
    float b = 33.55f;

    float result = a/b;
    printf("%f \n", result);

    int redondo = (int)result;
    printf("%d \n", redondo);

    return 0;
}