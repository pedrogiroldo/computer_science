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

/*
O loop for executa 10 iterações para refinar o valor de guess.

Cada iteração aplica a fórmula do método de Newton-Raphson:
(guess + number / guess) / 2.0:
Esta fórmula ajusta o valor de guess para se aproximar da raiz quadrada.
number / guess: Calcula uma estimativa da raiz quadrada dividiO loop for executa 10 iterações para refinar o valor de guess.
Cada iteração aplica a fórmula do método de Newton-Raphson:
(guess + number / guess) / 2.0:
 Esta fórmula ajusta o valor de guess para se aproximar da raiz quadrada.
number / guess: Calcula uma estimativa da raiz quadrada dividindo o número pelo palpite atua   ndo o número pelo palpite atua

*/
double squareRoot(double number)
{
    double guess = number;
    for (int i = 0; i < 10; i++)
    {
        guess = (guess + number / guess) / 2.0;
    }
    return guess;
};

int main()
{
    int firstNumber;
    int secondNumber;

    printf("Insira o primeiro número: ");
    scanf("%d", &firstNumber);

    printf("Insira o segundo número: ");
    scanf("%d", &secondNumber);

    int soma = firstNumber + secondNumber;
    int productOfFirstBySquareOfSecond = firstNumber * exponentiation(secondNumber, 2);
    int squareOfFirst = exponentiation(firstNumber, 2);
    float squareRootOfSum = squareRoot(firstNumber + secondNumber);

    printf("Soma: %d\n", soma);
    printf("Produto do primeiro pelo quadrado do segundo: %d\n", productOfFirstBySquareOfSecond);
    printf("Quadrado do primeiro: %d\n", squareOfFirst);
    printf("Raiz quadrada da soma: %.2f\n", squareRootOfSum);

    return 0;
}