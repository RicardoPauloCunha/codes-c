/* 4) Escreva um programa em linguagem C para:
- ler o número inteiro e armazenar esse número em uma
variável chamada Opcao.
- armazenar 30 números inteiros positivos em um vetor
chamado Vet.
O programa deve possuir quatro funções denominadas F1, F2,
F3, e F4, as quais possuirão as seguintes funcionalidades:
- F1: deverá imprimir o vetor;
- F2: deverá imprimir os números armazenados nas
posições ímpares do vetor;
- F3: deverá imprimir o quadrado dos números
armazenados nas posições pares do vetor; e
- F4: deverá imprimir a soma dos números divisíveis por 4.
Obs: a execução das funções ocorrerá caso o usuário digite: ou o
valor 1, ou o valor 2, ou o valor 3, ou o valor 4. Assim:
Se Opcao = 1 será necessário chamar a função F1;
Se Opcao = 2 será necessário chamar a função F2;
Se Opcao = 3 será necessário chamar a função F3;
Se Opcao = 4 será necessário chamar a função F4;
Para outros valores será necessário imprimir “Não existe uma
função que corresponde a Opcao digitada” */

#include <stdio.h>
#define T 3

void f1(int vet[T]);
void f2(int vet[T]);
void f3(int vet[T]);
void f4(int vet[T]);

int main()
{
    int opcao, vet[T], i = 0, aux;

    printf("Opcoes:\n1 - Exibir vetor\n2 - Exibir numeros com posicao impar\n3 - Quadrado dos numeros com posicao par\n4 - Soma dos numeros divisiveis por 4\n");

    printf("Digite o valor da opcao: ");
    scanf("%d", &opcao);

    do
    {
        printf("Coloque um numero positivo [%d]: ", i + 1);
        scanf("%d", &aux);

        if (aux > 0)
        {
            vet[i] = aux;
            i++;
        }
    } while (i < T);

    switch (opcao)
    {
    case 1:
        f1(vet);
        break;
    case 2:
        f2(vet);
        break;
    case 3:
        f3(vet);
        break;
    case 4:
        f4(vet);
        break;
    default:
        printf("Nao existe uma funcao que corresponde a opcao digitada!");
        break;
    }
}

void f1(int vet[T])
{
    int i;

    printf("\nNumeros do vetor:\n");

    for (i = 0; i < T; i++)
    {
        printf("%d ", vet[i]);
    }
}

void f2(int vet[T])
{
    int i;

    printf("\nNumeros com posicao impar:\n");

    for (i = 1; i < T; i += 2)
    {
        printf("%d ", vet[i]);
    }
}

void f3(int vet[T])
{
    int i;

    printf("\nQuadrado dos numeros com posicao par:\n");

    for (i = 0; i < T; i += 2)
    {
        printf("%d ", vet[i] * vet[i]);
    }
}

void f4(int vet[T])
{
    int i, soma = 0;

    for (i = 0; i < T; i++)
    {
        if (vet[i] % 4 == 0)
        {
            soma += vet[i];
        }
    }

    printf("\nSoma dos numeros divisiveis por 4: %d", soma);
}