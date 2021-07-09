// 3. Ler o valor de uma compra e o percentual de desconto. Calcular e mostrar o valor do desconto e o valor final a pagar;

#include <stdio.h>

int main () {
    // Declara as variaveis
    float valor_compra, desconto;
    int percentual_desconto;

    // Entrada de dados
    printf("Digite o valor total da compra e o percentual de desconto: ");
    scanf("%f%d", &valor_compra, &percentual_desconto);

    // Processamento
    desconto = (float)percentual_desconto / 100 * valor_compra;
    valor_compra -= desconto;

    // Saida de dados
    printf("\nValor do desconto: %.2f", desconto);
    printf("\nValor final da compra: %.2f", valor_compra);

    return 0;
}