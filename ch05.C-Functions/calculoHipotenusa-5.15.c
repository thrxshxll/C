/*cálculoHipotenusa-5.15*/
#include <stdio.h>
#include <math.h>

double hipotenusa(double co, double ca);

int main(void)
{
	double a, b;

	printf("Informe os lados do triângulo retângulo.\n");
	printf("Lado (A): ");
		scanf("%lf", &a);

	printf("Lado (B): ");
		scanf("%lf", &b);

	printf("Hipotenusa do Triângulo: %.2f\n", hipotenusa(a, b));

	return 0;
}

double hipotenusa(double co, double ca)
{
	 return sqrt((co*co + ca*ca));
}