/* Crie um programa, usando o conceito de vetores,
para ler e armazenar um conjunto de 50 números inteiros.
Encontrar e exibir o maior número. */

#include <stdio.h>
#define TAM 50

int main()
{
    int i, num[TAM], maior;

    printf("Digite %d numeros:\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &num[i]);
    }

    maior = num[0];

    for (i = 1; i < TAM; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }

    printf("Maior numero = %d", maior);

    return 0;
}