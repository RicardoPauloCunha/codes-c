/* 7) Escreva um programa em linguagem C para armazenar
números inteiros em duas matrizes de ordem 3, chamadas
MatrizA e MatrizB. Além disso o programa deve conter as
seguintes funções:
- LêMatriz: responsável por inserir dados nas matrizes;
- VerificaIgualdade: recebe duas matrizes de ordem 3 e irá
verificar se as matrizes são iguais;
- VerificaMatrizIdentidade: que recebe uma matriz de ordem 3
e verifica se essa matriz é uma matriz identidade, em que os
elementos da diagonal principal são iguais a 1 e os demais
elementos são todos iguais a zero.
Dessa forma, o programa deverá chamar a função LêMatriz
para a entrada de dados, em seguida irá chamar a função
VerificaIgualdade recebendo a MatrizA e a MatrizB, e
posteriormente a função VerificaMatrizIdentidade que recebe a
MatrizA. */

#include <stdio.h>
#define T 3

void leMatriz(int matriz[T][T], char nomeMatriz);
void verificaIgualdade(int matrizA[T][T], int matrizB[T][T]);
void verificaMatrizIdentidade(int matrizA[T][T]);

int main()
{
    int matrizA[T][T], matrizB[T][T];

    leMatriz(matrizA, 'A');
    leMatriz(matrizB, 'B');

    verificaIgualdade(matrizA, matrizB);

    verificaMatrizIdentidade(matrizA);

    return 0;
}

void leMatriz(int matriz[T][T], char nomeMatriz)
{
    int i, j;

    printf("\nDigite os valores da matriz %c (%dx%d):\n", nomeMatriz, T, T);

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void verificaIgualdade(int matrizA[T][T], int matrizB[T][T])
{
    int i, j, ehDiferente = 1;

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            if (matrizA[i][j] != matrizB[i][j])
            {
                ehDiferente = 0;
            }
        }
    }

    if (ehDiferente)
    {
        printf("\nAs matrizes sao iguais");
    }
    else
    {
        printf("\nAs matrizes sao diferentes");
    }
}

void verificaMatrizIdentidade(int matriz[T][T])
{
    int i, j, ehIdentidade = 1;

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0))
            {
                ehIdentidade = 0;
            }
        }
    }

    if (ehIdentidade)
    {
        printf("\nMatriz A eh identidade");
    }
    else
    {
        printf("\nMatriz A nao eh identidade");
    }
}