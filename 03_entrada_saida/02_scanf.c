#include <stdio.h>

int main() {
	int a, b;
	float x, y;
	char c, d, e;

	printf("Digite um inteiro: ");
	scanf("%d", &a);

	printf("Digite um float: ");
	scanf("%f", &x);

	printf("Digite um inteiro e depois um float: ");
	scanf("%d%f", &b, &y);

	printf("Digite dois caracteres: ");
	scanf(" %c %c", &d, &e);

	return 0;
}