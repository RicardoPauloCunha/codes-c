//Ler os extremos de um intervalo e somar os 
//ímpares contidos nele, incluindo os extremos, 
//se for o caso 

#include <stdio.h>

int main() {
    int numInicio, numFim, soma = 0;

    printf("Digite o numero de inicio e de fim: ");
    scanf("%d%d", &numInicio, &numFim);

    while (numInicio <= numFim) {
        if (numInicio%2 != 0) {
            printf("%d ", numInicio);
            soma += numInicio;
        }
        
        ++numInicio;
    }

    printf("\nSoma total dos impares: %d", soma);

    return 0;
}