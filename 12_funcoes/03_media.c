// 3. Crie um programa que possua uma função
// chamada calculaMedia e que recebe as 2 notas de
// um aluno e uma letra por parâmetro.
// Se a letra recebida for a letra ‘A’ a função deve
// calcular a média aritmética das notas do aluno,
// porém se a letra recebida for a ‘P’, a função deve
// calcular a média ponderada com pesos 7 e 3 para a
// primeira nota e a segunda nota, respectivamente. A
// média calculada deve retornar à função principal
// (main), sendo o valor da média exibido na main.

#include <stdio.h>
#define PESO1 7
#define PESO2 3

float calculaSoma(float nota1, float nota2, char letra);

int main()
{
    float nota1, nota2, media;
    char letra;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // fflush(stdin) // Buffer que limpa a entrada
    printf("Digite a letra (A ou P): ");
    scanf(" %c", &letra);

    media = calculaSoma(nota1, nota2, letra);

    printf("Media do aluno = %.2f", media);

    return 0;
}

float calculaSoma(float nota1, float nota2, char letra)
{
    if (letra == 'A' || letra == 'a')
    {
        return (nota1 + nota2) / 2;
    }
    else if (letra == 'P' || letra == 'p')
    {
        return ((nota1 * PESO1) + (nota2 * PESO2)) / (PESO1 + PESO2);
    }
    else
    {
        return -1;
    }
}