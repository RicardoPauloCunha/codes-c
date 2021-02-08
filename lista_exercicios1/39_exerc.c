/* 39. A importancia de R$ 780.000,00 sera dividida entre tres ganhadores de um concurso.
   Sendo que da quantia total:
    O primeiro ganhador recebera 46%;
    O segundo recebera 32%;
    O terceiro recebera o restante;
   Calcule e imprima a quantia ganha por cada um dos ganhadores. */

#include <stdio.h>
#define IMPORTANCIA 780000.00

int main () {
    // Declara as variaveis
    float primeiro, segundo, terceiro;

    // Processamento
    primeiro = 0.46 * IMPORTANCIA;
    segundo = 0.32 * IMPORTANCIA;
    terceiro = IMPORTANCIA - (primeiro + segundo);

    // Saidade dados
    printf("Premio do primeiro ganhador: %.2f", primeiro);
    printf("\nPremio do segundo ganhador: %.2f", segundo);
    printf("\nPremio do terceiro ganhador: %.2f", terceiro);

    return 0;
}