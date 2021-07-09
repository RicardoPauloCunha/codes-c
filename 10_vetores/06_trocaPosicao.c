/* Faça um programa em Linguagem C para inserir dados em
dois vetores de 20 posições de inteiros. A seguir, troque o
1º elemento de A como 20º de B, o 2º de A com o 19º de B,
e assim por diante, até trocar o 20º de A como 1º de B.
Mostre os vetores antes e depois da troca. */

#include <stdio.h>
#define TAM 20

int main()
{
    int i, a[TAM], b[TAM];

    printf("Digite %d numeros para a lista A:\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Digite %d numeros para a lista B:\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        int value = a[i];
        int j = (TAM - i - 1) * 1;
        a[i] = b[j];
        b[j] = value;
    }

    printf("A | B\n");

    for (i = 0; i < TAM; i++)
    {
        printf("%d | %d\n", a[i], b[i]);
    }

    return 0;
}