/* 5) Crie um programa em Linguagem C que armazene dados inteiros em
uma matriz de ordem 5 e imprima todos os elementos que se encontram
em posições cuja linha mais coluna formam um número par. */

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

    system("cls");

    printf("Valores em posicoes pares da matriz:\n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("%d | ", mat[i][j]);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }

    return 0;
}