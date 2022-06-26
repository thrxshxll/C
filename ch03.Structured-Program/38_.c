/*3.38_*/
#include <stdio.h>

int main(void)
{
	int x=1;

	while(x<=100){

		printf("*");

		if(x%10 == 0){
			printf("\n");
		}

		x++;
	}
}