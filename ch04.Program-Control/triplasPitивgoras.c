/*Triplas de Pitágoras*/
#include <stdio.h>

int main(void)
{
	int cont = 0;
	int c1 = 1, c2 = 1, h;

	for(h = 1; h <= 500; h++){

		for(c1 = 1; c1 <= 500; c1++){

			for(c2 = 1; c2 <= 500; c2++){
				
				if(h*h == c1*c1 + c2*c2){
					if(c1>c2)
						printf("%d² = %d² + %d²\n", h, c1, c2);
						cont++;
				}

			}
		}
	}

	printf("Há %d trípulas de Pitágoras não superiores a 500 valores.\n", cont);


}