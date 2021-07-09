/* 8. Fac¸a um programa que leia 2 notas de um aluno, verifique se as notas sao validas e
exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um 
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser 
informado ao usuario e o programa termina. */ 

#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite as duas notas do aluno: ");
    scanf("%f%f", &nota1, &nota2);

    if (nota1 < 0 || nota1 > 10) {
        printf("A nota %.1f eh invalida!", nota1);
    } else if (nota2 < 0 || nota2 > 10) {
        printf("A nota %.1f eh invalida!", nota2);
    } else {
        media = (nota1 + nota2) / 2;
        printf("A media das notas eh: %.1f", media);
    }

    return 0;   
}