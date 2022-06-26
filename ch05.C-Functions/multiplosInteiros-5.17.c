/*multiplosInteiros-5.17*/
#include <stdio.h>

int multiple(int a, int b);

int main(void)
{
	int n1, n2;

	printf("Enter two entire.\n");
	printf("first: ");
		scanf("%d", &n1);

	printf("second: ");
		scanf("%d", &n2);

	multiple(n1, n2) == 0 ? printf("It's multiple\n") : printf("Not multiple\n");

	return 0;
}

int multiple(int a, int b)
{

	return b%a;
}