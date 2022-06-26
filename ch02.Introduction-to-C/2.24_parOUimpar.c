/*2.24_parOUimpar*/

// (Odd or Even) Write a program that reads an integer and determines and prints whether
// it’s odd or even. [Hint: Use the remainder operator. An even number is a multiple of two. Any mul-
// tiple of two leaves a remainder of zero when divided by 2.]

#include <stdio.h>

int main(void)
{
	int n;

	printf("type one value: ");
		scanf("%d", &n);

	if(n%2 == 0){
		printf("par\n");
	}else
		printf("ímpar\n");
}