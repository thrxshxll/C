/*calculando juros compostos com valores inteiros*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	int valor;
	int capital = 110050;
	int taxa = 5;
	int ano;
	int d1, r1;

	printf("%3s%20s\n", "Ano", "Valor na conta");


	for(ano = 1; ano <= 10; ano++){

		valor = (float)capital * pow(1 + (float)taxa/100, ano);

		d1 = valor / 100;
			r1 = valor % 100;

		printf("%3d%20d,%d\n", ano, d1,r1);
	}

	return 0;
}