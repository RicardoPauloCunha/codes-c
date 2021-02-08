// 5. Leia um numero real e imprima a quinta parte deste numero

#include <stdio.h>
#include <math.h>

int main () {
    double real, divisao;

    printf("Digite um numero real: ");
    scanf("%lf", &real);

    divisao = real / 5;

    printf("Quinta parte do numero real = %lf", divisao);

    return 0;
}