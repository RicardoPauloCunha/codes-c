// 6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, ´
// assim como a difereça existente entre ambos.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d%d", &num1, &num2);

    if (num1 == num2) {
        printf("Os dois numeros sao iguais");
    } else if (num1 >= num2) {
        printf("%d eh maior que %d, por uma diferenca de %d", num1, num2, num1 - num2);
    } else {
        printf("%d eh maior que %d, por uma diferenca de %d", num2, num1, num2 - num1);
    }

    return 0;   
}