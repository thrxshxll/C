/*crivo_Erastóstenes*/
#include <stdio.h>
#define SIZE 1001
int main(void){

	int v[SIZE]={0};
	int x;

	for(x=2; x<SIZE; x++) v[x]=1;


	for(x=4; x<SIZE; x++){

		if(x%2==0)
			v[x]=0;

		if(x%3==0)
			v[x]=0;
	}

	for(x=1; x<SIZE; x++){

		if(v[x]!=0) 
			printf("%3d ", x);
	}
	
	printf("\n");

	return 0;
}