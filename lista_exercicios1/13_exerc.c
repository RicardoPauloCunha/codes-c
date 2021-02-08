/* 13. Leia uma distancia em quilometros e apresente-a convertida em milhas. A formula de
conversão é: M = K/1,61 , sendo K a distancia em quil ˆ ometros e ˆ M em milhas. */

#include <stdio.h>

int main () {
    float km, milhas;

    printf("Digite uma distancia em km: ");
    scanf("%f", &km);

    milhas = km / 1.61;

    printf("%.2f km = %.2f milhas", km, milhas);

    return 0;
}