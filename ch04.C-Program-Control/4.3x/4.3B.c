/*Impressão de valores com precisão e alinhados à esquerda*/
#include <stdio.h>

int main(void)
{
	double valor = 333.546372;

	printf("%-15.1f\n", valor);
	printf("%-15.2f\n", valor);
	printf("%-15.3f\n", valor);
	printf("%-15.4f\n", valor);
	printf("%-15.5f\n", valor);

	return 0;
}