#include <stdio.h>

int main()
{

    double fahrenheit;
    double celsius;

    printf("Insira o valor em Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    printf("Celsius: %lf", celsius);

    return 0;
}