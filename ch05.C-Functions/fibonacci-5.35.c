/*fibonacci-5.35*/
#include <stdio.h>

int fibonacci(int nv);

int main(void)
{
	int cont;

	printf("type enesimo termo Fibonacci: ");
		scanf("%d", &cont);

	fibonacci(cont);
}


int fibonacci(int nv)
{
	int contf;
	double termo=0;
	double after=1;
	double sum;


	for(contf=1; contf<=nv; contf++)
	{
		printf("%f ", termo);

		sum = termo + after;
		termo = after;
		after = sum;

		if(termo < 0)
			contf = nv +1;
		
	}
	printf("...");
}