/* 5) Faça um programa em linguagem C para armazenar números
inteiros em uma matriz quadrada de ordem 4, ou seja, uma
matriz 4x4. Em seguida criar as seguintes funções:
- Função que recebe a matriz e verifica se a soma de todos
os valores contidos na matriz é par;
- Função que recebe a matriz e a imprime; e
- Função que recebe a matriz e imprime os elementos da
diagonal principal e diagonal secundária. */

#include <stdio.h>
#define T 4

int verificaSomaMatrizPar(int mat[][T]);
void imprimirMatriz(int mat[][T]);
void imprimirDiagonalPrincipal(int mat[][T]);
void imprimirDiagonalSegundaria(int mat[][T]);

int main()
{
    int mat[T][T], i, j;

    printf("Insira os valores da matriz %dx%d:\n", T, T);

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    verificaSomaMatrizPar(mat);

    imprimirMatriz(mat);

    imprimirDiagonalPrincipal(mat);

    imprimirDiagonalSegundaria(mat);

    return 0;
}

int verificaSomaMatrizPar(int mat[][T])
{
    int soma = 0, i, j;

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            soma += mat[i][j];
        }
    }

    if (soma % 2 == 0)
    {
        printf("A soma de todos os numeros da matriz eh PAR");
    }
    else
    {
        printf("A soma de todos os numeros da matriz eh IMPAR");
    }
}

void imprimirMatriz(int mat[][T])
{
    int i, j;

    printf("\n\nMatriz:");

    for (i = 0; i < T; i++)
    {
        printf("\n");

        for (j = 0; j < T; j++)
        {
            printf("%.3d ", mat[i][j]);
        }
    }
}

void imprimirDiagonalPrincipal(int mat[][T])
{
    int i, j;

    printf("\n\nDiagonal principal:");

    for (i = 0; i < T; i++)
    {
        printf("\n");

        for (j = 0; j < T; j++)
        {
            if (i == j)
            {
                printf("%.3d ", mat[i][j]);
            }
            else
            {
                printf("    ");
            }
        }
    }
}

void imprimirDiagonalSegundaria(int mat[][T])
{
    int i, j;

    printf("\n\nDiagonal secundaria:");

    for (i = 0; i < T; i++)
    {
        printf("\n");

        for (j = 0; j < T; j++)
        {
            if (i + j == T - 1)
            {
                printf("%.3d ", mat[i][j]);
            }
            else
            {
                printf("    ");
            }
        }
    }
}