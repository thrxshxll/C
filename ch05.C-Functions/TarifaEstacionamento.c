/*exer 5.9 - Tarifa de estacionamento*/
#include <stdio.h>
#include <math.h>

float calcularTaxas(float x);

int main(void)
{
	float Thora;
	float Ttaxa;
	int carro1, carro2, carro3;
	float hora1, hora2, hora3;
	float taxa1, taxa2, taxa3;

		printf("Informe um número para o carro: ");
			scanf("%d", &carro1);

		printf("Hora de permanência: ");
			scanf("%f", &hora1);
			Thora+= hora1;

		taxa1 = calcularTaxas(hora1);
			Ttaxa+= taxa1;


		printf("Informe um número para o carro: ");
			scanf("%d", &carro2);

		printf("Hora de permanência: ");
			scanf("%f", &hora2);
			Thora+= hora2;

		taxa2 = calcularTaxas(hora2);
			Ttaxa+= taxa2;


		printf("Informe um número para o carro: ");
			scanf("%d", &carro3);

		printf("Hora de permanência: ");
			scanf("%f", &hora3);
			Thora+= hora3;

		taxa3 = calcularTaxas(hora3);
			Ttaxa+= taxa3;

		

		printf("\n\n%6s%8s%8s\n", "Carro", "Horas", "Taxa");

		printf("%6d%8.2f%8.2f\n", carro1, hora1, taxa1);
		printf("%6d%8.2f%8.2f\n", carro2, hora2, taxa2);
		printf("%6d%8.2f%8.2f\n", carro3, hora3, taxa3);
		printf("\n%6s%8.2f%8.2f\n", "TOTAL", Thora, Ttaxa);


	return 0;
}



float calcularTaxas(float x)
{
	int inte;
	if(x <= 3.0){  /*menor ou três horas*/
		return 2.0;
	}


	if(x > 3.0 && x < 24.0){	/*maior que três e menor que vinte e quatros horas*/

		if(fmod(x, 3.0) == 0.0){				/*de três em três horas Taxa=(n * 2,00) */
			return x/3.0 * 2;

		}else
			inte = x;
		return (inte/3 * 2) + (ceil(fmod(x, 3.0)) * 0.50);	/*quantidades de três horas mais adicionais*/
	}


	if(x == 24)						/*valor da taxa para 24 horas*/
	{
		return 10.00;
	}
}
