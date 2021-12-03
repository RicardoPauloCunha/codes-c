#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("NO ALVO!");
    else if (x > 0 && y > 0)
        printf("R1");
    else if (x < 0 && y > 0)
        printf("R2");
    else if (x < 0 && y < 0)
        printf("R3");
    else
        printf("R4");

    return 0;
}