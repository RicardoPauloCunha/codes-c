// 32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

#include <stdio.h>

int main () {
    int inteiro, antecessor, sucessor, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);

    antecessor = inteiro * 2 - 1;
    sucessor = inteiro * 3 + 1;
    soma = antecessor + sucessor;

    printf("Resultado = %d", soma);

    return 0;
}