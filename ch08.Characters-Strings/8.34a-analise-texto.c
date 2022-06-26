#include <stdio.h>
#include <string.h>

void letterCount(const char *text);

int main(void){
	char buffer[1024], c;
	int i=0;

	while((c=getchar())!=EOF)
		buffer[i++]=c;
		buffer[i-1]=0;
	letterCount(buffer);

	return 0x00;
}

void letterCount(const char *text){
	int alph[26]={0}, i;

	while(*text!='\0'){
		if(*text<=90)
			alph[(*(text))-65]++;
		else
			alph[(*(text))-97]++;
		text++;
	}

	for(i=0; i<26; i++)
		printf("%c: %d\n", i+97, alph[i]);
}