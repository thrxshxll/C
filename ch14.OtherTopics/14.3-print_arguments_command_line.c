#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int j;

	for(j=0; j<argc; j++)
		printf("%s\n", argv[j]);

	return 0x00;
}
