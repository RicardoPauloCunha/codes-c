// 30. Leia um valor em real e a cotacao do dolar. Em seguida, imprima o valor correspondente em dolares.

#include <stdio.h>
#include <math.h>

int main () {
    // Declara as variaveis
    float real, cotacao_dolar, dolar;

    // Entrada de dados
    printf("Digite um valor em reais: ");
    scanf("%f", &real);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);

    // Processamento
    dolar = real * cotacao_dolar;

    // Saida de dados
    printf("%f reais = %f dolares", real, dolar);

    return 0;
}