/*parOUimpar-5.18*/
#include <stdio.h>

int even(int ip);

int main(void)
{
	int n;
	int cont;

	do
	{
		printf("\nEnter one number: ");
			scanf("%d", &n);

		printf("%s\n", even(n) == 1 ? "Impar" : "Par");
	}while(n!=0);

	return 0;
}

int even(int number)
{
	return number%2;
}