#include <stdio.h>
#include <string.h>

int count_word(char *v){
	char *pt=NULL;
	int count=0;

	pt=strtok(v, " \n");
	while(pt!=NULL){
		count++;
		pt=strtok(NULL, " \n");
	}return count;
}

int main(void){
	char txt[256]="", c;
	int i;

	for(i=0; (c=getchar())!=EOF; i++)
		txt[i]=c;
		txt[i-1]=0; //apaga o lixo que o EOF deixa no último caractere

	printf("word quantity: %d\n", count_word(txt));

	return 0x00;
}