/*3.39_contando_7s*/
/*
	A partir da entrada de um inteiro, o programa verifica quantos 
	algarismo 7 há.
*/

#include <stdio.h>

int main(void)
{
	int number, sevens=0;

	printf("type a number: ");
		scanf("%d", &number);

	while(number>0){

		if(number%10 == 7){
			sevens++;
		}

		number /= 10;
	}

	printf("há %d 7s.\n", sevens);
}