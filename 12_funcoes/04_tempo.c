// 4. Faça um programa que possua uma função
// chamada Tempo que recebe por parâmetro o
// tempo de duração de uma fábrica expressa em
// segundos. A função deve efetuar cálculos a fim de
// imprimir a equivalência do tempo recebido em
// horas, minutos e segundos.
// exemplo:
// se o valor recebido pela função for 7265 segundos então
// a mesma deve imprimir:
// 7265 segundo(s) equivalem a 2 hora(s) , 1 minuto(s) e 5
// segundo(s)

#include <stdio.h>
void Tempo(int segundos);

int main()
{
    int segundos;

    printf("Digite o tempo de duracao da fabrica (em segundos): ");
    scanf("%d", &segundos);

    Tempo(segundos);

    return 0;
}

void Tempo(int segundos)
{
    int minutos, horas;

    minutos = segundos / 60;
    segundos = segundos % 60;
    horas = minutos / 60;
    minutos = minutos % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)", horas, minutos, segundos);
}