/*impressão de sequência com a estrutura FOR*/
#include <stdio.h>

int main(void)
{
	int cont;

	for(cont = 20; cont >= -10; cont -= 6){
		if(cont == -10){
			printf("%d\n", cont);
		}else
			printf("%d, ", cont);
	}
	return 0;
}