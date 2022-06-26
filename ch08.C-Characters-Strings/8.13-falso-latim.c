#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void printLatinWord(char *lWord){
	printf("'%s%c%s' ", &lWord[1], lWord[0], "ei");
}

int break_buffer(char *ptWord){
	char *pt=NULL;

	pt=strtok(ptWord, " ");
	while(pt!=NULL){
		printLatinWord(pt);
		pt=strtok(NULL, " ");
	}putchar('\n');
	return 1;
}

int main(){
	char buffer[64]="";

	scanf("%64[^\n]", buffer);
	break_buffer(buffer);

	return 0x00;
}