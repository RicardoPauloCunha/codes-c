// 31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdio.h>

int main () {
    int inteiro, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);

    antecessor = inteiro - 1;
    sucessor = inteiro + 1;

    printf("Antecessor do numero %d", antecessor);
    printf("\nSucessor do numero %d", sucessor);

    return 0;
}