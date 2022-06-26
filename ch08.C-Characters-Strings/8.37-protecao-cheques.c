#include <stdio.h>
#include <string.h>

void strFormated(char *str);

int main(void){
	char buffer[11];

	fgets(buffer, 11, stdin);
	buffer[strcspn(buffer, "\n")]=0;

	// puts(buffer);
	strFormated(buffer);

	return 0x00;
}

void strFormated(char *str){
	char tempPrint[9]="";
	int i=0, len=strlen(str);

	memset(tempPrint, '*', 9-len);

	printf("%s%s\n", tempPrint, str);
}
