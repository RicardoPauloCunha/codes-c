#include <stdio.h>
#define T 5

int main () {
    int i, v[T], maior;

    printf("Digite 5 valores:\n");
    
    for(i = 0; i < T; i++) {
        printf("%do: ", i+1);
        scanf("%d", &v[i]);
    }

    maior = v[0];

    for(i = 1; i < T; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }    

    printf("\nMaior = %d", maior);

    return 0;
}