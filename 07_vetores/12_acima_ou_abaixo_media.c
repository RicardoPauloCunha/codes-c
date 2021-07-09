// 9. Gerar e mostrar um vetor de 10 posições com valores de 0 a 99, calcular a média e depois substituir
// os elementos abaixo da média por 0 e os acima por 1. Mostrar o novo vetor.

#include <stdio.h>
#define T 10

int main()
{
    int i = 0, v[T], s = 0, m;

    srand(time(NULL));

    for (i; i < T; i++)
    {
        v[i] = rand() % 100;
        s += v[i];
    }

    m = s / T;

    printf("Lista de valores:\n");

    for (i = 0; i < T; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\nMedia: %d\n", m);

    for (i = 0; i < T; i++)
    {
        if (v[i] < m) {
            v[i] = 0;
        } else {
            v[i] = 1;
        }
    }

    printf("Novos de valores:\n");

    for (i = 0; i < T; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
