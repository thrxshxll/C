/*impressão de sequência com a estrutura FOR*/
#include <stdio.h>

int main(void)
{
	int cont;

	for(cont = 19; cont <= 51; cont += 8){
		if(cont == 51){
			printf("%d\n", cont);
		}else
			printf("%d, ", cont);
	}
	return 0;
}