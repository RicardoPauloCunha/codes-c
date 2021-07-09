// Escreva um programa que leia o número do funcionário
// o número de horas trabalhadas em um mês
// e o valor que ele recebeu por hora
// Imprima o número do funcionário e o salário que ele receberá no final do mês, com duas casas decimais.

#include <stdio.h>

int main() {
    int quantidade_funcionarios, horas_trabalhadas;
    float valor_hora;

    scanf("%d", &quantidade_funcionarios);

    scanf("%d", &horas_trabalhadas);

    scanf("%f", &valor_hora);

    printf("NUMBER = %d\n", quantidade_funcionarios);
    printf("SALARY = U$ %.2f\n", horas_trabalhadas * valor_hora);
    
    return 0;
}