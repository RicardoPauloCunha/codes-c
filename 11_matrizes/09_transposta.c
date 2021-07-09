/* 9) Crie um programa em Linguagem C para
armazenar valores inteiros em uma matriz 3x4.
Gerar a sua matriz transposta. Obs: A
transposta de uma matriz A é uma matriz que
apresenta os mesmos elementos de A, só que
colocados em uma posição diferente. */

#include <stdio.h>
#define TAML 3
#define TAMC 4

int main()
{
    int i, j, mat[TAML][TAMC], matT[TAMC][TAML];

    printf("Insira os valores da matriz (%dx%d):\n", TAML, TAMC);

    for (i = 0; i < TAML; i++)
    {
        for (j = 0; j < TAMC; j++)
        {
            scanf("%d", &mat[i][j]);
            matT[j][i] = mat[i][j];
        }
    }

    printf("Matriz de entrada:\n");

    for (i = 0; i < TAML; i++)
    {
        for (j = 0; j < TAMC; j++)
        {
            printf(" %d |", mat[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");

    for (i = 0; i < TAMC; i++)
    {
        for (j = 0; j < TAML; j++)
        {
            printf(" %d |", matT[i][j]);
        }
        printf("\n");
    }

    return 0;
}