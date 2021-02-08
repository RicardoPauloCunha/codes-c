// 46. Fac¸a um programa que leia um numero inteiro positivo de tr ´ es d ˆ ´ıgitos (de 100 a 999). Gere outro numero formado pelos d ´ ´ıgitos invertidos do numero lido.

#include <stdio.h>

int main () {
    char string[3];

    printf("Digite um numero: ");
    scanf("%s", &string);

    printf("A letra digitada em maiusculo eh %s", string[1]);

    return 0;
}