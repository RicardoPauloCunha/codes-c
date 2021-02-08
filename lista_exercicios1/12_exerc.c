/* 12. Leia uma distancia em milhas e apresente-a convertida em quiloometros. A formula de ´
conversao é: K = 1,61 ∗ M, sendo K a distancia em quilometros é M em milhas. */

#include <stdio.h>

int main () {
    float km, milhas;

    printf("Digite uma ditancia em milhas: ");
    scanf("%f", &milhas);

    km = milhas * 1.61;

    printf("%.2f milhas = %.2f km", milhas, km);

    return 0;
}