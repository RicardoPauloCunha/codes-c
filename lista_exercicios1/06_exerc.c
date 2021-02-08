/* 6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversão é: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius. */

#include <stdio.h>

int main () {
    float celsius, fahrenheit;

    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("%.1f graus celsius = %.1f graus fahrenheit", celsius, fahrenheit);

    return 0;
}