// 31. Fac¸a um programa que calcule e escreva o valor de S

#include <stdio.h>

int main()
{
    float soma = 0.0, num = 1.0, den = 1.0;

    for (num, den; num <= 99 && den <= 50; num += 2, den++)
    {
        printf("%0.f/%0.f\n", num, den);
        soma += num / den;
    }

    printf("S = %f\n", soma);

    return 0;
}