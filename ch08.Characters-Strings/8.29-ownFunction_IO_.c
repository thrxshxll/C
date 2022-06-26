#include <stdio.h>

int _getchar(void);
int _putchar(int c);
int _puts(const char* str);


int main(void){
	int a;
	a=_puts("h");

	return a;
}

int _getchar(void){
	char c;
	scanf("%c", &c);
	return c;
}

int _putchar(int c){
	printf("%c", c);
	return c;
}

int _puts(const char* str){
	return (printf("%s\n", str)!=0)? 1:0;
}