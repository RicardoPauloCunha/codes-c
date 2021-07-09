/* 6) Crie um programa para armazenar os valores 0s e 1s em uma matriz quadrada
de ordem 3. Em seguida verificar se a matriz é uma matriz identidade.
Obs: uma matriz identidade é aquela em que os elementos da diagonal principal
são iguais a 1 e os demais elementos são iguais a zero. */

#include <stdio.h>
#define TAM 3

int main()
{
    int i = 0, j = 0, value, ehIdentidade = 1, mat[TAM][TAM];

    do
    {
        printf("Digite o valor da posicao (%d, %d) da matriz: ", i, j);
        scanf("%d", &value);

        if (value == 0 || value == 1)
        {
            mat[i][j] = value;
            j++;
            if (j >= TAM)
            {
                i++;
                j = 0;
            }
        }
        else
        {
            printf("Valor invalido!!\n");
        }
    } while (i < TAM);

    printf("Matriz:\n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
            {
                ehIdentidade = 0;
                printf("%d | ", mat[i][j]);
            }
            else
            {
                printf("%d | ", mat[i][j]);
            }
        }
        printf("\n");
    }

    if (ehIdentidade == 0)
    {
        printf("\nA matriz NAO eh identidade");
    }
    else
    {
        printf("\nA matriz eh identidade");
    }

    return 0;
}