#include <stdio.h>

int main() {
    char palavra[11];
    char frase[61];
    
    printf("Digite uma palavra com no maximo 10 caracteres: ");
    scanf("%s", palavra); // Não tem &
    printf("\nVoce digitou %s\n", palavra);

    printf("\nDigite a mensagem do dia: ");
    scanf("%s", frase);
    printf("\nEsta e sua frase: %s", frase); // se houver espaço ele para de gravar

    return 0;
}