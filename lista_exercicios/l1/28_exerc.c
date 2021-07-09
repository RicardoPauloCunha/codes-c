// 28. Faca a leitura de trees valores e apresente como resultado a soma dos quadrados dos tres valores lidos.

#include <stdio.h>
#include <math.h>

int main () {
    int val1, val2, val3, soma;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &val1, &val2, &val3);

    soma = (val1 * val1) + (val2 * val2) + (val3 * val3);

    printf("Soma do quadrado dos tres valores = %d", soma);

    return 0;
}