#include <stdio.h>

void somas(int num, int *Pnum10, int *Pnum20, int *Pnum30);

int main()
{
    int num, num10, num20, num30;

    printf("Digite um valor: ");
    scanf("%d", &num);

    somas(num, &num10, &num20, &num30);

    printf("Valor da entrada: %d\nSoma com 10: %d\nSoma com 20: %d\nSoma com 30: %d", num, num10, num20, num30);

    return 0;
}

void somas(int num, int *Pnum10, int *Pnum20, int *Pnum30)
{
    *Pnum10 = num + 10;
    *Pnum20 = num + 20;
    *Pnum30 = num + 30;

    return;
}