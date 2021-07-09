// 3. Dados x inteiro e n natural,
// calcular n(x).

#include <stdio.h>

int main()
{
    int x, n, i = 1, s;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    do
    {
        printf("Digite um numero natural: ");
        scanf("%d", &n);
    } while (n < 0);

    if (n == 0 && x > 0)
    {
        printf("%d^%d = 1", x, n);
    }
    else if (n == 0 && x < 0)
    {
        printf("%d^%d = -1", x, n);
    }
    else
    {
        s = x;

        for (i; i < n; i++)
        {
            s *= x;
        }
        printf("%d^%d = %d", x, n, s);
    }

    return 0;
}
