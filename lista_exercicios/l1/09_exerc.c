/* 9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
formula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin. */

#include <stdio.h>

int main () {
    float celsius, kelvin;

    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%.1f graus celsius = %.1f graus kelvin", celsius, kelvin);

    return 0;
}