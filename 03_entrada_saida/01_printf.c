// Cabeçalho
#include <stdio.h>

// Função main
int mainOld() {
	// Declara e atribui valor inicial as variaveis
	int a = 5, b;
	float x = 4.78, y = 0.456, z;
	char opcao = 'a';

	// Atribuição
	b = 2 * a;
	z = x + y;

	// Saidas
	printf("Agora vamos exibir os valores: \n");
	printf("a = %d\n", a);
	printf("%.3f + %.2f = %.9f\n", x, y, z);
	printf("Interio = %d\nletra = %c\n", b, opcao);
	printf("Outro valor = %f\n", (a + b) * x);

	// Return
	return 0;
}