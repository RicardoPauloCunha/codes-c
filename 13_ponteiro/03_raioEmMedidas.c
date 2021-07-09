/* 2) Escreva um programa, contendo uma função, e que dado o
raio (r) de uma circunferência, devolva seu perímetro,
seu diâmetro e sua área. */

#include <stdio.h>
#define PI 3.14

void calculaMedidas(float raio, float *Pperimetro, float *Pdiametro, float *Parea);

int main()
{
    float raio, perimetro, diametro, area;

    printf("Digite o raio da circuferencia: ");
    scanf("%f", &raio);

    calculaMedidas(raio, &perimetro, &diametro, &area);

    printf("Raio da circuferencia: %.2f\nPerimetro: %.2f\nDiametro: %.2f\nArea: %.2f", raio, perimetro, diametro, area);

    return 0;
}

void calculaMedidas(float raio, float *Pperimetro, float *Pdiametro, float *Parea)
{
    *Pperimetro = 2 * PI * raio;
    *Pdiametro = 2 * raio;
    *Parea = PI * raio * raio;

    return;
}