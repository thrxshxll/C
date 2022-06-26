/*separandoDígitos-5.22 A e B*/
#include <stdio.h>

int calInt(int n1, int n2);
int calMod(int n1, int n2);

int main(void)
{
	int number1, number2;

	printf("type two numbers for division (a/b): ");
		scanf("%d%d", &number1, &number2);

	printf("%d\n", calInt(number1, number2));

	printf("%d\n", calMod(number1, number2));
}


int calInt(int n1, int n2)			//question A
{
	return n1/n2;
}


int calMod(int n1, int n2)			//question B
{
	return n1%n2;
}