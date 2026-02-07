#include <stdio.h>

// fatorial com recursao
int Fatorial(int num);

int main() {
    printf("%d", Fatorial(5));
}

int Fatorial(int num) {
    if (num == 1) {
        return 1;
    }
    return num * Fatorial(num -1);
}
/*
Fatorial(5) → 5 * Fatorial(4)

Fatorial(4) → 4 * Fatorial(3)

Fatorial(3) → 3 * Fatorial(2)

Fatorial(2) → 2 * Fatorial(1)

Fatorial(1) → retorna 1

Agora, desenrolando as chamadas:

Fatorial(1) = 1

Fatorial(2) = 2 × 1 = 2

Fatorial(3) = 3 × 2 = 6

Fatorial(4) = 4 × 6 = 24

Fatorial(5) = 5 × 24 = 120
*/