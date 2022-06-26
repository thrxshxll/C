/*testandoFuncoesMATH-5.45*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	float n1, n2, n3;
	char r;

	printf("--INFORM WHAT DO YOU WISH DO--\n");
	printf("1 - Raiz quadrada\n");
	printf("2 - Elevar (X) à potencia (Y)\n");
	printf("3 - Função exponencial\n");
	printf("4 - Logaritmo natural de (X) na base 'e'\n");	
	printf("5 - Arredondar para um valor MENOR que (X)\n");
	printf("6 - Arredondar para um valor MAIOR que (X)\n");
	printf("7 - Resto da divisão (X % Y) com valores FLOAT\n\n:");
		scanf("%c", &r);
	printf("---------------------------------\n");

	if(r == '1')
	{
		printf("	(X)¹/²\n");
		printf("Type (X)\n:");
			scanf("%f", &n1);

		printf("(X)¹/² = %.2f\n", sqrt(n1));
	}

	if(r == '2')
	{
		printf("	(X)^y\n");
		printf("Type (X): ");
			scanf("%f", &n1);
		printf("Type (Y): ");
			scanf("%f", &n2);

		printf("(X)^y = %.2f\n", pow(n1, n2));
		clear();
	}

	if(r == '3')
	{
		printf("	e^(X)\n");
		printf("Type (X):");
			scanf("%f", &n1);
		printf("e^(x) = %f\n", exp(n1));
	}
}
