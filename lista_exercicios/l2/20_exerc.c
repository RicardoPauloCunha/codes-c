/* 20. Dados tres valores, ˆ A, B, C, verificar se eles podem ser valores dos lados de um triangulo 
e, se forem, se e um triangulo escaleno, equilatero ou isoscele. */

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor de tres lados de um triangulo: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b+c) {
        printf("As medidas sao invalidas");
    } else if (b > a+c) {
        printf("As medidas sao invalidas");
    } else if (c > a+b) {
        printf("As medidas sao invalidas");
    } else {
        if (a == b && b == c) {
            printf("Triangulo equilatero");
        } else if (a != b && a != c && b !=c) {
            printf("Triangulo escaleno"); 
        } else {
            printf("Triangulo isosceles");
        }
    }

    return 0;   
}