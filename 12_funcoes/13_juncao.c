// 5) Faça um programa completo em C que lê um número inteiro no intervalo de 10 até 99 e envia
// esse número a uma função chamada Juncao. A função deve “quebrar” o número em dezena e
// unidade e deve imprimir um ÚNICO número inteiro tendo a seguinte estrutura DSU, onde D é o
// dígito da dezena do número lido, U é o dígito da unidade do número lido e S é a soma da dezena
// com a unidade. Dessa forma, a função Juncao imprime o número obtido e retorna ‘V’ quando o
// numero obtido possui mais do que 3 dígitos, ou retorna ‘F’ caso contrário. Imprimir ‘V’ ou ‘F’ na
// função main.
// Exemplos:
// para o valor 13 deverá imprimir 143
// para o valor 55 deverá imprimir 5105
// para o valor 99 deverá imprimir 9189
// Obs: Para valores fora do intervalo, emitir uma mensagem ao usuário e não realizar a chamada
// da função.

#include <stdio.h>
char Juncao(int num);

int main()
{
    int num;
    char resp;

    printf("Digite um numero maior que 9 e menor que 100: ");
    scanf("%d", &num);

    while (num <= 9 || num >= 100)
    {
        printf("O numero precisa ser maior que 9 e menor que 100: ");
        scanf("%d", &num);
    }

    resp = Juncao(num);

    printf("\nJuncao do numero possui mais que 3 digitos? %c", resp);

    return 0;
}

char Juncao(int num)
{
    int d, s, u, dsu;
    char teste[5];

    d = (int)(num / 10);
    u = num % 10;
    s = d + u;

    if (s >= 10) {
        dsu = (d * 1000) + (s * 10) + u;
    } else {
        dsu = (d * 100) + (s * 10) + u;
    }

    printf("Juncao do numero: %d", dsu);

    if (dsu / 1000 > 0) {
        return 'V';
    } else {
        return 'F';
    }
}