// ler dois valores quaisquer e exibir o maior 

#include <stdio.h>

int main () {
    int valor1, valor2;

    printf("Digite dois valores: ");
    scanf("%d%d", &valor1, &valor2);

    if (valor1 > valor2)
    {
        printf("Valor maior: %d", valor1);
    } else {
        printf("Valor maior: %d", valor2);
    }

    return 0;
}