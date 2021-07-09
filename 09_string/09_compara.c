// 2) Faça um programa que dado 2 palavras, determine
// se as palavras são iguais. Verifique também se a
// segunda palavra é uma sub string da primeira:
// Exemplo: Palavra 1= casamento
// Palavra 2= casa

#include <stdio.h>
#include <string.h>
#define TAM 21

int main()
{
    char palavra1[TAM], palavra2[TAM], aux[TAM];
    int i;

    printf("Digite a primeira palavra: ");
    gets(palavra1);

    printf("Digite a segunda palavra: ");
    gets(palavra2);

    if (strcmp(palavra1, palavra2) == 0)
    {
        printf("As duas palavras sao iguais\n");
    }
    else
    {
        printf("As duas palavras sao diferentes\n");
    }

    for (i = 0; i < strlen(palavra2); i++)
    {
        aux[i] = palavra1[i];
    }

    aux[strlen(palavra2)] = '\0';

    if (strcmp(aux, palavra2) == 0)
    {
        printf("A segunda palavra eh uma sub string da primeira");
    }
    else
    {
        printf("A segunda palavra nao eh uma sub string da primeira");
    }

    return 0;
}