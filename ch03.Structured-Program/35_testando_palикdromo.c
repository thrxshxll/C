/*3.35_testando_palídromo*/

/*
	Um palídromo é um número, ou frase textual, que pode ser lido da
	mesma forma da esquerda para direita.
*/
#include <stdio.h>
#define QNT 5	// 5 dígitos [0...4]

int main(void)
{
	int n, x=4;
	int dig[QNT];


	printf("número: ");
		scanf("%5d", &n);


//separa os alganismos do número informado
	while(n>0){	

		dig[x] = n%10;

		n /= 10;

		x--;
	}

	for(x=0; x<QNT; x++){			
		printf("%d ", dig[x]);
	}
	printf("\n");


	if(dig[0] == dig[4]){

		if(dig[1] == dig[3]){
			printf("it's palídromo.\n");
		}
	}else
	printf("it isn't palídromo.\n");
}