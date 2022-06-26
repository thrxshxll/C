#include <stdio.h>
#include <string.h>
#include <ctype.h>

void diffwords(char *text);
void freqword(char *wordL[50], int *wordF, char *word);
void isUpper(char *s);
void insertionSort(char *wordL[50], int *wordF, int n);

int main(void){
	char buffer[1024], c;
	int i=0;

	while((c=getchar())!=EOF)
		buffer[i++]=(c!='\n') ? c:' ';
		buffer[i]=0;

	diffwords(buffer);

	return 0x00;
}

void diffwords(char *text){
	char *auxp=NULL, *wordList[50]={NULL};
	int i=0, len, wordFreq[50]={0};

	auxp=strtok(text, ".:,;! ");
	while(auxp!=NULL){
		freqword(wordList, wordFreq, auxp);
		auxp=strtok(NULL, ".:,;! ");
	}

	for(i=0; wordList[i]!=NULL; i++) // determine how much word no repeated there is

	insertionSort(wordList, wordFreq, i);

	for(i=0; wordList[i]!=NULL; i++)
		printf("%d\t%s\n", wordFreq[i], wordList[i]);
}

void freqword(char *wordL[50], int *wordF, char *word){
	isUpper(word);
	if(wordL[0]==NULL){
		wordL[0]=word;
		wordF[0]++;
	}
	else{
		int i=0;
		while(wordL[i]!=NULL){
			if(!strcmp(wordL[i], word)){ //equal strings
				wordF[i]++;
				return;
			}i++;
		}
		wordL[i]=word;
		wordF[i]++;
	}
}

/**
 * turn all UpCase in LowCase
 * */
void isUpper(char *s){
	while(*s!='\0'){
		switch(*s){
			case 65 ... 90:
				*s=tolower(*s);
		}s++;
	}
}

void insertionSort(char *wordL[50], int *wordF, int n){
	int i, j, atualf;
	char *atualw=NULL;

	for(i=0; i<n; i++){
		atualw=wordL[i];
		atualf=wordF[i];
		for(j=i; (j>0)&&(strcmp(atualw, wordL[j-1])<0); j--){
			wordL[j]=wordL[j-1];
			wordF[j]=wordF[j-1];
		}
		wordL[j]=atualw;
		wordF[j]=atualf;
	}
}

/*
Ser ou não ser: eis a questão:
Será mais nobre em nosso espírito SOFRER ser. sofrer
*/