#include <stdio.h>
#include <conio.h>

int main () {
    char s[501];
    
    gets(s);

    printf("Hello, %s", s);

    return 0;
}