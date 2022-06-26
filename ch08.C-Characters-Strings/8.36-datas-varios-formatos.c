#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dateconv(char *date);

int main(void){
	char buffer[11];

	printf("type [dd/mm/yyyy]: ");
	fgets(buffer, 11, stdin);

	dateconv(buffer);

	return 0x00;
}

void dateconv(char *date){
	const char *month[12]={"Janeiro", "Fevereiro", "Março", "Maio", "Abril", "Junho", "Julho",
	"Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	char *pt, *field[3];
	int i=0;

	pt=strtok(date, "/");
	while(pt!=NULL){
		field[i++]=pt;
		pt=strtok(NULL, "/");		
	}

	printf("\n%-3sde %s de%5s\n", field[0], month[atoi(field[1])-1], field[2]);
}