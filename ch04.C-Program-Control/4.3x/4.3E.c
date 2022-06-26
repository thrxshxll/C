/*impressão de 1 a 20 através de FOR*/
#include <stdio.h>

int main(void)
{
	int x;

	for(x = 1; x <= 20; x++) {
		printf("%d", x);

		if(x % 5 == 0){
			printf("\n");
		}else
			printf("\t");
		
	}
	return 0;
}