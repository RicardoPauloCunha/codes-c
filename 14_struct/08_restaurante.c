/* 4) Crie uma estrutura para descrever restaurantes. Os membros devem
armazenar o nome, o endereço, o preço médio e o tipo de comida. Crie um
programa para armazenar dados de 100 restaurantes. O programa deve
conter uma função para imprimir os dados dos registros de acordo com um
determinado tipo de comida (informado pelo usuário). */

#include <stdio.h>
#include <string.h>
#define T 2

typedef struct
{
    char nome[20];
    char endereco[50];
    char tipoComida[20];
    float precoMedio;
} Restaurante;

void adicionarRestaurante(Restaurante restaurantes[T]);
void buscarRestaurante(Restaurante restaurantes[T]);

int main()
{
    Restaurante restaurantes[T];

    adicionarRestaurante(restaurantes);

    buscarRestaurante(restaurantes);

    return 0;
}

void adicionarRestaurante(Restaurante restaurantes[T])
{
    int i;

    for (i = 0; i < T; i++)
    {
        system("cls");

        printf("=== Adicionar restaurante %d ===\n", i + 1);

        printf("\nNome: ");
        fflush(stdin);
        gets(restaurantes[i].nome);

        printf("Endereco: ");
        fflush(stdin);
        gets(restaurantes[i].endereco);

        printf("Tipo comida: ");
        fflush(stdin);
        gets(restaurantes[i].tipoComida);

        printf("Preco medio: ");
        scanf("%f", &restaurantes[i].precoMedio);
    }
}

void buscarRestaurante(Restaurante restaurantes[T])
{
    int i;
    char tipoComida[20];

    system("cls");

    printf("=== Buscar restaurantes ===\n");

    printf("Coloque o tipo de comida: ");
    fflush(stdin);
    gets(tipoComida);

    printf("\nNome | Endereco | Tipo Comida | Preco medio\n");

    for (i = 0; i < T; i++)
    {
        if (strcmp(restaurantes[i].tipoComida, tipoComida) == 0)
        {
            printf("%s | %s | %s | %.2f\n", restaurantes[i].nome, restaurantes[i].endereco, restaurantes[i].tipoComida, restaurantes[i].precoMedio);
        }
    }
}