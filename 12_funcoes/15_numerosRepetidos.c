#include <stdio.h>
#include <conio.h>
#define TAM 10

int LeEComparaVets();
int VerificarRepeticao(int vet1[TAM], int vet2[TAM]);

int main()
{
	int vet1[TAM];
	int vet2[TAM];
	int i;

	printf("Digite os valores do primeiro vetor: \n");
	for (i = 0; i < TAM; i++)
	{
		scanf("%d", &vet1[i]);
	}

	printf("Digite os valores do segundo vetor: \n");
	for (i = 0; i < TAM; i++)
	{
		scanf("%d", &vet2[i]);
	}

	VerificarRepeticao(vet1, vet2);

	return 0;
}

int VerificarRepeticao(int vet1[TAM], int vet2[TAM])
{
	int i, j, repetido = 0;

	for (i = 0; i < TAM; i++)
	{
		repetido = 0;

		for (j = 0; j < TAM; j++)
		{
			if (vet1[i] == vet2[j])
			{
				if (!repetido)
				{
					printf("%d", vet1[i]);
					repetido = 1;
				}

				printf(", %d", vet2[j]);
			}
		}

		if (repetido)
			printf(";\n");
	}

	return 0;
}
