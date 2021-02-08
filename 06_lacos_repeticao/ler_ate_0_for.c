// Ler e somar um conjunto de valaores até que o usuário digite 0
// Exibir a soma dos valores

#include <stdio.h>

int main() {
    int n, soma = 0;

    for (printf("Digite sua lista de valores, 0 encerra: "),
         scanf("%d", &n);
         n != 0;
        soma += n,
         printf("Digite um novo valor, 0 encerra: "),
         scanf("%d", &n));

    printf("Soma = %d", soma);

    return 0;
}