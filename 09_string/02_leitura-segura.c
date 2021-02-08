#include <stdio.h>

int main() {
    char frase[41];
    char c;
    int i = 0;

    while(i<40 && ((c=getchar()) != '\n')) {
        frase[i++] = c;
    }

    frase[i] = '\0';

    printf("Sua frase: %s\n", frase);

    return 0;
}