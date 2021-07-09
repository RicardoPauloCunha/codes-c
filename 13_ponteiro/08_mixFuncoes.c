/* 2) Faça um programa para armazenar 50 valores reais em um
vetor chamados Valores. Em seguida, implemente as
seguintes funções para:
• mostrar os valores do vetor;
• calcular e mostrar a média dos valores do vetor; e
• encontrar e retornar para o “programa principal” o
maior valor contido no vetor. Obs: o “programa principal”
deverá imprimir o valor recebido. */

#include <stdio.h>
#define T 50

void mostrarVetor(int valores[T]);
void calcularMediaVetor(int valores[T]);
int maiorNumeroVetor(int valores[T]);

int main()
{
    int valores[T], i, maiorNum;

    for (i = 0; i < T; i++)
    {
        printf("Coloque um numero [%d]: ", i + 1);
        scanf("%d", &valores[i]);
    }

    mostrarVetor(valores);
    calcularMediaVetor(valores);
    maiorNum = maiorNumeroVetor(valores);

    printf("\nMaior numero do vetor = %d", maiorNum);

    return 0;
}

void mostrarVetor(int valores[T])
{
    int i;

    printf("\nNumeros do vetor:\n");

    for (i = 0; i < T; i++)
    {
        printf("%d ", valores[i]);
    }
}

void calcularMediaVetor(int valores[T])
{
    int i;
    float media = 0;

    for (i = 0; i < T; i++)
    {
        media += valores[i];
    }

    media = media / T;

    printf("\nMedia dos valores do vetor = %.2f", media);
}

int maiorNumeroVetor(int valores[T])
{
    int i, maior;

    maior = valores[0];

    for (i = 1; i < T; i++)
    {
        if (valores[i] > maior)
        {
            maior = valores[i];
        }
    }

    return maior;
}