/*2.32_calculadora_indice_massa_corporal*/

// Create a BMI calculator application that reads the user’s weight in pounds
// and height in inches (or, if you prefer, the user’s weight in kilograms and
// height in meters), then calculates and displays the user’s body mass index.

#include <stdio.h>

float imc(float p, float al);

int main(void)
{
	float peso, altura;

	printf("weigth: ");
		scanf("%f", &peso);

	printf("heigth: ");
		scanf("%f", &altura);

	printf("IMC = %.2f\n", imc(peso, altura));
}


float imc(float p, float al)
{
	return p/(al*al);
}