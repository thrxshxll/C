#include <stdio.h>

char *strcpy(char *s1, const char *s2);
char *strncpy(char *s1, const char *s2, size_t n);
char *strcat(char *s1, const char *s2);
char *strncat(char *s1, const char *s2, size_t n);

int main(void){
	char str1[20], *str2="0xchackstuff";

	strncpy(str1, str2, 5);
		puts(str1);

	strcat(str1, str2);
		puts(str1);

	strncat(str1, str2, 3);
		puts(str1);

	return 0x00;
}

char *strcpy(char *s1, const char *s2){
	int i=0;
	while(s2[i]!='\0'){
		s1[i]=s2[i]; i++;
	}
	s1[i]=0;
}

char *strncpy(char *s1, const char *s2, size_t n){
	int i=0;
	while(i<n){
		s1[i]=s2[i]; i++;
	}
}

char *strcat(char *s1, const char *s2){
	int i=0, ii=0;
	while(s1[i]!='\0') //length obtain
		i++;

	while(s2[ii]!='\0'){
		s1[i]=s2[ii];
		i++;
		ii++;
	}
	s1[i]=0;
}

char *strncat(char *s1, const char *s2, size_t n){
	int i=0, ii=0;
	while(s1[i]!='\0') //length obtain
		i++;

	while(ii<n){
		s1[i]=s2[ii];
		i++;
		ii++;
	}
	s1[i]=0;
}