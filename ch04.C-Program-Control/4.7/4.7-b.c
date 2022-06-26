/*impressão de sequência com a estrutura FOR*/
#include <stdio.h>

int main(void)
{
	int cont;

	for(cont = 3; cont <= 23; cont += 5){
		if(cont == 23){
			printf("%d\n", cont);
		}else
			printf("%d, ", cont);
	}
	return 0;
}