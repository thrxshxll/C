/*3.19_comissao_de_vendas*/
#include <stdio.h>

int main(void)
{
	float tvenda, recebe;


	printf("Vendido: R$");
		scanf("%f", &tvenda);

	while(tvenda != 0){

		//recebe = tvenda + (tvenda*0,09) + 200;

		printf("Pagamento R$%.2f\n", (tvenda*0.09) + 200);

		printf("\nVendido: R$");
			scanf("%f", &tvenda);
	}
}