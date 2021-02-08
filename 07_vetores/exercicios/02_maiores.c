// 2. Preencher um vetor com 10 números quaisquer digitados pelo usuário. Criar um segundo vetor com
// os elementos que são maiores que 10 do primeiro. Mostrar os dois vetores.

#include <stdio.h>
#define T 10

int main()
{
    int i = 0, j = 0, v1[T], v2[T], primeiro;

    printf("Digite 10 numeros:\n");

    printf("%do: ", i + 1);
    scanf("%d", &primeiro);

    v1[0] = primeiro;

    for (i = 1; i < T; i++)
    {
        printf("%do: ", i + 1);
        scanf("%d", &v1[i]);

        if ((v1[i] - primeiro) >= 10)
        {
            v2[j++] = v1[i];
        }
    }

    printf("\nNumeros: ");

    for (i = 0; i < T; i++)
    {
        printf("%d ", v1[i]);
    }

    printf("\nMaiores que %d: ", primeiro);

    for (i = 0; i <= j - 1; i++)
    {
        printf("%d ", v2[i]);
    }

    return 0;
}
