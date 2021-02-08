// Exercicio 1
// Fazer um programa que recebe três números inteiros, calcula e mostra a soma desses números

#include <stdio.h>

int main() {
    // Declara as variaveis
    int val1, val2, val3, result;

    // Pega os valores
    printf("Digite 3 numeros para realizar a soma: ");
    scanf("%d%d%d", &val1, &val2, &val3);

    // Executa a soma
    result = val1 + val2 + val3;

    // Retorna o resultado
    printf("A soma dos tres numeros e: %d", result);

    return 0;
}