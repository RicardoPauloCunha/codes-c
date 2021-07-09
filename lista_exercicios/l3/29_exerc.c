// 29. Escreva um programa para calcular o valor da serie, para 5 termos.
// S = 0 + 1/2! + 2/4! + 3/6! + ...

#include <stdio.h>

int main()
{
    int soma = 0, count = 0, somaNum = 0, i = 0;

    for (i; count < 5; i++)
    {
        if (i % 2 == 0)
        {
            count++;
            somaNum += count;

            soma += somaNum;
            printf("%d\n", somaNum);
        }
        else
        {
            somaNum += count;
        }
    }

    printf("S = %d", soma);

    return 0;
}