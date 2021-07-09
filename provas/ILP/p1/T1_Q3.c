/*Imagine que voce chegou ao ultimo estagio de uma entrevista para trabalhar na area de tecnologia, 
e o entrevistador te pede para desenvolver algum tipo de jogo utilizando a linguagem C e o conceito de matrizes.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define A 8
#define L 16

// Declara a posicao do personagem globalmente
int a = 0, l = 1;
// Declara o mapa do labirinto globalmente
char labirinto[A][L] = {
    {'H', ' ', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H'},
    {'H', ' ', 'H', ' ', ' ', ' ', ' ', ' ', ' ', 'H', ' ', ' ', ' ', ' ', ' ', 'H'},
    {'H', ' ', 'H', ' ', 'H', 'H', 'H', 'H', ' ', 'H', ' ', 'H', 'H', ' ', 'H', 'H'},
    {'H', ' ', 'H', ' ', ' ', 'H', ' ', ' ', ' ', 'H', ' ', 'H', ' ', ' ', ' ', 'H'},
    {'H', ' ', 'H', 'H', ' ', 'H', ' ', 'H', ' ', ' ', ' ', 'H', ' ', 'H', ' ', 'H'},
    {'H', ' ', 'H', ' ', ' ', 'H', ' ', 'H', 'H', 'H', 'H', 'H', ' ', 'H', ' ', 'H'},
    {'H', ' ', ' ', ' ', 'H', 'H', ' ', ' ', 'H', ' ', ' ', ' ', ' ', ' ', ' ', 'H'},
    {'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', '_', 'H', 'H', 'H', 'H', 'H'}};

void mostrarLabirinto();
int movimentarPerson();
int verificaPosicao();

int main()
{
    // Declara as variaveis de controle
    int jogar = 1;
    int tempo = 0;

    // Instrucoes inicias sobre o jogo do labirinto
    printf("=== LABIRINTO ===\n");
    printf("Tente chegar na saida _ para finalizar o labirinto\n");
    printf("Comandos:\nA = Movimento para a esquerda\nD = Movimento para a direita\nW = Movimento para cima\nS = Movimento para Baixo\n0 = Sair\n");
    printf("Aperte ENTER para comecar...");
    getchar();

    // Permanece no loop ate o usuario deixar de jogar
    do
    {
        // Para cada movimente, aumenta o tempo (pontuacao)
        tempo++;
        // Mostra o labirinto (matriz)
        mostrarLabirinto();
        // Realiza o movimento do personagem e verifica se o usuario saiu do jogo
        jogar = movimentarPerson();
    } while (jogar);

    // Caso pontuacao seja maior ou igual a minima
    if (tempo >= 40)
    {
        // Mostar o tempo necessario para finalizar o labirinto
        printf("Pontuacao: %d", tempo);
    }

    return 0;
}

void mostrarLabirinto()
{
    // Variaveis de controle
    int i, j;
    // Variavel do personagem, caso precise trocar
    char person = 'O';

    // Posiciona o personagem na matriz
    labirinto[a][l] = person;

    // Limpa o console
    system("@cls");

    // Percorre a mostra os valores da matriz, montando o labirinto
    for (i = 0; i < A; i++)
    {
        for (j = 0; j < L; j++)
        {
            printf(" %c ", labirinto[i][j]);
        }

        printf("\n");
    }
}

int movimentarPerson()
{
    char direcao;

    // Reseta ultima posicao do personagem
    labirinto[a][l] = ' ';

    // Pega o char que foi digitado
    direcao = getch();

    // Caso corresponda a alguma direcao incremente/decrementa a posicao global
    switch (direcao)
    {
    case 'A':
    case 'a':
        l--;
        break;
    case 'D':
    case 'd':
        l++;
        break;
    case 'W':
    case 'w':
        if (a != 0)
            a--;
        break;
    case 'S':
    case 's':
        a++;
        break;
    case '0':
        // Caso sai do jogo
        printf("Saindo...");
        return 0;
        break;
    }

    // Verifica se o personagem chegou no final ou bate na parede
    return verificaPosicao();
}

int verificaPosicao()
{
    // Caso tenha batido na parede 'H'
    if (labirinto[a][l] == 'H')
    {
        printf("\nQue pena, voce bateu na parede :(\n");
        printf("Game Over\n");
        return 0;
    }
    // Caso tenha chegado no final
    else if (labirinto[a][l] == '_')
    {
        printf("\nParabens, voce chegou ao final! :)\n");
        return 0;
    }
    // Caso continue no caminho
    else
    {
        return 1;
    }
}
