#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_span(void);
int check_keyWords(char *sentence);

int main(void){
	check_span();
	return 0x00;
}

int check_span(void){
	char input[1024];

	fgets(input, 1024, stdin);
	check_keyWords(input);
}

int check_keyWords(char *sentence){
	char *pt, keyword[]={"promocao desconto baixe aproveite selecionado ganhou "
	"repasse emagrecedor megapromocao"};
	int count=0;

	pt=strtok(sentence, " ,.:;!");
	while(pt!=NULL){

		if(strstr(keyword, pt)!=NULL)
			puts(pt);

		pt=strtok(NULL, " ,.:;!");
	}
}