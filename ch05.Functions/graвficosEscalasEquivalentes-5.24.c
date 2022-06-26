/*gráficosEscalasEquivalentes-5.24*/
#include <stdio.h>

int celsius(int temp);
int fahrenheit(int temp);

int main(void)
{
	int cont;
	int tmpc;
	int eqc;
	int eqf;


	printf("Type a temperature Celsius: ");
		scanf("%d", &tmpc);
	
		eqf = fahrenheit(tmpc);

		for(cont=1; cont<=tmpc; cont++)
		{
			printf("*");
		}
		printf(" %d°C\t", tmpc);


		for(cont=1; cont<=eqf; cont++)
		{
			printf("*");
		}
		printf(" %d°F\n", eqf);

}


int celsius(int temp)							//°F para °C
{
	return ((temp-32)/9)*5;
}


int fahrenheit(int temp)						//°C para °F
{
	return (temp*9/5)+32;
}