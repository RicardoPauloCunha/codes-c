/* 6) Faça um programa em linguagem C para armazenar números
inteiros em uma matriz 2x2. Em seguida criar uma função
chamada Determinante que irá receber a matriz e calcular e
imprimir o determinante da mesma. */

#include <stdio.h>
#define T 2

void determinante(int mat[T][T]);

int main()
{
    int i, j, mat[T][T];

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            printf("Digite um numero [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    determinante(mat);

    return 0;
}

void determinante(int mat[T][T])
{
    int determinante;

    determinante = (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]);

    printf("Determinante = %d", determinante);
}