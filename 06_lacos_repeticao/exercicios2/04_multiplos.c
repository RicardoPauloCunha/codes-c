// 4. Dado n e dois números naturais i e j diferentes de 0,
// imprimir em ordem crescente os n primeiros naturais 
// que são múltiplos de i ou de j e ou de ambos.
// Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8.

#include <stdio.h>

int main()
{
    int c = 0, cp = 0, n, i, j;

    do {
        printf("Digite um numero natural: ");
        scanf("%d", &n);
    } while (n < 0);

    do
    {
        printf("Digite outros dois numeros diferentes de 0: ");
        scanf("%d%d", &i, &j);
    } while (i == 0 || j == 0);

    for (c; cp < n; c++)
    {
        if (c % i == 0 || c % j == 0) {
            printf("%d\n", c);
            cp++;
        }
    }

    return 0;
}
