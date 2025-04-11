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

    float a, b, c, d, e;

    printf("Insira os valores de a, b, c, d, e: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    float result = exponentiation(a, 3) * (((b + c) / d) + e);

    printf("O resultado é %f", result);

    return 0;
}