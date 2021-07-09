// 4. Pedir para o usuário preencher dois vetores com 5 posições cada um. Criar um vetor com 10
// posições, intercalando os elementos dos dois vetores anteriores. Mostrar os três vetores.

#include <stdio.h>
#define T5 5
#define T10 10

int main()
{
    int i = 0, j = 0, v1[T5], v2[T5], v3[T10];

    printf("Digite 5 numeros para a primeira lista:\n");

    for (i = 0; i < T5; i++)
    {
        printf("%do: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("Digite 5 numeros para a segunda lista:\n");

    for (i = 0; i < T5; i++)
    {
        printf("%do: ", i + 1);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < T5; i++) {
        v3[j] = v1[i];
        v3[++j] = v2[i];
        j++;
    }

    printf("\nPrimeira lista: ");

    for (i = 0; i < T5; i++)
    {
        printf("%d ", v1[i]);
    }

    printf("\nSegunda lista: ");

    for (i = 0; i < T5; i++)
    {
        printf("%d ", v2[i]);
    }

    printf("\nIntercalacao das listas: ");

    for (i = 0; i < T10; i++)
    {
        printf("%d ", v3[i]);
    }

    return 0;
}
