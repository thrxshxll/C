/*3.22_pre_incrementand__pos_incrimentando*/

/* (++a) -> pré-incrementa
	 (a++) -> pós-incrementa

	 
*/

#include <stdio.h>

int main(void)
{
	int a=3, b, c;


	printf("--a\n");
	printf("a = 3\n");
	printf("a: %d\n", a);
	printf("a: %d\n", --a);
	printf("a: %d\n\n", a);

	printf("a: %d\n\n", a=4);

	printf("a--\n");
	printf("a = 4\n");
	printf("a: %d\n", a);
	printf("a: %d\n", a--);
	printf("a: %d\n", a);
}