#include <stdio.h>

#define CEM 100;
#define CINQUENTA 50;
#define VINTE 20;
#define DEZ 10;
#define CINCO 5;
#define DOIS 2;
#define UM 1;

int main() {
    int valor, qtd_cem, qtd_cinquenta, qtd_vinte, qtd_dez, qtd_cinco, qtd_dois, qtd_um;

    scanf("%d", &valor);
    printf("%d\n", valor);

    qtd_cem = valor / CEM;
    valor -= qtd_cem * CEM;

    qtd_cinquenta = valor / CINQUENTA;
    valor -= qtd_cinquenta * CINQUENTA;

    qtd_vinte = valor / VINTE;
    valor -= qtd_vinte * VINTE;

    qtd_dez = valor / DEZ;
    valor -= qtd_dez * DEZ;

    qtd_cinco = valor / CINCO;
    valor -= qtd_cinco * CINCO;

    qtd_dois = valor / DOIS;
    valor -= qtd_dois * DOIS;

    qtd_um = valor / UM;
    valor -= qtd_um * UM;

    printf("%d nota(s) de R$ 100,00\n", qtd_cem);
    printf("%d nota(s) de R$ 50,00\n", qtd_cinquenta);
    printf("%d nota(s) de R$ 20,00\n", qtd_vinte);
    printf("%d nota(s) de R$ 10,00\n", qtd_dez);
    printf("%d nota(s) de R$ 5,00\n", qtd_cinco);
    printf("%d nota(s) de R$ 2,00\n", qtd_dois);
    printf("%d nota(s) de R$ 1,00\n", qtd_um);

    return 0;
}