/*3.21_calculadora_salário*/
/*A partir da quantidade de horas trabalhadas e o valor de cada hora 
para funcionários diferentes, determina o salário mensal para cada 
funcionário. Se horas trabalhadas for maior que 40 horas, é incrementado
ao salário metade do valor pago por hora.

/*
INPUT: horas, valor pago em hora para cada funcionário*/


#include <stdio.h>

int main(void)
{
	///int hora;
	float salario_hora, hora;

		printf("type \"0\" para finalizar.\n");

		printf("Horas trabalhadas: ");
			scanf("%f", &hora);

		while(hora!=0){

			printf("Valor da hora: ");
				scanf("%f", &salario_hora);

			if(hora > 40){
				printf("Salário: R$%.2f\n", hora * salario_hora + salario_hora/2);
			
			}else
				printf("Salário: R$%.2f\n", hora * salario_hora);


			printf("\nHoras trabalhadas: ");
				scanf("%f", &hora);
		}
}