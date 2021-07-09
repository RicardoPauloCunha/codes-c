// Resolvendo equação de 2º grau

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Equacao de 2 grau");
    printf("\nInsera o coeficiente A, B e C: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        printf("\nNao e uma equacao de 2 grau");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("\nNao existem raizes reais");
        } else {
            x1 = (-b - sqrt(delta)) / (2.0 * a);
            x2 = (-b + sqrt(delta)) / (2.0 * a);

            printf("\nAs raizes sao x1: %.2f e x2: %.2f", x1, x2);
        }
    }

    return 0;
}