// Ler uma sequancia de caracteres até que o usuário digite .
// Contar a quantidade de vogais digitadas
#include <stdio.h>

int main()
{
    int cont = 0;
    char caracter;

    printf("Digite sua frase: ");
    do
    {
        scanf("%c", &caracter);

        switch (caracter)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cont++;
        }
    } while (caracter != '.');

    printf("Qtd vogais digitadas = %d", cont);

    return 0;
}