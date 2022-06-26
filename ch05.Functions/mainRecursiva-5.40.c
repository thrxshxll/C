/*mainRecursiva-5.40*/
#include <stdio.h>

int mai(void);

int main(void)
{
	
	int n;

	for(n=1; n<=10; n++)
	printf("%d\n", mai());
}


int mai(void)
{
	int static cont=1;
	cont++;

	return cont;
}