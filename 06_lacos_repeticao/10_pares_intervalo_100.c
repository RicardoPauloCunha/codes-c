// Exibir os pares entre um e 100

#include <stdio.h>

int main() {
    int num = 0;

    while (num <= 100) {
        printf("%d ", num);
        
        num += 2;
    }

    return 0;
}