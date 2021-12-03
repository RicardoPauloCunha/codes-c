#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t, n, **towers, *network, full;
    char result[100], el[10];

    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        full = 1;

        scanf("%d", &n);

        network = (int *)malloc(n * sizeof(int));

        towers = (int **)malloc(n * sizeof(int *));
        for (int i = 0; i < n; i++)
        {
            towers[i] = (int *)malloc(n * sizeof(int));

            for (int j = 0; j < n; j++)
            {
                scanf("%d", &towers[i][j]);

                if (towers[i][j] == 0)
                    full = 0;
            }

            network[i] = 0;
        }

        if (full)
        {
            printf("Fully working network!!");
        }
        else
        {
            network[0] = 1;
            
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    if (i == j)
                        continue;

                    if (towers[i][j] == 1 && network[i] == 1)
                    {
                        network[j] = 1;
                    }
                }
            }

            memset(result, 0, 100);
            memset(el, 0, 10);

            strcat(result, "Test case ");
            sprintf(el, "%d", k + 1);
            strcat(result, el);
            strcat(result, ": ");

            for (int i = 0; i < n; i++)
            {
                if (network[i] == 0)
                {
                    sprintf(el, "%d", i);
                    el[strlen(el)] = ' ';
                    strcat(result, el);
                }
            }

            result[strlen(result) - 1] = '\n';
            printf("%s", result);
        }
    }

    return 0;
}