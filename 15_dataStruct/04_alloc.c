#include <stdio.h>
#include <stdlib.h>

void leVetor(char *msg, int v[], int t)
{
    int i;

    printf("%s:\n", msg);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &v[i]);
    }
}

int main()
{
    int v1[5], v2[10], *vp;
    int p, i;

    printf("digite o tamanho do vp: ");
    scanf("%d", &p);
    vp = (int *)malloc(p * sizeof(int));

    leVetor("Digite os valores para o vetor 1", v1, 5);
    leVetor("Digite os valores para o vetor 2", v2, 10);
    leVetor("Digite os valores para o vp", vp, p);

    return 0;
}