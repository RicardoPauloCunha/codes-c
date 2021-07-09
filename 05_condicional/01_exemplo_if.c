#include <stdio.h>

int main()
{
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("\nValor digitado e positivo");
    }
    else {
        printf("\nValor digitado e negativo");
    }

    printf("\nFim do programa");

    return 0;
}