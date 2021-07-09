// 5) Fazer um programa para inverter uma string digitada. Declarar
// dois vetores de caracteres: um denominado v e outro aux.
// Considerar que as strings possam ter apenas 10 caracteres.

#include <stdio.h>
#include <conio.h>
#define TAM 11

int main()
{
    char v[TAM], aux[TAM];
    int i = 0, j = 0;

    printf("Digite uma palavra:\n");
    gets(v);

    printf("O conteudo de v eh: %s\n", v);

    while (v[i] != '\0' && i < TAM)
    {
        aux[i] = v[i];
        i++;
    }

    j = --i;
    i = 0;

    for (j; j >= 0; j--)
    {
        v[i] = aux[j];
        i++;
    }

    v[i] = '\0';

    printf("O conteudo de v eh: %s", v);

    return 0;
}