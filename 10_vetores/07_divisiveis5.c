/* Crie um programa em Linguagem C para inserir dados em 
um vetor A de 30 posições de inteiros. Os números inteiros
que serão armazenados no vetor só podem ser divisíveis por 
5 (números que divididos por 5 terão resto igual a zero). 
Ao final mostrar o vetor A, e mostrar se o usuário digitou
números não divisíveis por 5 e a respectiva quantidade*/

#include <stdio.h>
#define TAM 30

// int main()
// {
//     int i, countA = 0, countB = 0, a[TAM], b[TAM];

//     printf("Digite %d numeros\n", TAM);

//     for (i = 0; i < TAM; i++)
//     {
//         int value = 0;
//         scanf("%d", &value);

//         if (value % 5 == 0) {
//             a[countA] = value;
//             countA++;
//         } else {
//             b[countB] = value;
//             countB++;
//         }
//     }

//     printf("Numeros divisiveis por 5:\n");

//     for (i = 0; i < countA; i++)
//     {
//         printf("%d\n", a[i]);
//     }

//     printf("Numeros NAO divisiveis por 5 (%d):\n", countB);

//     for (i = 0; i < countB; i++)
//     {
//         printf("%d\n", b[i]);
//     }

//     return 0;
// }

// Correção
int main()
{
    int i=0, naoDiv5 = 0, num[TAM];

    printf("Digite %d numeros\n", TAM);

    while (i<TAM)
    {
        int value = 0;
        scanf("%d", &value);

        if (value % 5 == 0) {
            num[i] = value;
            i++;
        } else {
            naoDiv5++;
        }
    }

    printf("Quantidade NAO divisiveis por 5:\n");

    for (i = 0; i < TAM; i++)
    {
        printf("%d\n", num[i]);
    }

    printf("Numeros NAO divisiveis por 5 = %d\n", naoDiv5);

    return 0;
}