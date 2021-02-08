#include <stdio.h>

int main()
{
    int n, i, fat, n1;
    int num, den;
    double soma;

    printf("Digite um valor: ");
    scanf("%d", &n);

    // Estudo do fatorial com repetição
    for (n1 = 0; n1 <= n; n1++)
    {
        for (i = 2, fat = 1; i <= n1; i++)
        {
            fat = fat * i;
        }
        printf("fatorial de %d = %d\n", n1, fat);
    }

    // Estudo da somatória
    num = 1;
    den = 2;
    soma = 0.0;

    while (num <= n)
    {
        soma += (double)num / den;
        num++;
        den += 2;
    }

    printf("\nsoma = %f\n", soma);

    // Integrando partes
    num = 1;
    den = 2;
    soma = 0.0;

    while (num <= n)
    {
        for (i = 2, fat = 1; i <= den; i++)
        {
            fat *= i;
        }

        soma += (float)num / fat;
        num++;
        den += 2;
    }

    printf("\nsoma = %f", soma);

    return 0;
}