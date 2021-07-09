// 1. Ler o valor de uma temperatura em graus celsius e transformá-la em graus Fahrenheit (F = 9/5 * C + 32). Exibir resultados;

#include <stdio.h>

int main () {
    // Declara as variaveis
    float celsius, fahrenheit;

    // Entrada de dados
    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &celsius);

    // Processamento
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Saida de dados
    printf("\n%.1f graus celsius = %.1f graus fahrenheit", celsius, fahrenheit);

    return 0;
}