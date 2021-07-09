// 17. Fac¸a um programa que calcule e mostre a area de um trapeezio 

#include <stdio.h>

int main() {
    float base_maior, base_menor, altura, area;

    printf("Digite a base maior e menor do trapezio: ");
    scanf("%f%f", &base_maior, &base_menor);

    printf("Digite a altura do trapezio: ");
    scanf("%f", &altura);

    if (base_maior <= 0) {
        printf("A base maior nao pode ser menor ou igual a 0");
    } else if (base_menor <= 0) {
        printf("A base menor nao pode ser menor ou igual a 0");
    } else if (altura <= 0) {
        printf("A altura nao pode ser menor ou igual a 0");
    } else {
        area = (base_maior + base_menor) * altura / 2;

        printf("Area do trapezio: %.2f", area);
    }

    return 0;   
}