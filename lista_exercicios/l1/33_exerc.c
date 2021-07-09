// 33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua ´area.

#include <stdio.h>

int main () {
    float tamanho_area, area;

    printf("Digite o tamanho do lado de um quadrado: ");
    scanf("%f", &tamanho_area);

    area = tamanho_area * tamanho_area;

    printf("Area do quadrado = %.3f", area);

    return 0;
}