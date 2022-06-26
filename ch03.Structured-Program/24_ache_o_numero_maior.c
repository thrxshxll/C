/*3.24_ache_o_numero_maior*/

/*
	A partir de QUANT quantidades de números informados, determina qual o 
	maior número.
*/

#include <stdio.h>
#define QUANT 5


int main(void)
{
	int n[QUANT] = {0}, x=0, maior;

	while(x < QUANT){
		printf("type numbers: ");
			scanf("%d", &n[x]);

		x++;
	}


		for(x=0; x<5; x++){
		
			if(maior < n[x]){
				maior = n[x];
			}
		}

		printf("Maior: %d\n", maior);
}