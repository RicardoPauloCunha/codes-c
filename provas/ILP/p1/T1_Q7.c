/*Q7-Pesquise sobre o conceito de recursividade. Explique o conceito em questao e
     resolva o exercicio a seguir usando recursividade:
     Crie uma funcao que de forma recursiva calcula a soma dos numeros sequenciais existentes
     em um intervalo. Assim, o usuario devera informar um valor inicial e um valor final, em que o valor
     final deve ser maior que o valor inicial.
     Exemplo: valor inicial=1 e valor final=5 tera como resultado o valor 15, obtido a partir de
     1+2+3+4+5*/

#include <stdio.h>

int somaIntervalo(int inicio, int fim);

main(){
    //variaveis
    int i, f, s;

    //entrada
    printf("Digite o inicio da sequencia: ");
    scanf("%d", &i);
    printf("Digite o fim da sequencia: ");
    scanf("%d", &f);

    //chamada da funcao e saida
    s = somaIntervalo(i, f);
    printf("A soma da sequencia e: %d", s);
}

int somaIntervalo(int inicio, int fim){
    int casoBase = inicio;  //o caso base sempre sera o valor do inicio da sequencia 
    int s;

    if(fim == inicio){ //se o fim for igual ao inicio, o caso base foi atingido, entao e retornado o caso base
        return(casoBase);
    }
    else{                                         //enquanto o caso base nao for atingido, a funcao e chamada decrementando 1 da variavel fim
        s = fim + somaIntervalo(inicio, fim - 1); //quando o caso base for atingido, a funcao ira retornar o valor ate chegar a primeira chamada da funcao
    }
}
