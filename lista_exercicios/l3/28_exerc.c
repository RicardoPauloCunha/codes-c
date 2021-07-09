// 28. Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
// conforme a formula a seguir:
// E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

#include <stdio.h>

int main()
{
    int n, e = 1;

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    for (e; e <= n; e++)
    {
    }

    printf("E = %d", e);

    return 0;
}