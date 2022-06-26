/*Equivalência de números decimais em romanos*/
#include <stdio.h>

int main(void)
{
	int cont;
	int numd;

	int d1,d2,d3,d4,d5;
	int r1,r2,r3,r4,r5;

	for(numd=1; numd<=100; numd++){
		printf("%d\t", numd);

		d1 = numd/100;
			r1 = numd%100;

		d2 = r1/50;
			r2 = r1%50;

		d3 = r2/10;
			r3 = r2%10;

		d4 = r3/5;
			r4 = r3%5;

		d5 = r4/1;
			r5 = r4%1;

			if(d1==1){
				printf("C");	/*C*/
			}

		if(numd>=50 && numd<=89){
			if(d2==1){ 
				printf("L");	/* L.... a partir de 50 - 89 */
			} 
		}
      
    if(numd<=49){
     	if(d3==4){
				printf("XL");	/* XL.... a partir de 40 - 49*/

			}else if(d3<=3){
				for(cont=1; cont<= d3; cont++)
					printf("X");	/* X... a partir de 10 - 39 */
				}
		}

		if(numd>=50){
			if(d3==4){
				printf("XC");	/*XC.... a partir de 90 - 99*/

			}else if(d3<=3){
				for(cont=1; cont<= d3; cont++)
					printf("X");	/* LX.... a partir de 60 - 89 */
				}
		}

			if(r3==9){
				printf("IX");	/*Se for 9 = IX*/
			
			}else if(r3==4){
				printf("IV"); /*Se for 4 = IV*/

			}else	if(d4>0){ /* V */
				for(cont=1; cont<=d4; cont++)
					printf("V");
			}

			if(d5<=3){
				for(cont=1; cont<=d5; cont++)
					printf("I");
			}

		printf("\n");
	}
	
}