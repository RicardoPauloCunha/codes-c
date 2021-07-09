// Diretivas de inclusão
#include <stdio.h>
#include <math.h>

// Função principal
int main () {
    // Declara as variaveis
    int a, b, c, r, s;
    float d;

    // Entrada de dados
    printf("Insira tres numeros inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    // Processamento
    r = pow((a+b), 2);
    s = pow((b+c), 2);

    d = (r + s) / 2.0;

    // Saida de dados
    printf("Resultado da operacao = %.2f", d);

    return 0;
}