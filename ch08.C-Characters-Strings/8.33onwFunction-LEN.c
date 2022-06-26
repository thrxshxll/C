#include <stdio.h>

unsigned int _strlen(const char *s);

int main(void){

	char *s="f";

	printf("length: %u\n", _strlen(s));

	return 0x00;
}

unsigned int _strlen(const char *s){
	unsigned int len=0;
	while(*s!='\0'){
		len++;
		s++;
	}return len;
}