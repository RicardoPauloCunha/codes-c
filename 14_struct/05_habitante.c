/* 1) Foi realizada uma pesquisa entre 500 habitantes de uma certa região. De
cada habitante foram coletados os dados: idade, sexo, salário e número de
filhos. Crie a estrutura contendo membros adequados a estes dados. Faça uma
função que armazene as informações digitadas pelo usuário em um registro e
retorne o registro para o main. Faça também uma função que calcula a média
do salário dos habitantes. */

#include <stdio.h>
#define T 5

typedef struct
{
    int idade;
    char sexo[10];
    float salario;
    int numeroFilhos;
} Habitante;

int mostrarMenu(void);
void cadastrarHabitante(Habitante habitantes[T], int *index);
void calcularMedia(Habitante habitantes[T], int *index);

int main()
{
    Habitante habitantes[T];
    int opcao, index = 0;

    do
    {
        opcao = mostrarMenu();

        switch (opcao)
        {
        case 1:
            cadastrarHabitante(habitantes, &index);
            break;
        case 2:
            calcularMedia(habitantes, &index);
            break;
        case 0:
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

    printf("=== Pesquisa Habitantes ===\n");
    printf("\nEscolha uma opcao:\n");
    printf("\n1 - Cadastrar habitante");
    printf("\n2 - Media salarios");
    printf("\n0 - Sair\n");

    scanf("%d", &opcao);

    system("cls");

    return opcao;
}

void cadastrarHabitante(Habitante habitantes[T], int *index)
{
    printf("=== Cadastrar Habitante %d ===\n", *index);

    printf("\nIdade: ");
    scanf("%d", &habitantes[*index].idade);

    printf("Sexo: ");
    fflush(stdin);
    gets(habitantes[*index].sexo);

    printf("Salario: ");
    scanf("%f", &habitantes[*index].salario);

    printf("Numero de filhos: ");
    scanf("%d", &habitantes[*index].numeroFilhos);

    printf("\nHabitante cadastrado com sucesso!\n\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();

    *index = *index + 1;
}

void calcularMedia(Habitante habitantes[T], int *index)
{
    float media = 0;
    int i;

    for (i = 0; i < *index; i++)
    {
        media += habitantes[i].salario;
    }

    media = media / *index;

    printf("Media de salario dos habitantes = %.2f", media);
    printf("\n\nAperte ENTER para continuar...");
    fflush(stdin);
    getchar();
}