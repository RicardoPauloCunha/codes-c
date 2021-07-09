/* 8) Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em 
grãos de trigo da seguinte maneira: os grãos de trigo seriam dispostos em um
tabuleiro de xadrez, de tal forma que a primeira casa do tabuleiro tivesse um grão,
e as casas seguintes o dobro da anterior. Construa um programa que armazene as
quantidades de grãos citadas anteriormente em cada espaço da matriz, porém em uma 
matriz de ordem 3, ou seja, considere um tabuleiro de 3x3, além disso, o programa deve:
- imprimir o total de grãos em cada linha da matriz;
- calcular quantos grãos (total) de trigo a Rainha deverápagar ao monge; e
- imprimir a matriz ao final. */

#include <stdio.h>
#define TAM 3

int main()
{
    int i, j;
    float somaMat = 0, anterior = 0.5, somaLin[TAM] = {0, 0, 0}, mat[TAM][TAM];

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            mat[i][j] = anterior * 2;
            anterior = mat[i][j];
            somaLin[i] += mat[i][j]; 
        }

        somaMat += somaLin[i];
    }

    printf("Matriz:\n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf("%.0f | ", mat[i][j]);
        }

        printf("\n");
    }

    printf("Soma linhas:\n");
    
    for (i = 0; i < TAM; i++)
    {
        printf("%.0f\n", somaLin[i]);
    }

    printf("Soma matriz = %.0f", somaMat);

    return 0;
}