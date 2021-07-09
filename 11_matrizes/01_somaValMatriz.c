/* 1) Crie um programa para inserir valores inteiros em uma
matriz 4 x 4. Calcular e imprimir a soma de todos os
elementos da matriz */

#include <stdio.h>
#define TAM 4

int main()
{
    int i, j, soma = 0, mat[TAM][TAM];

    printf("Insira os valores da matriz (%dx%d):\n", TAM, TAM);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }
    }

    printf("Soma valores matriz = %d", soma);

    return 0;
}