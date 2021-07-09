// 7. Faça um programa que contenha uma função
// chamada LeVetor. Dentro da função permita a
// leitura de 10 valores inteiros, armazene-os em um
// vetor, e imprime o maior e o menor deles.

#include <stdio.h>
#define TAM 10
void LeVetor();

int main()
{
    LeVetor();

    return 0;
}

void LeVetor()
{
    int i, vetor[TAM], maior, menor;

    printf("Digite %d numero: ", TAM);
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < TAM; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }

        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("Maior = %d\nMenor = %d", maior, menor);

    return;
}
