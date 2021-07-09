// 10.Fazer um programa em C que lê dois vetores de 10 posições e faz a multiplicação dos elementos de
// mesmo índice, colocando o resultado em um terceiro vetor. Mostrar o vetor resultante.

#include <stdio.h>
#define T 10

int main()
{
    int i = 0, v1[T], v2[T], v3[T];

    printf("Digite 10 numeros para a primeira lista:\n");

    for (i = 0; i < T; i++)
    {
        printf("%do: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("Digite 10 numeros para a segunda lista:\n");

    for (i = 0; i < T; i++)
    {
        printf("%do: ", i + 1);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < T; i++) {
        v3[i] = v1[i] * v2[i];
    }

    printf("\nResultado: ");

    for (i = 0; i < T; i++)
    {
        printf("%do: %d\n", i + 1, v3[i]);
    }

    return 0;
}
