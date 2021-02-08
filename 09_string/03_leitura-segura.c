#include <stdio.h>
#include <string.h>

int main() {
    char frase[41];
    char c;
    int i = 0;

    while(i<40 && ((c=getchar()) != '\n')) {
        frase[i++] = c;
    }

    frase[i] = '\0';

    printf("Sua frase tem %d caracteres: %s\n", strlen(frase), frase);

    return 0;
}