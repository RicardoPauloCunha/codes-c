// ler um valor e verificar se ele está no intervalo (20, 100)

#include <stdio.h>

int main () {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 20 && valor <= 100)
    {
        printf("Esta no intervalo de 20 a 100");
    } else {
        printf("Esta fora do intervalo de 20 a 100");
    }

    return 0;
}