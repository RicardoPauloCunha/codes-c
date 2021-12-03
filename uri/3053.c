#include <stdio.h>

int main()
{
    int i, m, moves[1000];
    char coin;

    scanf("%d", &m);
    scanf(" %c", &coin);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &moves[i]);
    }

    for (i = 0; i < m; i++)
    {
        switch (moves[i])
        {
        case 1:
            switch (coin)
            {
            case 'A':
                coin = 'B';
                break;
            case 'B':
                coin = 'A';
                break;
            }
            break;
        case 2:
            switch (coin)
            {
            case 'B':
                coin = 'C';
                break;
            case 'C':
                coin = 'B';
                break;
            }
            break;
        case 3:
            switch (coin)
            {
            case 'A':
                coin = 'C';
                break;
            case 'C':
                coin = 'A';
                break;
            }
            break;
        }
    }

    printf("%c\n", coin);

    return 0;
}