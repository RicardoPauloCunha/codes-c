/* 2. Crie um programa que defina uma estrutura com o
identificador Empregado a fim de guardar os dados (nome,
sobrenome, data de nascimento, RG, data de admissão,
salário) dos empregados de uma empresa. Defina um vetor
para armazenar todos os 50 empregados da empresa.
Imprimir ao final. */

#include <stdio.h>
#include <conio.h>
#define T 1

int main()
{
    struct Empregado
    {
        char nome[15];
        char sobrenome[15];
        char dataNascimento[15];
        char rg[15];
        char dataAdmissao[15];
        float salario;
    } empregados[T];

    int i;

    for (i = 0; i < T; i++)
    {
        printf("== Registrar empregado %d ==\n", i + 1);

        printf("Nome: ");
        gets(empregados[i].nome);

        printf("Sobrenome: ");
        gets(empregados[i].sobrenome);

        printf("Data de Nascimento: ");
        gets(empregados[i].dataNascimento);

        printf("RG: ");
        gets(empregados[i].rg);

        printf("Data de Admissao: ");
        gets(empregados[i].dataAdmissao);

        printf("Salario: ");
        scanf("%f", &empregados[i].salario);
    }

    for (i = 0; i < T; i++)
    {
        printf("\n== Empregado %d ==\nNome: %s\nSobrenome: %s\nData de Nascimento: %s\nRG: %s\nData de Admissao: %s\nSalario: %0.2f\n",
               i + 1,
               empregados[i].nome,
               empregados[i].sobrenome,
               empregados[i].dataNascimento,
               empregados[i].rg,
               empregados[i].dataAdmissao,
               empregados[i].salario);
    }

    return 0;
}