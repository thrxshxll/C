/*acharOmínimo-5.25*/
#include <stdio.h>

double minimo(void);

int main(void)
{	
	printf("menor = %.2f\n", minimo());
}


double minimo(void)								//determina o menor;
{
	int cont;
	float number;
	float menor; 


	printf("Type three numbers\n:");
		scanf("%f", &number);
			menor = number;
	
	for(cont=1; cont<=2; cont++)
	{
		printf(":");
		scanf("%f", &number);

		if(number<menor)
		{
			menor=number;

		}
	}

return menor;
}