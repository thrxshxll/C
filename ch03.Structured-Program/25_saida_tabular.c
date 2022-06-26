/*3.25_saida_tabular*/

#include <stdio.h>

int main(void)
{
	int n=1, x=1;

	//head
	printf("n\t10*n\t100*n\t1000*n\n");

	while(x<=10){

		printf("%d\t%d\t%d\t%d\n", x, 10*x, 100*x, 1000*x);

		x++;
	}
}