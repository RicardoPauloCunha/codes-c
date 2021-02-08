// Modificar o programa
// contando sinais pontuação (,.;:) e espaços em branco
// e eixibir o total
// Continuar trabalhando na lista3 utilizando os 3 comandos

#include <stdio.h>

int main()
{
    char caracter;
    int cont = 0;

    printf("Digite uma frase: ");

    do
    {
        scanf("%c", &caracter);

        switch (caracter)
        {
        case ',':
        case '.':
        case ';':
        case ':':
        case ' ':
            cont++;
        }
    } while (caracter != '\n');

    printf("Quantidade de pontuacoes (,.;: ) encontradas = %d", cont);

    return 0;
}