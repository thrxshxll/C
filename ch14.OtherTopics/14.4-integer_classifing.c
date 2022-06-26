#include <stdio.h>
#include <string.h>

#define CRES(a, b) (a<b) ? 1: 0
#define DECR(a, b) (a>b) ? 1: 0

int cres(int a, int b);
int decr(int a, int b);

void insertionSort(int *v, int n, int (*sort)(int a, int b));
void print(int *v, int n);

int main(int argc, char *argv[]){
	int v[6]={2,3,4,5,6,7};

	print(v, 6);

	if(!strcmp(argv[1],"-c"))
		insertionSort(v, 6, cres);
	else if(!strcmp(argv[1],"-d"))
		insertionSort(v, 6, decr);

	print(v, 6);

	return 0x00;
}

void insertionSort(int *v, int n, int (*sort)(int a, int b)){
	int i, j, atual;

	for(i=1; i<n; i++){
		atual=v[i];
		for(j=i; (j>0)&&((*sort)(atual, v[j-1])); j--)
			v[j]=v[j-1];
		v[j]=atual;
	}
}

void print(int *v, int n){
	for(int j=0; j<n; j++)
		printf("%d ", v[j]);
	putchar('\n');
}

int cres(int a, int b){
	return a<b;
}

int decr(int a, int b){
	return a>b;
}