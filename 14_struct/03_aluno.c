/* 4) Crie um programa em linguagem C que contém uma
estrutura para armazenar os dados matricula, nome, e a data
de nascimento de uma turma de 50 alunos. Para elaborar o
programa use o conceito de structs aninhadas para a
definição da data de nascimento. */

#include <stdio.h>
#include <conio.h>
#define T 50

typedef struct
{
    char dia[3];
    char mes[3];
    char ano[3];
} Data;

typedef struct
{
    int matricula;
    char nome[50];
    Data dataNasc;
} Aluno;

int main()
{
    int i;
    Aluno alunos[T];

    for (i = 0; i < T; i++)
    {
        printf("== Matricular Aluno %d ==\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        fflush(stdin);
        gets(alunos[i].nome);

        printf("Data de Nascimento, dia: ");
        fflush(stdin);
        gets(alunos[i].dataNasc.dia);

        printf("Data de Nascimento, mes: ");
        gets(alunos[i].dataNasc.mes);

        printf("Data de Nascimento, ano: ");
        gets(alunos[i].dataNasc.ano);
    }

    for (i = 0; i < T; i++)
    {
        printf("\n== Aluno %d ==\nMatricula: %d\nNome: %s\nData de Nascimento: %s/%s/%s",
               i + 1,
               alunos[i].matricula,
               alunos[i].nome,
               alunos[i].dataNasc.dia,
               alunos[i].dataNasc.mes,
               alunos[i].dataNasc.ano);
    }

    return 0;
}