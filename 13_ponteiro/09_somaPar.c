/* 3) Faça um programa em linguagem C para armazenar 100
números inteiros em um vetor chamado Numeros. Em
seguida chamar uma função denominada SomaPar que:
- recebe o vetor Numeros por parâmetro;
- soma os números pares; e
- retorna o total da soma para o programa principal a fim
de imprimir esse total. */

#include <stdio.h>
#define T 10

int somaPar(int numeros[]);

int main()
{
    int numeros[T], i, soma;

    for (i = 0; i < T; i++)
    {
        printf("Insira o primeiro numero [%d]: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    soma = somaPar(numeros);

    printf("Soma dos numeros pares: %d", soma);

    return 0;
}

int somaPar(int numeros[])
{
    int i, soma = 0;

    for (i = 0; i < T; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            soma += numeros[i];
        }
    }

    return soma;
}
