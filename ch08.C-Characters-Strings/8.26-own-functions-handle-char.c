#include <stdio.h>
#include <ctype.h>

int isDigit(int c);
int isAlpha(int c);
int isAlnum(int c);
int isXdigit(int c);
int isLower(int c);
int isUpper(int c);
int toLower(int c);
int toUpper(int c);
int isSpace(int c);
int isCntrl(int c);
int isPunct(int c);
int isPrint(int c);
int isGraph(int c);

int main(void){
	char c=getchar();

	printf("isDigit(%c) cod: %d\n", c, isDigit(c));
	printf("isAlpha(%c) cod: %d\n", c, isAlpha(c));
	printf("isAlnum(%c) cod: %d\n", c, isAlnum(c));
	printf("isXdigit(%c) cod: %d\n", c, isXdigit(c));
	printf("isLower(%c) cod: %d\n", c, isLower(c));
	printf("isUpper(%c) cod: %d\n", c, isUpper(c));
	printf("toLower(%c) : %c\n", c, toLower(c));
	printf("toUpper(%c) : %c\n", c, toUpper(c));
	printf("isSpace(%c) cod: %d\n", c, isSpace(c));
	printf("isCntrl(%c) cod: %d\n", c, isCntrl(c));
	printf("isPunct(%c) cod: %d\n", c, isPunct(c));
	printf("isPrint(%c) cod: %d\n", c, isPrint(c));
	printf("isGraph(%c) cod: %d\n", c, isGraph(c));

	return 0x00;
}

int isDigit(int c){
	if(47<c && c<58)
		return 1;
	else
		return 0;
}

int isAlpha(int c){
	switch(c){
		case 65 ... 90:
		case 97 ... 122:
			return 1;

		default:
			return 0;
	}
}

int isAlnum(int c){
	switch(c){
		case 48 ... 57:
		case 65 ... 90:
		case 97 ... 122:
			return 1;

		default:
			return 0;
	}
}

int isXdigit(int c){
	switch(c){
		case 48 ... 57:
		case 65 ... 70:
		case 97 ... 102:
			return 1;
	}
	return 0;
}

int isLower(int c){
	switch(c){
		case 97 ... 122:
			return 1;

		default:
			return 0;
	}
}

int isUpper(int c){
	switch(c){
		case 65 ... 90:
			return 1;

		default:
			return 0;
	}
}

int toLower(int c){
	switch(c)
		case 65 ... 90:
			return c+32;

	return 0;
}

int toUpper(int c){
	switch(c)
		case 97 ... 122:
			return c-32;
	return 0;
}

int isSpace(int c){
	switch(c){
		case 9 ... 13:
		case 32:
			return 1;
	}
 return 0;
}

int isCntrl(int c){
	switch(c)
		case 7 ... 13:
			return 1;

 return 0;
}

int isPunct(int c){
	switch(c){
		case 33 ... 47:
		case 58 ... 64:
		case 91 ... 96:
		case 123 ... 126:
		return 1;
	}
	return 0;
}

int isPrint(int c){
	switch(c){
		case 'A' ... 'Z':
		case 'a' ... 'z':
		case ' ':
			return 1;
	}
}
int isGraph(int c){
	switch(c){
		case 'A' ... 'Z':
		case 'a' ... 'z':
			return 1;
	}
	return 0;
}