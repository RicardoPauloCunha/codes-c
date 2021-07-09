/* 2) Crie um programa para armazenar valores inteiros em 
duas matrizes quadradas, denominadas A e B, de ordem 2. 
Em seguida, gerar uma terceira matriz chamada C que é 
obtida a partir da adição da matriz A e B. */

#include <stdio.h>
#define TAM 2

int main()
{
    int i, j, matA[TAM][TAM], matB[TAM][TAM], matC[TAM][TAM];

    printf("Insira os valores da matriz A (%dx%d):\n", TAM, TAM);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Insira os valores da matriz B (%dx%d):\n", TAM, TAM);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%d", &matB[i][j]);
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    printf("Valores da matriz C:\n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf(" %d |", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}