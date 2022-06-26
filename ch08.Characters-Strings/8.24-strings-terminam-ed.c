#include <stdio.h>
#include <string.h>

void print_last_ed(char *str){
	char *pt=NULL;

	pt=strtok(str, " ");
	while(pt!=NULL){
		if(!strcmp(&pt[strlen(pt)-2], "ed")) // if are equais
			puts(pt);
		pt=strtok(NULL, " ");
	}
}

int main(void){
	char str[256];

	fgets(str, 256, stdin);
	str[strlen(str)-1]=0;
	print_last_ed(str);

	return 0x00;
}