/*3.27_ache_os_dois_maiores_números*/

/*
	A partir da entrada de SIZE números, é encotrado e mostrado os dois
	maiores números da lista.
*/

#include <stdio.h>
#define SIZE 6

void biggest_numbers(int num[]);

int main(void)
{
	int numbers[SIZE] = {0};
	int x=0;

	printf("type ten numbers.\n");

	while(x < SIZE){
		printf(": ");
		scanf("%d", &numbers[x]);

		x++;
	}

	biggest_numbers(numbers);
}


void biggest_numbers(int num[])
{
	
	int maior_1=0, maior_2=0;
	int cont, aux;

	for(cont=0; cont<SIZE; cont++){

		if(num[cont] >maior_1){

			aux = maior_1;
			maior_1 = num[cont];
			maior_2 = aux;
		}
	}

	printf("1º maior: %d\n2º maior: %d\n", maior_1, maior_2);
}