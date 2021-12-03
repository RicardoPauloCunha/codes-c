#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, x, i, sLuisa = 0, sAntonio = 0;
    bool vezLuisa = true;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (vezLuisa)
        {
            sLuisa += x;
        }
        else
        {
            sAntonio += x;
        }

        if (x != 6)
        {
            vezLuisa = !vezLuisa;
        }
    }

    if (sLuisa == sAntonio)
    {
        printf("Empate %d", sLuisa);
    }
    else if (sLuisa > sAntonio)
    {
        printf("Luisa %d", sLuisa);
    }
    else
    {
        printf("Antonio %d", sAntonio);
    }

    return 0;
}