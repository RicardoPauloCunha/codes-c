/*3)A empresa ABC pretende adquirir uma programa a fim de agilizar o gerenciamento de seus produtos.
    Essa empresa vende produtos de limpeza, e assim deseja melhor controlar os produtos que vende.
    Cada produto é caracterizado por um código, nome do produto e categoria (ex. detergente, sabão em pó, sabonete, etc) e seu preço.
    A categoria é uma classificação criada pela própria empresa.
    Crie uma estrutura para armazenar até 50 produtos da empresa ABC.
    O programa deve conter um menu disponibilizando opções de funcionalidades para o usuário.
    Assim, as opções do menu devem estar associadas a funções para:
    - Cadastrar produto;
    - Imprimir todos os produtos cadastrados;
    - Imprimir os dados dos produtos de acordo com uma determinada categoria, que deve ser informada pelo usuário; e
    - Alterar o preço de um produto, após o usuário informar o código do produto cujo preço deve sofrer alteração.*/

#include <stdio.h>
#include <string.h> 
#define REG 15

struct Estoque{
    int cod;
    char nome[31], categoria[31];
    float preco;
}Produtos[REG];


int menu();
void msg(char frase[], char cor[]);
struct Estoque LerStruct();
int buscar(struct Estoque produtos[], int cod);
void imprime(struct Estoque produtos[], char catg[]);
void alterar(struct Estoque produtos[], int cod);

main(){
    /*variaveis*/
    int codigo, opcao, i = 0;
    char catg[31] = "";

    /*entrada*/
    while(1){
        opcao = menu();

        if(opcao == 1){
            Produtos[i] = LerStruct();
            i++;
            msg("CADASTRADO COM SUCESSO!", "verde");
            system("pause");
        }
        else if(opcao == 2){
            for(i == i; i < REG; i++){
                Produtos[i] = LerStruct();
            }
            msg("LOTE CADASTRADO COM SUCESSO!", "verde");
            system("pause");
        }
        else if(opcao == 3){
            imprime(Produtos, "");
            system("pause");
        }
        else if(opcao == 4){
            fflush(stdin);
            printf("------------------------------------\n");
            printf("Digite a categoria: ");
            gets(catg);
            imprime(Produtos, catg);
            system("pause");
        }
        else if(opcao == 5){
            printf("------------------------------------\n");
            printf("Digite o codigo do produto: ");
            scanf("%d", &codigo);
            alterar(Produtos, codigo);
        }
        else{
            msg("------------------------------------", "vermelho");
            msg("            ENCERRANDO...", "vermelho");
            msg("------------------------------------", "vermelho");
            break;
        }
    }
}

int menu(){
    /*variaveis*/
    int opc = 0;

    /*layout e saida*/
    system("cls");
    printf("\033[32m------------------------------------\n");
    printf("        SISTEMA CADASTRO ABC\n");
    printf("------------------------------------\033[m\n");
    printf("1 - Cadastrar produto\n");
    printf("2 - Cadastrar produtos em lote\n");
    printf("3 - Imprimir produtos cadastrados\n");
    printf("4 - Imprimir por categoria\n");
    printf("5 - Alterar preco de um produto\n");
    printf("6 - Sair\n");
    printf("------------------------------------\n");

    while(opc < 1 || opc > 6){
        printf("Sua opcao: ");
        scanf("%d", &opc);
    }
    return(opc);
}

void msg(char frase[], char cor[]){
    /*cores*/
    char verde[9] = "\033[32m";
    char vermelho[9] = "\033[31m";
    char limpa[7] = "\033[m";

    /*mensagem*/
    if(!strcmp(cor, "verde")){
        printf("%s%s%s\n", verde, frase, limpa);
    }
    else if(!strcmp(cor, "vermelho")){
        printf("%s%s%s\n", vermelho, frase, limpa);
    }
}

struct Estoque LerStruct(){
    /*variaveis*/
    struct Estoque Produto;
    int aux;

    /*entrada*/
    system("cls");
    while(1){
        printf("Codigo: ");
        scanf("%d", &aux);
        if(buscar(Produtos, aux) != -1){
            msg("Codigo existente! Cadastre outro!", "vermelho");
        }
        else{
            Produto.cod = aux;
            break;
        }
    }
    fflush(stdin);
    printf("Nome: ");
    gets(Produto.nome);
    printf("Categoria: ");
    gets(Produto.categoria);
    printf("Preco: R$ ");
    scanf("%f", &Produto.preco);
    return(Produto);
}

int buscar(struct Estoque produtos[], int cod){
    /*variaveis*/
    int i;

    /*busca*/
    for(i = 0; i < REG; i++){
        if(produtos[i].cod == cod){
            return(i);
        }
    }
    return(-1);
}

void imprime(struct Estoque produtos[], char catg[]){
    /*variaveis*/
    int i;

    /*impressao*/
    system("cls");
    if(!strcmp(catg, "")){
        printf("-------------------------------------------------\n");
        printf("Codigo\tNome\t\tCategoria\tPreco\n");
        printf("-------------------------------------------------\n");
        for(i = 0; i < REG; i++){
            if(produtos[i].cod > 0){
                printf("%d\t%s", produtos[i].cod, produtos[i].nome);
                if(strlen(produtos[i].nome) > 7){
                    printf("\t%s\t\tR$ %.2f\n", produtos[i].categoria, produtos[i].preco);
                }
                else{
                    printf("\t\t%s\t\tR$ %.2f\n", produtos[i].categoria, produtos[i].preco);
                }   
            }
        }
        printf("-------------------------------------------------\n");
    }
    else{
        printf("-------------------------------------------------\n");
        printf("Codigo\tNome\t\tCategoria\tPreco\n");
        printf("-------------------------------------------------\n");
        for(i = 0; i < REG; i++){
            if(!strcmp(produtos[i].categoria, catg)){
                printf("%d\t%s", produtos[i].cod, produtos[i].nome);
                if(strlen(produtos[i].nome) > 7){
                    printf("\t%s\t\tR$ %.2f\n", produtos[i].categoria, produtos[i].preco);
                }
                else{
                    printf("\t\t%s\t\tR$ %.2f\n", produtos[i].categoria, produtos[i].preco);
                }   
            }
        }
        printf("-------------------------------------------------\n");
    }
}

void alterar(struct Estoque produtos[], int cod){
    /*variaveis*/
    int i;

    /*processamento*/
    system("cls");
    i = buscar(produtos, cod);
    if(i != -1){
        printf("Codigo: %d\n", produtos[i].cod);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Categoria: %s\n", produtos[i].categoria);
        printf("Preco Atual: R$ %.2f\n", produtos[i].preco);
        printf("-----------------------------\n");
        printf("Digite o novo preco: R$ ");
        scanf("%f", &Produtos[i].preco);
        msg("Alterado com Sucesso!", "verde");
        system("pause");
    }
    else{
        msg("------------------------------------", "vermelho");
        msg("         Codigo Inexistente!", "vermelho");
        msg("------------------------------------", "vermelho");
        system("pause");
    }
}
