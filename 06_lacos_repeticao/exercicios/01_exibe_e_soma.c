// Exibir e mostrar a soma dos valroes de 1 a 100

#include <stdio.h>

int main() {
    int num = 1, soma = 0;

    while (num <= 100) {
        printf("%d ", num);
        soma += num;
        ++num;
    }

    printf("\nA soma total eh: %d", soma);

    return 0;
}