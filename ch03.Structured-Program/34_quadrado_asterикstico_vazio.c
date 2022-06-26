/*3.34_quadrado_asterístico_vazio*/

#include <stdio.h>

int main(void)
{
	int i=0, j, x;


	while(i<=4){

		if(i==0 || i==4){ 
			x=0;
			while(x<=4){
				printf("*");		 //linha1 linha4
				x++;
			}
		
		}else{		// 1 < linha < 4

			j=1;
			if(j<=1){
				printf("*");
				j++;
			}

			if(j>1){
				while(j<5){
					printf(" ");
					j++;
				}
			}

			if(j==5){
				printf("*");
			}

		} //fim else

		printf("\n");		//broken line
		i++;
		
	}
}