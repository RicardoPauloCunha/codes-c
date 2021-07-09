// 5. Faça um programa que contenha uma função
// chamada Conceito e que recebe a média final de
// um aluno por parâmetro e retorna o seu conceito,
// conforme a tabela:
// Obs: imprimir o conceito na função main.

#include <stdio.h>
char Conceito(float media);

int main()
{
    float media;
    char conceito;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    conceito = Conceito(media);

    printf("Conceito do aluno = %c", conceito);

    return 0;
}

char Conceito(float media)
{
    char conceito;

    if (media >= 0.0 && media <= 4.9)
    {
        conceito = 'D';
    }
    else if (media >= 5.0 && media <= 6.9)
    {
        conceito = 'C';
    }
    else if (media >= 7.0 && media <= 8.9)
    {
        conceito = 'B';
    }
    else if (media >= 9.0 && media <= 10.0)
    {
        conceito = 'A';
    }
    else
    {
        conceito = 'X';
    }

    return conceito;
}