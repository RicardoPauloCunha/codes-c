/* Crie um programa para ler um vetor de 15números inteiros
 e montar outro vetor com os valores do primeiro multiplicados
 por 3. */

#include <stdio.h>
#define TAM 15

int main()
{
    int i, num[TAM], numAlt[TAM];

    printf("Digite %d numeros:\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &num[i]);
        numAlt[i] = num[i] * 3;
    }

    printf("Numeros digitados multiplicados por 3:\n");

    for (i = 0; i < TAM; i++)
    {
        printf("%dx3 = %d\n", num[i], numAlt[i]);
    }

    return 0;
}