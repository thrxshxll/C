/*2.31_tabela_quadrados_cubos*/

// (Table of Squares and Cubes) Using only the techniques you learned in this
// chapter, write a program that calculates the squares and cubes of the numbers
// from 0 to 10

#include <stdio.h>
#include <math.h>

void quad_cube(int a[], int b[]);

int main(void)
{
	int q[11], c[11];
	int x;

//inicializa os arrays
	for(x=0; x<11; x++){
		q[x] = 0;
		c[x] = 0;
	}

//head
	printf("%-12s%-12s%-12s\n", "número", "quadrado", "cubo");

//chamada de função
	quad_cube(q, c);

	for(x=0; x<11; x++){

	printf("%-12d%-12d%-12d\n", x, q[x], c[x]);
	}
}


//calcula quadrado e cubo de um número
void quad_cube(int a[], int b[])
{
	int x;

	for(x=0; x<11; x++){
		a[x] = pow(x, 2);	//quadrado

		b[x] = pow(x, 3); //cubo
	}
}