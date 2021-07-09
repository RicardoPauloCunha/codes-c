/* 7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit. */

#include <stdio.h>

int main () {
    float celsius, fahrenheit;

    printf("Digite uma temperatura em graus fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 9.0 * 5.0;

    printf("%.1f graus fahrenheit = %.1f graus celsius", fahrenheit, celsius);

    return 0;
}