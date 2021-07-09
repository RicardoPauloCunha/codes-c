/* 1) Faça um programa em linguagem C para armazenar 20
números reais em um vetor chamado Num. Em seguida,
chamar uma função denominada ImprimePos que recebe o
vetor Num por parâmetro e imprime apenas os números
positivos contidos no vetor. */

#include <stdio.h>
#define T 20

void imprimePos(int num[T]);

int main()
{
    int num[T], i;

    for (i = 0; i < T; i++)
    {
        printf("Coloque um numero [%d]: ", i + 1);
        scanf("%d", &num[i]);
    }

    imprimePos(num);

    return 0;
}

void imprimePos(int num[T])
{
    int i;

    printf("\nNumeros positivos:\n");

    for (i = 0; i < T; i++)
    {
        if (num[i] >= 0) {
            printf("%d ", num[i]);
        }
    }
}