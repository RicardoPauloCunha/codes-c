// 29. Leia quatro notas, calcule a m´edia aritm ´ etica e imprima o resultado.

#include <stdio.h>
#include <math.h>

int main () {
    float val1, val2, val3, val4, media;

    printf("Digite quatro valores: ");
    scanf("%f%f%f%f", &val1, &val2, &val3, &val4);

    media = (val1 + val2 + val3 + val4) / 4;

    printf("Media dos quatro valores = %.2f", media);

    return 0;
}