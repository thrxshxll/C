/*qualitypoints-5.30*/
#include <stdio.h>

int qualitypoints(int n);

int main(void)
{
	int media;

	printf("Type your media of 60 to 100: ");
		scanf("%d", &media);

	printf("Média: %d\n", qualitypoints(media));
}


int qualitypoints(int n)
{
	int quality;

	if(n>=90 && n<=100)
		quality = 4;
	if(n>=80 && n<=89)
		quality = 3;
	if(n>=70 && n<=79)
		quality = 2;
	if(n>=60 && n<=69)
		quality = 1;

	return quality;
}