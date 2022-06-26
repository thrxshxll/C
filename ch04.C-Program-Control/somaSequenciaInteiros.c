/*soma de inteiros a partir da especificação
 de quantos valores devem ser somados*/
#include <stdio.h>

int main(void)
{
	int cont, x, in, soma = 0;

	printf("Informe quantos inteiros devem ser somados: ");
		scanf("%d", &cont);

	for(x = 1; x <= cont; x++){
		scanf("%d", &in);

		soma += in;
	}

	printf("soma total = %d\n", soma);

	return 0;
}