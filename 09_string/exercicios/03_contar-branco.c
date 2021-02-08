// Ler uma string qualquer, e contar os espaços em branco

#include <stdio.h>
#include <string.h>
#define T 41

int main()
{
    char s[T], aux;
    int i = 0, c = 0;

    printf("Digite sua frase: ");

    while (i < T - 1 && ((aux = getchar()) != '\n'))
    {
        s[i++] = aux;
    }

    s[i] = '\0';

    for (i = 1; i <= strlen(s); i++)
    {
        if (s[i-1] == ' ') {
            c++;
        }
    }

    printf("Espacos em branco: %d\n", c);

    return 0;
}