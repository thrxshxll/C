#include <stdio.h>
#include <string.h>

void srch_subString(void){
	char input[120];
	char fill[240];
	char srch[24];
	char *pt=NULL;
	int line, i=0;

	
	scanf("%d", &line);

	fill[0]=0;
	while(0<line--){
		scanf(" %120[^\n]", input);
		strcat(fill, input);
	}
	// puts(fill);
	scanf("%s", srch);

	pt=strstr(fill, srch);
	while(1){
		if(!pt)
			break;
		else{
			// puts(pt);
			pt=strstr(pt+(++i), srch);
		}
	}
	printf("i: %d\n", i);
}

int main(){
	srch_subString();

	return 0x00;
}

void insertionSort(int *v, int size){
	int i,j,atual;
	for(i=1; i<size; i++){
		atual=v[i];
		for(j=i; (j>0) && (atual<v[j-1]); j--)
			v[j]=v[j-1];
		v[j]=atual;
	}
}