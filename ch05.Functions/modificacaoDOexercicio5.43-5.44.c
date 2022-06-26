/*modificacaoDOexercicio5.43--5.44*/
#include <stdio.h>

int uau(int a, int b);

int main(void)
{
	int x, y;

	printf("Type two numbers: ");
		scanf("%d%d", &x, &y);

	printf("Resultado: %d\n", uau(x, y));
}


int uau(int a, int b)
{
	if(b>0)
	{
		return b == 1 ? a : a + uau(a, b -1);
	}

	if(b<0)
	{
		return b == -1 ? a : a + uau(a, b +1);
	}
}