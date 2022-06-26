#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void srch_char(void){
	char txt[240], *pt=NULL, srch;
	int line, count;

	puts("line:");
	scanf("%d", &line);

	txt[0]=0;
	while(0<line--){
		scanf("%240s", &txt[strlen(txt)]);
		setbuf(stdin, NULL);;
	}
	puts(txt);
	puts("search character:");
		srch=getchar();

	pt=strchr(txt, srch);
	for(count=0; pt!=NULL; count++)
		pt=strchr(pt+1, srch);

	printf("quant: %d\n", count);
}

int main(){
	srch_char();
	return 0x00;
}