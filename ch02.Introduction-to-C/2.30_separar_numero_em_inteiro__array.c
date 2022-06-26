/*2.30_separar_numero_em_inteiro___array.c*/
#include <stdio.h>

int main(void)
{
	int d[3] = {0,0,0};

	int cont=0, n;

	printf("type a number: ");
		scanf("%d", &n);

	while(n>0){
		
		d[cont] = n%10;
	
		n = n/10;

		cont++;
	}

	for(cont=2; cont>-1; cont--){
		printf("%d ", d[cont]);
	}
	printf("\n");
}