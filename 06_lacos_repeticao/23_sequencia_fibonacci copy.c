// 8. Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento
// da população de coelhos utilizando uma sequência de números naturais que passou a ser
// conhecida como sequência de Fibonacci. O n-ésimo número da sequência de Fibonacci
// Fn é dado pela seguinte fórmula de recorrência:

#include <stdio.h>

int main()
{
    int cont = 3, f1 = 1, f2 = 1, f3 = 1;

    for (cont; cont <= 6; cont++)
    {
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
        printf("%d\n", f3);
    }

    return 0;
}
