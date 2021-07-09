// 4) Crie um programa completo em C que contenha uma função chamada Leitura. A função Leitura
// deve permitir que o usuário digite uma frase (string) de no máximo 50 posições válidas e permitir
// que o usuário digite um outro caractere. Em seguida, a função deve realizar uma verificação e
// sempre que o caractere lido aparecer na string a função deve substituir o mesmo por um
// asterisco, além de realizar uma contagem para saber quantas vezes esse caractere apareceu na
// string. Imprimir a string antes e depois da substituição dentro da função.

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define TAM 51
void Leitura();

int main()
{
    Leitura();

    return 0;
}

void Leitura()
{
    char frase[TAM], letra;
    int i, cont = 0;

    printf("Digite uma frase: ");
    gets(frase);

    while (strlen(frase) > 50)
    {
        printf("Digite uma frase com no maximo 50 caracteres");
        gets(frase);
    }

    printf("Digite um caractere: ");
    scanf(" %c", &letra);

    printf("A frase digitado foi:\n%s", frase);

    for (i = 0; i <= 50; i++)
    {
        if (frase[i] == letra)
        {
            frase[i] = '*';
            cont++;
        }
    }

    printf("\nA frase depois da verificacao %c:\n%s", 130, frase);
    printf("\nSendo feita %d alteracoes", cont);
}