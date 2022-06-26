/*Produto dos inteiros ímpares*/
#include <stdio.h>

int main(void)
{
	int cont, prod = 1, end;

	printf("Informe até que inteiro queres que seja feito\n");
	printf("o produto dos ímpares (1-x): ");
		scanf("%d", &end);

	for(cont = 1; cont <= end; cont++){
		if(cont % 2 == 1)
			prod *= cont;
	}

	printf("\nProduto de todos os ímpares de 1-%d = %d\n", end, prod);
	return 0;
}