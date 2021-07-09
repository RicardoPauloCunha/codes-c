/*Q5:Faca um programa para ler duas strings. A primeira string devera armazenar
    uma frase e a segunda string devera armazenar uma palavra. O programa deve verificar o numero de
    vezes que a palavra ocorre na frase.
    Exemplo:
    Para a palavra CASA e a frase: JOSE REALIZOU O SEU CASAMENTO EM UM CASARAO USANDO UM
    CASACO AZUL E ESCOLHOU DOIS CASAIS PARA SEREM SEUS PADRINHOS.
    Tem-se que a palavra ocorre 4 vezes na frase.*/

#include <stdio.h>
#include <string.h> /*necessario para a funcao 'strlen'*/
#include <conio.h> /*necessario para a funcao 'gets'*/

main(){
    /*variaveis*/
    char palavra[21], frase[151];
    int i, j, k, igual = 0, aparece = 0, tamFrase, tamPalavra; /*i, j, k serao usadas nos loops*/
                                                               /*'igual' armazenara o numero de letras que sao comuns a frase e a palavra*/
                                                               /*'aparece' armazenara o numero de vezes que a palavra aparece na frase*/
                                                               /*tamFrase/Palavra armazenara o tamanho das strings*/
    /*entrada*/
    printf("Digite uma frase: ");
    gets(frase); /*entrada da frase*/

    printf("Digite uma palavra: ");
    gets(palavra); /*entrada da palavra*/

    /*processamento*/
    tamFrase = strlen(frase);       /*atribuicao do tamanho das strings*/
    tamPalavra = strlen(palavra);               /* || */

    for(i = 0; i < tamFrase; i++){  /*o 1o loop percorrera cada letra da 'frase'*/
        if(frase[i] == palavra[0]){ /*neste momento e comparado se a letra analisada da 'frase' e igual a primeira letra da 'palavra'*/    
            for(j = 0; j < tamPalavra; j++){ /*caso seja, sao verificadas as letras seguintes nesse 2o loop*/
                if(frase[i] == palavra[j]){  /*cada vez que a letra analisada da 'frase' for igual a letra analisada da 'palavra'...*/
                    igual += 1;              /*...sera somado 1 a variavel 'igual' e 1 a variavel 'i' para proseguir para a proxima letra*/
                    i++;
                }
                else{ /*caso uma letra seja diferente o loop e encerrado*/
                    break;
                }
            }
            if(igual == tamPalavra){ /*caso a variavel 'igual' seja igual a quantida de letras da 'palavra', isso quer dizer que ha na 'frase'...*/
                aparece += 1;        /*...uma sequencia de letras iguais a 'palavra', ou seja, a palavra esta contida na frase. Entao e somado 1 a variavel 'aparece'*/
            }
            igual = 0; /*a variavel e resetada para avaliar as proximas sequencias de caracteres*/
        }
    }

    /*saida*/
    printf("Tem-se que a palavra ocorre %d vezes na frase.", aparece);
}
