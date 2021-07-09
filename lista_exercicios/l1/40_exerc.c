/* 40. Uma empresa contrata um encanador a R$ 30,00 por dia. Fac¸a um programa que solicite
   o n´umero de dias trabalhados pelo encanador e imprima a quantia l´ıquida que dever ´a ser
   paga, sabendo-se que s˜ao descontados 8% para imposto_renda de renda. */

#include <stdio.h>
#define SALARIO_DIA 30.00 

int main () {
    int dias_trabalhados;
    float salario_liquido, imposto_renda;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    salario_liquido = SALARIO_DIA * dias_trabalhados;
    imposto_renda = 0.08 * salario_liquido;
    salario_liquido -= imposto_renda; 

    printf("Valor liquido a ser pago: %.2f", salario_liquido);

    return 0;
}