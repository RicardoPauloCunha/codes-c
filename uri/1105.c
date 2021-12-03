#include <stdio.h>

int main()
{
    int b, n, i, d, c, v, r[20], flag = 0;

    while (1)
    {
        scanf("%d %d", &b, &n);
        if (b == 0 && n == 0)
            break;

        flag = 0;

        for (i = 1; i <= b; i++)
        {
            scanf("%d", &r[i]);
        }

        for (i = 1; i <= n; i++)
        {
            scanf("%d %d %d", &d, &c, &v);

            r[d] -= v;
            r[c] += v;
        }

        for (i = 1; i <= b; i++)
        {
            if (r[i] < 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("N\n");
        }
        else
        {
            printf("S\n");
        }
    }
    
    return 0;
}