/* 1. Faça um programa que cria uma estrutura chamada
Dadoslivros. Essa estrutura deverá conter os membros nome,
editora, ISBN, ano de edição, número de páginas e preço.
Criar uma variável dessa estrutura que é um vetor de 10
elementos. Ler os valores para a estrutura Dadoslivros e
imprimir esses dados. Além disso, imprimir a média do
número de páginas dos livros. */

#include <stdio.h>
#include <conio.h>
#define T 2

int main()
{
    int i;
    float mediaNumeroPaginas = 0;

    struct DadoLivro
    {
        char nome[40];
        char editora[40];
        int isbn;
        int anoEdicao;
        int numeroPaginas;
        float preco;
    } dadosLivros[T];

    for (i = 0; i < T; i++)
    {
        printf("== Adicionar livro %d ==\n", i + 1);

        printf("Nome: ");
        gets(dadosLivros[i].nome);

        printf("Editora: ");
        gets(dadosLivros[i].editora);

        printf("ISBN: ");
        scanf("%d", &dadosLivros[i].isbn);

        printf("Ano de edicao: ");
        scanf("%d", &dadosLivros[i].anoEdicao);

        printf("Numero de paginas: ");
        scanf("%d", &dadosLivros[i].numeroPaginas);

        printf("Preco: ");
        scanf("%f", &dadosLivros[i].preco);
    }

    for (i = 0; i < T; i++)
    {
        printf("\n== Livro %d ==\nNome: %s\nEditora: %s\nISBN: %d\nAno de edicao: %d\nNumero de paginas: %d\nPreco: %0.2f\n",
               i + 1,
               dadosLivros[i].nome,
               dadosLivros[i].editora,
               dadosLivros[i].isbn,
               dadosLivros[i].anoEdicao,
               dadosLivros[i].numeroPaginas,
               dadosLivros[i].preco);
    }

    for (i = 0; i < T; i++)
    {
        mediaNumeroPaginas += dadosLivros[i].numeroPaginas;
    }

    mediaNumeroPaginas = mediaNumeroPaginas / T;

    printf("\nMedia do numero das paginas das livros: %0.1f", mediaNumeroPaginas);

    return 0;
}