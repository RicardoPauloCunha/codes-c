/* 16. Leia um valor de comprimento em polegadas e apresente-o convertido em centımetros.
A formula de conversao e: C = P * 2; 54, sendo C o comprimento em centımetros e P o
comprimento em polegadas. */

#include <stdio.h>
#define PI 3.14

int main () {
    float polegadas, cm;

    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &polegadas);

    cm = polegadas * 2.54;

    printf("%.2f polegadas = %.2f cm", polegadas, cm);

    return 0;
}