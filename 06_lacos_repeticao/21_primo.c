// 6. Dado p inteiro,
// verificar se p é primo.

#include <stdio.h>

int main()
{
    int p;

    printf("digite um numero: ");
    scanf("%d", &p);

    if (p == 2 || p == 3 || p == 5)
    {
        printf("O numero eh primo!");
    }
    else if (p == 1 || p % 2 == 0 || p % 3 == 0 || p % 5 == 0)
    {
        printf("O numero NAO eh primo!");
    }
    else
    {
        printf("O numero eh primo!");
    }

    return 0;
}
