// Ler dois numeros interios e verificar se o segundo é divisor do primeiro
// Retorna "É divisor" ou "Não é divisor"

// Saber quais são todos os divisores de um n

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois valores: ");
    scanf("%d%d", &num1, &num2);

    if (num2 == 0) {
        printf("O segundo valor nao podem ser igual a zero");
    } else {
        if (num1 % num2 == 0) {
            printf("%d eh divisor de %d", num2, num1);
        } else {
            printf("%d nao eh divisor de %d", num2, num1);
        }
    }

    return 0;
}