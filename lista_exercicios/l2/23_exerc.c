/* 23. Determine se um determinado ano lido e bissexto. Sendo que um ano e bissexto se
for divisıvel por 400 ou se for divisıvel por 4 e nao for divisıvel por 100. Por exemplo:
1988, 1992, 1996 */

#include <stdio.h>

int main() {
    int ano;

    printf("Digite a data de algum ano: ");
    scanf("%d", &ano);

    if (ano%400 != 0 && ano%4 != 0) {
        printf("O ano nao eh bissexto");
    } else if (ano%100 == 0) {
        printf("O ano nao eh bissexto");
    } else {
        printf("O ano eh bissexto");
    }

    return 0;   
}