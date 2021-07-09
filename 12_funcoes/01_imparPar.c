// 1. Crie um programa que contenha uma função
// denominada Verifica. A função Verifica recebe um
// parâmetro que é um valor inteiro e verifica se
// esse valor é par ou ímpar. Imprimir a mensagem
// dentro da função.

#include <stdio.h>
void Verifica(int valor);

int main()
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    Verifica(valor);

    return 0;
}

void Verifica(int valor)
{
    if (valor % 2 == 0)
    {
        printf("O valor eh par");
    }
    else
    {
        printf("O valor eh impar");
    }

    return;
}