#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));

	int i=0, c, tot=0, n[10];

	while(i<10)
		n[i++]=1+rand()%100;

	for(i=0; i<10; i++){
		printf("%d%n", n[i], &c);
		printf(" %d %d\n", c, tot+=c);
	}

	return 0x0;
}