#include <stdio.h>
#define HOURDAY 24
#define MIN 60
#define MINHOUR 3600

int main()
{
    int h1, m1, s1, h2, m2, s2, time, hour, min;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if (h2 <= h1 && m2 <= m1)
    {
        h2 = h2 + HOURDAY;
    }
    else if (m2 <= m1)
    {
        m2 = m2 + MIN;
        h2 = h2 - 1;
    }

    s1 = (h1 * MINHOUR) + (m1 * MIN);
    s2 = (h2 * MINHOUR) + (m2 * MIN);

    time = (s2 - s1);
    hour = time / MINHOUR;
    min = (time - (hour * MINHOUR)) / MIN;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min);

    return 0;
}