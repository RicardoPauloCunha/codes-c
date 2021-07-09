/* Questão 2:Utilizando  o  conceito  de struct,  fazer  um  programa  em  
C  que  permita  a entrada de nome, endereço e telefone de 10 pessoas e os imprima 
em ordem alfabética. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define T 3

typedef struct
{
    char nome[50];
    char endereco[50];
    char telefone[50];
} DadosPessoais;

int main()
{
    int i = 0, j = 0;
    // Lista de pessoas
    DadosPessoais pessoas[T];
    // Variavel auxiliar
    DadosPessoais aux;

    printf("\n=== Cadastrar Pessoas ===\n");

    // laço para prencher os dados pessoais solicitados
    for (i = 0; i < T; i++)
    {
        printf("\n= Dados pessoais =");

        printf("\nDigite o nome: ");
        fflush(stdin);
        gets(pessoas[i].nome);

        printf("Digite o endereco: ");
        fflush(stdin);
        gets(pessoas[i].endereco);

        printf("Digite o telefone: ");
        fflush(stdin);
        gets(pessoas[i].telefone);
    }

    // laço para ordenar a lista em ordem alfabetica
    for (i = 0; i < T; i++)
    {
        //laço para pegar o proximo nome
        for (j = i + 1; j < T; j++)
        {
            // comparar os nomes
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0)
            {
                // Realiza a troca
                aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;
            }
        }
    }
    
    printf("\n== Cadastro de pessoas ordenado ==");

    // Laço utilizado para percorrer todos as pessoas do vetor
    for (i = 0; i < T; i++)
    {
        printf("\n\n= Cadastro pessoa =");
        printf("\nNome: %s", pessoas[i].nome);
        printf("\nEndereco: %s", pessoas[i].endereco);
        printf("\nTelefone: %s", pessoas[i].telefone);
    }

    return 0;
}