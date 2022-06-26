/*desenhandoFormasCOMcaracteres-5.21*/
#include <stdio.h>

char caracter(void);
void quadrado(int side, char ctr);
void retangulo(int comp, int larg, char ctr);
void trianguloRetang(int side, char ctr);
void trianguloEqui(int side, char crt);

int main(void)
{
	int comprimento, largura;
	int lado;
	int answer;
	char cx;

	cx = caracter();			

	printf("Escolha a forma geométrica:\n");
	printf("1 - Quadrado\n2 - Retângulo\n3 - Triângulo retângulo\n4 - Triângulo equilátero\n: ");
		scanf("%d", &answer);


	if(answer==1)
	{
		printf("	QUADRADO\n");
		printf("Lado: ");
			scanf("%d", &lado);

		quadrado(lado, cx);
	}

	if(answer==2)
	{
		printf("	RETÂNGULO\n");
		printf("Comprimento: ");
			scanf("%d", &comprimento);
		printf("Largura: ");
			scanf("%d", &largura);

		retangulo(comprimento, largura, cx);
	}

	if(answer==3)
	{
		printf("	TRIÂNGULO RETÂNGULO\n");
		printf("Lado: ");
			scanf("%d", &lado);

		trianguloRetang(lado, cx);
	}

	if(answer==4)
	{
		printf("	TRIÂNGULO EQUILÁTERO\n");
		printf("Lado: ");
			scanf("%d", &lado);

		trianguloEqui(lado, cx);
	}

}


char caracter(void)			//define caractere
{
	char cr;

	printf("Escolha o caractere:\n");
	printf("@ ; # ; $ ; +\n: ");
		scanf("%c", &cr);

	return cr;
}

void quadrado(int side, char ctr)			//quadrado
{
	int linha;
	int coluna;

	for(linha=1; linha<=side; linha++)
	{
		for(coluna=1; coluna<=side; coluna++)
		{
			printf("%c ", ctr);
		}

		printf("\n");
	}
}


void retangulo(int comp, int larg, char ctr)			//retângulo
{
	int c;
	int l;

	for(l=1; l<=larg; l++)
	{
		for(c=1; c<=comp; c++)
		{
			printf("%c ", ctr);
		}

		printf("\n");
	}
}


void trianguloRetang(int side, char ctr)			//triângulo retângulo
{
	int linha;
	int coluna;
	int space;
	int conts =1;
	int contc =1;

	for(linha=1; linha<=side; linha++)
	{
		for(space=(side-1); space>=conts; space--) 
			{
				printf(" ");
			}

		for(coluna=1; coluna<=contc; coluna++)
		{
			printf("%c", ctr);
		}

		printf("\n");
		conts += 1;
		contc += 1;
	}
}


void trianguloEqui(int side, char ctr)
{
	int linha, coluna;
	int space;
	int conts =1;
	int contc =1;

	for(linha=1; linha<=side; linha++)
	{
		for(space=(side-1); space>=conts; space--)
		{
			printf(" ");
		}

		for(coluna=1; coluna<=contc; coluna++)
		{
			printf("%c ", ctr);
		}

		
		printf("\n");
		conts++;
		contc++;
	}
}