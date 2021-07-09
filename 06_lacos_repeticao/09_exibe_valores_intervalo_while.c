// Ler os valores iniciais e finais de um intervalo 
// e exibir os valores contidos nele, incluindo os extremos, em ordem crescente

#include <stdio.h>

int main() {
    int numInicio, numFim;

    printf("Digite o numero de inicio e de fim: ");
    scanf("%d%d", &numInicio, &numFim);

    if (numInicio < numFim) {
        while (numInicio <= numFim) {
            printf("%d ", numInicio);
            
            ++numInicio;
        }
    } else {
        while (numFim <= numInicio) {
            printf("%d ", numFim);
            
            ++numFim;
        }
    }

    return 0;
}