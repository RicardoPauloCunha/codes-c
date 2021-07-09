// 5. Dizemos que um número natural é triangular se ele é produto de três números
// naturais consecutivos.
// Exemplo: 120 é triangular, pois 4.5.6 = 120.
// Dado n natural, verificar se n é triangular.

#include <stdio.h>

int main()
{
    int n, i = 0, s = 0;

    do
    {
        printf("Digite um numero natual: ");
        scanf("%d", &n);
    } while (n < 0);

    do {
        s = (1+i)*(2+i)*(3+i);

        if (s == n) {
            printf("%d eh triangular", n);
        }

        i++;
    } while (s < n);

    if (s != n) {
        printf("%d NAO eh triangular", n);
    }

    return 0;
}
