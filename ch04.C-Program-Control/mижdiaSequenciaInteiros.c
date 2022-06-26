/*Média de uma sequência de inteiros. Valor sentinela*/
#include <stdio.h>

int main(void)
{
	int cont = 0, n = 0, soma = 0;
	float med;

	printf("Informe o inteiro: | (999 para finalizar): ");
			scanf("%d", &n);

	while(n != 999){	

		soma += n;
		cont++;

		printf("Informe o inteiro: | (999 para finalizar): ");
			scanf("%d", &n);

//	med = (float)soma / cont;
	}


	med = (float)soma / cont;

	printf("Média = %.2f\n", med);

	return 0;
}