// 2. Fac¸a um programa que leia um numero real e o imprima. 

#include <stdio.h>

int main () {
    double real;

    printf("Digite um numero real: ");
    scanf("%lf", &real);

    printf("O numero real digitado foi: %lf", real);

    return 0;
}