/*impressão de 1 a 20 através de while*/
#include <stdio.h>

int main(void)
{
	int x = 1;

	while(x <= 20){
		printf("%d", x);
		
		if(x % 5 == 0){
			printf("\n");
		}else
			printf("\t");

		x++;
		
	}
	return 0;
}
