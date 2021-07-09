#include <stdio.h>

int main()
{
    int p, n, t[100], i, h, win = 1;

    scanf("%d", &p);
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        h = t[i] - t[i + 1];

        if (h < 0)
        {
            h = h * -1;
        }

        if (h > p)
        {
            win = 0;
            break;
        }
    }

    if (win)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}