/* 42. Receba o sal ´ ario-base de um funcion´ ario. Calcule e imprima o sal ´ ario a receber, sabendose
   que esse funcion´ ario tem uma gratificac¸ ˜ao de 5% sobre o sal ´ ario-base. Al ´em disso,
   ele paga 7% de imposto sobre o sal ´ ario-base. */

#include <stdio.h>

int main () {
    float salario_base, gratificacao, imposto;

    printf("Digite o seu salario: ");
    scanf("%f", &salario_base);

    gratificacao = 0.05 * salario_base;
    imposto = 0.07 * salario_base;
    salario_base = salario_base + gratificacao - imposto;

    printf("Salario do funcionario: %.2f", salario_base);

    return 0;
}