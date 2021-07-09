// 2. Ler o valor de dois catetos de um triângulo retângulo, e calcular e mostrar a sua hipotenusa
// De acordo com a fórmula (h = raiz quadrada (cateto 1 ao quadrado + cateto 2 ao quadrado));

#include <stdio.h>
#include <math.h>

int main () {
    // Declara as variaveis
    float cateto1, cateto2, hipotenusa;

    // Entrada de dados
    printf("Digite o valor de dois catetos: ");
    scanf("%f%f", &cateto1, &cateto2);

    // Processamento
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    // Saida de dados
    printf("\nValor da hipotenusa = %f", hipotenusa);

    return 0;
}