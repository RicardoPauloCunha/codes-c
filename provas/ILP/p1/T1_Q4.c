/*Questao 4: Fazer um programa que leia duas strings (A e B) de no maximo 50 caracteres e
mostre uma terceira string(C) formada pelos caracteres contidos em A e B de forma intercalada.
Exemplo: Se A= Aulaù e B= Stringù, a resposta obtida devera° ser ASutlraingù*/

#include <stdio.h>
#include <string.h>
#define TAM 51

int main()
{
    // Declara as 3 variaveis de string e uma auxiliar para pegar as palavras
    char strA[TAM], strB[TAM], strC[TAM * 2 - 1], strAux[100];
    // Declara os contadores e os "flags", que funcionam como verdadeiro ou falso
    int i = 0, j = 0, flagA = 1, flagB = 1;

    // Enquanto o tamanho da palavra for maior que 50
    // Solicita e pega a mensagem digitada
    do
    {
        printf("Digite a primeira palavra (maximo %d caracteres):\n", TAM - 1);
        gets(strAux);
    } while (strlen(strAux) > TAM - 1);

    // Atribui o valor da auxiliar na string A
    strcpy(strA, strAux);

    // Enquanto o tamanho da palavra for maior que 50
    // Solicita e pega a mensagem digitada
    do
    {
        printf("Digite a segunda palavra (maximo %d caracteres):\n", TAM - 1);
        gets(strAux);
    } while (strlen(strAux) > TAM - 1);

    // Atribui o valor da auxiliar na string B
    strcpy(strB, strAux);

    // Enquanto a flag A e B forem verdadeiras
    while (flagA || flagB)
    {
        // Verifica se string A chegou ao final, ou a flagA ainda e verdadeira
        if (strA[i] != '\0' && flagA)
        {
            strC[j] = strA[i];
            j++;
        }
        else
        {
            // Define a flagA como falsa
            flagA = 0;
        }

        // Verifica se string B chegou ao final, ou a flagB ainda e verdadeira
        if (strB[i] != '\0' && flagB)
        {
            strC[j] = strB[i];
            j++;
        }
        else
        {
            // Define a flagB como falsa
            flagB = 0;
        }

        i++;
    }

    // Define o final da string
    strC[j] = '\0';

    // Retorno
    printf("Ao intercalar a primeira e segunda palavra obtemos:\n");
    printf("%s", strC);

    return 0;
}
