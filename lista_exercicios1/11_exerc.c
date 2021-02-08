/* 11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A formula de conversão é: K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s. */

#include <stdio.h>

int main () {
    // Declara as variaveis
    float kmh, ms;

    // Entrada de dados
    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &ms);

    // Processamento
    kmh = ms * 3.6;

    // Saida de dados
    printf("%.1f m/s = %.1f km/h", ms, kmh);

    return 0;
}