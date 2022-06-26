/*3.46_fatorial*/
/*
	A partir de um número não negativo, o programa calcula e imprime o
	resultado do seu fatorial.
*/
#include <stdio.h>

int main(void)
{
	int n, fat=1;

	printf("type a number: ");
		scanf("%d", &n);


	printf("%d! =", n);

	while(n>=1){

		fat *= n;

		printf(" %d .", n);

		n--;
	}
	printf("%c", 8);	//deleta caractere anterior
	printf("= %d\n", fat);
}