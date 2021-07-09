/* 2) Crie uma estrutura para armazenar os dados dos produtos existentes no
estoque de uma loja. Dentre os dados de importância tem-se: código do
produto, valor unitário, quantidade armazenada e quantidade vendida. O
controle deverá ser capaz de armazenar 50 produtos. Criar uma função para
imprimir o valor unitário, a quantidade armazenada, a quantidade vendida e a
quantidade do estoque atual. Criar uma função que verifica se a quantidade
vendida é igual a zero, caso verdadeiro a função deve imprimir a mensagem
“Produto Pouco Procurado”. */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define T 5

typedef struct
{
    int codigoProduto;
    float valorUnitario;
    int quantidadeArmazenada;
    int quantidadeVendida;
} Produto;

int mostrarMenu(void);
void cadastrarProduto(Produto produtos[T], int *index);
void listarProdutos(Produto produtos[T], int *index);
void verificarQuantidadeVendida(Produto produtos[T], int *index);

int main()
{
    Produto produtos[T];
    int opcao, index = 0;

    do
    {
        opcao = mostrarMenu();

        switch (opcao)
        {
        case 1:
            cadastrarProduto(produtos, &index);
            break;
        case 2:
            listarProdutos(produtos, &index);
            break;
        case 3:
            verificarQuantidadeVendida(produtos, &index);
            break;
        case 0:
        default:
            printf("Saindo...");
            break;
        }
    } while (opcao != 0);

    return 0;
}

int mostrarMenu(void)
{
    int opcao;

    system("cls");

    printf("=== Estoque de Produtos ===\n");
    printf("\nEscolha uma opcao:\n");
    printf("\n1 - Cadastrar produto");
    printf("\n2 - Listar produtos");
    printf("\n3 - Verificar produtos menos vendidos");
    printf("\n0 - Sair\n");

    scanf("%d", &opcao);

    system("cls");

    return opcao;
}

void cadastrarProduto(Produto produtos[T], int *index)
{
    printf("=== Cadastrar produto %d ===\n", *index);

    printf("\nCodigo do produto: ");
    fflush(stdin);
    scanf("%d", &produtos[*index].codigoProduto);

    printf("Valor unitario: ");
    scanf("%f", &produtos[*index].valorUnitario);

    printf("Quantidade armazenada: ");
    scanf("%d", &produtos[*index].quantidadeArmazenada);

    printf("Quantidade vendida: ");
    scanf("%d", &produtos[*index].quantidadeVendida);

    printf("\nProduto cadastrado com sucesso!\n\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();

    *index = *index + 1;
}

void listarProdutos(Produto produtos[T], int *index)
{
    int i;

    printf("=== Listar produtos ===\n");

    printf("\n%15s | %15s | %15s", "Valor unitario", "Qtd armazenada", "Qtd vendida");

    for (i = 0; i < *index; i++)
    {
        printf("\n%15.2f | %15d | %15d", produtos[i].valorUnitario, produtos[i].quantidadeArmazenada, produtos[i].quantidadeVendida);
    }

    printf("\n\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();
}

void verificarQuantidadeVendida(Produto produtos[T], int *index)
{
    int i;
    int codigo;

    printf("=== Verificar quantidade vendida ===\n");

    printf("Coloque o codigo do produto: ");
    scanf("%d", &codigo);

    for (i = 0; i < *index; i++)
    {
        if (codigo == produtos[i].codigoProduto)
        {
            if (produtos[i].quantidadeVendida == 0)
            {
                printf("\nProduto Pouco Procurado");
            }
            else
            {
                printf("\nQuantidade vendida: %d", produtos[i].quantidadeVendida);
            }

            i = *index - 1;
        }
    }

    printf("\n\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();
}