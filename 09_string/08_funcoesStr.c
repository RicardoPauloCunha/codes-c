// 1) Para cada função apresentada, crie um programa em
// que seja necessário o uso da função. Obs: elabore
// um enunciado a fim de justificar o usa da função.
// Adicione o enunciado criado como comentário que
// deverá ser adicionado no código.

#include <stdio.h>
#include <string.h>
#define TAM 21

/*
// Escreva um programa para ler duas string, depois junte as duas
// e ao final exiba a palavra formada e o seu tamanho
int main() {
    char str1[TAM*2-1], str2[TAM];
    int length;

    printf("Digite a primeira palavra: ");
    gets(str1);

    printf("Digite a segunda palavra: ");
    gets(str2);

    strcat(str1, str2);

    length = strlen(str1);

    printf("Palavra formada: %s", str1);
    printf("\nTamanho da palavra formada: %d", length);

    return 0;
}
*/

/*
// Escreva um programa para ler uma string, exiba a palavra original,
// a sua foram em maiúscula e também em minúscula
int main()
{
    char str[TAM];

    printf("Digite uma palavra palavra: ");
    gets(str);

    printf("%s", str);
    printf("\n%s", strupr(str));
    printf("\n%s", strlwr(str));

    return 0;
}
*/

// Escreva um programa para ler uma string, inverta a ordem
// das letras e verifique se é igual a palavra original
int main()
{
    char str[TAM], strAux[TAM];
    int i, j = 0;

    printf("Digite uma palavra: ");
    gets(str);

    strcpy(strAux, str);

    for (i = strlen(str) - 1; i >= 0; i--)
    {
        str[j] = strAux[i];
        j++;
    }

    str[j] = '\0';

    if (strcmp(str, strAux) == 0)
    {
        printf("%s eh igual a %s", strAux, str);
    }
    else
    {
        printf("%s eh diferente de %s", strAux, str);
    }

    return 0;
}