// Programa para ler 20 número e exibi-los ao inverso

// Diretiva do pré processador (standard input output)
#include <stdio.h>
#define TAM 3

int main()
{
    int i, num[TAM];

    printf("Digite %d valores", TAM);

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &num[i]);
    }

    prinf("Valores na ordem interva");

    for (i = TAM - 1; i >= 0; i--)
    {
        printf("%d", num[i]);
    }

    return 0;
}