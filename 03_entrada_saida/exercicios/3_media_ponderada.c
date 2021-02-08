// Exercicio 3
// Fazer um programa que recebe três notas e seus respectivos pesos, calcula e mostra a média ponderada dessas notas.

#include <stdio.h>

int main () {
    // Declara as variaveis
    float nota1, nota2, nota3, pesoNota1, pesoNota2, pesoNota3, media;

    // Pega os valores
    printf("Digite a nota 1 do aluno e o seu peso: ");
    scanf("%f%f", &nota1, &pesoNota1);

    printf("\nDigite a nota 2 do aluno e o seu peso: ");
    scanf("%f%f", &nota2, &pesoNota2);

    printf("\nDigite a nota 3 do aluno e o seu peso: ");
    scanf("%f%f", &nota3, &pesoNota3);

    // Calcula a média
    media = ((nota1 * pesoNota1) + (nota2 * pesoNota2) + (nota3 * pesoNota3)) / (pesoNota1 + pesoNota2 + pesoNota3);

    // Retorna o resultado
    printf("\nA media ponderada do aluno e: %.2f", media);

    return 0;
}