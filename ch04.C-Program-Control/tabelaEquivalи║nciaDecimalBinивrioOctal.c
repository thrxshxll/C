/*tabela de equivalência decimal, binário, octal, hexadecimal*/
#include <stdio.h>

int main(void)
{

	int dec, cont;

	for(dec = 1; dec <= 256; dec++){

		printf("%d(d)\t\t", dec);


/*Binário*/
		int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
		int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0;

		if(dec <= 256 || dec >= 256){

			d1 = dec / 256;
				r1 = dec % 256;

			d2 = r1 / 128;
				r2 = r1 % 128;

			d3 = r2 / 64;
				r3 = r2 % 64;

			d4 = r3 / 32;
				r4 = r3 % 32;

			d5 = r4 / 16;
				r5 = r4 % 16;

			d6 = r5 / 8;
				r6 = r5 % 8;

			d7 = r6 / 4;
				r7 = r6 % 4;

			d8 = r7 / 2;
				r8 = r7 % 2;

			d9 = r8 / 1;
				r9 = r8 % 1;
		} 

		if(dec >= 256){
			printf("%d%d%d%d%d%d%d%d%d(b)\t", d1,d2,d3,d4,d5,d6,d7,d8,d9);
		}else if(dec >= 128){
			printf("%d%d%d%d%d%d%d%d(b)\t", d2,d3,d4,d5,d6,d7,d8,d9);
		}else if(dec >= 64){
			printf("%d%d%d%d%d%d%d(b)\t", d3,d4,d5,d6,d7,d8,d9);
		}else if(dec >= 32){
			printf("%d%d%d%d%d%d(b)\t", d4,d5,d6,d7,d8,d9);
		}else if(dec >= 16){
			printf("%d%d%d%d%d(b)\t", d5,d6,d7,d8,d9);
		}else if(dec >= 8){
			printf("%d%d%d%d(b)\t\t", d6,d7,d8,d9);
		}else if(dec >= 4){
			printf("%d%d%d(b)\t\t", d7,d8,d9);
		}else if(dec >= 2){
			printf("%d%d(b)\t\t", d8,d9);
		}else if(dec >= 1){
			printf("%d(b)\t\t", d9);
		
		}/*fimBinário*/


/*octal*/
		int o1=0,o2=0,o3=0;
		int t1=0,t2=0,t3=0;
		
		if(dec <= 256 || dec >= 256){

			o1 = dec / 64;
				t1 = dec % 64;

			o2 = t1 / 8;
				t2 = t1 % 8;

			o3 = t2 / 1;
				t3 = t2 % 1;	
		}

		if(dec >= 64){
			printf("%d%d%d(oc)\t\t", o1, o2, o3);
		}else if(dec >= 8){
			printf("%d%d(oc)\t\t", o2, o3);
		}else if(dec >= 1){
			printf("%d(oc)\t\t", o3);
		
		}/*fimOctal*/


/*hexadecimal*/
		int h1=0,h2=0,h3=0;
		int p1=0,p2=0,p3=0;
		char c1, c2, c3;

		if(dec <= 256 || dec >= 256){

			h1 = dec / 256;
				p1 = dec % 256;

				if(dec >= 256){ /*Primerio dígito*/
					if(h1 == 10){
						h1 = 'A';
						printf("%c", h1);
					}else if(h1 == 11){
						h1 = 'B';
						printf("%c", h1);
					}else if(h1 == 12){
						h1 = 'C';
						printf("%c", h1);
					}else if(h1 == 13){
						h1 = 'D';
						printf("%c", h1);
					}else if(h1 == 14){
						h1 = 'E';
						printf("%c", h1);
					}else if(h1 == 15){
						h1 = 'F';
						printf("%c", h1);
					}else
						printf("%d", h1);
				}

			h2 = p1 / 16;
				p2 = p1 % 16;

				if(dec >= 16){ /*segundo dígito*/
					if(h2 == 10){
						h2 = 'A';
						printf("%c", h2);
					}else if(h2 == 11){
						h2 = 'B';
						printf("%c", h2);
					}else if(h2 == 12){
						h2 = 'C';
						printf("%c", h2);
					}else if(h2 == 13){
						h2 = 'D';
						printf("%c", h2);
					}else if(h2 == 14){
						h2 = 'E';
						printf("%c", h2);
					}else if(h2 == 15){
						h2 = 'F';
						printf("%c", h2);
					}else
						printf("%d", h2);
				}

			h3 = p2 / 1;				
				p3 = p2 % 1;

				if(dec >= 1){	/*terceiro dígito*/
					if(h3 == 10){
						h3 = 'A';
						printf("%c(h)\n", h3);
					}else if(h3 == 11){
						h3 = 'B';
						printf("%c(h)\n", h3);
					}else if(h3 == 12){
						h3 = 'C';
						printf("%c(h)\n", h3);
					}else if(h3 == 13){
						h3 = 'D';
						printf("%c(h)\n", h3);
					}else if(h3 == 14){
						h3 = 'E';
						printf("%c(h)\n", h3);
					}else if(h3 == 15){
						h3 = 'F';
						printf("%c(h)\n", h3);
					}else
						printf("%d(h)\n", h3);
				}

		}/*fimHexadecimal*/

				for(cont = 1; cont <= 10000000;)
					cont++;
	}//fim do Contador

}