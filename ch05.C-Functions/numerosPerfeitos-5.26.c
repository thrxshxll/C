/*numerosPerfeitos-5.26*/
#include <stdio.h>


int main(void)
{

	int somafats;
	int cont;
	int n;

	for(n=1; n<=10000; n++)
	{
		somafats=0;

		for(cont=1; cont<=n; cont++)
		{
			if(n%cont == 0 && n/cont != n)
				somafats += n/cont;
		}


		if(somafats == n)
		{
			printf("Perfect number: %d\nFactors: ", somafats);

			for(cont=n;cont>=1; cont--)
			{
				if(n%cont==0 && n/cont != n)
					printf("%d ", n/cont);
			}
			printf("\n");
		}

	}

}