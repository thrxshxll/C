/*3.23_imprimindo_numeros_por_loop*/

/*sequência de números de 1 a 10, com espaço entre os números*/

#include <stdio.h>

int main(void)
{
	int cont=1;

	while(cont<=10){
		printf("%d   ", cont);
		cont++;
	}
	printf("\n");
}