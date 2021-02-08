// 10. Fazer um programa que sorteia um número de 0 a 100
// e que permita que o usuário (sem conhecer o número sorteado) tente acertar.
//  Caso não acerte, o programa deve imprimir uma mensagem informando se o número sorteado é maior ou menor que a
// tentativa feita.
// Ao acertar o número, o programa deve imprimir a quantidade de tentativas feitas.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numSort = 0, cont = 1, num;

    srand(time(NULL));
    numSort = rand() % 101;

    printf("Tente acertar o numero sorteado: ");
    scanf("%d", &num);

    while (num != numSort)
    {
        if (numSort > num)
        {
            printf("O numero sorteado eh maior que %d\n", num);
        }
        else
        {
            printf("O numero sorteado eh meno que %d\n", num);
        }

        printf("Tente novamente: ");
        scanf("%d", &num);
        cont++;
    }

    printf("Voce acertou!!\n");
    printf("Tentativas: %d", cont);

    return 0;
}
