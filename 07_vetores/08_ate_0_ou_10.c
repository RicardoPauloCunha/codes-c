// 5. Criar um vetor com 10 posições, pedir para o usuário digitar uma lista de números, encerrando ou
// quando o vetor estiver preenchido ou quando o usuário digitar zero. Mostrar o vetor e dizer quantos
// elementos ele possui.

#include <stdio.h>
#define T 10

int main()
{
    int i = 0, j = 0, v[T], aux;

    printf("Digite umas sequencia de numeros:\n");

    for (i = 0; i < T && aux != 0; i++)
    {
        printf("%do: ", i + 1);
        scanf("%d", &aux);
        v[i] = aux;
    }

    if (aux == 0)
    {
        i--;
    }

    printf("\nSequencia de numeros [%d]:\n", i);

    for (j = 0; j < i; j++)
    {
        printf("%d ", v[j]);
    }

    return 0;
}
