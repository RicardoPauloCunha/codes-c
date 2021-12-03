#include <stdio.h>

int main() {
    int n, m, s;

    scanf("%d", &n);
    scanf("%d", &m);

    s = n;

    for (int i = 1; i < m; i++)
    {
        s *= n;
    }

    printf("%d", s);

    return 0;
}