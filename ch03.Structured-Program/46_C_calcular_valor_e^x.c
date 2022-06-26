/*3.46_C_calcular_valor_e^x*/
/*
	e^x = 1 + x/1! + x²/2! + x³/3! + ....
*/
#include <stdio.h>
#include <math.h>	 //compile adicionando -lm nos parâmetros

int main(void)
{
	int term, cont;
	int x, n, x_elevado;
	float fat=1, e=1;


	printf("e^x = \n");
	printf("x: ");
		scanf("%d", &x);


	for(term=1; term<=x; term++){

	//elevação de x (X^n)
		n=term;
		x_elevado = pow(x, n);


	//fatorial
		fat=1;
		cont = term;
		while(cont>=1){

			fat*=cont;
			cont--;
		}


		e += x_elevado/fat;
	}// enf for();

	printf("\ne^%d = %f\n", x, e);
}