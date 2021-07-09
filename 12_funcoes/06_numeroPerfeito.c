// 6. Faça um programa que contenha uma função que
// verifique se um valor é perfeito ou não. Um valor é
// dito perfeito quando ele é igual a soma dos seus
// divisores. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são
// seus divisores).

#include <stdio.h>
void NumeroPerfeito(int numero);

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    NumeroPerfeito(numero);

    return 0;
}

void NumeroPerfeito(int numero)
{
    int i = 2, soma = 1;

    for (i; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            soma += i;
        }
    }

    if (numero == soma)
    {
        printf("O numero %d %c perfeito", numero, 130);
    }
    else
    {
        printf("O numero %d nao %c perfeito", numero, 130);
    }
}