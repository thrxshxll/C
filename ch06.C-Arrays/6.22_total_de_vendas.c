/*6.22_total_de_vendas*/

/*
	A empresa possui 4 funcionários e 5 produtos. A empresa deseja manitorar as vendas
	feitas por cada vendedor e o total vendido por cada vendedor.
*/
#include <stdio.h>
#include <stdlib.h>

void tabela(float sales[][5]);

int main(void)
{
	
	float vendas[6][5] = {0};  // linhas = produtos | colunas = vendedor

	int c_prod;								//contador produto
	int n_vendedor, n_produto; //número do vendedor , número do produto
	float total_mes_produto; //total de vendas produto por vendedor




	for(n_vendedor=1; n_vendedor<5; n_vendedor++){	//[][5]

		system("clear");

		printf("\n%s%d\n", "vendedor: ", n_vendedor);

		for(c_prod=1; c_prod<6; c_prod++){	//[6][]

			printf("\n%s%d\n", "Produto: ", c_prod);
				//scanf("%d", &n_produto);

			printf("%s", "Total vendido no mês R$: ");
				scanf("%f", &total_mes_produto);

			vendas[c_prod][n_vendedor] = total_mes_produto;
		}
	}

	tabela(vendas);
} // END main()

void tabela(float sales[][5])
{
	int i, j;
	float total_prod_vendido;
	float total_p_vendedor;

	system("clear");

	printf("            ------------VENDEDOR-------------     ---TOTAL p/ PROD.\n\n");
	printf("            [1]       [2]       [3]       [4]\n\n");


	for(i=1; i<6; i++){
		printf("PROD.[%d]  ", i);

		total_prod_vendido=0;
		for(j=1; j<5; j++){
			printf("%-10.2f", sales[i][j]);

			//venda total do produto por todos os vendedores
			total_prod_vendido += sales[i][j];

			if(j==4){
				printf("| R$%.2f", total_prod_vendido);
			}
		}
		printf("\n\n");
	}

	printf("            -----------------------------------\n");
	printf("p/ VEND.  ");	//cabeçalho inferior
	for(j=1; j<5; j++){

		total_p_vendedor=0;
		for(i=1; i<6; i++){

			//venda total de todos os produto que o vendedor vendeu
			total_p_vendedor += sales[i][j];
		}
		printf("%-10.2f", total_p_vendedor);
	}
	printf("\n");
}