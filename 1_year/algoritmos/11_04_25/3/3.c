#include <stdio.h>

int main()
{

    float meters;

    printf("Insira o valor em metros: ");
    scanf("%f", &meters);

    float decimeters;
    float centimeters;
    float millimeters;

    decimeters = meters * 10;
    centimeters = meters * 100;
    millimeters = meters * 1000;

    printf("Decímetros: %f \nCentímetros: %f \nMilímetros: %f", decimeters, centimeters, millimeters);

    return 0;
}