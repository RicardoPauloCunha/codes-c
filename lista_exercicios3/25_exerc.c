// 25. Faça um programa que some todos os numeros naturais abaixo de 1000 que são multiplos de 3 ou 5.

#include <stdio.h>

int main()
{
    int soma = 0, cont = 3;

    do
    {
        if (cont % 3 == 0 || cont % 5 == 0)
        {
            soma += cont;
        }

        cont++;
    } while (cont < 1000);

    printf("Soma = %d\n", soma);

    return 0;
}