// 1) Crie um programa para permitir que o usuário digite
// uma frase. Contar a quantidade de caracteres contidos
// nessa frase e imprimir essa informação ao final.
// Obs: considere que a frase possa conter no máximo 100
// caracteres.

#include <stdio.h>
#include <conio.h>
#define TAM 101

int main()
{
    char frase[TAM];
    int i = 0, cont = 0;

    printf("Digite uma frase:\n");
    gets(frase);

    while (frase[i] != '\0')
    {
        cont++;
        i++;
    }

    printf("A frase:\n");
    puts(frase);
    printf("Contem %d caracteres", cont);

    return 0;
}