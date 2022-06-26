/*3.37_velocidade_de_computador*/
#include <stdio.h>

int main(void)
{
	int x=1;

	while(x<=300000000){

		x++;

		if(x%100000000 == 0){
			printf("%d\n", x);
		}
	}
}