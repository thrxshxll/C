#include <stdio.h>
#include <stdlib.h>

void space_beteew_char(char *filename);

int main(int argc, char *argv[]){

	space_beteew_char(argv[1]);

	return 0x00;
}

void space_beteew_char(char *filename){
	FILE *fptr=NULL, *ftmp=NULL;
	char c;

	if((fptr=fopen(filename, "r+"))!=NULL){

		if((ftmp=tmpfile())!=NULL){
			printf("original file:\n\n");

			while((c=fgetc(fptr))!=EOF){
				putchar(c);
				fputc(c, ftmp);
				fputc(' ', ftmp);
			}

			printf("\n\nedited file:\n\n");
			rewind(fptr);
			rewind(ftmp);
			while((c=fgetc(ftmp))!=EOF){
				putchar(c);
				fputc(c, fptr);
			}fputc('\n', fptr);
			
			fclose(fptr);
			fclose(ftmp);

		}else
			puts("tmpfile() failed!");

	}else{
		puts("fopen() failed!");
	}
}