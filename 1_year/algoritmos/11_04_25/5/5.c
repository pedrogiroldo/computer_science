#include <stdio.h>

int main()
{
    int base;
    int exponent;

    printf("Informe a base: ");
    scanf("%d", &base);

    printf("Informe o expoente: ");
    scanf("%d", &exponent);

    int result = base;

    for (int i = 1; i < exponent; i++)
    {
        result = result * base;
    };

    printf("Resultado: %d", result);

    return 0;
}