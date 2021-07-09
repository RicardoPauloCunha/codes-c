// 2) Escreva um programa que leia duas strings (dois
// nomes) e as imprima na tela. Imprima também a
// segunda letra de cada string.

#include <stdio.h>
#include <conio.h>
#define TAM 20

int main()
{
    char nome1[TAM], nome2[TAM];

    printf("Digite o primeiro nome:\n");
    gets(nome1);

    printf("Digite o segundo nome:\n");
    gets(nome2);

    printf("O nomes sao:\n");
    printf("%s e %s", nome1, nome2);

    printf("\nA segunda letra de cada nome, respectivamente:\n");
    printf("%c e %c", nome1[1], nome2[1]);

    return 0;
}