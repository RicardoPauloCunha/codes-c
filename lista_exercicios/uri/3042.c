#include <stdio.h>

int main()
{
    int m, track[3], i, j, position, touch;

    while (1)
    {
        scanf("%d", &m);

        if (m == 0)
            break;

        position = 1;
        touch = 0;

        for (i = 0; i < m; i++)
        {
            scanf("%d %d %d", &track[0], &track[1], &track[2]);

            if (track[position] != 0)
            {
                if (track[position + 1] == 0)
                {
                    position++;
                }
                else if (track[position - 1] == 0)
                {
                    position--;
                }
                else if (track[position + 2] == 0)
                {
                    position += 2;
                }
                else if (track[position - 2] == 0)
                {
                    position -= 2;
                }

                touch++;
            }
        }

        printf("%d\n", touch);
    }

    return 0;
}