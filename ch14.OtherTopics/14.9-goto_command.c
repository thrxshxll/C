#include <stdio.h>

int main(void){
	int e=1, l=1;



	edge:
		e++;
		goto poit;

	poit:
		printf("*");
		if(e<=5)
			goto edge;


	end:
	return 0x00;
}
