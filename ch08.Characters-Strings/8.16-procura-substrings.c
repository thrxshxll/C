#include <stdio.h>
#include <string.h>

void subString(char *str, char* srch_w){
	char *pt=NULL;

	pt=strstr(str, srch_w);
	puts(pt);

	pt=strstr(pt+1, srch_w);
	puts(pt);
}

int main(){
	char buffer[64], srch_word[10];

	puts("string:");
	fgets(buffer, sizeof(buffer), stdin);
	puts("search:");
	fgets(srch_word, sizeof(srch_word), stdin);
	
	buffer[strcspn(buffer, "\n")]=0;
	srch_word[strcspn(srch_word, "\n")]=0;

	subString(buffer, srch_word);
	return 0x00;
}