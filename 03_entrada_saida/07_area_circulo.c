// Exercicio 5
// Fazer um programa que calcula e mostra a área de um círculo, sabendo que:  área = 휋* r2.

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    // Declara as variaveis
    float raio, area;

    // Pega o valor do raio
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    // Calcula a area;
    area = PI * pow(raio, 2);

    // Retorna o resultado
    printf("A area do circulo e: %.2f", area);

    return 0;
}