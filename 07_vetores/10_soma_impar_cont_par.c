// 7. Gerar um vetor randômico de 100 posições, com valores de 0 a 1000. Verificar e mostrar quantos
// são os pares. Calcular e mostrar a soma dos ímpares.

#include <stdio.h>
#define T 100

int main()
{
    int i = 0, v[T], s = 0, cPar = 0;

    srand(time(NULL));

    for(i; i < T; i++) {
        v[i] = rand() % 1001;
    }

    for(i = 0; i < T; i++) {
        if (v[i] % 2) {
            cPar++;
        } else {
            s += v[i];
        }
    }

    printf("Quantidade numeros pares: %d", cPar);
    printf("\nSoma dos impares: %d", s);

    return 0;
}
