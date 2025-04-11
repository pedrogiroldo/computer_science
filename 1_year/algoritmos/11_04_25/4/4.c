#include <stdio.h>

int main()
{

    int i = 1;
    int result;
    while (i <= 10)
    {
        result = 5 * i;
        printf("5 x %d = %d\n", i, result);

        i++;
    };

    return 0;
}