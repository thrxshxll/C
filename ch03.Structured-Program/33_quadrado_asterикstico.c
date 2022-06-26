/*3.33_quadrado_asterístico*/

/*
	
*/
#include <stdio.h>

int main(void)
{
	int i=0, j;


	while(i<=4){

		j=0;
		while(j<=4){

			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
}