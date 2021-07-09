// 6) Escreva um programa em linguagem C que permita a leitura de um número inteiro N. O
// programa deve conter três funções chamadas F1, F2, e F3. Obs: será necessário validar o valor
// de N com um loop, ou seja, N só pode receber ou o valor 1, ou o valor 2, ou o valor 3. Para outros
// valores imprimir a mensagem: “Valor invalido. Digite novamente”.

#include <stdio.h>
#define TAM1 20
#define TAM2 15
#define TAM3 4
int F1();
void F2();
char F3();

int main()
{
    int n;

    printf("Digite um o numero da funcao (1, 2 ou 3): ");
    scanf("%d", &n);

    while (n < 1 || n > 3)
    {
        printf("Valor invalido. Digite novamente: ");
        scanf("%d", &n);
    }

    switch (n)
    {
    case 1:
        printf("Soma dos numero divisiveis por 2 e 3 = %d", F1());
        break;
    case 2:
        F2();
        break;
    case 3:
        printf("Matriz triangular superior? %c", F3());
        break;
    }

    return 0;
}

// Se o usuário digitar o valor um (1) o programa irá executar a função F1. Dentro da função
// deve ser adicionado uma instrução que permitirá que o usuário digite 20 números inteiros e os
// armazene em um vetor denominado VetA. Além disso, nessa função será realizado o cálculo da
// soma dos números pares e divisíveis por 3 contidos no vetor, retornando e imprimindo o valor
// dessa soma na main.

int F1()
{
    int i, VetA[TAM1], soma = 0;

    printf("Digite %d numeros: ", TAM1);

    for (i = 0; i < TAM1; i++)
    {
        scanf("%d", &VetA[i]);
    }

    for (i = 0; i < TAM1; i++)
    {
        if (VetA[i] % 2 == 0 && VetA[i] % 3 == 0)
        {
            soma += VetA[i];
        }
    }

    return soma;
}

// Se o usuário digitar o valor dois (2) a função F2 deve ler um vetor A de 15 inteiros. A
// função deve gerar um outro vetor denominado B cujos elementos serão o somatório de cada
// elemento de A. Exemplo:
// Para o valor 4 irá somar 1+2+3+4= 10; para o valor 5 irá somar 1+2+3+4+5=15
// ou
// A 4 | 1 | 0 | 5 ...
// B 10 | 1 | 0 | 15 ...

void F2()
{
    int i, j, A[TAM2], B[TAM2];

    printf("Digite %d numeros: ", TAM2);

    for (i = 0; i < TAM2; i++)
    {
        scanf("%d", &A[i]);
        B[i] = 0;
    }

    for (i = 0; i < TAM2; i++)
    {
        for (j = 0; j <= A[i]; j++)
        {
            B[i] += j;
        }
    }

    printf("Vetor A: ");

    for (i = 0; i < TAM2; i++)
    {
        printf("%03d ", A[i]);
    }

    printf("\nVetor B: ");

    for (i = 0; i < TAM1; i++)
    {
        printf("%03d ", B[i]);
    }
}

// Se o usuário digitar o valor três (3) a função F3 deve permitir que o usuário insira valores
// em uma matriz quadrada de ordem 4 de inteiros e devolve verdadeiro ‘V’ se ela é uma matriz
// triangular superior, ou falso ‘F’, caso contrário. Obs: imprimir o resultado na main. Uma Matriz
// triangular superior é uma matriz onde todos os elementos de posições acima da diagonal principal
// são diferentes de 0 e todos os demais elementos são iguais a 0.
char F3()
{
    int i, j, mat[TAM3][TAM3];
    char letra = 'V';

    printf("Insira os valores da matriz (%dx%d):\n", TAM3, TAM3);

    for (i = 0; i < TAM3; i++)
    {
        for (j = 0; j < TAM3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < TAM3; i++)
    {
        for (j = 0; j < TAM3; j++)
        {
            if (i < j && mat[i][j] == 0) {
                letra = 'F';
            } else if (!(i < j) && mat[i][j] != 0) {
                letra = 'F';
            }
        }
    }

    return letra;
}