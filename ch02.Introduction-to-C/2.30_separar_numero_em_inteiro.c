/*2.30_separar_numero_em_inteiro*/

// (Separating Digits in an Integer) Write a program that inputs one five-digit
// number, separates the number into its individual digits and prints the digits
// separated from one another by threespaces each. [Hint: Use combinations of
// integer division and the remainder operation.]

#include <stdio.h>

int main(void)
{
	int n;
	int d1,d2,d3,d4,d5;
	int r1,r2,r3,r4,r5;

	printf("Type a five digits number: ");
	scanf("%d", &n);

	d1 = n/10000;
		r1 = n%10000;

	d2 = r1/1000;
		r2 = r1%1000;

	d3 = r2/100;
		r3 = r2%100;

	d4 = r3/10;
		r4 = r3%10;

	d5 = r4;

	printf("%d %d %d %d %d\n", d1,d2,d3,d4,d5);
}