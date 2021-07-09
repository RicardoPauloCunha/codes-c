// Exercicio 4
// Fazer um programa que calcula e mostra a área de um triângulo, sabendo que:  área = (base * altura)/2.

#include <stdio.h>

int main() {
    // Declara as variaveis
    float base, altura, area;

    // Pega o valor da base 
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);

    // Pega o valor da altura
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    // Calcula a media do triangulo
    area = (base * altura) / 2;

    // Retorna o resultado
    printf("A area do triangulo e: %.2f", area);

    return 0;
}