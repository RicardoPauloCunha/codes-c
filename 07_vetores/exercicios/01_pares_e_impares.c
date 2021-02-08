// 1. Criar um vetor para armazenar números pares e outro para armazenar números ímpares. Pedir para o
// usuário digitar 10 números, armazenando-os nos vetores criados, conforme a sua paridade. Mostrar
// os vetores obtidos.

#include <stdio.h>
#define T 10

int main()
{
    int i, j = 0, k = 0, vp[T], vi[T], aux;

    printf("Digite 10 numeros:\n");

    for (i = 0; i < T; i++)
    {
        printf("%do: ", i + 1);
        scanf("%d", &aux);

        if (aux % 2 == 0)
        {
            vp[j++] = aux;
        }
        else
        {
            vi[k++] = aux;
        }
    }

    printf("\nNumeros pares: ");

    for (i = 0; i <= j - 1; i++)
    {
        printf("%d ", vp[i]);
    }

    printf("\nNumeros impares: ");

    for (i = 0; i <= k - 1; i++)
    {
        printf("%d ", vi[i]);
    }

    return 0;
}
