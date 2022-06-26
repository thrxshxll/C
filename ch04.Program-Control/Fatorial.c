/*Fatorial*/
#include <stdio.h>

int main(void)
{
	int n, cont = 5, fat = 1;

	printf("Queres calcular qual fatorial?: ");
		scanf("%d", &n);

		cont = n;
	do{
		fat *= cont;
		cont--;
	}while(cont >= 1);

	printf("%d! = %d\n", n, fat);
}