#include <stdio.h>

int main()
{

    int integer;
    float decimal;
    char text;

    printf("Insira um inteiro, um decimal e uma letra:");
    scanf("%d %f %c", &integer, &decimal, &text);

    printf("%d %f %c", integer, decimal, text);

    return 0;
}