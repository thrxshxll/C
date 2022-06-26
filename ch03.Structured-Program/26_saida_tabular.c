/*3.26_saida_tabular*/
#include <stdio.h>

int main(void)
{
	int x=3;


//HEAD
		printf("A\tA+2\tA+4\tA+6\n");

	while(x<=15){

		printf("%d\t%d\t%d\t%d\n", x, x+2, x+4, x+6);

		x +=2;
	}
}