/*máximoDivisorComumRECURSIVO-5.39*/
#include <stdio.h>

int mdc(int x, int y);

int main(void)
{
	int n1, n2;

	printf("Type two numbers: ");
		scanf("%d%d", &n1, &n2);

	if(n1>n2)
	{
		printf("MDC entre %d e %d é: %d\n", n1, n2, mdc(n1, n2));
	
	}else 
		printf("MDC entre %d e %d é: %d\n", n1, n2, mdc(n2, n1));
}


int mdc(int x, int y)
{

	if(y == 0)
	{
		return x;

	}else
		return mdc(y, x % y);		/* o segundo parâmetro(Y) vai receber o resto
															da divisão até ser zero(0)
}