// 6. Gerar um vetor randômico de 100 posições, com valores de 0 a 1000. Calcular e mostrar a média
// dos elementos.

#include <stdio.h>
#define T 100

int main()
{
    int i = 0, v[T], s = 0, m;

    srand(time(NULL));

    for(i; i < T; i++) {
        v[i] = rand() % 1001;
    }

    for(i = 0; i < T; i++) {
        s += v[i];
    }

    m = s / T;

    printf("Media vetor: %d", m);

    return 0;
}
