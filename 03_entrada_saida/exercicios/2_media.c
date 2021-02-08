// Exercicio 2
// Fazer um programa que recebe três notas, calcula e mostra a média aritmética dessas notas.

#include <stdio.h>

int main () {
    // Declara as variaveis
    float nota1, nota2, nota3, media;

    // Pega os valores
    printf("Digite as 3 notas do aluno para calcular a media: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    // Calcula a média
    media = (nota1 + nota2 + nota3) / 3;

    // Retorna o resultado
    printf("A media do aluno e: %.2f", media);

    return 0;
}