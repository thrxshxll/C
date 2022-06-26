#include <stdio.h>
#include <stdlib.h>

void print(int*, int);

int main(void){
	int i, qty, element, *ptV=NULL;

	printf("array size: ");
	scanf("%d", &qty);

	ptV=calloc(qty,sizeof(int));

	if(ptV==NULL)
		exit(EXIT_FAILURE);

	for(i=0; i<qty; i++){
		printf("integer to array: (%d/%d): ", i+1, qty);
		scanf("%d", &ptV[i]);
	}

	print(ptV, qty);

	ptV=realloc(ptV, 2*qty*sizeof(int));
	while(i<(2*qty)){
		
		printf("integer to array: (%d/%d): ", i+1, 2*qty);
		scanf("%d", &ptV[i++]);		
	}
	print(ptV, 2*qty);

	return 0x00;
}


void print(int *v, int size){
	for(int i=0; i<size; i++)
		printf("%d ", v[i]);
	putchar('\n');
}