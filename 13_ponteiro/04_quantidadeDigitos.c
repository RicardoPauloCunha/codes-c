/* 3) Crie um programa que permita que o usuário digite um
número inteiro. Em seguida o programa deve possuir uma
função que defina quantos dígitos o número possui. Ao final
a função main deve imprimir uma mensagem exibindo o
número de entrada, a quantidade de dígitos e o primeiro
dígito. */

#include <stdio.h>

void verificaQuantidadeDigitos(int num, int *PqtdDigito, int *PprimeiroDigito);

int main()
{
    int num, qtdDigito = 1, primeiroDigito = -1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    verificaQuantidadeDigitos(num, &qtdDigito, &primeiroDigito);

    printf("Numero de entrada: %d\nQuantidada de digitos: %d\nPrimeiro digito: %d", num, qtdDigito, primeiroDigito);

    return 0;
}

void verificaQuantidadeDigitos(int num, int *PqtdDigito, int *PprimeiroDigito)
{
    while (num >= 10)
    {
        *PqtdDigito = *PqtdDigito + 1;

        num = num / 10;
    }

    *PprimeiroDigito = num;
}