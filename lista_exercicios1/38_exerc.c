// Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que ele recebeu um aumento de 25%.

#include <stdio.h>

int main () {
    float salario, aumento;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    aumento = 0.15 * salario;
    salario += aumento;

    printf("Valor do aumento: %.2f", aumento);
    printf("Salario final: %.2f", salario);

    return 0;
}