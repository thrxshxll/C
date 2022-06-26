#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

	char key_char=getchar();

	printf("'%c' %s%s\n", key_char, isdigit(key_char) ? "é" : "não é", " digit");

	printf("'%c' %s%s\n", key_char, isalpha(key_char) ? "é" : "não é", " alpha");

	printf("'%c' %s%s\n", key_char, isalnum(key_char) ? "é" : "não é", " alnum");

	printf("'%c' %s%s\n", key_char, isxdigit(key_char) ? "é" : "não é", " xdigit");

	printf("'%c' %s%s\n", key_char, islower(key_char) ? "é" : "não é", " lower");

	printf("'%c' %s%s\n", key_char, isupper(key_char) ? "é" : "não é", " upper");

	printf("'%c' %s%s\n", key_char, isspace(key_char) ? "é" : "não é", " space");

	printf("'%c' %s%s\n", key_char, iscntrl(key_char) ? "é" : "não é", " cntrl");

	printf("'%c' %s%s\n", key_char, ispunct(key_char) ? "é" : "não é", " punct");

	printf("'%c' %s%s\n", key_char, isprint(key_char) ? "é" : "não é", " print");

	printf("'%c' %s%s\n", key_char, isgraph(key_char) ? "é" : "não é", " graph");

	return 0x00;
}