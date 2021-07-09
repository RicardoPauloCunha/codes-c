// Você deve fazer um programa que leia um número de ponto flutuante
// e imprimir uma mensagem dizendo a qual dos seguintes intervalos o número pertence: [0,25] (25,50], (50,75], (75,100]
// número for menor que zero ou maior que 100, o programa deve imprimir a mensagem “Fora de intervalo” que significa "Fora do Intervalo".

#include <stdio.h>

int main() {
    float num;

    scanf("%f", &num);

    if (num < 0) {
        printf("Fora de intervalo\n");
    } else if (num <= 25) {
        printf("Intervalo [0,25]\n");
    } else if (num <= 50) {
        printf("Intervalo (25,50]\n");
    } else if (num <= 75) {
        printf("Intervalo (50,75]\n");
    } else if (num <= 100) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
    
    return 0;
}