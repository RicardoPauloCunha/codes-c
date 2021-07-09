/* 5) Efetuar o cadastro sequencial de 10 registros para uma agenda de
endereços, nomes e telefones. Defina uma estrutura apropriada e construa
um programa que por meio de um menu de seleção esteja capacitado a
efetuar:
a) o cadastro de todos os dados;
b) a pesquisa por nomes com a apresentação de todos os dados;
c) a listagem total apenas dos nomes. */

#include <stdio.h>
#include <string.h>
#define T 2

typedef struct
{
    char nome[20];
    char endereco[30];
    char telefone[30];
} Agenda;

void mostrarMenu(void);
void cadastrar(Agenda agendas[T], int *index);
void buscarPorNome(Agenda agendas[T], int *index);
void listar(Agenda agendas[T], int *index);
void continuar(void);

int main()
{
    Agenda agendas[T];
    int index = 0, opcao;

    do
    {
        mostrarMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrar(agendas, &index);
            break;
        case 2:
            buscarPorNome(agendas, &index);
            break;
        case 3:
            listar(agendas, &index);
            break;
        default:
            printf("Saindo...");
        }
    } while (opcao > 0 && opcao < 4);

    return 0;
}

void mostrarMenu(void)
{
    system("cls");

    printf("=== Agenda ===\n");
    printf("\nEscolha uma opcao:\n");
    printf("\n1 - Cadastrar contato");
    printf("\n2 - Pesquisar por nome");
    printf("\n3 - Listar todos");
    printf("\n0 - Sair\n");
}

void cadastrar(Agenda agendas[T], int *index)
{
    system("cls");

    printf("=== Cadastrar contato %d ===\n\n", *index + 1);

    printf("Nome: ");
    fflush(stdin);
    gets(agendas[*index].nome);

    printf("Endereco: ");
    fflush(stdin);
    gets(agendas[*index].endereco);

    printf("Telefone: ");
    fflush(stdin);
    gets(agendas[*index].telefone);

    printf("\nContato adicionado!\n");

    *index = *index + 1;
}

void buscarPorNome(Agenda agendas[T], int *index)
{
    int i;
    char nome[20];

    system("cls");

    printf("=== Pesquisar contato por nome ===\n");

    printf("Coloque o nome: ");
    fflush(stdin);
    gets(nome);

    for (i = 0; i < *index; i++)
    {
        if (strstr(nome, agendas[i].nome))
        {
            printf("\n= Contato =\n");
            printf("Nome: %s\n", agendas[i].nome);
            printf("Endereco: %s\n", agendas[i].endereco);
            printf("Telefone: %s\n", agendas[i].telefone);
        }
    }

    continuar();
}

void listar(Agenda agendas[T], int *index)
{
    int i;
    system("cls");

    printf("=== Listar de contatos ===\n");

    for (i = 0; i < *index; i++)
    {
        printf("\n= Contato %d =\n", i + 1);
        printf("Nome: %s\n", agendas[i].nome);
        printf("Endereco: %s\n", agendas[i].endereco);
        printf("Telefone: %s\n", agendas[i].telefone);
    }

    continuar();

}

void continuar() {
    printf("\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();
}