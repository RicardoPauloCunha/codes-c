// ler valor inteiro e verifica se o valor é par ou impar

#include <stdio.h>

int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O valor e par");
    } else {
        printf("O valor e impar");
    }

    return 0;
}