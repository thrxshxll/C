#include <stdio.h>

int main(void){
	int size;
	char str[32];

	scanf("%s%n", str, &size);

	printf("%*s - %d\n", 2*size, str, size);


	return 0x00;
}