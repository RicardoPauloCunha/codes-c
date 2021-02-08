// 3. Pedir para o usuário preencher um vetor com 10 posições, mostrar os elementos que são múltiplos
// de 3 e as suas respectivas posições.

#include <stdio.h>
#define T 10

int main()
{
    int i = 0, v[T];

    printf("Digite 10 numeros:\n");

    for (i = 0; i < T; i++)
    {
        printf("%do: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nNumeros multiplos de 3:");

    for (i = 0; i < T; i++)
    {
        if (v[i] % 3 == 0)
        {
            printf("\n%d [%d]", v[i], i + 1);
        }
    }

    return 0;
}
