/*torresDEhanói-5.36*/
#include <stdio.h>

void hanoi(int n, char a, char b, char c);


int main(void)
{
	int ndiscos;

	printf("Quantidade de discos: ");
		scanf("%d", &ndiscos);

	hanoi(ndiscos, 'A', 'B', 'C');
}


void hanoi(int n, char a, char b, char c)			//move Ndiscos da torre A para B usando C como auciliar
{
	if(n == 1)
		printf("Mova %d de %c para %c\n", n, a, b);		//move o último disco de A para B
	else
	{
		hanoi(n-1, a, c, b);
		printf("Mova %d de %c para %c\n", n, a, b);
		hanoi(n-1, c, b, a);
	}
}