// 2. Dado um número inteiro positivo n
// imprimir os n primeiros naturais ímpares.
// Exemplo: Para n=4 a saída deverá ser 1, 3, 5, 7.

#include <stdio.h>

int main()
{
    int i = 1, qtdImpar, contImpar = 0;

    do
    {
        printf("Digite a quantidade (positiva) de numeros impares: ");
        scanf("%d", &qtdImpar);
    } while (qtdImpar < 0);

    while (contImpar < qtdImpar) {
        printf("%d\n", i);
        contImpar++;
        i += 2;
    }

    return 0;
}
