/*  Faca um programa, usando o conceito de funcoes, para armazenar numeros
inteiros em dois vetores de 10 posicoes. Dessa forma, o programa devera possuir uma funcao
denominada LeEComparaVets que sera responsavel por inserir os valores nos dois vetores e em
seguida, devera imprimir todos os valores (iguais) presentes nos dois vetores. Ao final a funcao deve
retornar a  funcao principal o total de numeros que se repetem nos dois vetores.  */

#include <stdio.h>
#include <conio.h>
#define T 10

int LeEComparaVets();
int ContaQtd(int vetor[T], int num);
bool NumeroJaUsado(int num, int pos);
bool NumeroJaUsado(int vetor[T], int num, int pos);

int main()
{
	printf("%d", LeEComparaVets());

	getch();
}

int LeEComparaVets()
{
	int lista1[T];
	int lista2[T];
	int qtds[T][2];
	int soma = 0, total = 0;

	// Atribuicao dos valores em cada vetor
	printf("Digite os valores do primeiro vetor: \n");
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &lista1[i]);
	}

	printf("Digite os valores do segundo vetor: \n");
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &lista2[i]);
	}

	// FOR para percorrer os vetores1
	for (int i = 0; i < T; i++)
	{
		// Caso o numero atual ja tenha sido usado
		if (NumeroJaUsado(lista1, lista1[i], i))
		{
			// Pula o numero atual
			continue;
		}
		else
		{
			soma += ContaQtd(lista1, lista1[i]);
		}

		soma += ContaQtd(lista2, lista1[i]);

		//Exibicao dos resultados
		if (soma > 1)
		{
			total = total + soma;

			for (int j = 1; j <= soma; j++)
			{
				printf("%d", lista1[i], i, j);

				if (j != soma)
				{
					printf(", ");
				}
			}

			printf(";\n", lista1[i]);
		}

		soma = 0;
	}

	// FOR para percorrer os vetores2
	for (int i = 0; i < T; i++)
	{
		// Caso o numero atual ja tenha sido usado OU numero atual ja tenha sido usado na LISTA1
		// NumeroJaUsado(vetor, vetro, -1), o "-1" vai indicar que ele nao e a primeira posicao com esse numero PROPOSITALMENTE
		// Assim, a funcao se resume a verificar se o numero existe no vertor passado
		if (NumeroJaUsado(lista2, lista2[i], i) || NumeroJaUsado(lista1, lista2[i], -1))
		{
			// Pula o numero atual
			continue;
		}
		else
		{
			soma = ContaQtd(lista2, lista2[i]);

			if (soma > 1)
			{
				total = total + soma;

				for (int j = 1; j <= soma; j++)
				{
					printf("%d", lista2[i], i, j);

					if (j != soma)
					{
						printf(", ");
					}
				}

				printf(";\n", lista1[i]);
			}
		}

		soma = 0;
	}

	return total;
}

// Funcao para calcular quantas vezes um numero aparece no vetor
int ContaQtd(int vetor[T], int num)
{
	int qtd = 0;

	for (int i = 0; i < T; i++)
	{
		if (vetor[i] == num)
		{
			qtd += 1;
		}
	}

	return qtd;
}

// Funcao para verificar se o numero ja foi usado na contagem
bool NumeroJaUsado(int vetor[T], int num, int pos)
{
	// Flag de verdadeiro ou falso
	int flagJaUsado = 0;

	// Percore o vetor
	for (int i = 0; i < T; i++)
	{
		// Caso o vetor[i] seja igual ao numero
		if (vetor[i] == num)
		{
			// Verifica se ja foi usado e se a posicao e igual ao index(pos) informada
			if (flagJaUsado == 0 && pos == i)
			{
				return false;
			}
			// Caso index seja diferente significa que esse numero ja foi contado antes
			else
			{
				return true;
			}
		}
	}

	return false;
}
