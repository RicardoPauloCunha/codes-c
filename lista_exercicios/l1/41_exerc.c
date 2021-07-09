/* 41. Fac¸a um programa que leia o valor da hora de trabalho (em reais) e n´umero de horas
   trabalhadas no mˆes. Imprima o valor a ser pago ao funcion´ ario, adicionando 10% sobre
   o valor calculado. */

#include <stdio.h>

int main () {
    int horas_trabalhadas;
    float valor_hora, valor_mes, acrescimo;

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    valor_mes = valor_hora * horas_trabalhadas;
    acrescimo = 0.10 * valor_mes;
    valor_mes += acrescimo; 

    printf("Valor a ser pago: %.2f", valor_mes);

    return 0;
}