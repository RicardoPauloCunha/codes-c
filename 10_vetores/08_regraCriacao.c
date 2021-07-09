/* Crie um programa para armazenar 30 elementos inteiros em
um vetor chamado VET1. Crie um vetor chamado VET2 da
seguinte forma. Os elementos de ordem ímpar de VET2 
(elementos com índice 1, 3, 5, 7) receberão os respectivos
elementos de ordem ímpar de VET1 somados com o valor 5. 
Os elementos de ordem par de VET2 (elementos com índices 0, 
2, 4, 6, 8,...) receberão os respectivos elementos de 
ordem par de VET1 multiplicados por 3. Imprimir os vetores
VET1 e VET2.*/

#include <stdio.h>
#define TAM 30

int main()
{
    int i, vet1[TAM], vet2[TAM];

    printf("Digite %d numeros para o VET1\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &vet1[i]);

        if (vet1[i] % 2 == 1)
        {
            vet2[i] = vet1[i] + 5;
        }
        else
        {
            vet2[i] = vet1[i] * 3;
        }
    }

    printf("VET1 | VET2:\n");

    for (i = 0; i < TAM; i++)
    {
        printf("%d | %d\n", vet1[i], vet2[i]);
    }

    return 0;
}