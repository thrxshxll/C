//6.37_valor_mínimo_array

#include <stdio.h>

int recurMinimum(int n[], int size);

int main(void){

	int list[]={4,3,6,8,11,23,12,9,99,10};
	int length;

	length=sizeof(list)/sizeof(list[0])-1;

	printf("Minimum: %d\n", recurMinimum(list, length));

	return 0;
}


int recurMinimum(int n[], int size){

	//como não consegui fazer isso (static int minimum=n[size])
	//pensei em colocar um valor alto para servir de referência de um mínimo
	static int minimum=1000; 

	if(size>=0){
	
	 if(n[size]<minimum) minimum=n[size];

			recurMinimum(n, size-1);
	}else
		return minimum;

}