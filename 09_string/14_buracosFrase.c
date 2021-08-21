#include <stdio.h>
#include <conio.h>
#include <string.h>
#define TAM 100

int main()
{
    char frase[TAM];
    int i, buracos = 0;

    printf("Digite a frase:\n");
    gets(frase);

    for (i = 0; i < TAM; i++)
    {
        if (frase[i] == '\0')
            break;

        switch (tolower(frase[i]))
        {
        case 'a':
        case 'd':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
            buracos++;
            break;
        case 'b':
            buracos += 2;
            break;
        }
    }

    printf("A frase possui %d buracos", buracos);

    return 0;
}