/*2.23_maiores_e_menores_inteiros*/

// (Largest and Smallest Integers) Write a program that reads in three integers and then
// determines and prints the largest and the smallest integers in the group. Use only
// the programming techniques you have learned in this chapter.

#include <stdio.h>

void comparation(int a[]);
int maior, menor;

int main(void)
{
	int n[3];
	int x;

	printf("informe three numbers:\n");

	for(x=0; x<3; x++){
		scanf("%d", &n[x]);
	}

	comparation(n);

	printf("maior: %d\nmenor: %d\n", maior, menor);
}


void comparation(int a[])
{
	int y;

	maior=a[0];
	menor=a[0];

	for(y=0; y<3; y++){

		if(a[y] > maior){	//maior valor
			maior = a[y];
		}

		if(a[y] < menor){ //menor valor
			menor = a[y];
		}
	}
}