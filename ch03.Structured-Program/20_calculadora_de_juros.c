/*3.20_calculadora_de_juros*/
#include <stdio.h>

int main(void)
{
	float principal, taxa;
	int dias;

	printf("type "0" para finalizar.\n");

	printf("Valor do empréstimo: ");
		scanf("%f", &principal);

	while(principal != 0){

		printf("Taxa: ");
			scanf("%f", &taxa);

		printf("Dias: ");
			scanf("%d", &dias);

		printf("Juros do impréstimo: R$%.2f\n", (principal*taxa*dias)/365);

		printf("\nValor do empréstimo: ");
			scanf("%f", &principal);
	}	
}