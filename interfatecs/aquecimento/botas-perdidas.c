#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, bota, *botas, **lados, cont = 0, flag, pack = 0;
    char lado;

    scanf("%d", &n);

    botas = (int *)malloc(n * sizeof(int));
    lados = (int **)malloc(2 * sizeof(int *));

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        scanf("%d %c", &bota, &lado);

        for (int j = 0; j < cont; j++)
        {
            if (botas[j] == bota)
            {
                if (lado == 'E')
                    lados[j][0] = 1;
                else
                    lados[j][1] = 1;

                flag = 1;
            }
        }

        if (flag == 0)
        {
            botas[cont] = bota;
            lados[cont][0] = 0;
            lados[cont][1] = 0;

            if (lado == 'E')
                lados[cont][0] = 1;
            else
                lados[cont][1] = 1;

            cont++;
        }
    }

    for (int i = 0; i < cont; i++)
    {
        if (lados[i][0] == 1 && lados[i][1] == 1)
            pack++;
    }

    printf("%d", pack);

    return 0;
}