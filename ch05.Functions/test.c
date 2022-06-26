/*test.c*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int main(void)
{
	int a[SIZE] = {1, 2, 3, 8};
	int n[SIZE] = {0}; 


	printf("Array n[] antes de incrementar\n");
	printf("n[%d] = %d\n\n", 3, n[3]);
	printf("Incremento!\n");

	++n[a[2]];

	printf("n[%d] = %d\n\n", 3, n[3]);
}