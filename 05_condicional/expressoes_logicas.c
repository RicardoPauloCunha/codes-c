#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 1, d = 3, e = 0;

    printf("a > b? %d", a > b);
    printf("\nb > a? %d\n", b > a);

    printf("\n!(b > a)? %d", !(b > a));
    printf("\n!a: %d", !a);
    printf("\n!d: %d", !d);
    printf("\n!e: %d\n", !e);

    printf("\na > b ou d > c? %d", a > b || d > c);
    printf("\na > b e d > c? %d", a > b && d > c);
    printf("\na + b igual d? %d", a + b == d);
    printf("\na + c igual b e a + b igual d? %d", a + c == b && a + b == d);

    return 0;
}