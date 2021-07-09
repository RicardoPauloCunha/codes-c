/* 4) Faça um programa que lê um número inteiro no intervalo de
10 até 99 e envia esse número a uma função chamada
Juncao. A função deve “quebrar” o número em dezena e
unidade e “retornar” esses valores. Ao final a função principal
deve imprimir um número inteiro tendo a seguinte estrutura
DBU, onde D é o dígito da dezena do número lido, U é o
dígito da unidade do número lido e B é :
> 0 se o número lido está no intervalo [10 .. 30];
> 1 se o número lido está no intervalo [31 ..61];
> 2 se o número lido está no intervalo [62 .. 99]
Se o número lido for maior do que 99 ou menor do que 10, o
seu programa deverá avisar ao usuário que este número está
fora da faixa. */

#include <stdio.h>

void quebraNumero(int *Pnum);

int main()
{
    int num;

    printf("Insira um numero (10 a 99): ");
    scanf("%d", &num);

    while (num < 10 || num > 99) {
        printf("Valor fora da faixa!\nInsira um numero (10 a 99): ");
        scanf("%d", &num);
    }

    quebraNumero(&num);

    printf("Retorno: %d", num);

    return 0;
}

void quebraNumero(int *Pnum) {
    int d, b, u;

    d = *Pnum / 10;
    u = *Pnum % 10;

    if (*Pnum <= 30) {
        b = 0;
    } else if (*Pnum > 30 && *Pnum<= 61) {
        b = 1;
    } else {
        b = 2;
    }

    *Pnum = d * 100;
    *Pnum += b * 10;
    *Pnum += u;
}