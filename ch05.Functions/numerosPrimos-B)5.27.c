/*numerosPrimos(B)-5.27*/
#include <stdio.h>


int main(void)
{
	int cont;
	int ndiv;
	int n;
	int coluna;
	int broken;


		for(n=1; n<=100; n++)
		{
			ndiv=0;

			for(cont=1; cont<=n; cont++)
				{
					if(n%cont==0)
						ndiv++;								//número de divisores
				}


			if(ndiv == 2)								//se for 2 o número de divisores, o números é primo
			{
				printf("%d\t", n);
				broken++;
			}


			if(broken==6)
			{
				printf("\n");
				broken=0;
			}
		}
}