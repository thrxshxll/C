/*Encontrando o menor inteiro de uma sequência de inteiros*/
#include <stdio.h>

int main(void)
{
	int cont = 1, n, end, menor;

	printf("O primeiro valor inserido especifará\n");
	printf("a quantidade de inteiros da sequência.\n\n");

	printf("Informe o inteiro: ");
		scanf("%d", &n);

	end = n - 1;
	menor = n;

	for(; cont <= end; cont++){

		printf("informe o inteiro: ");
			scanf("%d", &n);

		if(n < menor)
			menor = n;

	}

	printf("\nO menor inteiro é %d\n", menor);

	return 0;
}