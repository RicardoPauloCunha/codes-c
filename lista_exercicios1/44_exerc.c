/* 44. Receba a altura do degrau de uma escada e a altura que o usu´ ario deseja alcanc¸ar
   subindo a escada. Calcule e mostre quantos degraus o usu´ ario dever ´a subir para atingir
   seu objetivo. */

#include <stdio.h>

int main () {
    float altura_degrau, altura_desejada;
    int qtd_degraus;

    printf("Digite a altura de um degrau da escada (em metros): ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura que deseja alcancar com a escada (em metros): ");
    scanf("%f", &altura_desejada);

    qtd_degraus = altura_desejada / altura_degrau;

    printf("Sera necessario %d degraus de %.2f metros para alcancar %.2f metros de altura", qtd_degraus, altura_degrau, altura_desejada);

    return 0;
}