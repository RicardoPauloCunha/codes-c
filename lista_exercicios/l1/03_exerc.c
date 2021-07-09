// 3. Peça ao usuario para digitar três valores inteiros e imprima a soma deles

#include <stdio.h>

int main () {
    int val1, val2, val3, soma;

    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &val1, &val2, &val3);

    soma = val1 + val2 + val3;

    printf("Soma dos tres numeros = %d", soma);

    return 0;
}