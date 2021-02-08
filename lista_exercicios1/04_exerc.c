// 4. Leia um numero real e imprima o resultado do quadrado desse numero.

#include <stdio.h>
#include <math.h>

int main () {
    double real, quadrado;

    printf("Digite um numero real: ");
    scanf("%lf", &real);

    quadrado = pow(real, 2);

    printf("Quadrado do numero real = %lf", quadrado);

    return 0;
}