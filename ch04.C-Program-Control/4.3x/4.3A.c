/*Imprimir valores ímpares de 1 a 99 por via da estrutura FOR*/
#include <stdio.h>

int main(void)
{
	int soma = 1, cont;

	for(cont = 1; soma <= 99; cont++){
			if(soma == 99){
				printf("%d\n", soma);
			}else
		printf("%d ", soma);
		soma += 2;
	}
	return 0;
}