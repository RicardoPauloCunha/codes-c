#include <stdio.h>

int main () {
    int num = 20;
    int *Pnum = &num;

    printf("Valor da variavel: %d\n", num); // 20
    printf("Endereco da variavel: %d\n", &num); // 6356732
    printf("=========\n");
    printf("Valor do ponteiro: %d\n", *Pnum); // 20
    printf("Endereco do ponteiro: %d", &Pnum); // 6356728

    return 0;
}