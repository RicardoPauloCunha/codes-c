/* 5) Crie um programa que contenha uma estrutura para descrever
os carros de uma determinada revendedora, contendo os
seguintes campos:
 marca: string de tamanho 15
 ano: inteiro
 cor: string de tamanho 10
 preco: real
a) Escrever a definição da estrutura carro.
b) Declarar o vetor vetcarros do tipo da estrutura definida
acima, de tamanho 20.
Crie um menu para:
c) Cadastrar um carro no vetor vetcarros.
d) Listar todos os carros com preço menor ou igual a um
valor fornecido pelo usuário;
e) Listar todos os carros de uma determinada marca
fornecida pelo usuário. */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define T 3

typedef struct
{
    char marca[16];
    int ano;
    char cor[11];
    float preco;
} Carro;

int mostrarMenu(void);
void cadastrarCarro(Carro vetCarros[T], int *index);
void listarPorPreco(Carro vetCarros[T], int *index);
void listarPorMarca(Carro vetCarros[T], int *index);

int main()
{
    Carro vetCarros[T];
    int opcao, index = 0;

    do
    {
        opcao = mostrarMenu();

        switch (opcao)
        {
        case 1:
            cadastrarCarro(vetCarros, &index);
            break;
        case 2:
            listarPorPreco(vetCarros, &index);
            break;
        case 3:
            listarPorMarca(vetCarros, &index);
            break;
        case 4:
            printf("Saindo...");
            break;
        }
    } while (opcao != 4);

    return 0;
}

int mostrarMenu(void)
{
    int opcao;

    system("cls");

    printf("=== Revendedora Carro ===\n");
    printf("\nEscolha uma opcao:\n");
    printf("\n1 - Cadastrar carro");
    printf("\n2 - Listar carros por preco");
    printf("\n3 - Listar carros por marca");
    printf("\n4 - Sair\n");

    scanf("%d", &opcao);

    system("cls");

    return opcao;
}

void cadastrarCarro(Carro vetCarros[T], int *index)
{
    printf("=== Cadastrar Carro %d ===\n", *index);

    printf("\nMarca: ");
    fflush(stdin);
    gets(vetCarros[*index].marca);

    printf("Ano: ");
    scanf("%d", &vetCarros[*index].ano);

    printf("Cor: ");
    fflush(stdin);
    gets(vetCarros[*index].cor);

    printf("Preco: ");
    scanf("%f", &vetCarros[*index].preco);

    printf("\nCarro cadastrado com sucesso!\n\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();

    *index = *index + 1;
}

void listarPorPreco(Carro vetCarros[T], int *index)
{
    int i;
    float preco;

    printf("=== Listar Carros por Preco ===\n");

    printf("Preco maximo: ");
    scanf("%f", &preco);

    printf("\n%*s | %*s | %*s | %*s", 15, "Marca", 4, "Ano", 10, "Cor", 9, "Preco");

    for (i = 0; i < *index; i++)
    {
        if (vetCarros[i].preco <= preco)
        {
            printf("\n%*s | %*d | %*s | %*.2f", 15, vetCarros[i].marca, 4, vetCarros[i].ano, 10, vetCarros[i].cor, 9, vetCarros[i].preco);
        }
    }

    printf("\n\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();
}

void listarPorMarca(Carro vetCarros[T], int *index)
{
    int i;
    char marca[16];

    printf("=== Listar Carros por Marca ===\n");

    printf("Marca procurada: ");
    fflush(stdin);
    gets(marca);

    printf("\n%*s | %*s | %*s | %*s", 15, "Marca", 4, "Ano", 10, "Cor", 9, "Preco");

    for (i = 0; i < *index; i++)
    {
        if (strcmp(vetCarros[i].marca, marca) == 0)
        {
            printf("\n%*s | %*d | %*s | %*.2f", 15, vetCarros[i].marca, 4, vetCarros[i].ano, 10, vetCarros[i].cor, 9, vetCarros[i].preco);
        }
    }

    printf("\n\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();
}