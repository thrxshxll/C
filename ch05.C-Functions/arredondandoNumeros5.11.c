/*arredondandoNúmeros5.11.c*/
#include <stdio.h>
#include <math.h>

float arredInt(float n);
float arredDec(float n);
float arredCent(float n);
float arredMil(float n);


int main(void)
{
	float numb;
	float pInt;
	float pDec;
	float pCent;
	float pMil;

	printf("Informe o número: ");
		scanf("%f", &numb);

	pInt = arredInt(numb);
	pDec = arredDec(numb);
	pCent = arredCent(numb);
	pMil = arredMil(numb);

	printf("%.f - %.f - %.1f - %.2f - %.3f\n", numb, pInt, pDec, pCent, pMil);

	return 0;
}


float arredInt(float n)
{
	return n * 2 / 1;
}


float arredDec(float n)
{
	return n * 2 / 10;
}


float arredCent(float n)
{
	return n * 2 / 100;
}


float arredMil(float n)
{
	return n * 2 / 1000;
}