/*soma dos inteiros pares de 2-40*/
#include <stdio.h>

int main(void)
{
	int cont = 1, n, soma = 0;

	while(cont <= 40){

		if(cont % 2 == 0)
			soma += cont;

		cont++;
	}

	printf("A soma total é %d\n", soma);

	return 0;

}