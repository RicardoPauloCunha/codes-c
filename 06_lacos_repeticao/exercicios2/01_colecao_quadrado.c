// 1. Dada uma coleção de números inteiros positivos terminada por 0, imprimir seus
// quadrados.

#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    for (n; n > 0; n--)
    {
        printf("Quadrado de %d = %d\n", n, n * n);
    }

    return 0;
}
