// 3) Faça um programa que leia duas strings (A e B) e mostre uma
// terceira string (C) formada pelos caracteres contidos em A e B
// de forma intercalada. Considere que A e B tenham um
// tamanho máximo de 40 caracteres.
// Exemplo: Se A=“quarta” e B=“segunda”, a resposta obtida
// deverá ser “qsueagrutnada”

#include <stdio.h>
#include <string.h>
#define TAM 41

int main()
{
    char a[TAM], b[TAM], c[TAM * 2 - 1];
    int i, j = 0, auxA = 0, auxB = 0;

    printf("Digite a primeira palavra (A): ");
    gets(a);

    printf("Digite a segunda palavra (B): ");
    gets(b);

    for (i = 0; i < TAM; i++)
    {
        if (a[i] != '\0' && auxA != 1)
        {
            c[j] = a[i];
            j++;
        }
        else
        {
            auxA = 1;
        }

        if (b[i] != '\0' && auxB != 1)
        {
            c[j] = b[i];
            j++;
        }
        else
        {
            auxB = 1;
        }
    }

    printf("%s", c);

    return 0;
}