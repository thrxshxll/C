/*separandoDígitos-5.22(C)*/
#include <stdio.h>


int main(void)
{
	int n;
	int dig;
	int mod;
	int cont;

	printf("Type a number: ");
		scanf("%d", &n);

	while(mod!=0)
	{
		if(n>10000)
		{
			dig = n/10000;
				mod = n%10000;
		}

		if(n>=1000 && n<10000)
		{
			dig = n/1000;
				mod = n%1000;
		}

		if(n>=100 && n<1000)
		{
			dig = n/100;
				mod = n%100;
		}

		if(n>=10 && n<100)
		{
			dig = n/10;
				mod = n%10;
		}

		if(n>=1 && n<10)
		{
			dig = n/1;
				mod = 0;		//finalizador
		}

		n = mod;

		printf("%d ", dig);
	}

	printf("\n");
}