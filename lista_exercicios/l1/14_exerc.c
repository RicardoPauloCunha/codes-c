/* 14. Leia um ˆangulo em graus e apresente-o convertido em radianos. A formula de conversão
é: R = G * pi/180, sendo G o angulo em graus e R em radianos e pi = 3:14. */

#include <stdio.h>
#define PI 3.14

int main () {
    float graus, radianos;

    printf("Digite um angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * PI / 180;

    printf("%.2f graus = %.2f radianos", graus, radianos);

    return 0;
}