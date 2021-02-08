// Ler um verto com 10 posições
// Calcular o dobro de cada uma
// Armazenando em um segundo vetor 
// Exibir o resultado

#include <stdio.h>
#define T 10

int main () {
    int i, v1[T], v2[10];

    printf("Digite 10 valores:\n");
    
    for(i = 0; i < T; i++) {
        printf("%d: ", i+1);
        scanf("%d", &v1[i]);
        v2[i] = 2 * v1[i];
    }

    printf("\nDobro de cada numero:\n");
    for(i = 0; i < T; i++) {
        printf("%d = %d\n", v1[i], v2[i]);
    }    

    return 0;
}