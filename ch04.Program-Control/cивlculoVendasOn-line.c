/*Cálculo de vendas on-line*/
#include <stdio.h>

int main(void)
{
	int cont = 1, number, quant;
	float v1 = 2.98, v2 = 4.50, v3 = 9.98, v4 = 4.49, v5 = 6.87, total =0;

	while(cont <= 5){

		printf("\nNumber of product and value: ");
			scanf("%d%d", &number, &quant);

		switch(number){
			case 1:
				v1 *= quant;
				cont++;
				break;

			case 2:
				v2 *= quant;
				cont++;
				break;

			case 3:
				v3 *= quant;
				cont++;
				break;

			case 4:
				v4 *= quant;
				cont++;
				break;

			case 5:
				v5 *= quant;
				cont++;
				break;

			default:
				printf("\nValor incorreto! Por favor, insira um valor de 1-5.\n");
				break;

		}
	}

	total = v1+v2+v3+v4+v5;

	printf("Valor total de revendas dos produtos: %.2f\n", total);

	return 0;
}