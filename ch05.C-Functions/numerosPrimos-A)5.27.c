/*numerosPrimos-5.27*/
#include <stdio.h>

int primo(int n);

int main(void)
{
	int number;

	printf("type a number\n: ");
		scanf("%d", &number);

	primo(number);
}


int primo(int n)
{
	int cont;
	int ndiv=0;

	for(cont=1; cont<=n; cont++)
		{
			if(n%cont==0)
				ndiv++;
		}

	if(ndiv == 2)
		printf("it's primo\n");
}