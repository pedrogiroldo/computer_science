#include <stdio.h>

int main()
{

    int i = 0;

    while (i < 3)

    {
        int nota1 = 0;
        int nota2 = 0;
        printf("\n Insira a nota 1: ");
        scanf("%d", &nota1);
        printf("Insira a nota 2: ");
        scanf("%d", &nota2);

        int media = (nota1 + nota2) / 2;

        if (media < 7)
        {
            printf("Reprovado");
        }
        else
        {
            printf("Aprovado");
        };

        i += 1;
    };

    return 0;
};
