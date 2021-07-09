// Ler um número inteiro e um ponto flutuante, calcular e mostrar a raiz quadrada

#include <stdio.h>
#include <math.h>

int main () {
    // Declara as variaveis
    int inteiro, raiz_inteiro;
    float flutuante, raiz_flutuante;

    // Entrada de dados
    printf("Digite um inteiro: ");
    scanf("%i", &inteiro);

    printf("Digite um ponto flutuante: ");
    scanf("%f", &flutuante);

    // Processamento
    raiz_inteiro = sqrt(inteiro);
    raiz_flutuante = sqrt(flutuante);

    // Saida dos dados
    printf("\nA raiz quadrada de %d = %d", inteiro, raiz_inteiro);
    printf("\nA raiz quadrada de %.3f = %.4f", flutuante, raiz_flutuante);

    // Novas entradas
    printf("\n\nDigite outro inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite outro ponto flutuante: ");
    scanf("%f", &flutuante);
    
    // Processamento e saida juntas
    printf("\nA raiz quadrada de %d = %.4f", inteiro, sqrt(inteiro));
    printf("\nA raiz quadrada de %.3f = %.4f", flutuante, sqrt(flutuante));

    return 0;
}