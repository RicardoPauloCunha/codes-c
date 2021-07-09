// 3) Crie um programa para ler o primeiro nome de uma
// pessoa e contar quantas vogais esse nome possui.

#include <stdio.h>
#include <conio.h>
#define TAM 20

int main()
{
    char nome[TAM];
    int i, cont = 0;

    printf("Digite o seu primeiro nome:\n");
    gets(nome);

    for (i = 0; i < TAM; i++)
    {
        switch (nome[i])
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cont++;
            break;
        default:
            break;
        }
    }

    printf("O nome %s possui %d vogais", nome, cont);

    return 0;
}