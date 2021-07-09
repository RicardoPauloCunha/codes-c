// 30. Fac¸a programas para calcular as seguintes sequencias:
// 1 + 2 + 3 + 4 + 5 + ... + n
// 1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
// 1 + 3 + 5 + 7 + ... + (2n − 1)

#include <stdio.h>

int main()
{
    int n;
    int i1 = 1, soma1 = 0;
    int i2 = 1, soma2 = 0;
    int i3 = 1, soma3 = 0;

    // Input
    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    // 1º
    while (i1 <= n)
    {
        soma1 += i1;
        i1++;
    }

    // 2º
    do
    {
        if (i2 % 2 == 0)
        {
            soma2 -= i2;
        }
        else
        {
            soma2 += i2;
        }
        i2++;
    } while (i2 <= 2 * n - 1);

    // 3º
    for (i3; i3 <= 2 * n - 1; i3 += 2)
    {
        soma3 += i3;
    }

    // Result
    printf("S1 = %d\n", soma1);
    printf("S2 = %d\n", soma2);
    printf("S3 = %d\n", soma3);

    return 0;
}