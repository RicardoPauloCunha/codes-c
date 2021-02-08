#include <stdio.h>

int main()
{
    float a[2][3], b[2][3], s[2][3];
    int i, j;

    printf("Digite os valores da primeira matrix\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d.%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    printf("\nDigite os valores da segunda matrix\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d.%d]: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nMatrix soma:\n\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%7.2f ", s[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}