#include <stdio.h>
#include <string.h>

int _strcmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

int main(void){

	printf(": %d\n", _strcmp("ABCD", "abc"));

	return 0x00;
}

int _strcmp(const char *s1, const char *s2){
	int r=0;

	for(int i=0; i<strlen(s1); i++){
			if(*(s1+i) != *(s2+i))
				(*(s1+i)<*(s2+i)) ? r--:r++;
	}return r;
}

int _strncmp(const char *s1, const char *s2, size_t n){
	int r=0;

	for(int i=0; i<n; i++){
		if(*(s1+i)!=*(s2+i))
			(*(s1+i)<*(s2+i)) ? r--:r++;
	}return r;
}