#include <stdio.h>

int main() {
    int ano[4], d;
    ano[0] = 1;
    ano[1] = 7;
    ano[2] = 2;
    ano[3] = 3;

    scanf("%d", &d);
    printf("%d\n", ano[d-1]);
    
    return 0;
}