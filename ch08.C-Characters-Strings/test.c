#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(){
	char *str="aproveite agora";

	puts(strstr(str, "ora"));

	return 0x00;
}