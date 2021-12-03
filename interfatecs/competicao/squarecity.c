#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, j, c = 0, city[102][102], flag;

    scanf("%d", &x);

    flag = ((x / 2) + 1) % 2;

    for (i = 0; i < x; i++)
    {
        if (flag == 0)
        {
            for (int j = i; j < x - i - 1; j++)
            {
                city[i][j] = 1;
                city[j][i] = 1;
                city[x - i - 1][j] = 1;
                city[j][x - i - 1] = 1;
            }
        }

        if (flag == 0)
            flag = 1;
        else if (flag == 1)
            flag = 0;
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (i != j && city[i][j] == 1)
                c++;
        }
    }

    printf("%d\n", c);

    return 0;
}