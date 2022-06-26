#include <stdio.h>
#include <stdlib.h>

void mov_char_rev(char *input, char *output);

int main(int argc, char **argv){
	
	mov_char_rev(argv[1], argv[2]);

	return 0x00;
}

void mov_char_rev(char *input, char *output){
	FILE *fptIn=NULL, *fptOut=NULL;
	int qty=0, i=0;
	char c, *text=NULL;

	if((fptIn=fopen(input, "r"))!=NULL){
		if((fptOut=fopen(output, "w"))!=NULL){

			//determine amount char exist in fileinput
			while((c=getc(fptIn))!=EOF)
				qty++;

			//alloc char array with right amout to store all char in fileinput
			text=calloc(qty, sizeof(char));

			rewind(fptIn);
			while((c=getc(fptIn))!=EOF){
				text[i++]=c;
			}
			
			--i;
			while(i>0)
				fputc(text[--i], fptOut);

			fclose(fptIn);
			fclose(fptOut);

		}else
			puts("fopen() failed!");
	}else
		puts("fopen() failed!");
}