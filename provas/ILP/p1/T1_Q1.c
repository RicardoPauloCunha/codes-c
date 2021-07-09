
/* Faca um programa em linguagem C para armazenar 15 valores inteiros em um vetor. Em seguida o programa deve
organizar os dados que foram inseridos no vetor de forma que esses valores fiquem em ordem crescente. Imprima
o vetor antes e depois da ordenacao. Obs: nao e permitido usar mais do que um vetor, use apenas variaveis 
simples que irao auxiliar a ordenacao do vetor. */

#include <stdio.h>
#include <stdlib.h>
#define T 15

int main()
{

  int vetor[T]; // Declaracao do Vetor
  int i, k;     // Declaracao dos contadores para o FOR
  int cx;       // Declaracao de variavel para auxilio na ordenacao

  for (i = 0; i < T; i++)
  {
    printf("Digite o vetor[%d]: ", i + 1); // Laco solicitando os numeros para preencher o vetor
    scanf("%d", &vetor[i]);
  }

  printf("\n\nVetor antes da ordenacao:\n"); // Texto para contextualizar o usuario sobre o que aparece na tela

  for (i = 0; i < T; i++)
  {
    printf("%d | ", vetor[i]); // Imprime o valor do vetor na ordem em que foi preenchido
  }

  for (i = 0; i < T; i++)
  {
    for (k = i + 1; k < T; k++)
    {
      if (vetor[i] > vetor[k])
      {                      // Aqui o programa valida se o vetor da posicao "i" e maior que o vetor da posicao "K"
        cx = vetor[i];       // (posicao "K" = i+1)
        vetor[i] = vetor[k]; // Se o valor de i for maior que k, os valores sao trocados, para proxima validacao
        vetor[k] = cx;       // Apos isso, os valores serao impressos
      }
    }
  }

  printf("\n\nVetor depois da ordenacao:\n");

  for (i = 0; i < T; i++)
  {
    printf("%d | ", vetor[i]); // Apos as trocas feito acima, os valores serao impressos ordenadamente.
  }

  return 0;
}
