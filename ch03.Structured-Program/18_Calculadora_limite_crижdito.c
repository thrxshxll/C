/*3.18_Calculadora_limite_crédito*/

#include <stdio.h>


int main(void)
{
	int nconta;
	float saldo_beginning, total_encardos;
	float cred_used_month, limite_credito, new_saldo;


		printf("Nº da conta: ");
			scanf("%d", &nconta);


	while(nconta!=0){

		printf("Saldo início mês: ");
			scanf("%f", &saldo_beginning);

		printf("Total de encardos: ");
			scanf("%f", &total_encardos);

		printf("Créditos utilizados no mẽs: ");
			scanf("%f", &cred_used_month);

		printf("Limite crédito atual: ");
			scanf("%f", &limite_credito);


		new_saldo = saldo_beginning + total_encardos - cred_used_month;


		if(new_saldo > limite_credito){
			printf("\n\nNº conta: %d\n", nconta);
			printf("Limite de crédito: %.2f\n", limite_credito);
			printf("Saldo: %.2f\n", new_saldo);
			printf("Limite de crédito ultrapassado.\n");
		}

		printf("\nNº da conta: ");
			scanf("%d", &nconta);
	}

}