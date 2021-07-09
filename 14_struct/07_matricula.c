/* 3) Crie uma estrutura para armazenar os dados matricula, nome, e as três notas
dos alunos da disciplina de Linguagem de Programação. Crie uma função
para imprimir o número de matrícula, o nome, e a média dos alunos
aprovados na disciplina. Para ser aprovado a média aritmética do aluno deve
ser maior ou igual a 7. */

#include <stdio.h>
#include <conio.h>
#define T 2
#define TN 2 // Tamanha vetor notas
#define MEDIA 7

typedef struct
{
    char nome[50];
    int matricula;
    float notas[TN];
} Matricula;

void listarAlunosProvados(Matricula matriculas[T]);

int main()
{
    Matricula matriculas[T];
    int i, j;

    for (i = 0; i < T; i++)
    {
        system("cls");

        printf("=== Adicionar matricula %d ===\n", i + 1);

        printf("\nNome aluno: ");
        fflush(stdin);
        gets(matriculas[i].nome);

        printf("Numero matricula: ");
        scanf("%d", &matriculas[i].matricula);

        printf("Coloque as %d notas do aluno: ", TN);

        for (j = 0; j < TN; j++)
        {
            scanf("%f", &matriculas[i].notas[j]);
        }
    }

    listarAlunosProvados(matriculas);

    return 0;
}

void listarAlunosProvados(Matricula matriculas[T])
{
    int i, j;
    float media;

    system("cls");

    printf("=== Alunos aprovados ===\n");

    for (i = 0; i < T; i++)
    {
        media = 0;

        for (j = 0; j < TN; j++)
        {
            media += matriculas[i].notas[j];
        }

        media = media / TN;

        if (media >= MEDIA)
        {

            printf("\n== Aluno %d ==", i + 1);

            printf("\nNome aluno: %s", matriculas[i].nome);
            printf("\nNumero matricula: %d", matriculas[i].matricula);
            printf("\nMedia: %.2f\n", media);

            media = 0;
        }
    }
}