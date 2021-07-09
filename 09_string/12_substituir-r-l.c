// Ler uma string qualquer e trocar todos os "r/R" por "l/L", e exibir a string.

#include <stdio.h>
#include <string.h>
#define T 41

int main()
{
    char s[T], aux;
    int i = 0;

    printf("Digite sua frase: ");

    while (i < T - 1 && ((aux = getchar()) != '\n'))
    {
        s[i++] = aux;
    }

    s[i] = '\0';

    for (i = 1; i <= strlen(s); i++)
    {
        switch (s[i - 1])
        {
        case 'r':
            s[i - 1] = 'l';
            break;
        case 'R':
            s[i - 1] = 'L';
            break;
        }
    }

    printf("Sua frase: %s\n", s);

    return 0;
}