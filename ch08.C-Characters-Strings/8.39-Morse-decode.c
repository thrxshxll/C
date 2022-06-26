#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void morseTOpt(char *str);
void morseDecode(char *dest, char *src);

int main(void){
	char buffer[256];

	fgets(buffer, 256, stdin);
	buffer[strcspn(buffer, "\n")]=0;

	morseTOpt(buffer);

	return 0x00;
}

void morseTOpt(char *str){
	char *wordsF[32], ans[256]={0}, *pt;
	int countw=0;

	pt=strtok(str, " ");
	while(pt!=NULL){
		wordsF[countw++]=pt;
		pt=strtok(NULL, " ");
	}

	for(int i=0; i<countw; i++){
		morseDecode(ans, wordsF[i]);
	}
	puts(ans);
}

//decodifica apenas uma palavra por vez
void morseDecode(char *dest, char *src){
	char *alpha[26]={".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
	"-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
	char *digit[10]={"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
	char aux;
	int i=0;

	while(i<26){
		if(!strcmp(alpha[i], src)){
			dest[strlen(dest)]=i+97;
			break;
		}i++;
	}
	if(i>25){
		i=0;
		while(i<10){
			if(!strcmp(digit[i], src)){
				dest[strlen(dest)]=i+48;
				break;
			}i++;
		}
	}
	strcat(dest, " ");
}