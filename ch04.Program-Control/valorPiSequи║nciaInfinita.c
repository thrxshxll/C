/*valor de pi a partir de uma sequência*/
#include <stdio.h>
#include <math.h>

int main(void)
{

	int d1,d2,d3,d4,d5,d6;
	int r1,r2,r3,r4,r5,r6;
	int cont1=1, cont2=1, cont3=1, cont4=1;

	int pint;
	int sinal;
	int numerador = 4;
	int denominador = 1;
	float pi;

	for(sinal = 1; sinal <= 160000; sinal++){

		pi -= pow((-1), sinal) * numerador / denominador;
		denominador += 2;


		pint = pi * 1000000;

			d1 = pint / 1000000;  /*3*/
				r1 = pint % 1000000;

			d2 = r1 / 100000;  /*1*/
				r2 = r1 % 100000;

			d3 = r2 / 10000;  /*4*/
				r3 = r2 % 10000;

			d4 = r3 / 1000;  /*1*/
				r4 = r3 % 1000;

			d5 = r4 / 100;  /*5*/
				r5 = r4 % 100;

			d6 = r5 / 10;  /*9*/
				r6 = r5 %10;

			if(d1==3 && d2 ==1 && d3 ==4){
				while(cont1 <= 1){
				printf("pi: %d.%d%d\ttermo: %d\n", d1,d2,d3, sinal);
					cont1++;
				}
			}

			if(d1==3 && d2 ==1 && d3 ==4 && d4 ==1){
				while(cont2 <= 1){
					printf("pi: %d.%d%d%d\ttermo: %d\n", d1,d2,d3,d4, sinal);
					cont2++;
				}
			}

			if(d1==3 && d2 ==1 && d3 ==4 && d4 ==1 && d5 ==5){
				while(cont3 <= 1){
				printf("pi: %d.%d%d%d%d\ttermo: %d\n", d1,d2,d3,d4,d5, sinal);
					cont3++;
				}
			}

			if(d1==3 && d2 ==1 && d3 ==4 && d4 ==1 && d5 ==5 && d6 ==9){
				while(cont4 <= 1){
				printf("pi: %d.%d%d%d%d%d\ttermo: %d\n", d1,d2,d3,d4,d5,d6, sinal);
					cont4++;
				}
			}
		}


	return 0;
}