// 45. Fac¸a um programa para converter uma letra mai´uscula em letra min´uscula. Use a tabela ASCII para resolver o problema.

#include <stdio.h>

int main () {
    char letra;

    printf("Digite uma letra em minusculo: ");
    scanf(" %c", &letra);

    printf("A letra digitada em maiusculo eh %c", toupper(letra));

    return 0;
}