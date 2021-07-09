/* 8) Faça um programa que armazena números inteiros em uma
matriz 4X4. Em seguida criar uma função para verificar se a
matriz é uma matriz permutação. Uma matriz inteira Anxn é
uma matriz de permutação se em cada linha e em cada coluna
houver n-1 elementos iguais a zero e um único elemento igual
a 1. */

#include <stdio.h>
#define T 2

void verificarMatrizPermutacao(int matriz[T][T]);

int main()
{
    int i, j, matriz[T][T];

    printf("Insira os valores da matriz (%dx%d):\n", T, T);

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    verificarMatrizPermutacao(matriz);

    return 0;
}

void verificarMatrizPermutacao(int matriz[T][T])
{
    int i, j, somaL = 0, somaC = 0, permuta = 1;

    for (i = 0; i < T; i++)
    {
        somaL = 0;
        somaC = 0;

        for (j = 0; j < T; j++)
        {
            somaL += matriz[i][j];
            somaC += matriz[j][i];
        }

        if (somaL != 1 || somaC != 1)
        {
            permuta = 0;
        }
    }

    if(permuta) {
        printf("Eh matriz permutacao");
    } else {
        printf("Nao eh matriz permutacao");
    }
}
