#include <stdio.h>

int main()
{
    // Variavesi estaticas, tamanho definido em tempo de execução
    int i;     // Armazena inteiros comuns
    int *pnt1; // Armazena referencias (endereços) de inteiros

    float f;     // Armazena valores de ponto flutuante
    float *pnt2; // Armazena referencias (endereços) de floats

    printf("tamno do i = %d\n", sizeof(i));
    printf("tamanho do pnt1 = %d\n", sizeof(pnt1));

    printf("tamno do f = %d\n", sizeof(f));
    printf("tamanho do pnt2 = %d\n", sizeof(pnt2));

    i = 45;
    f = 100;
    pnt1 = &i;
    pnt2 = &f;

    printf("endereco do i = %p\n", pnt1);
    printf("endereco do f = %p\n", pnt2);

    return 0;
}