/*maximoDivisorComum*/
#include <stdio.h>

int mdc(int n1, int n2);

int main(void)
{
	int number1, number2;
	int mDC;

	printf("Type two numbers\n:");
		scanf("%d%d", &number1, &number2);

	mDC = mdc(number1, number2);

	mDC != 1 ? printf("MDC: %d\n", mDC) : printf("%s\n", "Não há MDC entre esses números.");
}


int mdc(int n1, int n2)
{
	int cont;
	int contF;
	int mDc;

	if(n1 < n2){
		contF = n1;
	}else
		contF = n2;

	for(cont=1; cont<=contF; cont++)
	{
		if(n1%cont == 0)
		{
			if(n2%cont == 0)
				mDc = cont;
		}
	}

	return mDc;
}