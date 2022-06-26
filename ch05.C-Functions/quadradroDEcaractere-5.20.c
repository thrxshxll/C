/*quadradroDEcaractere-5.20*/
#include <stdio.h>

void quad(int side, char carac);
char fillCHAR(void);


int main(void)
{
	int lado;
	char cx;

	cx = fillCHAR();		//chama a função que define o caractere  

	printf("Lado do quadrado: ");
		scanf("%d", &lado);

	quad(lado, cx);			//passa os argumentos para formar o quadrado

	return 0;
}


void quad(int side, char carac)		//imprime o quadrado de caractere
{
	int coluna;
	int linha;

	for(coluna=1; coluna<=side; coluna++)
	{
		for(linha=1; linha<=side; linha++)
		{
			printf("%c ", carac);
		}

		printf("\n");
	}
}


char fillCHAR(void)		//define o caractere
{
	char x;

	printf("Escolha o caractere:\n");
	printf("(@) - (#) - (*) - (+)\n");
		scanf("%c", &x);

	return x;
}