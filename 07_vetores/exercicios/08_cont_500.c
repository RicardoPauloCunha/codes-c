// 8. Gerar um vetor randômico de 100 posições, com valores de 0 a 1000. Verificar e mostrar quantas
// vezes aparece o número 500 e em quais posições ele aparece.

#include <stdio.h>
#define T 100

int main()
{
    int i = 0, j = 0, v1[T], v2[T], s = 0, cPar = 0;

    srand(time(NULL));

    for (i; i < T; i++)
    {
        v1[i] = rand() % 1001;
    }

    for (i = 0; i < T; i++)
    {
        if (v1[i] == 500)
        {
            v2[j] = i;
            j++;
        }
    }

    j--;

    printf("500 (%d): ", j+1);

    for (i = 0; i <= j; i++)
    {
        printf("[%d] ", v2[i]);
    }

    return 0;
}
