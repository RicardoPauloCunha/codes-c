// ler uma frase e mostrá-la na ordem inversa;

#include <stdio.h>
#include <string.h>
#define T 41

int main() {
    char frase[T];
    char inversa[T];
    char c;
    int i = 0, j = 0;

    while(i<T-1 && ((c=getchar()) != '\n')) {
        frase[i++] = c;
    }

    frase[i] = '\0';

    for (i=strlen(frase)-1; i >= 0; i--){
        inversa[j] = frase[i];
        j++;
    }

    inversa[j] = '\0';


    printf("Sua frase: %s\n", inversa);

    return 0;
}