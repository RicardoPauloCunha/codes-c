/* Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular ´e calculado por meio da seguinte f ´ ormula: V =   raio2  altura,
onde  = 3:141592. */

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    // Declara as variaveis
    float raio, altura, volume;

    // Pega o valor do raio
    printf("Digite o raio e a altura do circulo: ");
    scanf("%f%f", &raio, &altura);

    // Calcula a volume;
    volume = PI * pow(raio, 2) * altura;

    // Retorna o resultado
    printf("Volume do cilindro = %.2f", volume);

    return 0;
}