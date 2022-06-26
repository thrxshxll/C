/*sooma dos inteiros pares de 2-40*/
#include <stdio.h>

int main(void)
{
	int cont, soma = 0;

	for(cont = 1; cont <= 40; cont++){
		
		if(cont % 2 == 0)
			soma += cont;
	}
	printf("A soma é %d\n",soma);

	return 0;
}