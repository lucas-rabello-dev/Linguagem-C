#include <stdio.h>


int main() {

    int age = 20;
    float price = 90.00;
    double price_2 = 120.20;
    char word = 'a';
    char name[] = "idk";

    printf("%d \n", age); // for decimal numbers
    printf("%f \n", price); // output -> 90.000000
    printf("%.2f \n", price_2); // output -> 120.00
    printf("%lf \n", price); // it's the same as using %f in printf
    // but in scanf you must use %lf for the double data type
    printf("%c \n", word);
    printf("%d \n", word); // display the ASCII char

    printf("%s \n", name);

    // control how data is displayed

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    // with spaces | tree spaces in this case
    printf("%3d \n", num1); // outpuu -> '  1'
    printf("%3d \n", num2); // output -> ' 10'
    printf("%3d \n", num3); // output -> '100'

    // with spaces + '0'
    printf("%03d \n", num1); // outpuu -> '001'
    printf("%03d \n", num2); // output -> '010'
    printf("%03d \n", num3); // output -> '100'

    printf("%+d \n", num1); // outpuu -> '+1'
    printf("%+d \n", num2); // output -> '+10'
    printf("%+d \n", num3); // output -> '-100'

    // with float 

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%f \n", price1);
    printf("%f \n", price2);
    printf("%f \n", price3);

    printf("%7.2f \n", price1); // output -> '  19.99'
    printf("%7.2f \n", price2); // output -> '   1.50'
    printf("%7.2f \n", price3); // output -> '-100.00'

    printf("%+7.2f \n", price1); // output -> ' +19.99'
    printf("%+7.2f \n", price2); // output -> '  +1.50'
    printf("%+7.2f \n", price3); // output -> '-100.00'

    return 0;
}