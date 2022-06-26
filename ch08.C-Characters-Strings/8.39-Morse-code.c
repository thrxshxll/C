#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void ptTOmorse(char *str);
void morseCode(char *dest, char *src);

int main(void){
	char buffer[256];

	fgets(buffer, 256, stdin);
	buffer[strcspn(buffer, "\n")]=0;

	ptTOmorse(buffer);
	return 0x00;
}

void ptTOmorse(char *str){
	char *wordsF[32], ans[256]={0}, *pt;
	int countw=0;

	pt=strtok(str, " ");
	while(pt!=NULL){
		wordsF[countw++]=pt;
		pt=strtok(NULL, " ");
	}

	for(int i=0; i<countw; i++)
		morseCode(ans, wordsF[i]);
	puts(ans);
}

//codifica apenas uma palavra por vez
void morseCode(char *dest, char *src){
	char *alpha[26]={".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
	"-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
	char *digit[10]={"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

	while(*src!='\0'){

		if(isalpha(*src)){
			strcat(dest, alpha[*src-97]);
			// printf(": %s \n", alpha[*src-97]);
		}
		else if(isdigit(*src)){
			strcat(dest, digit[*src-48]);
			// printf(": %s \n", digit[*src-48]);
		}
		else
			dest[strlen(dest)]=*src;

		strcat(dest, " ");
		src++;
	}
	strcat(dest, "   ");
}