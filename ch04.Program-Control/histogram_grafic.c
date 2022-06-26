/*histogram graphic*/
#include <stdio.h>

int main(void)
{
	int cont, number, end;
	int n1, n2, n3, n4, n5;

	printf("type it five number for graphic: ");
		scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

	printf("\n");

	for(cont = 1; cont <= n1; cont++)
		printf("*");

	printf("\n");

	for(cont = 1; cont <= n2; cont++)
		printf("*");

	printf("\n");

	for(cont = 1; cont <= n3; cont++)
		printf("*");

	printf("\n");

	for(cont = 1; cont <= n4; cont++)
		printf("*");

	printf("\n");

	for(cont = 1; cont <= n5; cont++)
		printf("*");

	printf("\n");

	return 0;
}