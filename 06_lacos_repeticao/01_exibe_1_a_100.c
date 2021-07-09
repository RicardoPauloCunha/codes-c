// Exibir os numeros de 1 a 100 

#include <stdio.h>

int main() {
    int num = 1;

    while (num <= 100) {
        printf("%d ", num);
        
        ++num;
    }

    for(num=1; num<=100; num++) {
        printf("%d ", num);
    }

    return 0;
}