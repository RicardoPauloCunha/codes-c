/*Crie um programa que armazene e imprima a tabela acima, em uma matriz, e informa ao usuario o
tempo necessario para percorrer duas cidades (origem e destino) por ele fornecidas, ate o momento em que
ele fornecer duas cidades iguais (origem e destino).*/
#include <stdio.h>
#include <stdlib.h>

main()
{

	int i, j, soma = 0, origem_num, destino_num;
	//declaracao dos valores da matriz conforme o exercicio
	int matriz[7][7] = {{0, 2, 11, 6, 15, 11, 1}, {2, 0, 7, 12, 4, 2, 15}, {11, 7, 0, 11, 8, 3, 13}, {6, 12, 11, 0, 10, 2, 1}, {15, 4, 8, 10, 0, 5, 13}, {11, 2, 3, 2, 5, 0, 14}, {1, 15, 13, 1, 13, 14, 0}};
	char origem_letra, destino_letra;
	//vetor com as letras que serao impressas na tabela
	char colRow[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

	//titulo da tabela de origem-destino
	printf("Tabela de origem-destino:\n");
	//cria um espaçamento inicial, que corresponde a primeira linha, e primeira coluna, onde não tem nenhum valor (0,0)
	printf("   ");

	//percorre o vetor das letras e exibe seu valor, formando assim a primeira linha da tabela, onde se encontra os titulos das colunas, ou seja, as letras do "destino"
	for (i = 0; i < 7; i++)
	{
		printf("  %c ", colRow[i]);
	}

	//pula para a linha de baixo
	printf("\n");

	//percorre a matriz e exibe seu valor, esse primeira for corresponde a linha
	for (i = 0; i < 7; i++)
	{
		//a primeira coluna dessa linha vai ser preenchida com a letra correspondente a "origem"
		printf(" %c ", colRow[i]);

		//em segui é exibido os valores dessa origem até os "destinos", ou seja, a linha com os valores da linha é montada
		for (j = 0; j < 7; j++)
		{
			//%.2d faz com que o numero tenha dois digitos, exemplo: 02, 12
			printf(" %.2d ", matriz[i][j]);
		}

		//pula para a linha de baixo
		printf("\n");
	}

	//variavel que recebera o caractere da origem
	printf("Insira a letra de A a G correspondente a origem: ");
	scanf("%c", &origem_letra);
	//limpa o buffer para o proximo scanf
	fflush(stdin);
	//variavel que recebera o caractere do destino
	printf("\nInsira a letra de A a G correspondente ao destino: ");
	scanf("%c", &destino_letra);

	//switch case para converter o caractere digitado pelo usuario em uma variavel do tipo int, correspondente a posicao da origem na matriz
	switch (origem_letra)
	{
	case 'A':
		origem_num = 0;
		break;
	case 'B':
		origem_num = 1;
		break;
	case 'C':
		origem_num = 2;
		break;
	case 'D':
		origem_num = 3;
		break;
	case 'E':
		origem_num = 4;
		break;
	case 'F':
		origem_num = 5;
		break;
	case 'G':
		origem_num = 6;
		break;
	default:
		origem_num = 7;
	}

	//switch case para converter o caractere digitado pelo usuario em uma variavel do tipo int, correspondente a posicao do destino na matriz
	switch (destino_letra)
	{
	case 'A':
		destino_num = 0;
		break;
	case 'B':
		destino_num = 1;
		break;
	case 'C':
		destino_num = 2;
		break;
	case 'D':
		destino_num = 3;
		break;
	case 'E':
		destino_num = 4;
		break;
	case 'F':
		destino_num = 5;
		break;
	case 'G':
		destino_num = 6;
		break;
	default:
		destino_num = 7;
	}

	//laco para realizar a soma do tempo de percurso entre origem e destino
	for (j = 0; j <= destino_num; j++)
	{
		soma = soma + matriz[origem_num][j];
	}

	//condicionais para validar as informacoes inseridas
	if (origem_num == 7)
	{
		printf("\nOrigem invalida.\n");
	}
	else if (destino_num == 7)
	{
		printf("\nDestino invalido.\n");
	}
	//condicional que verifica se origem e destino sao iguais
	else if (origem_num == destino_num)
	{
		printf("\nO tempo necessario para ir da origem %c ate o destino %c e 0 horas\n", origem_letra, destino_letra);
	}
	//impressao do tempo decorrido entre origem e destino
	else
	{
		printf("\nO tempo necessario para ir da origem %c ate o destino %c sao %d horas\n", origem_letra, destino_letra, soma);
	}

	system("pause");
}
