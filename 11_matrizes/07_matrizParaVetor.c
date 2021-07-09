/* 7) Crie um programa em Linguagem C, usando loop, para adicionar valores
inteiros em uma matriz chamada Mat de ordem 3 x 3. Em seguida, gerar um vetor
chamado Vet cujos elementos são a soma dos elementos como segue o exemplo: */

#include <stdio.h>
#define TAM 3

int main()
{
    int i, j, mat[TAM][TAM], vet[TAM] = {0, 0, 0};

    printf("Insira os valores da matriz (%dx%d):\n", TAM, TAM);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%d", &mat[i][j]);
            if (i == j)
            {
                vet[0] += mat[i][j];
            }
            
            if (i == 1)
            {
                vet[1] += mat[i][j];
            }

            if (i + j == TAM - 1)
            {
                vet[2] += mat[i][j];
            }
        }
    }

    printf("Valores do vetor:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d | ", vet[i]);
    }

    return 0;
}