/*2.26_multiplos*/

// (Multiples) Write a program that reads in two integers and determines and prints whether
// the first is a multiple of the second. [Hint: Use the remainder operator.]

#include <stdio.h>

int main(void)
{
	int x, y;

	printf("type two numbers:\n");
		scanf("%d%d", &x, &y);

	if(x>y){

		if(x%y == 0){
			printf("Múltiplos\n");

		}else
		printf("Não são múltiplos\n");
	
	}else{
		if(y%x == 0){
			printf("Múltiplos\n");

		}else
		printf("Não são múltiplos\n");
	}
}