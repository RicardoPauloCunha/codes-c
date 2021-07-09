#include <stdio.h>

int main () {
    int num, cont, metade;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("1 eh divisor de %d\n", num);

    metade = num / 2;

    for (cont = 2; cont < metade; cont++)
    {
        if (num % cont == 0) {
            printf("%d eh divisor de %d\n", cont, num);
        }
    }

    printf("%d eh divisor de %d\n", metade, num);
    printf("%d eh divisor de %d\n", num, num);

    return 0;
}