/*impressão de sequência com a estrutura FOR*/
#include <stdio.h>

int main(void)
{
	int cont;

	for(cont = 1; cont <= 7; cont++){

		if(cont == 7){
			printf("%d\n", cont);
		}else
			printf("%d, ", cont);


	}
	return 0;
}