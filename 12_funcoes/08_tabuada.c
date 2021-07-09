// 8. Faça uma função chamada MostraTabuadas e que
// recebe, por parâmetro, um valor inteiro N. Calcular
// e imprimir as tabuadas dos números de 1 até N, ou
// seja, se o usuário digitou o valor 3 deve imprimir a
// tabuada do 1, a tabuada do 2 e a tabuada do 3.
// Exibir as tabuadas, dentro da função, considerando
// os cálculos de 1 a 10. Dessa forma, a função não
// deve retornar nada para a função main.

#include <stdio.h>
#define MULTI 10
void MostraTabuadas(int n);

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    MostraTabuadas(n);

    return 0;
}

void MostraTabuadas(int n)
{
    int i = 1, j;

    for (i; i <= n; i++)
    {
        printf("\nTabuada do %d\n", i);

        for (j = 1; j <= MULTI; j++)
        {
            printf("%02d X %02d = %d\n", j, i, i * j);
        }
    }

    return;
}