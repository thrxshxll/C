/*arrendondandoNúmeros5.10.c*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	float n;
	float y;
	int cont = 1;

	while(cont != EOF)
	{
		printf("Informe o número: ");
			scanf("%f", &n);

			y = floor(n + .5);

		printf("%.2f - %.2f\n", n, y);

		cont++;
	}

	return 0;
}