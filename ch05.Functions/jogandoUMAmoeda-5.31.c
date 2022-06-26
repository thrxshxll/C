/*jogandoUMAmoeda-5.31*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int flip(void);

int main(void)
{
	int cont;
	int lanc;
	int cara=0, coroa=0;

	srand(time(NULL));

	for(cont=1; cont<=100; cont++)
	{
		lanc = flip();

		lanc == 0 ? cara++ : coroa++;
	}

	printf("Quant. coroa: %d\nQuant. cara: %d\n", coroa, cara);
}


int flip(void)
{
	int play;

	play = rand()%2;

	return play;
}