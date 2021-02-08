// Ler tres valores quaisquer, e mostrar o maior deles, ou se são iguais

#include <stdio.h>

int main () {
    int valor1, valor2, valor3;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &valor1, &valor2, &valor3);

    if (valor1 == valor2 && valor2 == valor3) {
        printf("O tres valores sao iguais a %d", valor1);
    } else if (valor1 >= valor2 && valor1 >= valor3) {
        printf("O maior valor e %d", valor1);
    } else if (valor2 >= valor3) {
        printf("O maior valor e %d", valor2);
    } else {
        printf("O maior valor e %d", valor3);
    }

    return 0;
}