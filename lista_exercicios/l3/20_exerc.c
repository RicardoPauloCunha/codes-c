// 20. Ler uma sequencia de numeros inteiros
// e determinar se eles são pares ou não.
// Deverá ser informado o numero de dados lidos
// e numero de valores pares.
// O processo terminá quando for digitado o numero 1000.

#include <stdio.h>

int main()
{
    int numero, cont = 0, cont_par = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            cont_par++;
        }

        cont++;
    } while (numero != 1000);

    printf("Foram digitados %d numeros\n", cont);
    printf("%d eram pares\n", cont_par);

    return 0;
}