/* 17. Leia um valor de comprimento em cent´ımetros e apresente-o convertido em polegadas.
A formula de conversao e: P = C/2.54 , sendo C o comprimento em cent´ımetros e P o
comprimento em polegadas. */

#include <stdio.h>
#define PI 3.14

int main () {
    float polegadas, cm;

    printf("Digite um comprimento em cm: ");
    scanf("%f", &cm);

    polegadas = cm / 2.54;

    printf("%.2f cm = %.2f polegadas", cm, polegadas);

    return 0;
}