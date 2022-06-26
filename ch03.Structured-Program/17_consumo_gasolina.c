/*3.17_consumo_gasolina*/
/*	A funcão do códgio é calcular o consumo em Km/L de um automóvel
com base na última quantidade abastecida(L) e quanto essa quantidade permitiu
rodar(Km)*/
#include <stdio.h>

float km_l(float a, int b);

int main(void)
{
	float litros, com, comg=0;
	int km, x;



	printf("litros abastecido: ");
			scanf("%f", &litros);

	while(litros != 0){

		printf("kms dirigidos: ");
			scanf("%d", &km);

		com = km_l(litros, km);

		comg += com;

		printf("\tconsumo: %.2f km/l\n\n", km_l(litros, km));

		printf("litros abastecido: ");
			scanf("%f", &litros);
	}

	printf("\n\no consumo geral foi: %.2f km/l\n", comg);

}


float km_l(float a, int b)
{
	return b/a;
}