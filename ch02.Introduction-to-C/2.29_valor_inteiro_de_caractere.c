/*2.29_valor_inteiro_de_caractere*/

// Write a C program that prints the integer equivalents of some uppercase
// letters, lowercase letters, digits and special symbols.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char i;

	while(i != '!'){
			scanf("\n%c", &i);


		printf("char: %c = %d\n", i, i);
	}
}