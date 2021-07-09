// 7. Fazer um programa para mostrar todos os números perfeitos entre 1 e 1000.

#include <stdio.h>

int main()
{
    int i, j, s;

    for (i = 1; i <= 1000; i++)
    {
        s = 0;
        for (j = 1; j <= i/2; j++)
        {
            if (i % j == 0) {
                s += j;
            }
        }
        
        if (i == s) {
            printf("%d\n", i);
        }
    }

    return 0;
}
