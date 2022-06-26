#include <stdio.h>
#include <string.h>

void lineDiv(char *buffer);
void wordDiv(char *line);
void justf(char *pt[128]);

int main(void){
	char buffer[2048], c;
	int i=0;

	while((c=getchar())!=EOF)
		buffer[i++]=c;
		buffer[i]=0;

	lineDiv(buffer);

	return 0x00;
}

//coloca todas as linhas em um vertor de ponteiro
void lineDiv(char *buffer){
	char *lines[128], *cpt;
	int i=0;

	cpt=strtok(buffer, "\n");
	while(cpt!=NULL){
		lines[i++]=cpt;
		cpt=strtok(NULL, "\n");
	}
	justf(lines);
}

void justf(char *pt[128]){
	int i=0;
	while(pt[i]!=NULL)
		wordDiv(pt[i++]);
}

//separa em tokens as palavras de uma linha; justifica a linha passada
void wordDiv(char *line){
	char temp[66]="", *words[130]={NULL}, *cpt=NULL;
	int wordlen=0, cword=0, cspace, t, i, j;

	wordlen=strlen(line); //tamanho total da linha

	//put words in pointer vector
	cpt=strtok(line, " ");
	while(cpt!=NULL){
		words[cword++]=cpt;
		cpt=strtok(NULL, " ");
	}

	//quantidade de spaces que ficarão entre as palavras da linha
	cspace=(65-wordlen)/(cword-1)
	if(cspace<1) cspace=1;

	// printf("wordlen: %d\tcword: %d\tcspace: %d\n", wordlen, cword, cspace);

	//margem esquerda
	printf("%6s%-6s", "", "|");

	// imprime até a penúltima palavra
	for(i=0; i<cword-1; i++){
		strcat(temp, words[i]);

		if(i==cword-2) break; //quebra na penúltima palavra

		//coloca os espaços entre as words
		for(j=strlen(temp), wordlen=j; j<wordlen+cspace+1; j++)
			temp[j]=' ';
	}
	
/*	t=strlen(temp);
	cspace=65-t-strlen(words[i+1]);
	for(j=0; j<cspace; j++, t++)
		temp[t]=' ';
	strcat(temp, words[i+1]);*/

	temp[65]=0;

	//impressão da última palavra, pois coloca os espaços necessários para 65 char
	// puts(temp);
 	printf("%s%*s%6s\n", temp, 65-(int)strlen(temp), words[i+1], "|");
}