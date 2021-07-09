#include <stdio.h>

int main()
{
    int a[3], t[3], i = 0, j, aux, min = 0;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 3; i++)
    {
        t[i] = 0;
        for (j = 0; j < 3; j++)
        {
            if (j > i)
            {
                aux = j - i;
                if (aux > 1)
                {
                    t[i] += a[j] * 4;
                }
                else
                {
                    t[i] += a[j] * 2;
                }
            }
            else if (j < i)
            {
                aux = i - j;
                if (aux > 1)
                {
                    t[i] += a[j] * 4;
                }
                else
                {
                    t[i] += a[j] * 2;
                }
            }
        }
    }

    min = t[0];

    for (i = 1; i < 3; i++)
    {
        if (t[i] < min)
        {
            min = t[i];
        }
    }

    printf("%d\n", min);

    return 0;
}