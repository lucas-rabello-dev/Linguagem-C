#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// luck game 
void game();

int main() {

    srand(time(NULL));


    // int num_zero_ten = (rand() % 10) + 1; // -> 1 - 10
    // rand() % 9 ->  0 - 9

    // for (int i = 0; i < 20; i++) {
       // printf("%d \n", rand() % 10 + 1);
    //}

    game();

    return 0;
}

void game() {

    int range = 100;

    int a, b, c, count;

    while (1) {
        a = (rand() % range) + 1;
        b = (rand() % range) + 1;
        c = (rand() % range) + 1;
        count += 1;

        if (a == b && a == c) {
            printf("%d | The numbers:  %d, %d, %d is equals! \n", count, a, b, c);
            break;
        }
        printf("%d |The numbers: %d, %d, %d \n", count, a, b, c);
    }


}