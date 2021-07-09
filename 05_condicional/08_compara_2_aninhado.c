// Ler 2 números quaisquer, exibir o maior ou se são iguais

#include <stdio.h>

int main () {
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d%d", &num1, &num2);

    if (num1 == num2) {
        printf("O numero %d e igual ao numero %d", num1, num2);
    }
    else {
        if (num1 > num2) {
            printf("O maior numero e %d", num1);
        }
        else {
            printf("O maior numero e %d", num2);
        }
    }

    return 0;
}