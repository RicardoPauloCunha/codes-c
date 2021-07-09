/* 4) Crie um programa em Linguagem C que armazene dados inteiros
em uma matriz de ordem 5. Em seguida imprima apenas a diagonal
principal. Depois imprima a diagonal secundária. */

#include <stdio.h>
#define TAM 5

int main()
{
    int i, j, mat[TAM][TAM];

    printf("Insira os valores da matriz (%dx%d):\n", TAM, TAM);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Valores da diagonal principal:\n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i == j)
                printf("%d | ", mat[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }

    printf("\nValores da diagonal secundaria:\n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i + j == TAM - 1)
                printf("%d | ", mat[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }

    return 0;
}