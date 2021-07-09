// 2. Crie um programa que lê dois números e envia
// esses números para uma função chamada
// calculaSoma. A função calculaSoma, após receber
// esses valores, deverá realizar uma soma e
// imprimir o resultado obtido dentro da função.

#include <stdio.h>
void calculaSoma(int valor1, int valor2);

int main()
{
    int valor1, valor2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &valor1);

    printf("Digite o segundo numero: ");
    scanf("%d", &valor2);

    calculaSoma(valor1, valor2);

    return 0;
}

void calculaSoma(int valor1, int valor2)
{
    int soma = 0;

    soma = valor1 + valor2;

    printf("%d + %d = %d", valor1, valor2, soma);

    return;
}