/* Escreva um programa para armazenar 50 números
inteiros em um vetor. Ao final mostrar apenas os 
números positivos contidos no vetor. */

#include <stdio.h>
#define TAM 50

int main()
{
    int i, num[TAM], soma = 0;

    printf("Digite %d numeros:\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Numeros positivos:\n");

    for (i = 0; i < TAM; i++)
    {
        if (num[i] >= 0)
        {
            printf("%d\n", num[i]);
        }
    }

    return 0;
}