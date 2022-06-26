/*Pagamento semanal de uma empresa para quatro
	tipo de empregados*/
#include <stdio.h>

int main(void)
{
	int opcao, horas, quant;
	float salario, salSem, vbrutas;



	for(opcao = 1; opcao != 0;){

		printf("Escolha a opção do empregado para pagamento:\n");
		printf("0 - para finalizar o programa\n");
		printf("1 - Gerentes\n");
		printf("2 - Trabalhadores por hora\n");
		printf("3 - Comissionados\n");
		printf("4 - Trabalhadores por unidades\n\nOpção: ");
			scanf("%d", &opcao);

		switch(opcao){

			case 0:
			break;

			case 1:
				printf("Salário semanal: ");
					scanf("%f", &salario);
			break;

			case 2:
				printf("Salário: ");
					scanf("%f", &salario);
				printf("Horas de trabalho: ");
					scanf("%d", &horas);

					if(horas > 40){
						salSem = salario * 1.5;
						printf("Salário semanal: %.2f\n", salSem);
					}else {
						salSem = salario * 1;
						printf("Salário semanal: %.2f\n", salSem);
					}
			break;

			case 3:
				printf("Vendas brutas semanais: ");
					scanf("%f", &vbrutas);

					salSem = (0.57 * vbrutas) + 250.00;
					printf("Salário semanal: %.2f\n\n", salSem);
			break;

			case 4:
				printf("Quantidades produzidas: ");
					scanf("%d", &quant);
				printf("Valor para cada item produzido: ");
					scanf("%f", &salario);

				salSem = quant * salario;
				printf("Salário semanal: %.2f\n\n", salSem);
			break;

			default:
				printf("Opção incorreta. Por favor, digite uma das opções abaixo:\n");
				printf("0 - para finalizar o programa\n");
				printf("1 - Gerentes\n");
				printf("2 - Trabalhadores por hora\n");
				printf("3 - Comissionados\n");
				printf("4 - Trabalhadores por unidades\n\nOpção: ");
					scanf("%d", &opcao);
			break;

			
		}
	}
}