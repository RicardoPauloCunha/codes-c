/* 35. Leia uma data e determine se ela e valida. Ou seja, verifique se o mes esta entre 1 e 12, 
e se o dia existe naquele mes. Note que Fevereiro tem 29 dias em anos bissextos, e 28 ˆ
dias em anos nao bissextos. */

#include <stdio.h>
#define DIAS_MES_IMPAR 31
#define DIAS_MES_PAR 30

int main() {
    // Declara as variaveis
    int dia, mes, ano, dias_fevereiro = 28;

    // Entrada de dados
    printf("Digite uma data (Ex: 17 10 2020): ");
    scanf("%d%d%d", &dia, &mes, &ano);

    // Caso o meses seja menor igual que 0 e maior que 12
    if (mes <= 0 || mes > 12) {
        printf("O mes %d eh invalido", mes);
        // Encerra
        return 0;
    }

    // Caso o dia seja menor igual que zero
    if (dia <= 0 || dia > 31) {
        printf("O dia %d eh invalido", dia);
        return 0;
    }

    // Caso seja fevereiro
    if (mes == 2) {
        // Caso seja ano bissexto
        if ((ano % 400 == 0 || ano % 4 == 0) && ano % 100 != 0) {
            // Add 1 dia para o mes de fevereiro
            ++dias_fevereiro;
        }

        // Caso dia seja invalido
        if (dia > dias_fevereiro) {
             printf("O dia %d eh invalido para o mes de fevereiro", dia);
            return 0;
        }
    } 
    // Caso o mes seja par
    else if (mes % 2 == 0 && dia > DIAS_MES_PAR) {
        printf("O dia %d eh invalido para meses pares", dia);
        return 0;
    } 
    // Caso o mes seja impar
    else if (dia > DIAS_MES_IMPAR) {
        printf("O dia %d eh invalido para meses impares", dia);
        return 0;
    }
    
    // Retorna mensagem de validade
    printf("A data eh valida");

    return 0;   
}