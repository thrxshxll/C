/**/
#include <stdio.h>
#include <math.h>

int main(void)
{
	int cont, cap = 1000, temp;
	double taxa = 0.05, juros = 1;

	printf("%3s\t%8s\t%12s\n", "Ano", "taxa", "Valor na conta");

	for(temp = 1; temp <= 10; temp++){ /*Para dez anos*/
	
		juros = cap * pow(1.0 + taxa, temp);
		taxa += 0.01;
		
		printf("%3d\t%8.2f\t%12.2f\n", temp, taxa, juros);
	}

	return 0;
}