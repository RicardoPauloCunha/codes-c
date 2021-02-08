/* 15. Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao
´ e: G = R * 180/pi, sendo G o ˆangulo em graus e R em radianos e pi = 3:14. */

#include <stdio.h>
#define PI 3.14

int main () {
    // Declara as variaveis
    float graus, radianos;

    // Entrada de dados
    printf("Digite um angulo em radianos: ");
    scanf("%f", &radianos);

    // Processamento
    graus = radianos * 180 / PI;

    // Saida de dados
    printf("%.2f radianos = %.2f graus", radianos, graus);

    return 0;
}