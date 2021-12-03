// Leia um valor inteiro, que é a duração em segundos de um determinado evento em uma fábrica
// e informe-o expresso em horas: minutos: segundos.

#include <stdio.h>

int main() {
    int valor_segundos, hora, minuto, segundo;

    scanf("%d", &valor_segundos);

    segundo = valor_segundos%60;
    minuto = valor_segundos/60;
    hora = minuto/60;
    minuto = minuto%60;

    printf("%d:%d:%d\n", hora, minuto, segundo);
    
    return 0;
}