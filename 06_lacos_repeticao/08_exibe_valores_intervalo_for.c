// Ler os valores iniciais e finais de um intervalo 
// e exibir os valores contidos nele, incluindo os extremos, em ordem crescente

#include <stdio.h>

int main() {
    int numInicio, numFim, cont;

    printf("Digite o numero de inicio e de fim: ");
    scanf("%d%d", &numInicio, &numFim);

    if (numInicio < numFim) {
        for (cont = numInicio; cont <= numFim; cont++) {
            printf("%d ", cont);
        }
    } else {
        for (cont = numFim; cont <= numInicio; cont++) {
            printf("%d ", cont);
        }
    }

    return 0;
}