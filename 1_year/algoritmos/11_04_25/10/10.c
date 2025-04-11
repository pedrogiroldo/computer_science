#include <stdio.h>

int exponentiation(int base, int exponent)
{
    int result = base;
    for (int i = 1; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
};

int main()
{

    int x1, x2, x3;

    printf("Escreva o valor de x1, x2 e x3: ");
    scanf("%d %d %d", &x1, &x2, &x3);

    int result = (exponentiation((x1 + 3), 4) + exponentiation((x2 + x3), 3));

    printf("O resultado é: %d", result);

    return 0;
}