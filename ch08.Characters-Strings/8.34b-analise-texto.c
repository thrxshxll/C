#include <stdio.h>
#include <string.h>

void wordCount(char *text);

int main(void){
	char buffer[1024], c;
	int i=0;

	while((c=getchar())!=EOF)
		buffer[i++]= (c!='\n') ? c : ' ';
		buffer[i-1]=0;

	wordCount(buffer);

	return 0x00;
}

void wordCount(char *text){
	char *auxp=NULL;
	int i, wdsize[10]={0};

	auxp=strtok(text, ",.-! ");
	while(auxp!=NULL){
		wdsize[strlen(auxp)]++;
		auxp=strtok(NULL, ",.-! ");
	}

	printf("size\tfrequency\n");
	for(i=0; i<10; i++)
		printf("%4d\t%9d\n", i, wdsize[i]);
}