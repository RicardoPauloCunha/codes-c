/* 3) Faça um programa que gere uma matriz 8X8 preenchendo
com ‘1’ as “células” da área destacada da matriz abaixo, 
e ‘0’ as demais “células”. */

#include <stdio.h>
#define TAM 8

int main()
{
    int i, j, mat[TAM][TAM];

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i < j) {
                mat[i][j] = 0;
            } else {
                mat[i][j] = 1;
            }
        }
    }

    printf("Valores da matriz (%dx%d):\n", TAM, TAM);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf(" %d |", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}