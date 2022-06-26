/*3.46_b)_constante_e*/
/*
	e = 1 + 1/1! + 1/2! + 1/3! + .....
*/

#include <stdio.h>

int main(void)
{
	int term, x;
	float e=1, fat=1;

	for(term=1; term<=5; term++){


//calcula fatorial
		fat=1;
		x = term;
		while(x>=1){
			
			fat *= x;
			x--;
		}

		e += 1/fat;
	}

	printf("e = %f\n", e);
}