/* Após passar na entrevista, como seu primeiro trabalho, foi solicitado
o desenvolvimento de um protótipo de “jogo da memória”, onde é possível escolher duas cartas
e caso elas sejam iguais um conjunto é formado. O jogo é finalizado quanto todos
os conjuntos forem formados.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define T 4
#define CRESET "\033[0m"
#define CRED "\033[0;31m"
#define CGREEN "\033[0;32m"
#define CYELLOW "\033[0;33m"

typedef int Cartas[T][T][4];
typedef struct
{
    int vazia;
    int linha;
    int coluna;
} CartaEscolhida;

void gerarCartas(Cartas cartas);
void gerarImagemCarta(int frenteCartaNum, char frenteCartaStr[7]);
int verificarConjuntoExiste(Cartas cartas, int frenteCarta, int ii, int jj);
void exibirCartas(Cartas cartas);
int escolherCarta(int versoCarta, CartaEscolhida *ce, Cartas cartas);
void resetarCorEscolhas(CartaEscolhida *ce1, CartaEscolhida *ce2, Cartas cartas, int acertou);
int verificarConjuntoCombinaCombina(CartaEscolhida *ce1, CartaEscolhida *ce2, Cartas cartas);

int main()
{
    // Declaração e inicialização das variaveis
    int versoCarta, achouCarta, quantidadeConjuntos = 0, tentativas = 0, acertou = -1;
    CartaEscolhida cartaEscolhida1 = {1}, cartaEscolhida2 = {1};
    Cartas cartas;

    // Gera o conteudo das cartas de forma automatica e aleatória
    gerarCartas(cartas);

    // Mostar o menu inicial
    system("cls");
    printf("====<< Jogo da memoria >>=== ");
    printf("\n\nEscolha duas cartas e caso elas sejam iguais sera formado um conjunto.");
    printf("\nForme todos os conjuntos para ganhar!");
    printf("\n\n0 - Sair");
    printf("\n\nAperte ENTER para iniciar...");
    getch();
    system("cls");

    do
    {
        // Exibe as cartas
        exibirCartas(cartas);

        // Escolhe uma carta para virar
        printf("\n\nVirar carta numero: ");
        scanf("%d", &versoCarta);
        system("cls");

        // Caso a primeira escolha esteja vazia
        if (cartaEscolhida1.vazia)
        {
            // Reseta as cores das escolhas anteriores
            resetarCorEscolhas(&cartaEscolhida1, &cartaEscolhida2, cartas, acertou);
            // Vira e guarda a carta selecionada
            escolherCarta(versoCarta, &cartaEscolhida1, cartas);
        }
        else
        {
            // Vira e guarda a carta selecionada, retornando se ela foi encontrada
            achouCarta = escolherCarta(versoCarta, &cartaEscolhida2, cartas);

            // Caso a carta tenha sido encontrada
            if (achouCarta)
            {
                // Verifica se o conjunto de cartas são iguais
                acertou = verificarConjuntoCombina(&cartaEscolhida1, &cartaEscolhida2, cartas);

                // Adiciona na quantidade de conjuntos, caso acerte
                quantidadeConjuntos += acertou;

                tentativas++;
            }
        }
    } while (versoCarta != 0 && quantidadeConjuntos != 8);

    // Caso tenha achado todos os conjuntos
    if (quantidadeConjuntos == 8)
    {
        system("cls");

        // Exibe as cartas novamente
        exibirCartas(cartas);

        printf("\n\n%sParabens voce achou todos os conjuntos!!%s", CGREEN, CRESET);
    }

    printf("\n\nTentativas: %d", tentativas);

    return 0;
}

void gerarCartas(Cartas cartas)
{
    int i, j, contador = 1, frenteCarta;

    // Declara para não repetir os valores
    srand(time(NULL));

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            // Define que a carta irá exibir seu verso
            cartas[i][j][0] = 0;

            do
            {
                // Gera um numero aleatório
                frenteCarta = rand() % 8 + 1;
            } while (verificarConjuntoExiste(cartas, frenteCarta, i, j));

            // Define o valor da frente da carta
            cartas[i][j][1] = frenteCarta;
            // Define o valor da verso da carta
            cartas[i][j][2] = contador;
            // Define a cor da carta (padrão)
            cartas[i][j][3] = 0;

            contador++;
        }
    }
}

int verificarConjuntoExiste(Cartas cartas, int frenteCarta, int ii, int jj)
{
    int i, j, existeFreteCarta = 0;

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            // Caso tenha chegado na ultima carta com valor
            if (i == ii && j == jj)
            {
                return 0;
            }
            // Caso a frente da carta seja igual a procurada
            else if (cartas[i][j][1] == frenteCarta)
            {
                // Caso já exista mais de uma ocorrencia
                if (existeFreteCarta)
                {
                    return 1;
                }
                // Caso seja a primeira
                else
                {
                    existeFreteCarta = 1;
                }
            }
        }
    }

    // Caso não tenha nenhuma ocorrencia
    return 0;
}

void exibirCartas(Cartas cartas)
{
    int i, j;
    char frenteCarta[7];

    for (i = 0; i < T; i++)
    {
        printf("\n");

        for (j = 0; j < T; j++)
        {
            // Caso carta esteja exibindo a frente
            if (cartas[i][j][0] == 1)
            {
                // Gera a imagem(nome) da frente da carta
                gerarImagemCarta(cartas[i][j][1], frenteCarta);

                // Exibe o imagem com a sua cor
                switch (cartas[i][j][3])
                {
                case 0:
                    printf("%-7.7s ", frenteCarta); // Padrão
                    break;
                case 1:
                    printf("%s%-7.7s%s ", CYELLOW, frenteCarta, CRESET); // Amarelo
                    break;
                case 2:
                    printf("%s%-7.7s%s ", CGREEN, frenteCarta, CRESET); // Verde
                    break;
                case 3:
                    printf("%s%-7.7s%s ", CRED, frenteCarta, CRESET); // Vermelho
                    break;
                }
            }
            else
            {
                // Exibe seu verso
                printf("%-7d ", cartas[i][j][2]);
            }
        }
    }
}

void gerarImagemCarta(int frenteCartaNum, char frenteCartaStr[7])
{
    // Define a "imagem" da frente da carta
    switch (frenteCartaNum)
    {
    case 1:
        strcpy(frenteCartaStr, "GATO\0");
        break;
    case 2:
        strcpy(frenteCartaStr, "RATO\0");
        break;
    case 3:
        strcpy(frenteCartaStr, "RAPOSA\0");
        break;
    case 4:
        strcpy(frenteCartaStr, "OVELHA\0");
        break;
    case 5:
        strcpy(frenteCartaStr, "TIGRE\0");
        break;
    case 6:
        strcpy(frenteCartaStr, "ZEBRA\0");
        break;
    case 7:
        strcpy(frenteCartaStr, "COELHO\0");
        break;
    case 8:
        strcpy(frenteCartaStr, "CAVALO\0");
        break;
    }
}

int escolherCarta(int versoCarta, CartaEscolhida *ce, Cartas cartas)
{
    int i, j, aux;

    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            // Caso o verso seja igual a carta escolhida e ainda não esteja virada
            if (cartas[i][j][2] == versoCarta && cartas[i][j][0] == 0)
            {
                // Define os valores da escolha 1
                (*ce).linha = i;
                (*ce).coluna = j;
                (*ce).vazia = 0; // Define que não está mais vazia

                // Vira a carta para exibir sua frente
                cartas[i][j][0] = 1;
                // Define a cor amarela, para carta escolhida
                cartas[i][j][3] = 1;

                // Retorna que achou
                return 1;
            }
        }
    }

    // Retorna que não achou
    return 0;
}

void resetarCorEscolhas(CartaEscolhida *ce1, CartaEscolhida *ce2, Cartas cartas, int acertou)
{
    // Caso seja a primeira vez rodando
    if (acertou != -1)
    {
        // Caso tenha errado
        if (acertou == 0)
        {
            // Vira as cartas para exibir seu verso
            cartas[(*ce1).linha][(*ce1).coluna][0] = 0;
            cartas[(*ce2).linha][(*ce2).coluna][0] = 0;
        }

        // Define a cor padrão da carta
        cartas[(*ce1).linha][(*ce1).coluna][3] = 0;
        cartas[(*ce2).linha][(*ce2).coluna][3] = 0;
    }
}

int verificarConjuntoCombina(CartaEscolhida *ce1, CartaEscolhida *ce2, Cartas cartas)
{
    int acertou;

    // Caso as cartas sejam iguais
    if (cartas[(*ce1).linha][(*ce1).coluna][1] == cartas[(*ce2).linha][(*ce2).coluna][1])
    {
        // Define a cor verde
        cartas[(*ce1).linha][(*ce1).coluna][3] = 2;
        cartas[(*ce2).linha][(*ce2).coluna][3] = 2;

        printf("%sConjunto certo!%s\n", CGREEN, CRESET);

        // Define que acertou o conjunto
        acertou = 1;
    }
    else
    {
        // Define a cor vermelha
        cartas[(*ce1).linha][(*ce1).coluna][3] = 3;
        cartas[(*ce2).linha][(*ce2).coluna][3] = 3;

        printf("%sConjunto errado!%s\n", CRED, CRESET);

        // Define que errou o conjunto
        acertou = 0;
    }

    // "Reseta" as escolhas
    (*ce1).vazia = 1;
    (*ce2).vazia = 1;

    return acertou;
}