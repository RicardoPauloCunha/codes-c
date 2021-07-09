// 4) Escreva um programa que leia uma string (use gets())
// e substitua todos os caracteres ‘a’ da string lida por
// ‘*’. Informe na tela quantos caracteres foram
// retirados.

#include <stdio.h>
#include <conio.h>
#define TAM 20

int main()
{
    char nome[TAM];
    int i, cont = 0;

    printf("Digite a string:\n");
    gets(nome);

    for (i = 0; i < TAM; i++)
    {
        switch (nome[i])
        {
        case 'A':
        case 'a':
            nome[i] = '*';
            cont++;
            break;
        default:
            break;
        }
    }

    printf("Foram retirados %d caracteres\n", cont);
    puts(nome);
    
    return 0;
}