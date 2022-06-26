#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void alphabet_total(void){
	char alpha[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *pt=NULL, txt[256], c;
	int count_char[26]={0}, i;

	i=0;
	while((c=getchar())!=EOF)
		txt[i++]=c;
		txt[i-1]=0; //elimina a último caractere de lixo do teclado

	i=0;
	while(i<52){
		pt=strchr(txt, alpha[i]);
		while(pt!=NULL){
			(islower(*pt)) ? count_char[(*pt)-97]++ : count_char[(*pt)-65]++;
			pt=strchr(pt+1, alpha[i]);
		}i++;
	}
	
	for(i=0; i<26; i++)
		printf("%3c", alpha[i]);
		putchar('\n');
	for(i=26; i<52; i++)
		printf("%3c", alpha[i]);
		putchar('\n');

	for(i=0; i<26; i++)
		printf("%3d", count_char[i]);
	putchar('\n');
}

int main(void){
	alphabet_total();
	return 0x00;
}
// abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ