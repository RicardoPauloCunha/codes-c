/* 10. Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s ˆ
(metros por segundo). A formula de conversão é: M = K/3.6, sendo K a velocidade em
km/h e M em m/s. */

#include <stdio.h>

int main () {
    float kmh, ms;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("%.1f km/h = %.1f m/s", kmh, ms);

    return 0;
}