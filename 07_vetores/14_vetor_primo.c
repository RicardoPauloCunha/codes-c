// 11.Preencher um vetor de 20 posições com os 20 primeiros números primos.

#include <stdio.h>
#define T 20

int main()
{
    int i = 0, j = 0, v[T];

    v[i++] = 2;
    v[i++] = 3;
    v[i++] = 5;

    for(i = 6; j <= T; i++) {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
        {
            v[j++] = i;
        }
    }

    printf("Numeros primos [%d]: \n", T);

    for (i = 0; i < T; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
