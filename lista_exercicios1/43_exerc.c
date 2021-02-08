/* 43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
    o total a pagar com desconto de 10%;
    o valor de cada parcela, no parcelamento de 3x sem juros;
    a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
    a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total) */

#include <stdio.h>

int main () {
    float valor_total, valor_total_apagar, desconto, valor_parcela, comissao_vendedor_avista, comissao_vendedor_parcela;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor_total);

    desconto = 0.10 * valor_total;
    valor_total_apagar = valor_total - desconto;
    
    valor_parcela = valor_total_apagar / 3;

    comissao_vendedor_avista = 0.05 * valor_total_apagar;
    comissao_vendedor_parcela = 0.05 * valor_total;

    printf("Valor total do desconto: %.2f", desconto);
    printf("\nValor total a pagar: %.2f", valor_total_apagar);
    printf("\nValor de cada parcela (3x): %.2f", valor_parcela);
    printf("\nComissao do vendendo caso a vista: %.2f", comissao_vendedor_avista);
    printf("\nComissao do vendendo caso parcelada: %.2f", comissao_vendedor_parcela);

    return 0;
}