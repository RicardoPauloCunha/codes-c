/* 1) Escreva um programa contendo uma função que receba
como parâmetro uma distância em metros e devolva, também
através de seus parâmetros, essa distância em polegadas,
jardas e milhas. */

#include <stdio.h>
#define POLEGADA 39.37
#define JARDA 1.0936
#define MILHA 1609

void converterMetro(float metro, float *Ppolegadas, float *Pjardas, float *Pmilhas);

int main()
{
    float metro, polegadas, jardas, milhas;

    printf("Digite a distancia em metros: ");
    scanf("%f", &metro);

    converterMetro(metro, &polegadas, &jardas, &milhas);

    printf("Distancia em metros: %.1f\nPolegadas: %.2f\nJardas: %.4f\nMilhas: %.5f", metro, polegadas, jardas, milhas);

    return 0;
}

void converterMetro(float metro, float *Ppolegadas, float *Pjardas, float *Pmilhas)
{
    *Ppolegadas = metro * POLEGADA;
    *Pjardas = metro * JARDA;
    *Pmilhas = metro / MILHA;
}