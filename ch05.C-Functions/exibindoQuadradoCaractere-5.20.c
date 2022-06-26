/*exibindoQuadradoCaractere-5.20*/
#include <stdio.h>

void quad(int side);

int main(void)
{
	int lado;

	printf("Lado do quadrado: ");
		scanf("%d", &lado);

	quad(lado);

	return 0;
}


void quad(int side)
{
	int linha;
	int coluna;

	for(coluna=1; coluna<=side; coluna++)
	{

		for(linha=1; linha<=side; linha++)
		{
			printf("* ");
		}

		printf("\n");
	}
}