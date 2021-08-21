#include <stdio.h>
#include <stdlib.h>

// void* malloc (size_t size); = Aloca um bloco de memoria
// void* = Tipo de retorno é um ponteiro generico, para o inicio do bloco
// malloc = Identificador da função
// (size_t size) = Parâmetro que define o tamano do bloco (sempre inteiro positivo)

int main()
{
    int n, *vi;
    float *vf;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &n);

    vi = (int *)malloc(n * sizeof(int));
    vf = (float *)malloc(n * sizeof(float));

    printf("tamanho de vi = %d\ntamanho de vf = %d\n", sizeof(vi), sizeof(vf));

    return 0;
}