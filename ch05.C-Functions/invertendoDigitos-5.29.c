/*invertendoDigitos-5.29*/
#include <stdio.h>

int inverterdig(int n);

int main(void)
{
	int number;

	printf("Type a number: ");
		scanf("%d", &number);

	inverterdig(number);

}


int inverterdig(int n)			//invete o número
{
	int quociente;
	int resto;

	printf("change number: ");

	while(n != -1)
	{
		quociente = n/10;
		resto = n%10;
		n = quociente;		

		printf("%d", resto);

		if(n <= 10)
		{
			printf("%d\n", quociente);
			n = -1;
		}

	}
}