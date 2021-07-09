// 1) Criar um programa que contenha função denominada Encaixa. A função deve receber dois
// inteiros positivos, sendo o primeiro definido por A e que contem 4 dígitos, já o segundo número
// definido de B que contem 2 dígitos. A função deve verificar se B corresponde aos últimos dígitos
// de A. Imprimir a mensagem “encaixa”, ou “não encaixa”.

#include <stdio.h>
void Encaixa(int a, int b);

int main()
{
    int a, b;

    printf("Digite um numero positivo com 4 digitos: ");
    scanf("%d", &a);

    while (a > 10000 || a < 1000)
    {
        printf("O numero precisa ser positivo e conter exatamente 4 digitos: ");
        scanf("%d", &a);
    }

    printf("Digite um numero positivo com 2 digitos: ");
    scanf("%d", &b);

    while (b > 100 || b < 10)
    {
        printf("O numero precisa ser positivo e conter exatamente 2 digitos: ");
        scanf("%d", &b);
    }

    Encaixa(a, b);

    return 0;
}

void Encaixa(int a, int b)
{
    if ((a % 1000) % 100 == b)
    {
        printf("Encaixa");
    }
    else
    {
        printf("Nao encaixa");
    }
}