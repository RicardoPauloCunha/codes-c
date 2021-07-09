/* 8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
formula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin. */

#include <stdio.h>

int main () {
    float celsius, kelvin;

    printf("Digite uma temperatura em graus kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("%.1f graus kelvin = %.1f graus celsius", kelvin, celsius);

    return 0;
}