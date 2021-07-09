// 4. Faça um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
// O numero digitado ao quadrado
// A raiz quadrada do numero digitado

#include <stdio.h>
#include <math.h>

int main() {
    int num, quadrado, raiz;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O numero digitado nao eh positivo");
    } else {
        quadrado = num*num;
        raiz = sqrt(num);

        printf("%d ao quadrado: %d\n", num, quadrado);
        printf("Raiz quadrada de %d: %d\n", num, raiz);
    }

    return 0;
}