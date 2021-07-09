/* números inteiros em um vetor. Calcular a soma dos elementos
(números) que estão nas posições ímpares do vetor. */

#include <stdio.h>
#define TAM 100

int main()
{
    int i, num[TAM], soma = 0;

    printf("Digite %d numeros:\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < TAM; i+=2)
    {
        soma +=  num[i];
    }

    printf("Soma numeros posicao impar = %d", soma);

    return 0;
}