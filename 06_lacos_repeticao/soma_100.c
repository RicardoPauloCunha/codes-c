// Ler um conjunto de valore até que a soma deles atinja pelo menos 100

#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite uma lista de valores ate atingir o valor 100\n");

    while (soma < 100)
    {
        printf("Ate agora vc tem: %d\n", soma);
        printf("Proximo valor: ");
        scanf("%d", &num);
    
        soma += num;
    }

    printf("Sua soma atingiu %d", soma);

    return 0;
}