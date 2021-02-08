// 30. Faça um programa que receba tres numeros e mostre-os em ordem crescente.

#include <stdio.h>

int main() {
    int num1, num2, num3, primeiro, segundo, terceiro;

    printf("Digite tres numeros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3) {
        primeiro = num1;
    } else if (num2 < num3) {
        primeiro = num2;
    } else {
        primeiro = num3;
    }

    if (num1 > num2 && num1 > num3) {
        terceiro = num1;
    } else if (num2 > num3) {
        terceiro = num2;
    } else {
        terceiro = num3;
    }

    if (num1 != primeiro && num1 != terceiro) {
        segundo = num1;
    } else if (num2 != primeiro && num2 != terceiro) {
        segundo = num2;
    } else {
        segundo = num3;
    }

    printf("%d %d %d", primeiro, segundo, terceiro);

    return 0;   
}