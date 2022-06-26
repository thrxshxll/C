#include <stdio.h>
#include <math.h>


int main(void)
{
	int n, cont;
	double total = 0.5;

	printf("Queres adicionar quantas vezes?: ");
		scanf("%d", &n);

	for(cont = 1; n >= cont; n--){
		total *=2;
	}

	printf("Total = %.f\n", total);

	return 0;
}