#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

	char s1[ 50 ] = "jack", s2[ 50 ] = " jill", s3[ 50 ], *sptr;

	printf("%s\n", strcat(strcat(strcpy(s3, s1), " and "), s2));

	return 0x00;
}