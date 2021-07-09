// 2) Crie um programa em Linguagem C, usando o conceito de função, para calcular o valor da
// seguinte sequencia:
// A função deve receber dois valores que são os valores de A e n, onde n representa o
// número de termos da sequencia e A representa um valor inteiro qualquer.
// Obs1: imprimir o valor da sequencia na main.

#include <stdio.h>
float SomaSequencia(int a, int n);

int main()
{
    int a, n;
    float soma;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite o numero de termos da sequencia: ");
    scanf("%d", &n);

    printf("Soma da sequencia = %f", SomaSequencia(a, n));

    return 0;
}

float SomaSequencia(int a, int n)
{
    int i;
    float soma = 0, valor;

    for (i = 1; i <= n; i++)
    {
        valor = 1 / ((float)(i * a));
        soma += valor;
    }

    return soma;
}